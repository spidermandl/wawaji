package com.wawaji.wxapi;

import android.content.Intent;
import android.os.Bundle;
import com.tencent.mm.opensdk.constants.ConstantsAPI;
import com.tencent.mm.opensdk.modelbase.BaseReq;
import com.tencent.mm.opensdk.modelbase.BaseResp;
import com.tencent.mm.opensdk.modelmsg.SendAuth;
import com.tencent.mm.opensdk.modelmsg.ShowMessageFromWX;
import com.tencent.mm.opensdk.modelmsg.WXAppExtendObject;
import com.tencent.mm.opensdk.modelmsg.WXMediaMessage;
import com.tencent.mm.opensdk.openapi.IWXAPI;
import com.tencent.mm.opensdk.openapi.IWXAPIEventHandler;
import com.tencent.mm.opensdk.openapi.WXAPIFactory;
import com.unity3d.player.UnityPlayer;
import com.wawaji.Constants;
import com.wawaji.UnityPlayerActivity;
import com.wawaji.utils.Util;

/**
 * Created by Desmond on 19/09/2017.
 */
public class WXEntryActivity extends UnityPlayerActivity implements IWXAPIEventHandler{


    private IWXAPI m_wxApi;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);

        m_wxApi = WXAPIFactory.createWXAPI(this, Constants.AppID,false);
        m_wxApi.handleIntent(getIntent(),this);
        registerWXApi();
    }

    @Override
    protected void onNewIntent(Intent intent) {
        super.onNewIntent(intent);

        setIntent(intent);
        m_wxApi.handleIntent(intent, this);
    }

    public void registerWXApi(){
        if(m_wxApi!=null){
            m_wxApi.registerApp(Constants.AppID);
        }
    }

    public void requestLogin(){

        final SendAuth.Req req = new SendAuth.Req();
        // 应用的作用域，获取个人信息
        req.scope = "snsapi_userinfo";
        /**
         * 用于保持请求和回调的状态，授权请求后原样带回给第三方
         * 为了防止csrf攻击（跨站请求伪造攻击），后期改为随机数加session来校验
         */
        req.state = "app_wechat";
        m_wxApi.sendReq(req);

    }

    // 微信发送请求到第三方应用时，会回调到该方法
    @Override
    public void onReq(BaseReq baseReq) {
        switch (baseReq.getType()) {
            case ConstantsAPI.COMMAND_GETMESSAGE_FROM_WX:
                //goToGetMsg();
                break;
            case ConstantsAPI.COMMAND_SHOWMESSAGE_FROM_WX:
                goToShowMsg((ShowMessageFromWX.Req) baseReq);
                break;
            default:
                break;
        }
    }
    // 微信发送请求到第三方应用时，会回调到该方法
    @Override
    public void onResp(BaseResp baseResp) {
        switch (baseResp.errCode) {
            // 发送成功
            case BaseResp.ErrCode.ERR_OK:
                if(baseResp instanceof SendAuth.Resp){
                    // 获取code
                    String code = ((SendAuth.Resp)baseResp).code;
                    sendToUnityWithLoginCode(code);
                }
                break;
        }
    }

    private void goToGetMsg() {

    }

    private void goToShowMsg(ShowMessageFromWX.Req showReq) {
        WXMediaMessage wxMsg = showReq.message;
        WXAppExtendObject obj = (WXAppExtendObject) wxMsg.mediaObject;

        StringBuffer msg = new StringBuffer(); // 组织一个待显示的消息内容
        msg.append("description: ");
        msg.append(wxMsg.description);
        msg.append("\n");
        msg.append("extInfo: ");
        msg.append(obj.extInfo);
        msg.append("\n");
        msg.append("filePath: ");
        msg.append(obj.filePath);

    }

    public String uuid(){
        return Util.uuid(this);
    }

    public void sendToUnityWithLoginCode(String code)
    {
        UnityPlayer.UnitySendMessage("UIEnterMain", "RespondWechatLogin",code);
    }
}

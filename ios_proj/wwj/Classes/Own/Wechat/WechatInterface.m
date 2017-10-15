//
//  WechatInterface.m
//  Unity-iPhone
//
//  Created by Desmond Duan on 13/10/2017.
//
//

#import <Foundation/Foundation.h>
#import "WXApiManager.h"
#import "WechatInterface.h"
#import "InteractiveToUnity.h"
#import "WXApi.h"
#import "Constant.h"

@implementation WechatInterface

+ (instancetype)sharedSDK{
    static dispatch_once_t onceToken;
    static WechatInterface *instance;
    dispatch_once(&onceToken, ^{
        instance = [[WechatInterface alloc] init];
        [WXApiManager sharedManager].delegate = instance;
        
        //向微信注册
        [WXApi registerApp:IOS_APP_ID enableMTA:YES];
        
        //向微信注册支持的文件类型
        UInt64 typeFlag = MMAPP_SUPPORT_TEXT | MMAPP_SUPPORT_PICTURE | MMAPP_SUPPORT_LOCATION | MMAPP_SUPPORT_VIDEO |MMAPP_SUPPORT_AUDIO | MMAPP_SUPPORT_WEBPAGE | MMAPP_SUPPORT_DOC | MMAPP_SUPPORT_DOCX | MMAPP_SUPPORT_PPT | MMAPP_SUPPORT_PPTX | MMAPP_SUPPORT_XLS | MMAPP_SUPPORT_XLSX | MMAPP_SUPPORT_PDF;
        
        [WXApi registerAppSupportContentFlag:typeFlag];
        
    });
    return instance;
}

-(void)login{
    SendAuthReq* req = [[SendAuthReq alloc] init];
    req.scope = @"snsapi_userinfo" ;// @"post_timeline,sns"
    req.state = @"123" ;
    //[WXApi sendReq:req];
    [WXApi sendAuthReq:req
               viewController: UnityGetGLViewController()
                     delegate:[WXApiManager sharedManager]
     ];
}

-(BOOL) handleURL:(NSURL *)url{
    return [WXApi handleOpenURL:url delegate:[WXApiManager sharedManager]];
}

- (void)managerDidRecvAuthResponse:(SendAuthResp *)response{
    
    [InteractiveToUnity throwWXid:response.code];
}
@end

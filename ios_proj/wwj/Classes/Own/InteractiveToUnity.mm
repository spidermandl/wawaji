//
//  InteractiveToUnity.m
//  Unity-iPhone
//
//  Created by Desmond Duan on 12/10/2017.
//
//  Classes/Prefix.pch

#import <Foundation/Foundation.h>
#import "InteractiveToUnity.h"
#import "UnityInterface.h"
#import "KeyChainStore.h"
#import "WechatInterface.h"

@implementation InteractiveToUnity

+ (void) getIOSUUID {

    
    NSString * strUUID = (NSString *)[KeyChainStore load:@"com.company.app.usernamepassword"];
    
    //首次执行该方法时，uuid为空
    if ([strUUID isEqualToString:@""] || !strUUID)
    {
        //生成一个uuid的方法
        CFUUIDRef uuidRef = CFUUIDCreate(kCFAllocatorDefault);
    
        strUUID = (NSString *)CFBridgingRelease(CFUUIDCreateString (kCFAllocatorDefault,uuidRef));
    
        //将该uuid保存到keychain
        [KeyChainStore save:KEY_USERNAME_PASSWORD data:strUUID];
            
    }
    
    const char* gameObject = "UIEnterMain";
    const char* functionname = "RespondIOSUUID";
    UnitySendMessage(gameObject, functionname, [strUUID UTF8String]);
};

+ (void) throwWXid:(NSString *)wxid{
    const char* gameObject = "UIEnterMain";
    const char* functionname = "RespondWechatLogin";
    if(wxid==nil)
        return;
    UnitySendMessage(gameObject, functionname, [wxid UTF8String]);
}

@end

extern "C" void getIOSUUID(){
    [InteractiveToUnity getIOSUUID];
}

extern "C" void startIOSLogin(){
    
    //[[WechatInterface sharedSDK] login];
    SendAuthReq* req = [[SendAuthReq alloc] init];
    req.scope = @"snsapi_userinfo" ;// @"post_timeline,sns"
    req.state = @"123" ;
    //[WXApi sendReq:req];
    [WXApi sendAuthReq:req
        viewController: UnityGetGLViewController()
              delegate:[WXApiManager sharedManager]
     ];
}

//
//  SDKInterface.h
//  Unity-iPhone
//
//  Created by Desmond Duan on 13/10/2017.
//
//

#ifndef SDKInterface_h
#define SDKInterface_h

@protocol SDKInterface<NSObject>

+ (instancetype)sharedSDK;

@required
-(void) login;
-(BOOL) handleURL:(NSURL *) url;

@end

#endif /* SDKInterface_h */


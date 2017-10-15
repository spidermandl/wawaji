//
//  KeyChainStore.h
//  Unity-iPhone
//
//  Created by Desmond Duan on 12/10/2017.
//
//

#ifndef KeyChainStore_h
#define KeyChainStore_h


@interface KeyChainStore : NSObject

+ (void)save:(NSString *)service data:(id)data;
+ (id)load:(NSString *)service;
+ (void)deleteKeyData:(NSString *)service;

@end

#endif /* KeyChainStore_h */

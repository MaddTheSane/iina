//
//  ObjcUtils.h
//  iina
//
//  Created by lhc on 16/1/2017.
//  Copyright © 2017 lhc. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface ObjcUtils : NSObject

+ (BOOL)catchException:(void(NS_NOESCAPE ^)(void))tryBlock error:(__autoreleasing NSError *_Nonnull*_Nullable)error;
+ (BOOL)silenced:(void(NS_NOESCAPE ^)(void))tryBlock;

+ (NSUInteger)levDistance:(NSString *)str0 and:(NSString *)str1;

@end

NS_ASSUME_NONNULL_END

//
//  NSBundle+IJSUBundle.h
//  IJSImageEditSDK
//
//  Created by shan on 2017/7/12.
//  Copyright © 2017年 shanshen. All rights reserved.
//

#import <Foundation/Foundation.h>
/*
 *  获取资源类
 */
@interface NSBundle (IJSUBundle)

/**
 *  通过key获取国际化字符串
 *
 *  @param key         key
 *  @return 国际化字符串
 */
+ (NSString *)localizedStringForKey:(NSString *)key;
/**
 *  通过key value 获取国家化字符串
 *
 *  @param key         key
 *  @param value          value
 *  @return 国际化字符串
 */
+ (NSString *)localizedStringForKey:(NSString *)key value:(NSString *)value;




@end

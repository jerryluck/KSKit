//
//  KSConfiguration.h
//  KSKit
//
//  Created by jerry on 15/10/12.
//  Copyright © 2015年 jerry. All rights reserved.
//

#ifndef KSConfiguration_h
#define KSConfiguration_h



#define RELEASE_SAFELY(__POINTER) { [__POINTER release]; __POINTER = nil; }

#define BUNDLE [NSBundle mainBundle]

// 设备判断

#define isiPad                  (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPad)

#define isiPhone                (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPhone)


#define isSimulator             (NSNotFound != [[[UIDevice currentDevice] model] rangeOfString:@"Simulator"].location)

#define isIPhone5               ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(640, 1136), [[UIScreen mainScreen] currentMode].size) : NO)

#define isIPhone4               ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(640, 960), [[UIScreen mainScreen] currentMode].size) : NO)

#define isIPhone6               ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(750, 1334), [[UIScreen mainScreen] currentMode].size) : NO)

#define isIPhone6Plus               ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1242, 2208), [[UIScreen mainScreen] currentMode].size) : NO)



// 系统版本

#define SYSTEM_VERSION          [[[UIDevice currentDevice] systemVersion] floatValue]



// 日志打印设置

#if LOG_ENABLE

#define KSDINFO(xx, ...)            NSLog(@"%s(%d): " xx, __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__)

#else

#define KSDINFO(xx, ...)            ((void)0)

#endif

#define DICT_VAL(a, b)              [a valueForKeyPath:b]
#define DICT_INTVAL(a, b)           [[a valueForKeyPath:b] intValue]
#define DICT_FLOATVAL(a, b)         [[a valueForKeyPath:b] floatValue]
#define DICT_BOOLVAL(a, b)          DICT_INTVAL(a,b)==1

#define INT(a)                      [NSNumber numberWithInt:a]
#define INTEGER(a)                  [NSNumber numberWithInteger:a]
#define DOUBLE(a)                   [NSNumber numberWithDouble:a]
#define FLOAT(a)                    [NSNumber numberWithFloat:a]
#define STR_FORMAT(a, ...)          [NSString stringWithFormat:a, ##__VA_ARGS__]

#define SYSFont(a) [UIFont systemFontOfSize:a]
#define SYSBoldFont(a) [UIFont boldSystemFontOfSize:a]



// 屏幕

#define MAIN_SCREEN         [UIScreen mainScreen].bounds

#define USER_DEFAULT        [NSUserDefaults standardUserDefaults]
#define FILE_DEFAULT        [NSFileManager defaultManager]

#define isReachability      [[Reachability reachabilityForInternetConnection] isReachable]
#define isWIFIReachability  [[Reachability reachabilityForLocalWiFi] currentReachabilityStatus] != NotReachable
#define is3GReachability    [[Reachability reachabilityForInternetConnection] currentReachabilityStatus] != NotReachable


#define ScreenHeight        [[UIScreen mainScreen] bounds].size.height
#define ScreenWidth         [[UIScreen mainScreen] bounds].size.width



// 日期格式

#define  DATE_FORMATE_YYYY_MM_DD                        @"yyyy-MM-dd"
#define  DATE_FORMATE_HH_MM_SS_COLON                    @"HH:mm:ss"
#define  DATE_FORMATE_HH_MM_SS                          @"HH-mm-ss"
#define  DATE_FORMATE_HH_MM__COLON                      @"HH:mm"
#define  DATE_FORMATE_YYYY_MM_DD_HH_MM_SS               @"yyyy-MM-dd HH:mm:ss"


#define NO_WARN_BEGIN       \
#pragma clang diagnostic push\
#pragma clang diagnostic ignored"-Wdeprecated-declarations"\


#define NO_WARN_END         #pragma clang diagnostic pop





#endif /* KSConfiguration_h */

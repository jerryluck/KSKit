//
//  KSModelApp.m
//  KSUIKit
//
//  Created by jerry on 14/12/12.
//  Copyright (c) 2014年 jerry. All rights reserved.
//

#import "KSApp.h"

@implementation KSApp

+ (NSString*)plistPath
{
    return [[NSBundle mainBundle] pathForResource:@"Info" ofType:@"plist"];
}

+ (NSDictionary*)appInfo
{
    NSDictionary *info = [NSDictionary dictionaryWithContentsOfFile:[KSApp plistPath]];
    return info;
}

+ (NSString *)appBuild
{
    return [[KSApp appInfo] objectForKey:@"CFBundleVersion"];
}

+ (NSString *)appVersion
{
    return [[KSApp appInfo] objectForKey:@"CFBundleShortVersionString"];
}

+ (NSString *)appVersionAndBuild
{
    return [NSString stringWithFormat:@"%@ %@", [[KSApp appInfo] objectForKey:@"CFBundleShortVersionString"], [[KSApp appInfo] objectForKey:@"CFBundleVersion"]];
}

+ (NSString *)appName
{
    return [[KSApp appInfo] objectForKey:@"CFBundleName"];
}

+ (NSString*)appIdentifier
{
    return [[KSApp appInfo] objectForKey:@"CFBundleIdentifier"];
}

+ (NSString*)appIOSSystemVersion
{
    return [[KSApp appInfo] objectForKey:@"DTPlatformVersion"];
}

+ (NSString*)appIOSSystemTypeName
{
    return [[KSApp appInfo] objectForKey:@"DTPlatformName"];
}

@end

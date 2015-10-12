//
//  KSModelApp.h
//  KSUIKit
//
//  Created by jerry on 14/12/12.
//  Copyright (c) 2014年 jerry. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface KSApp : NSObject


+ (NSDictionary*)appInfo;

+ (NSString *)appBuild;

+ (NSString *)appVersion;

+ (NSString *)appVersionAndBuild;

+ (NSString *)appName;

+ (NSString*)appIOSSystemTypeName;

+ (NSString*)appIOSSystemVersion;

+ (NSString*)appIdentifier;

@end

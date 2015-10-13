//
//  KSBootstrap.h
//  CenturyWeekly2
//
//  Created by jerry.gao on 11-11-24.
//  Copyright (c) 2011年 KSMobile. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <sys/xattr.h>
#import <UIKit/UIKit.h>
#import "KSConfiguration.h"


@interface KSDataCenter : NSObject{
    NSMutableDictionary *_data;
    
}
@property(nonatomic,retain) NSString            *logString;
- (NSDictionary *) data;
- (void) setValue:(id)value forKey:(NSString *)key;
- (id) valueForKey:(NSString *)key;
- (void) removeObjectForKey:(id)aKey;
@end

@interface KSBootstrap : NSObject
+ (NSOperationQueue *) operationQueue;
+ (KSDataCenter *) dataCenter;
+ (NSString *)root;
+ (NSString*)fileRoot;
+ (NSString*)imgRoot;
+ (NSString*)smallImgRoot;
+ (NSString*)audioRoot;
+ (NSString*)videoRoot;
+ (BOOL)createIfNotExist:(NSString*)path;
+ (void)start;
+ (void) end;
UIColor* str2rgb(NSString *rgb);
+ (void)notify:(NSString *)name object:(id)obj;
+ (void) notify:(NSString *)name data:(NSDictionary *)data;
+ (void) listen:(NSString *)name target:(id)target selector:(SEL)selector;
+ (void) unlisten:(id)target;
+ (void) unlisten:(NSString *)name target:(id)target;
+(BOOL)isValidateEmail:(NSString *)email;
@end

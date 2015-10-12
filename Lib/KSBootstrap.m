//
//  KSBootstrap.m
//  CenturyWeekly2
//
//  Created by jerry.gao on 11-11-24.
//  Copyright (c) 2011年 KSMobile. All rights reserved.
//

#import "KSBootstrap.h"

static KSDataCenter * _dataCenter;
@implementation KSDataCenter
- (id) init{
    if(self=[super init]){
        _data = [[NSMutableDictionary alloc] initWithCapacity:10];
        _logString = [[NSString alloc] init];
    }
    return self;
}
- (NSDictionary *) data{
    return [_data copy];
}
- (void) setValue:(id)value forKey:(NSString *)key{
    if(value==nil){
        [self removeObjectForKey:key];
    }
    [_data setValue:value forKey:key];
}

- (void) removeObjectForKey:(id)aKey{
    [_data removeObjectForKey:aKey];
}

- (id) valueForKey:(NSString *)key{
    return [_data valueForKey:key];
}


@end

static NSOperationQueue *_threadedQueue;
#pragma mark -
#pragma mark KSBootstrap
@implementation KSBootstrap
UIColor* str2rgb(NSString* rgb){
    if ([rgb isKindOfClass:[NSNull class]]||rgb == nil)
    {
        return nil;
    }
    unsigned int r, g, b;
    CGFloat p = 10;
    [[NSScanner scannerWithString:[rgb substringWithRange:NSMakeRange(1, 2)]]scanHexInt:&r];
    [[NSScanner scannerWithString:[rgb substringWithRange:NSMakeRange(3, 2)]]scanHexInt:&g];
    [[NSScanner scannerWithString:[rgb substringWithRange:NSMakeRange(5, 2)]]scanHexInt:&b];
    if (rgb.length>7)
    {
        p = [[rgb substringWithRange:NSMakeRange(7, 1)] intValue]*.1;
    }
    return [UIColor colorWithRed:r/255.0f green:g/255.0f blue:b/255.0f alpha:p];
}
+ (NSOperationQueue *) operationQueue{
    if(_threadedQueue==nil){
        _threadedQueue = [[NSOperationQueue alloc] init];
        _threadedQueue.maxConcurrentOperationCount = 1;
    }
    return _threadedQueue;
}
#pragma mark - FileManager
+ (NSString *) root
{
    return [NSHomeDirectory() stringByAppendingPathComponent:[NSString stringWithFormat:@"/Documents"]];
}

+(NSString*)fileRoot
{
    NSString *path = STR_FORMAT(@"%@/file",[KSBootstrap root]);
    
    [KSBootstrap createIfNotExist:path];
    
    return path;
}

+(NSString*)imgRoot
{
    NSString *path = STR_FORMAT(@"%@/img",[KSBootstrap root]);
    [KSBootstrap createIfNotExist:path];
    return path;
}
+(NSString*)smallImgRoot
{
    NSString *path = STR_FORMAT(@"%@/smallImg",[KSBootstrap root]);

    [KSBootstrap createIfNotExist:path];

    return path;
}
+(NSString*)videoRoot
{
    NSString *path = STR_FORMAT(@"%@/video",[KSBootstrap root]);

    [KSBootstrap createIfNotExist:path];

    return path;
}

+(NSString*)audioRoot
{
    NSString *path = STR_FORMAT(@"%@/audio",[KSBootstrap root]);
    
    [KSBootstrap createIfNotExist:path];

    return path;
}

+ (BOOL)createIfNotExist:(NSString*)path
{
    if (![FILE_DEFAULT fileExistsAtPath:path])
    {
        return [FILE_DEFAULT createDirectoryAtPath:path withIntermediateDirectories:YES attributes:nil error:nil];
    }
    return NO;
}

+(void)start
{

}


+(BOOL)isExistFile:(NSString*)path
{
    return [[NSFileManager defaultManager] fileExistsAtPath:path];
}

+ (KSDataCenter *) dataCenter{
    if(_dataCenter==nil){
        _dataCenter = [[KSDataCenter alloc] init];
    }
    return _dataCenter;
}


//利用正则表达式验证
+(BOOL)isValidateEmail:(NSString *)email {
    NSString *emailRegex = @"[A-Z0-9a-z._%+-]+@[A-Za-z0-9.-]+\\.[A-Za-z]{2,4}";
    NSPredicate *emailTest = [NSPredicate predicateWithFormat:@"SELF MATCHES %@", emailRegex];
    return [emailTest evaluateWithObject:email];
}


+ (void) end{
    _dataCenter = nil;
    [_threadedQueue cancelAllOperations];
    _threadedQueue = nil;
}
#pragma mark - Notification

+ (void)notify:(NSString *)name object:(id)obj{
    [[NSNotificationCenter defaultCenter] postNotificationName:name object:obj userInfo:nil];
}

+ (void)notify:(NSString *)name data:(NSDictionary *)data{
    [[NSNotificationCenter defaultCenter] postNotificationName:name object:nil userInfo:data];
}

+ (void)listen:(NSString *)name target:(id)target selector:(SEL)selector{
    [[NSNotificationCenter defaultCenter] addObserver:target selector:selector name:name object:nil];
}

+ (void)unlisten:(id)target{
    [[NSNotificationCenter defaultCenter] removeObserver:target];
}

+ (void)unlisten:(NSString *)name target:(id)target{
    [[NSNotificationCenter defaultCenter] removeObserver:target name:name object:nil];
}
@end

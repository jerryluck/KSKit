//
//  KSKit.h
//  KSKit
//
//  Created by jerry gao on 12-11-15.
//  Copyright (c) 2012年 jerry gao. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "KSConfiguration.h"
#import "KSBootstrap.h"
#import "UIViewAdditions.h"
#import "NSObjectAdditons.h"
#import "NSStringAdditions.h"
#import "UIImageAdditions.h"
#import "UIDeviceAdditions.h"
#import "UILabelAdditions.h"
#import "NSData+Base64.h"
#import "NSDateAdditions.h"
#import "NSDate+Escort.h"
#import "UIUtil+KS.h"
#import "UIColor+Expanded.h"
#import "UIColorAdditions.h"
#import "Reachability.h"
#import "UIButttonAddition.h"
#import "KSRoundedView.h"
#import "KSRoundAndBorderView.h"
#import "KSApp.h"



#import "NSArray+Block.h"
#import "NSArray+SafeAccess.h"

#import "NSBundle+AppIcon.h"
#import "NSData+APNSToken.h"
#import "NSData+Base64.h"
#import "NSData+Encrypt.h"
#import "NSData+Gzip.h"
#import "NSData+Hash.h"
#import "NSData+SDDataCache.h"
#import "NSData+zlib.h"

#import "NSDateFormatter+Make.h"

#import "NSDictionary+Block.h"
#import "NSDictionary+Merge.h"
#import "NSDictionary+SafeAccess.h"
#import "NSDictionary+XML.h"

#import "NSFileManager+Paths.h"

#import "NSIndexPath+Offset.h"

#import "NSObject+AddProperty.h"
#import "NSObject+AssociatedObject.h"
#import "NSObject+AutoCoding.h"
#import "NSObject+Blocks.h"
#import "NSObject+GCD.h"
#import "NSObject+KVOBlocks.h"
#import "NSObject+MKBlockTimer.h"
#import "NSObject+Property.h"
#import "NSObject+Runtime.h"

#import "NSRunLoop+PerformBlock.h"

#import "NSSet+Block.h"

#import "NSString+Base64.h"
#import "NSString+Contains.h"
#import "NSString+DictionaryValue.h"
#import "NSString+Emoji.h"
#import "NSString+Encrypt.h"
#import "NSString+Hash.h"
#import "NSString+Matcher.h"
#import "NSString+MIME.h"
#import "NSString+Pinyin.h"
#import "NSString+RegexCategory.h"
#import "NSString+RemoveEmoji.h"
#import "NSString+Ruby.h"
#import "NSString+Score.h"
#import "NSString+Size.h"
#import "NSString+Trims.h"
#import "NSString+UrlEncode.h"
#import "NSString+UUID.h"
#import "NSString+XML.h"


#import "NSTimer+Addition.h"
#import "NSTimer+Blocks.h"


#import "NSUserDefaults+iCloudSync.h"
#import "NSUserDefaults+SafeAccess.h"



#import "UIApplication+ApplicationSize.h"
#import "UIApplication+KeyboardFrame.h"
#import "UIApplication+NetworkActivityIndicator.h"
#import "UIApplication+Permissions.h"

#import "UIBarButtonItem+Action.h"

#import "UIBezierPath+BasicShapes.h"
#import "UIBezierPath+LxThroughPointsBezier.h"
#import "UIBezierPath+SVG.h"
#import "UIBezierPath+Symbol.h"

#import "UIButton+BackgroundColor.h"
#import "UIButton+Block.h"
#import "UIButton+CountDown.h"
#import "UIButton+Indicator.h"
#import "UIButton+Submitting.h"
#import "UIButton+TouchAreaInsets.h"

#import "UIColor+Gradient.h"
#import "UIColor+HEX.h"
#import "UIColor+Modify.h"
#import "UIColor+Random.h"
#import "UIColor+Web.h"

#import "UIControl+ActionBlocks.h"
#import "UIControl+Block.h"

#import "UIDevice+Hardware.h"
#import "UIDevice+PasscodeStatus.h"

#import "UIImage+Alpha.h"
#import "UIImage+animatedGIF.h"
#import "UIImage+BetterFace.h"
#import "UIImage+Blur.h"
#import "UIImage+Capture.h"
#import "UIImage+Color.h"
#import "UIImage+FileName.h"
#import "UIImage+FX.h"
#import "UIImage+GIF.h"
#import "UIImage+Merge.h"
#import "UIImage+Orientation.h"
#import "UIImage+RemoteSize.h"
#import "UIImage+Resize.h"
#import "UIImage+RoundedCorner.h"
#import "UIImage+Vector.h"

#import "UIImageView+Addition.h"
#import "UIImageView+BetterFace.h"
#import "UIImageView+FaceAwareFill.h"
#import "UIImageView+GeometryConversion.h"
#import "UIImageView+Letters.h"
#import "UIImageView+Reflect.h"


#import "UINavigationItem+Loading.h"
#import "UINavigationItem+Lock.h"
#import "UINavigationItem+Margin.h"


#import "UIResponder+Chain.h"
#import "UIResponder+FirstResponder.h"
#import "UIResponder+UIAdapt.h"


#import "UIScreen+Frame.h"

#import "UIScrollView+Addition.h"
#import "UIScrollView+APParallaxHeader.h"
#import "UIScrollView+Pages.h"

#import "UISearchBar+Blocks.h"

#import "UITextField+Blocks.h"
#import "UITextField+History.h"
#import "UITextField+Select.h"
#import "UITextField+Shake.h"

#import "UITextView+PinchZoom.h"
#import "UITextView+PlaceHolder.h"
#import "UITextView+Select.h"

#import "UIView+Animation.h"
#import "UIView+BlockGesture.h"
#import "UIView+Constraints.h"
#import "UIView+Debug.h"
#import "UIView+draggable.h"
#import "UIView+Find.h"
#import "UIView+Frame.h"
#import "UIView+GestureCallback.h"
#import "UIView+Nib.h"
#import "UIView+Recursion.h"
#import "UIView+RecursiveDescription.h"
#import "UIView+Screenshot.h"
#import "UIView+Shake.h"
#import "UIView+Toast.h"
#import "UIView+ViewController.h"
#import "UIView+Visuals.h"


#import "UIWebView+Alert.h"
#import "UIWebView+Blocks.h"
#import "UIWebView+Canvas.h"
#import "UIWebView+JS.h"
#import "UIWebView+MetaParser.h"
#import "UIWebView+Style.h"
#import "UIWebVIew+SwipeGesture.h"


#import "UIWindow+Hierarchy.h"




















//#import "UIImageEffects.h"




@interface KSKit : NSObject

@end

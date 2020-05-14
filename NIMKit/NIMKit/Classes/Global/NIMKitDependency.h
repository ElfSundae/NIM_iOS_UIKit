//
//  NIMKitDependency.h
//  NIMKit
//
//  Created by chris on 2017/5/3.
//  Copyright © 2017年 NetEase. All rights reserved.
//

#ifndef NIMKitDependency_h
#define NIMKitDependency_h


#if __has_include(<M80AttributedLabel/M80AttributedLabel.h>)
#import <M80AttributedLabel/M80AttributedLabel.h>
#elif __has_include("M80AttributedLabel.h")
#import "M80AttributedLabel.h"
#else
@import M80AttributedLabel;
#endif

#if __has_include(<FLAnimatedImage/FLAnimatedImage.h>)
#import <FLAnimatedImage/FLAnimatedImage.h>
#elif __has_include("FLAnimatedImage.h")
#import "FLAnimatedImage.h"
#else
@import FLAnimatedImage;
#endif

#if __has_include(<SDWebImage/SDWebImage.h>)
#import <SDWebImage/SDWebImage.h>
#elif __has_include(<SDWebImage/SDWebImageCompat.h>)
#import <SDWebImage/SDWebImageCompat.h>
#import <SDWebImage/UIView+WebCache.h>
#import <SDWebImage/UIImageView+WebCache.h>
#import <SDWebImage/UIImageView+HighlightedWebCache.h>
#import <SDWebImage/UIView+WebCacheOperation.h>
#elif __has_include("SDWebImageCompat.h")
#import "SDWebImageCompat.h"
#import "UIView+WebCache.h"
#import "UIImageView+WebCache.h"
#import "UIImageView+HighlightedWebCache.h"
#import "UIView+WebCacheOperation.h"
#else
@import SDWebImage;
#endif

#if __has_include(<Toast/Toast.h>)
#import <Toast/Toast.h>
#elif __has_include("UIView+Toast.h")
#import "UIView+Toast.h"
#else
@import Toast;
#endif


#if __has_include(<TZImagePickerController/TZImagePickerController.h>)
#import <TZImagePickerController/TZImagePickerController.h>
#elif __has_include("TZImagePickerController.h")
#import "TZImagePickerController.h"
#else
@import TZImagePickerController;
#endif


#endif /* NIMKitDependency_h */


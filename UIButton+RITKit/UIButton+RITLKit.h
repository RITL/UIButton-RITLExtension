//
//  UIButton+RITLExtension.h
//  RITLKitDemo
//
//  Created by YueWen on 2018/1/12.
//  Copyright © 2018年 YueWen. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@protocol RITLSetterButton <NSObject>

@optional //只是为了消除警告,实际为`@required`

///title
@property (nonatomic, copy)NSString *ritl_NormalTitle;
@property (nonatomic, copy)NSString *ritl_HighlightedTitle;
@property (nonatomic, copy)NSString *ritl_DisabledTitle;
@property (nonatomic, copy)NSString *ritl_SelectedTitle;
@property (nonatomic, copy)NSString *ritl_FocusedlTitle NS_AVAILABLE_IOS(9_0);
@property (nonatomic, copy)NSString *ritl_ApplicationTitle;
@property (nonatomic, copy)NSString *ritl_ReservedTitle;

/// attributedTitle
@property (nonatomic, copy)NSString *ritl_NormalAttributedTitle;
@property (nonatomic, copy)NSString *ritl_HighlightedAttributedTitle;
@property (nonatomic, copy)NSString *ritl_DisabledAttributedTitle;
@property (nonatomic, copy)NSString *ritl_SelectedAttributedTitle;
@property (nonatomic, copy)NSString *ritl_FocusedlAttributedTitle NS_AVAILABLE_IOS(9_0);
@property (nonatomic, copy)NSString *ritl_ApplicationAttributedTitle;
@property (nonatomic, copy)NSString *ritl_ReservedAttributedTitle;

/// color
@property (nonatomic, strong)UIColor *ritl_NormalTitleColor;
@property (nonatomic, strong)UIColor *ritl_HighlightedTitleColor;
@property (nonatomic, strong)UIColor *ritl_DisabledTitleColor;
@property (nonatomic, strong)UIColor *ritl_SelectedTitleColor;
@property (nonatomic, strong)UIColor *ritl_FocusedlTitleColor NS_AVAILABLE_IOS(9_0);
@property (nonatomic, strong)UIColor *ritl_ApplicationTitleColor;
@property (nonatomic, strong)UIColor *ritl_ReservedTitleColor;

/// titleShadowColor
@property (nonatomic, strong)UIColor *ritl_NormalTitleShadowColor;
@property (nonatomic, strong)UIColor *ritl_HighlightedTitleShadowColor;
@property (nonatomic, strong)UIColor *ritl_DisabledTitleShadowColor;
@property (nonatomic, strong)UIColor *ritl_SelectedTitleShadowColor;
@property (nonatomic, strong)UIColor *ritl_FocusedlTitleShadowColor NS_AVAILABLE_IOS(9_0);
@property (nonatomic, strong)UIColor *ritl_ApplicationTitleShadowColor;
@property (nonatomic, strong)UIColor *ritl_ReservedTitleShadowColor;

/// image
@property (nonatomic, strong)UIImage *ritl_NormalImage;
@property (nonatomic, strong)UIImage *ritl_HighlightedImage;
@property (nonatomic, strong)UIImage *ritl_DisabledImage;
@property (nonatomic, strong)UIImage *ritl_SelectedImage;
@property (nonatomic, strong)UIImage *ritl_FocusedlImage NS_AVAILABLE_IOS(9_0);
@property (nonatomic, strong)UIImage *ritl_ApplicationImage;
@property (nonatomic, strong)UIImage *ritl_ReservedImage;


/// backgroundImage
@property (nonatomic, strong)UIImage *ritl_NormalBackgroundImage;
@property (nonatomic, strong)UIImage *ritl_HighlightedBackgroundImage;
@property (nonatomic, strong)UIImage *ritl_DisabledBackgroundImage;
@property (nonatomic, strong)UIImage *ritl_SelectedBackgroundImage;
@property (nonatomic, strong)UIImage *ritl_FocusedlBackgroundImage NS_AVAILABLE_IOS(9_0);
@property (nonatomic, strong)UIImage *ritl_ApplicationBackgroundImage;
@property (nonatomic, strong)UIImage *ritl_ReservedBackgroundImage;

@end


@interface UIButton (RITLKit)<RITLSetterButton>

@end

NS_ASSUME_NONNULL_END

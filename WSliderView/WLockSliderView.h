//
//  HBLockSliderView.h
//  MySliderDemo
//
//  Created by LWW on 2017/9/18.
//  Copyright © 2017年 Kiwi. All rights reserved.
//

#import <UIKit/UIKit.h>
@class WLockSliderView;
@protocol WLockSliderDelegate <NSObject>
@optional
- (void)sliderValueChanging:(WLockSliderView *)slider;
- (void)sliderEndValueChanged:(WLockSliderView *)slider;
@end

@interface WLockSliderView : UIView
@property (nonatomic, assign)CGFloat value;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, strong)UIFont *font;
@property (nonatomic, assign) BOOL thumbHidden;
@property (nonatomic,strong) UIImage *finishImage;
/*
 *滑块图片
 */
@property (nonatomic,strong) UIImage *thumbImage;
/*
 *滑块图片
 */
@property (nonatomic,strong) UIImage *thumbColor;
/*
 *字体颜色
 */
@property (nonatomic,assign) UIColor *titleColor;
/*
 *划过颜色
 */
@property (nonatomic,assign) UIColor *slidedColor;
/*
 *未划过颜色
 */
@property (nonatomic,assign) UIColor *unSlidedColor;
/*
 *字体大小
 */
@property (nonatomic,assign) UIFont *titleFont;
/**
 *  拖动后是否返回
 */
@property (nonatomic,assign) BOOL thumbBack;
/**
 *滑块是否需要剪切
 */
@property (nonatomic,assign) BOOL thumbCorner;
/**
 *整体是否需要剪切
 */
@property (nonatomic,assign) BOOL allCorner;
/*
 * 设置代理
 */
@property (nonatomic, weak) id<WLockSliderDelegate> delegate;
/**
 *  设置滑动条进度
 *  value取值0~1
 */
- (void)setSliderValue:(CGFloat)value;
/**
 *  动画设置滑动条进度
 */
- (void)setSliderValue:(CGFloat)value animation:(BOOL)animation completion:(void(^)(BOOL finish))completion;
/**
 *  设置滑动条颜色
 *
 *  @param backgroud  背景色
 *  @param foreground 前景色
 *  @param thumb      滑动控件颜色
 *  @param border     边框色
 */
- (void)setColorForBackgroud:(UIColor *)backgroud foreground:(UIColor *)foreground thumb:(UIColor *)thumb border:(UIColor *)border textColor:(UIColor *)textColor;

/**
 *  设置滑动控件的起始图片和完成图片(可选)
 *
 *  @param beginImage 启始图片
 *  @param endImage   完成图片
 */
- (void)setThumbBeginImage:(UIImage *)beginImage finishImage:(UIImage *)finishImage;
/**
 *  移除圆角和边框
 */
- (void)removeRoundCorners:(BOOL)corners border:(BOOL)border;

@end

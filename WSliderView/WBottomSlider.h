//
//  WBottomSlider.h
//  WSliderViewDemo
//
//  Created by LWW on 2017/12/19.
//  Copyright © 2017年 Kiwi. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "FBShimmeringView.h"
#import "WLockSliderView.h"
typedef  void(^SlideBlock)(BOOL);

@interface WBottomSlider : UIView<WLockSliderDelegate>
- (id)initWithFrame:(CGRect)frame withWidth:(CGFloat)width;

/*
 *闪亮
 */
@property (nonatomic,strong)FBShimmeringView *fbShining;
/*
 *滑动组件
 */
@property (nonatomic,strong)WLockSliderView *Slider;
/*
 *滑动事件
 */
@property (nonatomic,copy)SlideBlock sliderBlock;
/*
 *左侧限制宽度
 */
@property (nonatomic,assign)CGFloat leftWidth;
/*
 *文字内容
 */
@property (nonatomic,copy)NSString *titleStr;

/*
 *文字内容
 */
@property (nonatomic,assign)UIColor *slideColor;

@end

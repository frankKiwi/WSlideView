//
//  WBottomSlider.m
//  WSliderViewDemo
//
//  Created by LWW on 2017/12/19.
//  Copyright © 2017年 Kiwi. All rights reserved.
//

#import "WBottomSlider.h"


@implementation WBottomSlider

- (id)initWithFrame:(CGRect)frame withWidth:(CGFloat)width{
    if (self = [super initWithFrame:frame]) {
        self.leftWidth = width;
        [self WSetUpUI];
    }
    return self;
}
/*
 *设置标题
 */
- (void)setTitleStr:(NSString *)titleStr{
    _Slider.text = titleStr;
}
/*
 *初始化
 */
- (void)WSetUpUI{
    
    _Slider = [[WLockSliderView alloc] initWithFrame:CGRectMake(self.leftWidth, 0, self.frame.size.width -self.leftWidth, self.frame.size.height)];
    [_Slider setThumbBeginImage:[UIImage imageNamed:@"slide"] finishImage:nil];
    _Slider.text = @"滑动到达";
    [self addSubview:_Slider];
    _fbShining =[[FBShimmeringView alloc]initWithFrame:_Slider.bounds];
    [self addSubview:_fbShining];
    _Slider.delegate = self;
    _fbShining.contentView = _Slider;
    _fbShining.shimmering = YES;
}
/*
 *代理事件
 */
- (void)sliderEndValueChanged:(WLockSliderView *)slider{
    if (slider.value >= 0.933898) {
        if (self.sliderBlock) {
             self.sliderBlock(YES);
        }    }else{
            _Slider.thumbBack = YES;

        }
    NSLog(@"%f",slider.value);
 
}

- (void)sliderValueChanging:(WLockSliderView *)slider{
 }

@end

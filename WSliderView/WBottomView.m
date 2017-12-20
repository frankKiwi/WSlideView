//
//  WBottomView.m
//  WSliderViewDemo
//
//  Created by LWW on 2017/12/19.
//  Copyright © 2017年 Kiwi. All rights reserved.
//

#import "WBottomView.h"
#define kScreenW [UIScreen mainScreen].bounds.size.width

@implementation WBottomView

- (id)initWithFrame:(CGRect)frame withWidth:(CGFloat)width{
    if (self = [super initWithFrame:frame]) {
        self.leftWidth = width;
        [self WSetUpUI];
    }
    return self;
}
/*
 *初始化
 */
- (void)setTitleStr:(NSString *)titleStr{
    [self.leftBtn setTitle:titleStr forState:UIControlStateNormal];
}
- (void)WSetUpUI{
    self.leftBtn = [UIButton buttonWithType:UIButtonTypeCustom];
    self.leftBtn.backgroundColor = [UIColor whiteColor];
    self.leftBtn.frame = CGRectMake(0, 0, self.leftWidth, self.frame.size.height);
    [self.leftBtn setTitleColor:[UIColor blackColor] forState:UIControlStateNormal];
    [self.leftBtn setTitle:@"需要帮助" forState:UIControlStateNormal];
    self.leftBtn.titleLabel.font = [UIFont systemFontOfSize:14];
    [self addSubview:self.leftBtn];
    [self bringSubviewToFront:self.leftBtn];
    [self.leftBtn addTarget:self action:@selector(Click) forControlEvents:UIControlEventTouchUpInside];
    self.botMV = [[WBottomSlider alloc]initWithFrame:CGRectMake(self.leftWidth, 0, kScreenW, self.frame.size.height) withWidth:self.leftWidth];
    [self addSubview:self.botMV];
    
}
- (void)setLeftWidth:(CGFloat)leftWidth{
    _leftWidth = leftWidth;
}
- (void)Click{
    if (self.btnBlock) {
        self.btnBlock(YES);
    }
    
}

@end

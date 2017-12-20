//
//  WBottomView.h
//  WSliderViewDemo
//
//  Created by LWW on 2017/12/19.
//  Copyright © 2017年 Kiwi. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WBottomSlider.h"

typedef void(^BtnBlock)(BOOL);

@interface WBottomView : UIView

@property (nonatomic,assign)UIColor *leftColor;
@property (nonatomic,strong)UIFont *leftFont;
@property (nonatomic,assign)UIImage *leftImgae;
@property (nonatomic,assign)CGFloat leftWidth;
@property (nonatomic,copy)NSString *titleStr;

/*
 * 左侧组件
 */
@property (nonatomic,strong)UIButton *leftBtn;
/*
 * 声明为其属性
 */
@property (nonatomic,strong)WBottomSlider *botMV;
/*
 * 点击事件
 */
@property (nonatomic,copy)BtnBlock btnBlock;
- (id)initWithFrame:(CGRect)frame withWidth:(CGFloat)width;

@end

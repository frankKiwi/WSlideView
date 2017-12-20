//
//  ViewController.m
//  WSliderViewDemo
//
//  Created by LWW on 2017/9/21.
//  Copyright © 2017年 Kiwi. All rights reserved.
//

#import "ViewController.h"
#import "WBottomView.h"

#define kScreenW [UIScreen mainScreen].bounds.size.width
@interface ViewController ()
@end
@implementation ViewController
- (void)viewDidLoad {
    [super viewDidLoad];
    self.view.backgroundColor = [UIColor whiteColor];
    
}
- (void)viewDidAppear:(BOOL)animated
{
    self.view.backgroundColor = [UIColor redColor];
    WBottomView *slide = [[WBottomView alloc]initWithFrame:CGRectMake(0, self.view.frame.size.height- 44, kScreenW, 44) withWidth:80];
    slide.titleStr = @"紧急求助";
    slide.botMV.titleStr = @"快点上车";
    
    slide.btnBlock = ^(BOOL isClick) {
        if (isClick) {
            NSLog(@"我擦");
        }
    };
    slide.botMV.sliderBlock = ^(BOOL isSlide) {
        if (isSlide) {
            NSLog(@"我擦擦");

        }
    };
    [self.view addSubview:slide];

}



- (void)sliderValueChanging:(WLockSliderView *)slider{
    //    NSLog(@"%f",slider.value);
}

@end

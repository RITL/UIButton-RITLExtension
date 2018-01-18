//
//  ViewController.m
//  UIButton+RITLExtension
//
//  Created by YueWen on 2018/1/13.
//  Copyright © 2018年 YueWen. All rights reserved.
//

#import "ViewController.h"
#import "UIButton+RITLKit.h"
#import <RITLKit.h>


@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.

    UIButton *button = [[UIButton alloc]initWithFrame:CGRectMake(40, 110, 80, 30)];
    button.backgroundColor = UIColor.orangeColor;
    
    [self.view addSubview:button];
    
    
    button.ritl_NormalTitle = @"哈哈哈";
    button.ritl_HighlightedTitle = @"按住啦";
    button.ritl_NormalBackgroundImage = @"hahah".ritl_image;
    
    NSLog(@"normalTitle = %@",button.ritl_NormalTitle);
    NSLog(@"hightTitle = %@",button.ritl_HighlightedTitle);
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end

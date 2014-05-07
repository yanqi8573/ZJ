//
//  YanqiDemo.h
//  YanqiDemo
//
//  Created by 健 张 on 14-4-24.
//  Copyright (c) 2014年 Yanqi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface YanqiDemo : NSObject

@property (nonatomic,readonly) UIImage *originalImage;

- (id)initWithImage:(UIImage *)image;
- (UIImage *)grayScaleImage;
- (UIImage *)oldImageWithIntensity:(CGFloat)level;

@end

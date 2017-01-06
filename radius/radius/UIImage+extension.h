//
//  UIImage+extension.h
//  Redious
//
//  Created by admin on 16/12/20.
//  Copyright © 2016年 admin. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (extension)
- (void)was_cornerImageWithSize:(CGSize)size fillColor:(UIColor *)fillColor completion:(void (^)(UIImage *))completion;

- (void)was_roundRectImageWithSize:(CGSize)size fillColor:(UIColor *)fillColor radius:(CGFloat)radius completion:(void (^)(UIImage *))completion;

@end

@interface UIImageView (Extension)
//网络延迟下载--圆形
- (void)was_setCircleImageWithUrl:(NSURL *)url placeholder:(UIImage *)image fillColor:(UIColor *)color;
//网络延迟下载--圆形矩阵
- (void)was_setRoundRectImageWithUrl:(NSURL *)url placeholder:(UIImage *)image fillColor:(UIColor *)color cornerRadius:(CGFloat) cornerRadius;
@end

@interface UIButton (Extension)
//圆形
- (void)was_setCircleImageWithUrl:(NSURL *)url placeholder:(UIImage *)image fillColor:(UIColor *)color forState:(UIControlState)state;
//圆角矩形
- (void)was_setRoundRectImageWithUrl:(NSURL *)url placeholder:(UIImage *)image fillColor:(UIColor *)color cornerRadius:(CGFloat) cornerRadius forState:(UIControlState)state;
@end

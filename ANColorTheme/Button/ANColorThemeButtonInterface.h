//
//  ANColorThemeButtonInterface.h
//
//  Created by Oksana Kovalchuk on 21/12/14.
//  Copyright (c) 2014 ANODA. All rights reserved.
//

@protocol ANColorThemeButtonInterface <NSObject>

- (UIColor*)normalStateBackground;
- (UIColor*)selectedStateBackground;
- (UIColor*)disabledStateBackground;

- (UIColor*)normalStateFontColor;
- (UIColor*)selectedStateFontColor;
- (UIColor*)disabledStateFontColor;

- (UIFont*)titleLabelFont;

- (UIColor*)borderColor;
- (CGFloat)borderWidth;
- (CGFloat)cornerRadius;

- (UIEdgeInsets)iconEdges;
- (UIEdgeInsets)titleEdges;


- (void)setNormalStateBackground:(UIColor*)color;
- (void)setSelectedStateBackground:(UIColor*)color;
- (void)setDisabledStateBackground:(UIColor*)color;

- (void)setNormalStateFontColor:(UIColor*)color;
- (void)setSelectedStateFontColor:(UIColor*)color;
- (void)setDisabledStateFontColor:(UIColor*)color;

- (void)setTitleLabelFont:(UIFont*)titleFont;

- (void)setBorderColor:(UIColor*)borderColor;
- (void)setBorderWidth:(CGFloat)borderWidth;
- (void)setCornerRadius:(CGFloat)cornerRadius;

- (void)setIconEdges:(UIEdgeInsets)edges;
- (void)setTitleEdges:(UIEdgeInsets)edges;


@end
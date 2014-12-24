//
//  ANColorThemeLabel.h
//  Versoos
//
//  Created by Oksana Kovalchuk on 21/12/14.
//  Copyright (c) 2014 ANODA. All rights reserved.
//

@protocol ANColorThemeLabelInterface <NSObject>

@required

- (UIFont*)font;
- (UIColor*)textColor;
- (NSTextAlignment)textAlignment;
- (UIColor*)shadowColor;
- (CGSize)shadowOffset;
- (NSUInteger)maxNumberOfLines;
- (NSString*)predefinedText;

- (void)setFont:(UIFont*)font;
- (void)setTextColor:(UIColor*)textColor;
- (void)setTextAlignment:(NSTextAlignment)textAlignment;
- (void)setShadowColor:(UIColor*)shadowColor;
- (void)setShadowOffset:(CGSize)shadowOffset;
- (void)setMaxNumberOfLines:(NSUInteger)maxNumberOfLines;
- (void)setPredefinedText:(NSString*)text;

@end

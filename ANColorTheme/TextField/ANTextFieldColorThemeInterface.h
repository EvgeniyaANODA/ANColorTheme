//
//  ANTextFieldColorTheme.h
//
//  Created by Oksana Kovalchuk on 26/12/14.
//
//

@protocol ANTextFieldColorThemeInterface

@required

- (UIFont*)font;
- (UIColor*)textColor;
- (NSTextAlignment)textAlignment;
- (UIColor*)shadowColor;
- (CGSize)shadowOffset;
- (NSUInteger)maxNumberOfLines;
- (NSString*)predefinedText;
- (NSString*)placeholder;

- (void)setFont:(UIFont*)font;
- (void)setTextColor:(UIColor*)textColor;
- (void)setTextAlignment:(NSTextAlignment)textAlignment;
- (void)setShadowColor:(UIColor*)shadowColor;
- (void)setShadowOffset:(CGSize)shadowOffset;
- (void)setMaxNumberOfLines:(NSUInteger)maxNumberOfLines;
- (void)setPredefinedText:(NSString*)text;
- (void)setPlaceholder:(NSString*)placeholder;

@end

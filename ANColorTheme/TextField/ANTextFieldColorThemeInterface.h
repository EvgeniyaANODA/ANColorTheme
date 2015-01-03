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
- (NSString*)predefinedText;
- (NSString*)placeholder;
- (CGFloat)cornerRadius;
- (UIColor*)backgroundColor;
- (UIColor*)placeholderColor;

- (void)setFont:(UIFont*)font;
- (void)setTextColor:(UIColor*)textColor;
- (void)setTextAlignment:(NSTextAlignment)textAlignment;
- (void)setPredefinedText:(NSString*)text;
- (void)setPlaceholder:(NSString*)placeholder;
- (void)setCornerRadius:(CGFloat)cornerRadius;
- (void)setBackgroundColor:(UIColor*)backgroundColor;
- (void)setPlaceholderColor:(UIColor*)color;

@end

//
//  UITextField+ANThemes.m
//
//  Created by Oksana Kovalchuk on 26/12/14.
//
//

#import "UITextField+ANThemes.h"

@implementation UITextField (ANThemes)

+ (instancetype)an_textFieldWithTheme:(id<ANTextFieldColorThemeInterface>)theme
{
    UITextField* object = [UITextField new];
    [object an_updateAppearanceWithTheme:theme];
    return object;
}

- (void)an_updateAppearanceWithTheme:(id<ANTextFieldColorThemeInterface>)theme
{
    if (theme)
    {
        if ([theme font])
        {
            self.font = [theme font];
        }
        if ([theme textColor])
        {
            self.textColor = [theme textColor];
        }
        if ([theme placeholder])
        {
            self.placeholder = [theme placeholder];
        }
        
        self.textAlignment = [theme textAlignment];
        self.layer.cornerRadius = [theme cornerRadius];
        NSString* text = [theme predefinedText];
        if (text)
        {
            self.text = text;
        }
    }
}

@end

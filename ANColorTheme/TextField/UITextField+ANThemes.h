//
//  UITextField+ANThemes.h
//
//  Created by Oksana Kovalchuk on 26/12/14.
//
//

#import "ANTextFieldColorThemeInterface.h"

@interface UITextField (ANThemes)

+ (instancetype)an_textFieldWithTheme:(id<ANTextFieldColorThemeInterface>)theme;
- (void)an_updateAppearanceWithTheme:(id<ANTextFieldColorThemeInterface>)theme;

@end

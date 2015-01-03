//
//  UIButton+ANColorTheme.h
//  Pods
//
//  Created by Oksana Kovalchuk on 27/12/14.
//
//

#import "ANColorThemeButtonInterface.h"

@interface UIButton (ANColorTheme)

+ (instancetype)an_buttonWithTheme:(id<ANColorThemeButtonInterface>)theme;
- (void)an_updateAppearanceWithTheme:(id<ANColorThemeButtonInterface>)theme;

@end

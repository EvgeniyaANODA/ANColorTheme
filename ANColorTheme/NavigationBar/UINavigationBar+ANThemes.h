//
//  UINavigationBar+ANThemes.h
//  Pods
//
//  Created by Oksana Kovalchuk on 1/3/15.
//
//

#import "ANNavigationBarThemeInterface.h"
#import <UIKit/UIKit.h>

@interface UINavigationBar (ANThemes)

+ (void)an_updateWithTheme:(id<ANNavigationBarThemeInterface>)theme;

@end

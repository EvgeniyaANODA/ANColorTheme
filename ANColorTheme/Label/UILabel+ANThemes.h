//
//  UILabel+ANThemes.h
//
//  Created by Oksana Kovalchuk on 22/12/14.
//  Copyright (c) 2014 ANODA. All rights reserved.
//

#import "ANColorThemeLabelInterface.h"

@interface UILabel (ANThemes)

+ (instancetype)an_labelWithTheme:(id<ANColorThemeLabelInterface>)theme;

- (void)an_updateAppearanceWithTheme:(id<ANColorThemeLabelInterface>)theme;

@end

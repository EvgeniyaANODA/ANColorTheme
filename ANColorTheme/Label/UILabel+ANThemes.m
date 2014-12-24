//
//  UILabel+ANThemes.m
//
//  Created by Oksana Kovalchuk on 22/12/14.
//  Copyright (c) 2014 ANODA. All rights reserved.
//

#import "UILabel+ANThemes.h"

@implementation UILabel (ANThemes)

+ (instancetype)an_labelWithTheme:(id<ANColorThemeLabelInterface>)theme
{
    UILabel* label = [UILabel new];
    [label an_updateAppearanceWithTheme:theme];
    return label;
}

- (void)an_updateAppearanceWithTheme:(id<ANColorThemeLabelInterface>)theme
{
    if (theme)
    {
        self.numberOfLines = [theme maxNumberOfLines];
        if ([theme font])
        {
            self.font = [theme font];
        }
        if ([theme textColor])
        {
            self.textColor = [theme textColor];
        }
        
        self.textAlignment = [theme textAlignment];
        self.shadowColor = [theme shadowColor];
        self.shadowOffset = [theme shadowOffset];
        NSString* text = [theme predefinedText];
        if (text)
        {
            self.text = text;
        }
    }
}

@end

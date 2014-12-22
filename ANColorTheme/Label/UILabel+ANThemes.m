//
//  UILabel+ANThemes.m
//  CRToastDemo
//
//  Created by Oksana Kovalchuk on 22/12/14.
//  Copyright (c) 2014 Collin Ruffenach. All rights reserved.
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
        self.font = [theme font];
        self.textColor = [theme textColor];
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
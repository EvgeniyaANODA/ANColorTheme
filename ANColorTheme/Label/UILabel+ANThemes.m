//
//  UILabel+ANThemes.m
//  CRToastDemo
//
//  Created by Oksana Kovalchuk on 22/12/14.
//  Copyright (c) 2014 Collin Ruffenach. All rights reserved.
//

#import "UILabel+ANThemes.h"

@implementation UILabel (ANThemes)

+ (UILabel *)labelWithTheme:(id<ANColorThemeLabelInterface>)theme
{
    UILabel* label = [UILabel new];
    if (theme)
    {
        label.numberOfLines = [theme maxNumberOfLines];
        label.font = [theme font];
        label.textColor = [theme textColor];
        label.textAlignment = [theme textAlignment];
        label.shadowColor = [theme shadowColor];
        label.shadowOffset = [theme shadowOffset];
        NSString* text = [theme predefinedText];
        if (text)
        {
            label.text = text;
        }
    }
    
    return label;
}

@end

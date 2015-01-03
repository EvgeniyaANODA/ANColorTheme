//
//  UIButton+ANColorTheme.m
//  Pods
//
//  Created by Oksana Kovalchuk on 27/12/14.
//
//

#import "UIButton+ANThemes.h"
#import "UIImage+ANAdditions.h"

@implementation UIButton (ANColorTheme)

+ (instancetype)an_buttonWithTheme:(id<ANColorThemeButtonInterface>)theme
{
    UIButton* button = [UIButton buttonWithType:UIButtonTypeCustom];
    [button an_updateAppearanceWithTheme:theme];
    return button;
}

- (void)an_updateAppearanceWithTheme:(id<ANColorThemeButtonInterface>)theme
{
    if (theme)
    {
//        self.titleLabel.numberOfLines = [theme maxNumberOfLines];
        [self setTitleColor:theme.normalStateFontColor forState:UIControlStateNormal];
        [self setTitleColor:theme.selectedStateFontColor forState:UIControlStateSelected];
        [self setTitleColor:theme.selectedStateFontColor forState:UIControlStateHighlighted];
        [self setTitleColor:theme.disabledStateFontColor forState:UIControlStateDisabled];
        
        [self setBackgroundImage:[UIImage an_imageWithColor:theme.normalStateBackground]
                        forState:UIControlStateNormal];
        
        [self setBackgroundImage:[UIImage an_imageWithColor:theme.selectedStateBackground]
                        forState:UIControlStateSelected];
        
        [self setBackgroundImage:[UIImage an_imageWithColor:theme.selectedStateBackground]
                        forState:UIControlStateHighlighted];
        
        [self setBackgroundImage:[UIImage an_imageWithColor:theme.disabledStateBackground]
                        forState:UIControlStateDisabled];
        
        self.titleLabel.font = theme.font;
        
        self.layer.borderColor = theme.borderColor.CGColor;
        self.layer.borderWidth = theme.borderWidth;
        self.layer.cornerRadius = theme.cornerRadius;
        
        self.imageEdgeInsets = theme.imageEdgeInsets;
    }
}

@end

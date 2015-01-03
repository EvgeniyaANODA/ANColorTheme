//
//  UINavigationBar+ANThemes.m
//  Pods
//
//  Created by Oksana Kovalchuk on 1/3/15.
//
//

#import "UINavigationBar+ANThemes.h"
#import "ANHelperFunctions.h"

@implementation UINavigationBar (ANThemes)

- (void)an_updateWithTheme:(id<ANNavigationBarThemeInterface>)theme
{
    id appearance = [UINavigationBar appearance];
    if (!ANIsEmpty([theme containerClasses]))
    {
        appearance = [UINavigationBar appearanceWhenContainedIn:[[theme containerClasses] firstObject], nil]; //TODO: enumeration
    }
    //TODO: image from background color
    [appearance setBackgroundImage:[theme backgroundImage] forBarMetrics:UIBarMetricsDefault];
    
    NSDictionary* titleAttributes = @{UITextAttributeTextColor : [theme titleFontColor],
                                      UITextAttributeTextShadowColor : [UIColor clearColor]};
    
    [appearance setTitleTextAttributes:titleAttributes];
    
    if (IOS7_OR_HIGHER)
    {
        if ([theme tintColor])
        {
            [appearance setTintColor:[theme tintColor]];
        }
    }
}

@end

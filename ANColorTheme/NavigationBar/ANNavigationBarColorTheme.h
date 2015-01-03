//
//  ANNavigationBarColorTheme.h
//  Pods
//
//  Created by Oksana Kovalchuk on 1/3/15.
//
//

#import "ANNavigationBarThemeInterface.h"

@interface ANNavigationBarColorTheme : NSObject <ANNavigationBarThemeInterface>

@property (nonatomic, strong) UIColor* backgroundColor;
@property (nonatomic, strong) UIColor* tintColor;
@property (nonatomic, strong) UIColor* titleFontColor;
@property (nonatomic, strong) UIFont* titleFont;
@property (nonatomic, strong) UIImage* backgroundImage;
@property (nonatomic, strong) NSArray* containerClasses;
@property (nonatomic, assign) BOOL hideShadow;

@end

//
//  ANNavigationBarThemeInterface.h
//
//  Created by Oksana Kovalchuk on 21/12/14.
//  Copyright (c) 2014 ANODA. All rights reserved.
//


@protocol ANNavigationBarThemeInterface <NSObject>

- (UIColor*)backgroundColor;
- (UIColor*)tintColor;
- (UIColor*)titleFontColor;
- (UIFont*)titleFont;
- (UIImage*)backgroundImage;
- (NSArray*)containerClasses;

- (BOOL)hideShadow;

@end
//
//  ANColorThemeInterface.h
//  Versoos
//
//  Created by Oksana Kovalchuk on 21/12/14.
//  Copyright (c) 2014 ANODA. All rights reserved.
//

#import "ANColorThemeButtonInterface.h"

@protocol ANColorThemeInterface <NSObject>

- (id<ANColorThemeButtonInterface>)linkStyle;
- (id<ANColorThemeButtonInterface>)primaryStyle;
- (id<ANColorThemeButtonInterface>)dangerStyle;

- (UIColor*)navBarbackgroundColor;
- (UIColor*)navBarFontColor;
- (UIColor*)textGrayColor;
- (UIColor*)textLightGrayColor;

- (UIColor*)baseBackgroundColor;
- (UIColor*)baseColor;
- (UIColor*)baseFontColor;
- (UIColor*)baseTableViewSeparatorColor;

- (void)setupAppearance;

@end
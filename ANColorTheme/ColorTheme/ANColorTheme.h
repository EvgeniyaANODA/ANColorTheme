//
//  ANColorTheme.h
//
//  Created by Oksana Kovalchuk on 21/12/14.
//  Copyright (c) 2014 ANODA. All rights reserved.
//

#import "ANColorThemeInterface.h"
#import "ANColorThemeButtonInterface.h"
#import "ANNavigationBarThemeInterface.h"
#import "ANTextFieldColorThemeInterface.h"

@interface ANColorTheme : NSObject

@property (nonatomic, strong) id<ANColorThemeButtonInterface> linkStyle;
@property (nonatomic, strong) id<ANColorThemeButtonInterface> primaryStyle;
@property (nonatomic, strong) id<ANColorThemeButtonInterface> dangerStyle;

//additional
@property (nonatomic, strong) id<ANColorThemeButtonInterface> actionSheetStyle;

//socials
@property (nonatomic, strong) id<ANColorThemeButtonInterface> vkStyle;
@property (nonatomic, strong) id<ANColorThemeButtonInterface> fbStyle;
@property (nonatomic, strong) id<ANColorThemeButtonInterface> gpStyle;
@property (nonatomic, strong) id<ANColorThemeButtonInterface> linkedinStyle;
@property (nonatomic, strong) id<ANColorThemeButtonInterface> addressBookStyle;

//navigation
@property (nonatomic, strong) id<ANNavigationBarThemeInterface> navigationBarTheme;

@property (nonatomic, strong) UIColor* textGrayColor;
@property (nonatomic, strong) UIColor* textLightGrayColor;

@property (nonatomic, strong) UIColor* baseBackgroundColor;
@property (nonatomic, strong) UIColor* baseColor;
@property (nonatomic, strong) UIColor* baseFontColor;
@property (nonatomic, strong) UIColor* baseSeparatorColor;
@property (nonatomic, strong) UIColor* baseDescriptionColor;

@end

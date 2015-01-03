//
//  ANColorThemeButton.h
//
//  Created by Oksana Kovalchuk on 4/14/14.
//  Copyright (c) 2014 ANODA. All rights reserved.
//

#import "ANColorThemeButtonInterface.h"

@interface ANColorThemeButton : NSObject <ANColorThemeButtonInterface>

@property (nonatomic, strong) UIColor* normalStateBackground;
@property (nonatomic, strong) UIColor* selectedStateBackground;
@property (nonatomic, strong) UIColor* disabledStateBackground;

@property (nonatomic, strong) UIColor* normalStateFontColor;
@property (nonatomic, strong) UIColor* selectedStateFontColor;
@property (nonatomic, strong) UIColor* disabledStateFontColor;

@property (nonatomic, strong) UIColor* borderColor;
@property (nonatomic, assign) CGFloat borderWidth;
@property (nonatomic, assign) CGFloat cornerRadius;

@property (nonatomic, assign) UIEdgeInsets imageEdgeInsets;
@property (nonatomic, assign) UIEdgeInsets titleEdges;
@property (nonatomic, assign) CGFloat height;

@property (nonatomic, strong) UIFont* font;

@end

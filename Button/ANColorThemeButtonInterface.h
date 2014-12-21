//
//  ANColorThemeButtonInterface.h
//
//  Created by Oksana Kovalchuk on 21/12/14.
//  Copyright (c) 2014 ANODA. All rights reserved.
//

@protocol ANColorThemeButtonInterface <NSObject>

@property (nonatomic, strong) UIColor* normalStateBackground;
@property (nonatomic, strong) UIColor* selectedStateBackground;
@property (nonatomic, strong) UIColor* disabledStateBackground;

@property (nonatomic, strong) UIColor* normalStateFontColor;
@property (nonatomic, strong) UIColor* selectedStateFontColor;
@property (nonatomic, strong) UIColor* disabledStateFontColor;

@property (nonatomic, strong) UIColor* borderColor;
@property (nonatomic, assign) CGFloat borderWidth;
@property (nonatomic, assign) CGFloat cornerRadius;

@property (nonatomic, assign) UIEdgeInsets iconEdges;
@property (nonatomic, assign) UIEdgeInsets titleEdges;

@property (nonatomic, strong) UIFont* titleLabelFont;

@end
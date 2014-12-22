//
//  ANLabelColorTheme.h
//  CRToastDemo
//
//  Created by Oksana Kovalchuk on 22/12/14.
//  Copyright (c) 2014 Collin Ruffenach. All rights reserved.
//

#import "ANColorThemeLabelInterface.h"

@interface ANLabelColorTheme : NSObject <ANColorThemeLabelInterface>

@property (nonatomic, strong) UIFont* font;
@property (nonatomic, strong) UIColor* textColor;
@property (nonatomic, strong) NSString* predefinedText;

@property (nonatomic, assign) NSTextAlignment textAlignment;
@property (nonatomic, assign) NSUInteger maxNumberOfLines;

@property (nonatomic, strong) UIColor* shadowColor;
@property (nonatomic, assign) CGSize shadowOffset;

@end

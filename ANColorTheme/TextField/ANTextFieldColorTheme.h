//
//  ANTextFieldColorTheme.h
//  Pods
//
//  Created by Oksana Kovalchuk on 26/12/14.
//
//

#import "ANTextFieldColorThemeInterface.h"

@interface ANTextFieldColorTheme : NSObject <ANTextFieldColorThemeInterface>

@property (nonatomic, strong) UIFont* font;
@property (nonatomic, strong) UIColor* textColor;
@property (nonatomic, strong) NSString* predefinedText;
@property (nonatomic, strong) NSString* placeholder;

@property (nonatomic, assign) NSTextAlignment textAlignment;
@property (nonatomic, assign) CGFloat cornerRadius;

@end

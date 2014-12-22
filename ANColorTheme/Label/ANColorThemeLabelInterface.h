//
//  ANColorThemeLabel.h
//  Versoos
//
//  Created by Oksana Kovalchuk on 21/12/14.
//  Copyright (c) 2014 ANODA. All rights reserved.
//

@protocol ANColorThemeLabelInterface <NSObject>

- (UIFont*)font;
- (UIColor*)textColor;
- (NSTextAlignment)textAlignment;
- (UIColor*)shadowColor;
- (CGSize)shadowOffset;
- (NSUInteger)maxNumberOfLines;
- (NSString*)predefinedText;

@end

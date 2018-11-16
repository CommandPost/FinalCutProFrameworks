//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/iMovieScalableTextLayer.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface iMovieMultiTextLayer : iMovieScalableTextLayer
{
}

+ (struct CGColor *)defaultForegroundColorB;
+ (struct CGColor *)defaultForegroundColorA;
+ (id)defaultValueForKey:(id)arg1;
+ (id)micaPluginProperties;
- (id)stringWithModifiedCaseFromString:(id)arg1;
- (void)modifyAttributedString:(id)arg1 rangePtr:(struct _NSRange *)arg2 currentString:(id)arg3 fontName:(id)arg4 fontSize:(double)arg5 fontScale:(double)arg6 foregroundColor:(struct CGColor *)arg7;
- (void)customizeAttributedString:(id)arg1 fontScale:(double)arg2;
- (id)stringToDisplay;

// Remaining properties
@property(copy) NSString *fontName2; // @dynamic fontName2;
@property(copy) NSString *fontName3; // @dynamic fontName3;
@property(copy) NSString *fontName4; // @dynamic fontName4;
@property(copy) NSString *fontName5; // @dynamic fontName5;
@property double fontSize2; // @dynamic fontSize2;
@property double fontSize3; // @dynamic fontSize3;
@property double fontSize4; // @dynamic fontSize4;
@property double fontSize5; // @dynamic fontSize5;
@property struct CGColor *foregroundColor2; // @dynamic foregroundColor2;
@property struct CGColor *foregroundColor3; // @dynamic foregroundColor3;
@property struct CGColor *foregroundColor4; // @dynamic foregroundColor4;
@property struct CGColor *foregroundColor5; // @dynamic foregroundColor5;
@property BOOL shouldPutSpaceBetweenStrings; // @dynamic shouldPutSpaceBetweenStrings;
@property(copy) NSString *string2; // @dynamic string2;
@property(copy) NSString *string3; // @dynamic string3;
@property(copy) NSString *string4; // @dynamic string4;
@property(copy) NSString *string5; // @dynamic string5;
@property unsigned int stringCount; // @dynamic stringCount;

@end


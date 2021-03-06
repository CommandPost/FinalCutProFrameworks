//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CALayer.h>

#import <Flexo/iMovieMicaPlugin-Protocol.h>
#import <Flexo/iMovieMicaTimeStretching-Protocol.h>

@class NSString;

@interface iMovieTextLayer : CALayer <iMovieMicaPlugin, iMovieMicaTimeStretching>
{
    double _actualShrinkToFitFontSize;
}

+ (struct CGColor *)defaultForegroundColor;
+ (id)timeStretchableBeginTimeProperties;
+ (id)micaPluginProperties;
+ (BOOL)needsDisplayForKey:(id)arg1;
+ (id)defaultValueForKey:(id)arg1;
- (double)computeHorizontalFlushFactor;
- (unsigned char)computeHorizontalAlignment;
@property(readonly) NSString *currentHorizontalAlignmentMode;
- (unsigned char)computeLineBreakMode;
- (void)computeAscent:(double *)arg1 descent:(double *)arg2 leading:(double *)arg3 leftMargin:(double *)arg4 height:(double *)arg5 frame:(struct __CTFrame *)arg6 context:(struct CGContext *)arg7 lineBounds:(id)arg8 respectCustomLeading:(BOOL)arg9;
- (double)computeFontScaleToFitSingleLineTextInFrame:(struct __CTFrame *)arg1 context:(struct CGContext *)arg2;
- (BOOL)doesTextFitInFrame:(struct __CTFrame *)arg1 context:(struct CGContext *)arg2 fontSize:(double)arg3;
- (BOOL)hasWrappedWordInFrame:(struct __CTFrame *)arg1;
- (BOOL)isStringJapanese:(id)arg1;
- (double)textWidthForFrame:(struct __CTFrame *)arg1 context:(struct CGContext *)arg2 lineBounds:(id)arg3;
- (double)textHeightForFrame:(struct __CTFrame *)arg1 context:(struct CGContext *)arg2 lineBounds:(id)arg3;
- (double)textHeight;
- (double)getLineHeightRespectingCustomLeading:(BOOL)arg1;
- (void)getOptimalAscent:(double *)arg1 width:(double *)arg2 height:(double *)arg3;
- (id)lineBoundsForFrame:(struct __CTFrame *)arg1 context:(struct CGContext *)arg2;
- (id)attributedStringWithString:(id)arg1 fontSize:(double)arg2 fontScale:(double)arg3;
- (id)rangesThatShouldNotBeKernedInString:(id)arg1;
- (struct __CTFrame *)newFrameForString:(id)arg1 fontSize:(double)arg2 fontScale:(double)arg3 actualSize:(double *)arg4;
- (void)prepareShadowInContext:(struct CGContext *)arg1;
- (void)drawFrame:(struct __CTFrame *)arg1 context:(struct CGContext *)arg2;
- (struct __CTFont *)newCTFontWithName:(id)arg1 fontSize:(double)arg2 fontScale:(double)arg3;
- (struct CGContext *)newContext;
- (struct __CTFrame *)newFrameAndActualFontSize:(double *)arg1;
- (id)linePositionsForFrame:(struct __CTFrame *)arg1 context:(struct CGContext *)arg2 lineBounds:(id)arg3;
- (void)customizeAttributedString:(id)arg1 fontScale:(double)arg2;
- (id)stringToDisplay;
@property(readonly) double actualShrinkToFitFontScale;
@property(readonly) double actualShrinkToFitFontSize;
- (void)drawInContext:(struct CGContext *)arg1;
- (id)actionForKey:(id)arg1;

// Remaining properties
@property(copy) NSString *characterCaseMode; // @dynamic characterCaseMode;
@property(copy) NSString *characterRangeMode; // @dynamic characterRangeMode;
@property double customBaseline; // @dynamic customBaseline;
@property double customLeading; // @dynamic customLeading;
@property(copy) NSString *fontName; // @dynamic fontName;
@property double fontSize; // @dynamic fontSize;
@property struct CGColor *foregroundColor; // @dynamic foregroundColor;
@property(copy) NSString *horizontalAlignmentMode; // @dynamic horizontalAlignmentMode;
@property(copy) NSString *horizontalAlignmentModeRTL; // @dynamic horizontalAlignmentModeRTL;
@property double kerningAdjustment; // @dynamic kerningAdjustment;
@property BOOL shrinkToFit; // @dynamic shrinkToFit;
@property(copy) NSString *string; // @dynamic string;
@property double textShadowOpacity; // @dynamic textShadowOpacity;
@property BOOL tightHorizontalAlignment; // @dynamic tightHorizontalAlignment;
@property(copy) NSString *truncationMode; // @dynamic truncationMode;
@property BOOL useCustomLeading; // @dynamic useCustomLeading;
@property(copy) NSString *verticalAlignmentMode; // @dynamic verticalAlignmentMode;
@property(getter=isWrapped) BOOL wrapped; // @dynamic wrapped;

@end


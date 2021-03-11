//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class NSAttributedString, NSColor, NSMutableAttributedString, NSString;

@interface TLKTextLayer : CALayer
{
    CALayer *_rolloverBackgroundLayer;
    NSMutableAttributedString *_attrStr;
    struct CGRect _visibleBounds;
    double _fontSize;
    NSColor *_selectedTextColor;
    NSColor *_textColor;
    NSColor *_textShadowColor;
    unsigned int _selected:1;
    unsigned int _rollover:1;
    unsigned int _simpleEditingMode:1;
    struct CGSize _stringSize;
}

@property(nonatomic) struct CGSize stringSize; // @synthesize stringSize=_stringSize;
@property(retain) NSColor *textShadowColor; // @synthesize textShadowColor=_textShadowColor;
@property(retain) NSColor *selectedTextColor; // @synthesize selectedTextColor=_selectedTextColor;
@property(retain) NSColor *textColor;
- (void)setContentsScale:(double)arg1;
@property double fontSize;
@property BOOL simpleEditingMode;
@property BOOL rollover;
@property BOOL selected;
- (struct CGSize)preferredFrameSize;
@property(readonly) NSAttributedString *attributedString;
@property(copy) NSString *string;
- (void)updateStringSizeToFit;
- (void)_updateString:(id)arg1;
- (void)drawInContext:(struct CGContext *)arg1;
- (void)dealloc;
- (id)init;

@end


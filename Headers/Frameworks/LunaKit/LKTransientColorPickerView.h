//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

@class LKColorWell, NSBitmapImageRep, NSColor, NSColorSpace, NSDictionary;

@interface LKTransientColorPickerView : NSView
{
    id _target;
    SEL _selector;
    NSColor *_color;
    NSColor *_defaultColor;
    NSDictionary *_valueTextStyle;
    NSDictionary *_labelTextStyle;
    struct CGPoint _lastMouseLocation;
    double _lastMouseMovedTimestamp;
    struct CGPoint _lastMouseMovedPoint;
    BOOL _cursorSet;
    BOOL _continuous;
    unsigned long long _style;
    BOOL _isHUD;
    NSBitmapImageRep *_cachedViewImage;
    NSColorSpace *_currentColorSpace;
    NSBitmapImageRep *_pixelsForColorSampling;
    LKColorWell *_colorWell;
}

- (void)updateTrackingAreas;
- (void)trackMouseDownFromEvent:(id)arg1;
- (BOOL)updateColorFromEvent:(id)arg1;
- (void)updateColorWell;
- (id)colorFromPoint:(struct CGPoint)arg1;
- (void)drawColorInRect:(struct CGRect)arg1 color:(id)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)isOpaque;
- (void)setHUD:(BOOL)arg1;
- (BOOL)isHUD;
- (void)setContinuous:(BOOL)arg1;
- (BOOL)isContinuous;
- (void)setDefaultColor:(id)arg1;
- (id)_defaultColorSpace;
- (BOOL)_isSupportedColorSpace:(id)arg1;
- (id)defaultColor;
- (void)setColor:(id)arg1;
- (id)color;
- (void)setStyle:(unsigned long long)arg1;
- (unsigned long long)style;
- (void)setSelector:(SEL)arg1;
- (SEL)selector;
- (void)setTarget:(id)arg1;
- (id)target;
- (void)dealloc;
- (void)initTextStyles:(BOOL)arg1;
- (id)initWithFrame:(struct CGRect)arg1 forColorWell:(id)arg2;

@end


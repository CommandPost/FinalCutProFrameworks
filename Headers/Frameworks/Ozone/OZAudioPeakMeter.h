//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSImage;

@interface OZAudioPeakMeter : NSView
{
    NSImage *_meterImage[2];
    NSImage *_peakImage[2];
    struct CGSize _meterImageSize;
    struct CGSize _peakImageSize;
    struct CGRect _peakRect;
    double _minValue;
    double _value;
    double _peakLightValue;
    double _maxValue;
    double _displayValue;
    double _peakHoldValue;
    double _lastDisplayedValue;
    double _lastPeakTime;
    double _peakHoldTime;
    double _peakExpirationTime;
}

- (void)mouseDown:(id)arg1;
- (void)_resetPeakIndicator:(id)arg1;
- (double)peakLightValue;
- (void)setPeakLightValue:(double)arg1;
- (double)maxValue;
- (void)setMaxValue:(double)arg1;
- (double)value;
- (void)resetValue;
- (void)setValue:(double)arg1;
- (double)minValue;
- (void)setMinValue:(double)arg1;
- (double)_levelAdjustForDetent:(double)arg1;
- (void)_ensureValidValue;
- (void)_redraw;
- (void)drawRect:(struct CGRect)arg1;
- (void)_drawVerticalMeter:(struct CGRect)arg1 usingPeak:(id)arg2;
- (void)setPeakImage:(id)arg1 active:(BOOL)arg2;
- (void)setMeterImage:(id)arg1 active:(BOOL)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSSlider.h>

@class NSColor;

@interface LKSlider : NSSlider
{
    BOOL _centered;
    BOOL _drawCustom;
    BOOL _lightBackground;
}

+ (void)initialize;
+ (Class)backgroundViewClass;
+ (void)popUpSlider:(id)arg1 withEvent:(id)arg2;
@property(copy) NSColor *positiveDeltaTrackFillColor;
@property(copy) NSColor *negativeDeltaTrackFillColor;
- (void)setMinValue:(double)arg1;
- (void)setMaxValue:(double)arg1;
@property(nonatomic) unsigned long long trackFillMode;
@property(nonatomic) double trackCenterValue;
- (void)setLightBackground:(BOOL)arg1;
- (void)setDrawCustom:(BOOL)arg1;
- (void)setCentered:(BOOL)arg1;

@end


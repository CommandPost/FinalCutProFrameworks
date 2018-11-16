//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <LunaKit/LKSlider.h>

@interface LKColorSlider : LKSlider
{
    long long _trackingRectTag;
}

+ (void)initialize;
- (void)drawKnob:(struct CGRect)arg1;
- (void)drawBarInside:(struct CGRect)arg1 flipped:(BOOL)arg2;
- (void)renewGState;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)viewDidMoveToWindow;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)_updateTrackingRect;
- (void)_removeTrackingRect;
- (void)_updateMouseIsOver:(int)arg1;
- (void)setShowsFullGradient:(BOOL)arg1;
- (BOOL)showsFullGradient;
- (void)setGradient:(id)arg1;
- (id)gradient;
- (void)setEndColor:(id)arg1;
- (id)endColor;
- (void)setStartColor:(id)arg1;
- (id)startColor;

@end


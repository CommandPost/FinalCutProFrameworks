//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFProOSC.h>

@class FFHeReorientEffect, FFOSCWindowView, LKSegmentedControl, NSMutableArray, NSNumberFormatter;

__attribute__((visibility("hidden")))
@interface FFReorientOSC : FFProOSC
{
    FFHeReorientEffect *_effect;
    LKSegmentedControl *_keyframeButton;
    LKSegmentedControl *_resetButton;
    LKSegmentedControl *_exitButton;
    FFOSCWindowView *_reorientOverlayView;
    NSMutableArray *_channelsToCheckForkeyFrames;
    NSNumberFormatter *_numberFormatter;
}

- (void)keyFrameReorient:(id)arg1;
- (void)resetReorient:(id)arg1;
- (void)exitReorientOSC:(id)arg1;
- (void)enableOverlayWindowForNoRangeOverlap;
- (void)removeOverlayWindowForNoRangeOverlap;
- (id)keyFrameButton;
- (id)undoChannels;
- (id)channelsToCheckForKeyframes;
- (void)mouseDown:(id)arg1;
- (void)updateInfoBarWithX:(double)arg1 Y:(double)arg2 Z:(double)arg3;
- (id)getCursor;
- (BOOL)hitTest:(struct CGPoint)arg1;
- (void)dealloc;
- (id)initWithReorientEffect:(id)arg1 effectStack:(id)arg2;

@end

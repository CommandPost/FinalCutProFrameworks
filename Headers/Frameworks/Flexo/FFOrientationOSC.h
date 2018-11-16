//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFProOSC.h>

@class FFHeOrientationEffect, FFOSCWindowView, LKSegmentedControl, NSMutableArray;

__attribute__((visibility("hidden")))
@interface FFOrientationOSC : FFProOSC
{
    FFHeOrientationEffect *_effect;
    LKSegmentedControl *_keyframeButton;
    LKSegmentedControl *_resetButton;
    LKSegmentedControl *_exitButton;
    FFOSCWindowView *_reorientOverlayView;
    NSMutableArray *_channelsToCheckForKeyframesNormal;
    NSMutableArray *_channelsToCheckForKeyframesTinyPlanet;
}

- (void)addDrawProperties:(id)arg1 forTime:(CDStruct_1b6d18a9)arg2 forContainer:(id)arg3 viewBounds:(struct CGRect)arg4;
- (void)keyFrameReorient:(id)arg1;
- (void)resetReorient:(id)arg1;
- (void)exitReorientOSC:(id)arg1;
- (void)enableOverlayWindowForNoRangeOverlap;
- (void)removeOverlayWindowForNoRangeOverlap;
- (id)keyFrameButton;
- (id)undoChannels;
- (id)channelsToCheckForKeyframes;
- (void)mouseDown:(id)arg1;
- (id)getCursor;
- (BOOL)hitTest:(struct CGPoint)arg1;
- (void)dealloc;
- (id)initWithOrientationEffect:(id)arg1 effectStack:(id)arg2;

@end


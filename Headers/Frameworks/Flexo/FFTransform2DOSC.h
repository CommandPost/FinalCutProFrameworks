//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFProOSC.h>

@class FFCHObservableFolder, LKSegmentedControl, NSMutableArray, NSView;

__attribute__((visibility("hidden")))
@interface FFTransform2DOSC : FFProOSC
{
    LKSegmentedControl *_keyframeButton;
    LKSegmentedControl *_exitButton;
    NSView *_transformOverlayView;
    FFCHObservableFolder *_channelFolder;
    NSMutableArray *_channelsToCheckForkeyFrames;
}

- (void)ensureIntrinsic;
- (void)addDrawProperties:(id)arg1 forTime:(CDStruct_1b6d18a9)arg2 forContainer:(id)arg3 viewBounds:(struct CGRect)arg4;
- (void)keyFrameTransform:(id)arg1;
- (void)exitTransformOSC:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (id)keyFrameButton;
- (id)channelsToCheckForKeyframes;
- (void)enableOverlayWindowForNoRangeOverlap;
- (void)removeOverlayWindowForNoRangeOverlap;
- (void)updateInfoBarObjectStatus:(id)arg1;
- (BOOL)supportsTool:(Class)arg1;
- (BOOL)toolHandlesTranslation;
- (BOOL)handleBGTranslates;
- (BOOL)showSideScaleOSC;
- (BOOL)showRotationOSC;
- (int)oscMode;
- (BOOL)isSelectionBased;
- (void)dealloc;
- (id)initWithHeXFormEffect:(id)arg1 effectStack:(id)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LKDFRController.h"

@class NSDictionary, NSPopoverTouchBarItem, NSTouchBarItem;

__attribute__((visibility("hidden")))
@interface FFConsumerTimelineDFRController : LKDFRController
{
    NSTouchBarItem *_dfrRWPlayFFBarItem;
    NSPopoverTouchBarItem *_dfrSplitVolumePopoverBarItem;
    NSTouchBarItem *_dfrVolumeSliderBarItem;
    NSDictionary *_dfrAudioVolumeObservedChannels;
}

- (void)_updateDfrVolumeControlsFromChannel:(id)arg1;
- (long long)_percentVolumeFromChannel:(id)arg1 doubleVal:(double *)arg2;
- (void)_updateDfrVolume:(id)arg1;
- (void)_stopObservingAudioChannels;
- (void)_observeAudioChannelsOfSelectedItems:(id)arg1;
- (void)_transportControl:(id)arg1;
- (void)_sliderVolumeUp:(id)arg1;
- (void)_sliderVolumeDown:(id)arg1;
- (id)touchBar:(id)arg1 makeItemForIdentifier:(id)arg2;
- (id)makeTouchBar;
- (void)setSplitButtonEnabled:(BOOL)arg1;
- (void)setPlayButtonIsPlaying:(BOOL)arg1;
- (void)updateFunctionBarToSelection:(id)arg1;
- (void)dealloc;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FFEnhanceAudioDelegate.h"

@class FFAudioAnalysisConfigWarningStateController, FFChannelChangeController, NSArray, NSButton, NSMapTable, NSSlider, NSString, PISegmentedScrubber;

__attribute__((visibility("hidden")))
@interface FFAudioAnalysisConfigManager : NSObject <FFEnhanceAudioDelegate>
{
    NSArray *_selectedObjects;
    NSMapTable *_managerMap;
    NSArray *_observedEffectStacks;
    FFChannelChangeController *_channelChangeController;
    BOOL _pendingUpdateUI;
    NSString *_currentActionScope;
    NSButton *_loudnessEnableButton;
    NSSlider *_loudnessAmountSlider;
    PISegmentedScrubber *_loudnessAmountScrubber;
    NSSlider *_loudnessUniformitySlider;
    PISegmentedScrubber *_loudnessUniformityScrubber;
    NSButton *_noiseRemovalEnableButton;
    NSSlider *_noiseRemovalAmountSlider;
    PISegmentedScrubber *_noiseRemovalAmountScrubber;
    NSButton *_humRemovalEnableButton;
    NSArray *_humFrequencyButtons;
    FFAudioAnalysisConfigWarningStateController *_summaryWarningState;
    FFAudioAnalysisConfigWarningStateController *_loudnessWarningState;
    FFAudioAnalysisConfigWarningStateController *_noiseWarningState;
    FFAudioAnalysisConfigWarningStateController *_humWarningState;
    NSButton *_autoEnhanceButton;
    BOOL _displayEffectsSection;
}

@property(readonly, nonatomic) BOOL displayEffectsSection; // @synthesize displayEffectsSection=_displayEffectsSection;
@property(readonly, nonatomic) FFChannelChangeController *channelChangeController; // @synthesize channelChangeController=_channelChangeController;
- (void)autoEnhance:(id)arg1;
- (void)selectHumFrequency:(id)arg1;
- (void)endSegmentedScrubberAction:(id)arg1;
- (void)startSegmentedScrubberAction:(id)arg1;
- (void)endSliderAction:(id)arg1;
- (void)startSliderAction:(id)arg1;
- (void)_endActionScope:(id)arg1;
- (void)_beginActionScope:(id)arg1;
- (id)_actionNameForSender:(id)arg1;
- (void)setSliderValue:(id)arg1;
- (void)setEnable:(id)arg1;
- (void)_notifyUpdateUI;
- (void)updateUI;
- (void)_removeObserving;
- (void)_addObserving;
- (id)autoEnhanceButton;
- (void)setAutoEnhanceButton:(id)arg1;
- (void)setWarningStateController:(id)arg1 forChannelID:(unsigned int)arg2;
- (void)setSummaryWarningStateController:(id)arg1;
- (void)setRadioButtons:(id)arg1 forChannelID:(unsigned int)arg2;
- (void)setSlider:(id)arg1 scrubber:(id)arg2 forChannelID:(unsigned int)arg3;
- (void)setEnableButton:(id)arg1 forChannelID:(unsigned int)arg2;
- (void)teardownManager;
- (void)setupManagerWithSelectedObjects:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OZViewController.h"

#import "FFEnhanceAudioDelegate.h"

@class FFChannelChangeController, FFInspectorModuleTextField, LKButton, NSMutableSet, NSProProgressIndicator, NSString;

__attribute__((visibility("hidden")))
@interface FFAudioAnalysisParameterController : OZViewController <FFEnhanceAudioDelegate>
{
    LKButton *_showAudioEnhanceButton;
    LKButton *_warningIndicator;
    FFInspectorModuleTextField *_text;
    NSProProgressIndicator *_analysisSpinner;
    int _warningState;
    NSMutableSet *_managerList;
    FFChannelChangeController *_channelChangeController;
}

@property(readonly, nonatomic) FFChannelChangeController *channelChangeController; // @synthesize channelChangeController=_channelChangeController;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)updateWarningState;
- (void)updateAudioEnhanceButton;
- (void)updateStatusText;
- (void)updateStatusBadge;
- (void)showAudioEnhancements:(id)arg1;
- (void)analysisDidStart:(id)arg1;
- (void)analysisDidComplete:(id)arg1;
- (float)suggestedMaxParamWidth;
- (void)_notifyUpdateControllerUI;
- (void)_updateControllerUIOnMainThread:(id)arg1;
- (void)_updateControllerUI;
- (void)didBuildUI;
- (id)_selectedEffectStacks;
- (BOOL)addAssociatedChannel:(struct OZChannelBase *)arg1;
- (void)dealloc;
- (id)initWithChan:(struct OZChannelBase *)arg1 context:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


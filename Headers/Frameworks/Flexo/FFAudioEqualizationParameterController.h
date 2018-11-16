//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OZViewController.h"

#import "FFEnhanceAudioDelegate.h"

@class FFChannelChangeController, FFEffectStack, FFEnhanceAudioManager, FFInspectorModulePopUpButton, LKButton, NSMutableArray, NSProProgressIndicator, NSString;

__attribute__((visibility("hidden")))
@interface FFAudioEqualizationParameterController : OZViewController <FFEnhanceAudioDelegate>
{
    FFInspectorModulePopUpButton *_eqPopUp;
    LKButton *_matchButton;
    LKButton *_advancedUIButton;
    FFEffectStack *_effectStack;
    FFEnhanceAudioManager *_analysisManager;
    FFChannelChangeController *_channelChangeController;
    FFEffectStack *_savedEffectStack;
    NSProProgressIndicator *_analysisSpinner;
    int _warningState;
    BOOL _currentlyMatching;
    NSMutableArray *_managerList;
}

@property(retain, nonatomic) FFChannelChangeController *channelChangeController; // @synthesize channelChangeController=_channelChangeController;
- (void)activeToolChanged:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)retrieveContext;
- (void)selectEQMenuItems:(id)arg1;
- (void)determineWarningState;
- (void)matchComplete;
- (void)matchStarted;
- (void)hideSpinner;
- (void)_animateSpinner:(id)arg1;
- (void)_updateAnimateSpinner:(id)arg1;
- (void)_updateEQMenu;
- (id)_effectStacksFromManagerList;
- (void)didBuildUI;
- (BOOL)addAssociatedChannel:(struct OZChannelBase *)arg1;
- (void)dealloc;
- (id)initWithChan:(struct OZChannelBase *)arg1 context:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


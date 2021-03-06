//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Flexo/FFAdjustmentTool.h>

#import <Flexo/FFEnhanceAudioDelegate-Protocol.h>

@class FFAdjustmentToolSlider, FFChannelChangeController, LKButton, LKMenu, LKPopUpButton, LKTextField, NSArray, NSNumber, NSString, NSView;

@interface FFAudioEnhancementTool : FFAdjustmentTool <FFEnhanceAudioDelegate>
{
    NSView *_adjustmentToolbarView;
    NSArray *_managers;
    FFChannelChangeController *_channelChangeController;
    BOOL _observing;
    BOOL _sliderTouched;
    LKPopUpButton *_eqPopUp;
    LKButton *_noiseReductionCheckbox;
    FFAdjustmentToolSlider *_noiseReductionSlider;
    LKTextField *_noiseReductionText;
    LKTextField *_noiseReductionPercent;
    LKMenu *_eqMenu;
    NSNumber *_lastNoiseReductionAmount;
    BOOL _suspendUpdates;
}

+ (id)toolTip;
+ (id)toolbarFacetSelectedImageMixed;
+ (id)toolbarFacetImageMixed;
+ (id)toolbarFacetSelectedImageOff;
+ (id)toolbarFacetImageOff;
+ (id)toolbarFacetSelectedImageOn;
+ (id)toolbarFacetImageOn;
+ (id)displayName;
+ (void)initialize;
+ (long long)sortOrderForGroup:(id)arg1;
+ (id)groups;
@property(retain, nonatomic) FFChannelChangeController *channelChangeController; // @synthesize channelChangeController=_channelChangeController;
@property(retain, nonatomic) NSArray *managers; // @synthesize managers=_managers;
- (void)analysisDidComplete:(id)arg1;
- (void)analysisDidStart:(id)arg1;
- (void)_analysisDidStartOnMainThread:(id)arg1;
- (void)_analysisDidCompleteOnMainThread:(id)arg1;
- (void)_updateNoiseReduction:(id)arg1;
- (void)_updateHumReduction:(id)arg1;
- (id)_managerForEffectStack:(id)arg1;
- (void)setAdjustmentStateFromDictionary:(id)arg1;
- (void)resetChannelsForObject:(id)arg1;
- (id)newAdjustmentDictionaryForSelection:(id)arg1;
- (void)selectedItemsChangedFromAdjustmentDictionary:(id)arg1;
- (id)_validItemsForTool:(id)arg1;
- (void)_effectChanged:(id)arg1;
- (void)awakeFromNib;
- (id)adjustmentsToolbarView;
- (void)_setupView;
- (void)_updateView;
- (void)endSliderAction:(id)arg1;
- (void)startSliderAction:(id)arg1;
- (id)_actionNameForTag:(int)arg1;
- (void)selectEQSetting:(id)arg1;
- (void)_updateEQMenu;
- (id)_eqStates;
- (void)setNoiseReductionAmount:(id)arg1;
- (id)_noiseReductionActionString;
- (void)noiseReductionButtonToggle:(id)arg1;
- (void)_updateNoiseReductionUI;
- (void)_updateNoiseReductionSlider;
- (void)_updateNoiseReductionText;
- (void)_updateNoiseReductionButton;
- (id)_noiseReductionAmounts;
- (id)_noiseReductionStates;
- (void)_clearNoiseReductionDefaultAmount;
- (double)_noiseReductionDefaultAmount;
- (id)_objectToManagerMap;
- (void)_updateAudioAdjustState;
- (void)_refreshAdjustmentDictionary;
- (id)_effectStackToManagerMap;
- (id)_effectStacksFromManagerList;
- (void)becomeActiveTool;
- (id)onScreenControlsForTool;
- (BOOL)allowsEffectOSCs;
- (BOOL)handlesSelection;
- (void)_addObservers;
- (void)_removeObservers;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


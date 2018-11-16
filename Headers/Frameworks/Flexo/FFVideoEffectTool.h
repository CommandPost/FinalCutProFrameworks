//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFAdjustmentTool.h>

@class FFContext, LKButton, NSArray, NSView;

@interface FFVideoEffectTool : FFAdjustmentTool
{
    NSView *_adjustmentToolbarView;
    LKButton *_audioEffectPickerButton;
    LKButton *_videoEffectPickerButton;
    NSArray *_effectIDs;
    BOOL _selectionHasVideo;
    BOOL _selectionHasAudio;
    BOOL _playing;
    FFContext *_observedContext;
    BOOL _projectFilterMode;
}

+ (id)displayNameForCell:(int)arg1;
+ (BOOL)setActiveEffect:(id)arg1 forCell:(int)arg2 error:(id *)arg3;
+ (id)activeEffectForEffectStack:(id)arg1;
+ (void)populateCellLayers:(id)arg1;
+ (id)audioEffectIDs;
+ (int)audioCellForEffect:(id)arg1;
+ (id)videoEffectIDs;
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
@property(nonatomic) BOOL projectFilterMode; // @synthesize projectFilterMode=_projectFilterMode;
- (void)runModalAudioEffectPicker:(id)arg1;
- (int)_audioCellForEffect:(id)arg1;
- (void)timeRateChangedForContext:(id)arg1;
- (void)_setObservedContext:(id)arg1;
- (void)_updateObservedContext;
- (void)_updatePlayingState;
- (void)_updateEffectPickerButtons;
- (BOOL)skims;
- (id)adjustmentsToolbarView;
- (void)resetChannelsForObject:(id)arg1;
- (void)resetTool:(id)arg1;
- (void)_removeVideoEffectPickerEffect:(id)arg1;
- (void)setAdjustmentStateFromDictionary:(id)arg1;
- (id)newAdjustmentDictionaryForSelection:(id)arg1;
- (id)_effectPickerEffectID:(id)arg1;
- (BOOL)_validVideoEffectToolEffectID:(id)arg1;
- (void)runModalVideoEffectPicker:(id)arg1;
- (void)resignActiveTool;
- (void)becomeActiveTool;
- (void)dealloc;
- (id)init;
- (BOOL)allowsEffectOSCs;
- (BOOL)handlesSelection;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProInspector/OZFolderGroupController.h>

@class FFAddMaskButton, FFAnchoredObject, FFButtonWithRolloverHighlight, FFChannelChangeController, FFEffect, LKButton, LKMenu, LKPopUpButton, NSTrackingArea;

__attribute__((visibility("hidden")))
@interface FFInspectorModuleColorHeaderController : OZFolderGroupController
{
    LKButton *_pEnableButton;
    LKPopUpButton *_colorEffectPicker;
    LKButton *_resetButton;
    FFButtonWithRolloverHighlight *_keyFrameBackward;
    FFButtonWithRolloverHighlight *_keyFrameForward;
    LKButton *_keyFrame;
    FFAddMaskButton *_addMask;
    LKButton *_addBalanceButton;
    int _keyFrameAtTime;
    LKMenu *_viewMenu;
    FFAnchoredObject *_selectedItem;
    FFEffect *_selectedEffect;
    BOOL _outsideCorrection;
    FFChannelChangeController *_channelChangeController;
    BOOL _transactionStarted;
    NSTrackingArea *_pTrackingArea;
    BOOL _mouseOver;
    BOOL _lastMouseOver;
}

- (BOOL)isMouseInLabelView:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (struct OZChannelBase *)associatedChannel;
- (void)_libraryClosed:(id)arg1;
- (void)_removeSelectedItemObserving;
- (void)_addSelectedItemObserving;
- (void)didBuildUI;
- (void)update;
- (void)getSelectedControllers:(id)arg1 doShallowSearch:(BOOL)arg2;
- (BOOL)isSelected;
- (void)dealloc;
- (void)_updateControllerDataForSelected;
- (void)_updateSelectedState:(id)arg1;
- (void)_updateSelectedEnable;
- (void)_updateControllerData;
- (void)updateEnableStateAndKeyframesForEffect;
- (id)initWithChan:(struct OZChannelBase *)arg1 context:(id)arg2;
- (void)setToolTipForState:(BOOL)arg1;
- (id)imageForAnimState:(int)arg1 altImage:(BOOL)arg2 withIsMouseOver:(BOOL)arg3;
- (id)getStatusImageWithDirection:(int)arg1 andState:(int)arg2;
- (void)enableObject:(id)arg1;
- (id)_rebuildViewMenu;
- (void)addEffectItemViewMenu:(id)arg1;
- (void)removeKeyframeColorBoard:(id)arg1;
- (void)addKeyframeColorBoard:(id)arg1;
- (void)addRemoveKeyframeColorBoard:(id)arg1;
- (void)setCurveDoubleValue:(id)arg1 channelID:(unsigned int)arg2 time:(CDStruct_1b6d18a9)arg3;
- (void)removeKeyframeAtTime:(id)arg1 channelID:(unsigned int)arg2 time:(CDStruct_1b6d18a9)arg3;
- (BOOL)channelhasKeyframeAtTime:(id)arg1 channelID:(unsigned int)arg2 time:(CDStruct_1b6d18a9)arg3;
- (BOOL)channelhasKeyframe:(id)arg1 channelID:(unsigned int)arg2;
- (void)nextKeyframe:(id)arg1;
- (void)previousKeyframe:(id)arg1;
- (void)deleteCorrection:(id)arg1;
- (void)resetAllCorrections:(id)arg1;
- (void)resetChannelFolder:(id)arg1 ccc:(id)arg2;
- (void)resetOutsideCorrection:(id)arg1;
- (void)resetInsideCorrection:(id)arg1;
- (void)pasteMasks:(id)arg1;
- (void)copyMasks:(id)arg1;
- (void)invertMasks:(id)arg1;
- (void)addIsolationMask:(id)arg1;
- (id)_addIsolationMaskWithHandler:(CDUnknownBlockType)arg1;
- (void)addImprovedEllipseMask:(id)arg1;
- (BOOL)_addMaskOfClass:(Class)arg1 actionName:(id)arg2 maskHandler:(CDUnknownBlockType)arg3 error:(id *)arg4;
- (BOOL)validateMenuItem:(id)arg1;
- (void)addCustomMenuItems:(id)arg1;
- (id)customKeyframeTitle;
- (BOOL)shouldShowAdvancedResetOptions;
- (BOOL)shouldShowMasks;
- (BOOL)shouldDisableKeyframeItems;
- (void)reset:(id)arg1;
- (void)selectColorEffect:(id)arg1;
- (id)_mask;
- (id)_effect;
- (id)_representedObject;
- (id)singleChannelForTimingForColorEffect;
- (void)endUndoTransaction;
- (void)beginUndoTransaction;
- (BOOL)presentError:(id)arg1;
- (id)effectStack;
- (void)balanceSelectedColorEffectInStack;

@end


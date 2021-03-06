//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSResponder.h>

@interface FFTool : NSResponder
{
    id _currentTarget;
    unsigned int _adjustmentState;
    id _module;
}

+ (id)toolbarFacetSelectedImageMixed;
+ (id)toolbarFacetImageMixed;
+ (id)toolbarFacetSelectedImageOff;
+ (id)toolbarFacetImageOff;
+ (id)toolbarFacetSelectedImageOn;
+ (id)toolbarFacetImageOn;
+ (id)cursor;
+ (id)toolTip;
+ (long long)sortOrderForGroup:(id)arg1;
+ (id)groups;
+ (id)toolTipDescriptionDisabled;
+ (id)displayName;
+ (BOOL)isToolForTLKEventHandler:(id)arg1;
+ (id)TLKEventHandlerID;
@property(retain) id module; // @synthesize module=_module;
- (id)firstMotionEffectOnItem:(id)arg1;
- (BOOL)isToolClassOrSubToolClassOf:(Class)arg1;
- (unsigned int)adjustmentState;
- (void)setAdjustmentState:(unsigned int)arg1;
- (void)ensureSourceCropisValidForSimmableAndTool:(id)arg1;
- (BOOL)isMatchTool;
- (BOOL)isModalTool;
- (BOOL)shouldMakeIntrinsicsForEffectStack;
- (BOOL)isSourceCropTool;
- (BOOL)isCropTool;
- (id)adjustmentsToolbarView;
- (id)matchWindow;
- (id)playerAccessoryView;
- (id)playerFooterView;
- (id)onScreenControlsForTool;
- (BOOL)allowsEffectOSCsIfPrimaryObject;
- (BOOL)allowsEffectOSCs;
- (BOOL)allowInspectorToTrackSelection;
- (void)selectedItemsChanged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (BOOL)editsItem:(id)arg1 target:(id)arg2 event:(id)arg3;
- (BOOL)handlesItem:(id)arg1 target:(id)arg2 event:(id)arg3;
- (BOOL)supportsMultipleSelection;
- (BOOL)skims;
- (void)didMouseDownOnCanvas:(id)arg1 target:(id)arg2;
- (BOOL)hitTest:(id)arg1;
- (BOOL)handlesSelection;
- (void)resignActiveTool;
- (void)becomeActiveTool;
- (void)setCurrentTarget:(id)arg1;
- (id)currentTarget;
- (void)dealloc;
- (void)cursorUpdate:(id)arg1;
- (void)didRemoveAsHandlerForTimeline:(id)arg1;
- (void)willRemoveAsHandlerForTimeline:(id)arg1;
- (void)willSetAsHandlerForTimeline:(id)arg1;
- (id)TLKEventHandlerForTimeline:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

#import <Flexo/CALayerDelegate-Protocol.h>
#import <Flexo/FFResponderLayerHost-Protocol.h>

@class FFResponderLayer, FFResponderLayerHostViewTrackingAreaOwner, NSMapTable, NSString, NSTrackingArea;

__attribute__((visibility("hidden")))
@interface FFResponderLayerHostView : NSView <FFResponderLayerHost, CALayerDelegate>
{
    NSTrackingArea *_trackingArea;
    FFResponderLayer *_trackedLayer;
    id _trackedPart;
    NSMapTable *_trackedRolloverParts;
    BOOL _suppressAnimation;
    BOOL _cancelDragOnEscape;
    id _focusOwner;
    FFResponderLayerHostViewTrackingAreaOwner *_trackingAreaOwner;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL cancelDragOnEscape; // @synthesize cancelDragOnEscape=_cancelDragOnEscape;
- (id)accessibilityFocusedUIElement;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (void)flagsChanged:(id)arg1;
- (void)keyUp:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)acceptsFirstResponder;
- (BOOL)canBecomeKeyView;
- (void)_updateCursorAtPoint:(struct CGPoint)arg1 event:(id)arg2;
- (BOOL)handlePerformKeyEquivalent:(id)arg1;
- (void)_updateRolloverStateForMouseExitedEvent:(id)arg1;
- (void)_flagsChangedDuringRollover:(id)arg1;
- (void)_updateRolloverStateForMouseUpEnteredOrMovedEvent:(id)arg1;
- (void)_removeOrphansFromTrackedRolloverParts;
- (void)_flagsChangedDuringDrag:(id)arg1;
- (void)_stopDrag:(id)arg1;
- (void)_cancelDrag:(id)arg1;
- (BOOL)_continueDrag:(id)arg1;
- (BOOL)_startDrag:(id)arg1;
- (id)accessibilityParentForResponderLayer:(id)arg1;
- (void)setSkimmingPlayheadHidden:(BOOL)arg1;
- (void)responderLayer:(id)arg1 needsHeightChanged:(double)arg2;
@property id focusOwner;
- (id)hostView;
- (void)_resetCADelegatesOfLayers:(id)arg1;
- (void)_configureCADelegatesOfLayer:(id)arg1 isResponderLayerDescendant:(BOOL)arg2 outLayers:(id)arg3;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (BOOL)layer:(id)arg1 shouldInheritContentsScale:(double)arg2 fromWindow:(id)arg3;
- (void)setLayer:(id)arg1;
- (id)menuForEvent:(id)arg1;
- (void)unhandledCursorUpdateAtPoint:(struct CGPoint)arg1 event:(id)arg2;
- (void)unhandledKeyUp:(id)arg1;
- (void)unhandledKeyDown:(id)arg1;
- (void)unhandledMouseDown:(id)arg1;
- (void)endToolTipTrackingForLayer:(id)arg1;
- (void)beginToolTipTrackingForLayer:(id)arg1;
- (void)_clearTrackingInfoForLayer:(id)arg1;
- (void)_setTrackingInfo:(id)arg1 forLayer:(id)arg2;
- (struct CGPoint)_eventLocationInBase:(id)arg1;
- (id)_responderLayerAtPoint:(struct CGPoint)arg1;
- (id)_responderLayersAtPoint:(struct CGPoint)arg1;
- (void)_setTrackedLayer:(id)arg1 part:(id)arg2;
- (BOOL)_isDescendantLayer:(id)arg1;
- (BOOL)_supressAnimation;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_commonInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


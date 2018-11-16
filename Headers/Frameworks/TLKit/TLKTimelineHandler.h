//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TLKEventHandler.h"

@class CALayer, TLKItemSkimmingLayer, TLKTimelineView;

@interface TLKTimelineHandler : TLKEventHandler
{
    TLKItemSkimmingLayer *_itemSkimmingLayer;
    CALayer *_itemSkimmingFrameLayer;
    CDStruct_1b6d18a9 _skimmedTime;
    struct {
        unsigned int hideSkimmingPlayhead:1;
        unsigned int gearDownActive:1;
        unsigned int RESERVED:30;
    } _tlkTimelineHandlerFlags;
}

@property CDStruct_1b6d18a9 skimmedTime; // @synthesize skimmedTime=_skimmedTime;
- (BOOL)hasPressedHandler:(id)arg1;
- (void)updateSelectionWithClickedItem:(id)arg1 modifierFlags:(unsigned long long)arg2;
- (id)selectedItemsIncludingEntireRanges;
- (id)_selectableItemsFromArray:(id)arg1;
- (BOOL)_canSelectItem:(id)arg1 byExtendingSelection:(BOOL)arg2;
- (void)doubleClickedItemBackground:(id)arg1;
- (void)movePlayheadToCurrentPosition:(id)arg1;
- (void)exitRollover:(id)arg1;
- (void)updateRollover:(id)arg1;
- (BOOL)enterRollover:(id)arg1;
- (void)_updateOuterHandleRolloverWithPartArray:(id)arg1;
- (BOOL)performKeyEquivalent:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1 dispatcher:(id)arg2;
- (void)resumeHandling:(id)arg1;
- (void)stopHandling:(id)arg1;
- (BOOL)stopTracking:(id)arg1;
- (void)pauseHandling:(id)arg1;
- (BOOL)startTracking:(id)arg1;
- (void)flagsChanged:(id)arg1;
- (void)viewBoundsDidChange:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)updateItemSkimmingForItem:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2 snapped:(BOOL)arg3;
- (BOOL)itemSkimmingIndicatorActive;
- (void)stopItemSkimming;
- (void)hideItemSkimmingIndicator;
- (void)displayItemSkimmingIndicatorForItem:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2 snapped:(BOOL)arg3 unsnappedTime:(CDStruct_1b6d18a9)arg4;
- (void)displayItemSkimmingIndicatorForItem:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2 snapped:(BOOL)arg3;
- (BOOL)_shouldSkimItem:(id)arg1 atTime:(CDStruct_1b6d18a9 *)arg2 didSnap:(char *)arg3;
- (BOOL)shouldSkimItem:(id)arg1;
- (id)_itemToSkimInPartArray:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2;
- (id)_itemInContainer:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2;
- (BOOL)itemLevelSkimmingEnabled;
- (BOOL)shouldSkimPlayhead;
- (void)updateSkimming:(id)arg1;
- (void)stopSkimming:(id)arg1;
- (BOOL)isSkimmingPlayheadHidden;
- (void)hideSkimmingPlayhead:(BOOL)arg1;
- (void)_updateGearFactorIsActiveWithModifierFlags:(unsigned long long)arg1;
- (double)gearFactor;
- (BOOL)isGearDownActive;
- (void)restoreVisibleRectState:(id)arg1 withCurrentPoint:(struct CGPoint *)arg2 previousPoint:(struct CGPoint *)arg3;
- (id)savedVisibleRectStateIgnoringItems:(id)arg1 withCurrentPoint:(struct CGPoint)arg2 previousPoint:(struct CGPoint)arg3;
- (BOOL)shouldAutoscroll:(id)arg1;
- (BOOL)allowsDraggingOutsideInitialContainer;
- (BOOL)isViewFirstResponder;
- (BOOL)trimModeOn;
- (BOOL)timePreservingModeOn;
- (BOOL)isDraggingLeadingEdge;
- (int)autoscrollDirection;
@property(readonly) TLKTimelineView *timelineView;
- (void)dealloc;

@end


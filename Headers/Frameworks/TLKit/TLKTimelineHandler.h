//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TLKEventDispatcher/TLKEventHandler.h>

#import <TLKit/CALayerDelegate-Protocol.h>

@class CALayer, NSString, TLKItemSkimmingLayer, TLKTimelineView;
@protocol TLKTimelineItem;

@interface TLKTimelineHandler : TLKEventHandler <CALayerDelegate>
{
    double _cumulativeMagnifyDelta;
    TLKItemSkimmingLayer *_itemSkimmingLayer;
    CALayer *_itemSkimmingFrameLayer;
    CDStruct_1b6d18a9 _skimmedTime;
    double _timerStarted;
    id <TLKTimelineItem> _curveEditorDraggedItem;
    struct {
        unsigned int hideSkimmingPlayhead:1;
        unsigned int gearDownActive:1;
        unsigned int firstResponderTimerStarted:1;
        unsigned int itemSkimmingStopped:1;
        unsigned int allowPressAndHold:1;
        unsigned int RESERVED:27;
    } _tlkTimelineHandlerFlags;
}

@property CDStruct_1b6d18a9 skimmedTime; // @synthesize skimmedTime=_skimmedTime;
- (id)stringForToolTipAtPoint:(struct CGPoint)arg1 dispatcher:(id)arg2;
- (id)_lookupToolTipForHandler:(id)arg1 itemTypeName:(id)arg2 topPart:(id)arg3 edgePart:(id)arg4;
- (id)_nameForEditingMode:(int)arg1;
- (void)smartMagnifyWithEvent:(id)arg1;
- (void)magnifyWithEvent:(id)arg1;
- (void)beginGestureWithEvent:(id)arg1;
- (BOOL)hasPressedHandler:(id)arg1;
- (id)selectedItemsIncludingEntireRanges;
- (void)updateSelectionWithClickedItem:(id)arg1 modifierFlags:(unsigned long long)arg2;
- (void)_updateSelectionForShiftClickedItem:(id)arg1;
- (id)_itemComponentsForShiftClickedItem:(id)arg1;
- (id)_itemComponentsForWrappingShiftClickedItem:(id)arg1;
- (id)_findItemComponentsInRect:(struct CGRect)arg1 forContainerInfo:(id)arg2;
- (id)findItemComponentsIntersectingRect:(struct CGRect)arg1;
- (struct CGRect)_clipTransitionsFromRect:(struct CGRect)arg1 ofItem:(id)arg2;
- (id)_selectableItemsFromArray:(id)arg1;
- (BOOL)_canSelectItem:(id)arg1 byExtendingSelection:(BOOL)arg2;
- (id)selectedItemsIncludingEntireRangesWithClickedItem:(id)arg1;
- (BOOL)isInBottomOfClip:(id)arg1;
- (BOOL)audioOnlyClip:(id)arg1;
- (id)_topPartItemInfo:(id)arg1;
- (BOOL)insideRangeSelection:(id)arg1;
- (void)doubleClickedItemComponent:(id)arg1;
- (void)doubleClickedPlaceHolder:(id)arg1;
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
- (void)mouseExited:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)_becomeFirstResponder;
- (void)_clearTimer;
- (void)_startTimer:(BOOL)arg1;
- (BOOL)shouldUpdateSkimmerPosition;
- (void)updateItemSkimmingForItem:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2 snapped:(BOOL)arg3;
- (BOOL)itemSkimmingIndicatorActive;
- (void)stopItemSkimming;
- (void)hideItemSkimmingIndicator;
- (void)displayItemSkimmingIndicatorForItem:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2 snapped:(BOOL)arg3 unsnappedTime:(CDStruct_1b6d18a9)arg4;
- (void)displayItemSkimmingIndicatorForItem:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2 snapped:(BOOL)arg3;
- (BOOL)_shouldSkimItem:(id)arg1 atTime:(CDStruct_1b6d18a9 *)arg2 didSnap:(char *)arg3;
- (BOOL)shouldSkimItem:(id)arg1;
- (id)_itemToSkimInPartArray:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2 andPoint:(struct CGPoint)arg3;
- (BOOL)showItemSkimmerFrameIndicator;
- (BOOL)itemLevelSkimmingEnabled;
- (BOOL)shouldSkimPlayhead;
- (void)updateSkimming:(id)arg1;
- (void)stopSkimming:(id)arg1;
- (BOOL)isSkimmingPlayheadHidden;
- (void)hideSkimmingPlayhead:(BOOL)arg1;
- (struct CGRect)adjustItemSkimmerFrame:(struct CGRect)arg1 atLocation:(double)arg2;
- (struct _TLKRange)locationRangeForTime:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)timeForPoint:(struct CGPoint)arg1;
- (void)_updateGearFactorIsActiveWithModifierFlags:(unsigned long long)arg1;
- (double)gearFactor;
- (void)setGearDownActive:(BOOL)arg1;
- (BOOL)isGearDownActive;
- (void)restoreVisibleRectState:(id)arg1 withCurrentPoint:(struct CGPoint *)arg2 previousPoint:(struct CGPoint *)arg3;
- (id)savedVisibleRectStateIgnoringItems:(id)arg1 withCurrentPoint:(struct CGPoint)arg2 previousPoint:(struct CGPoint)arg3;
- (BOOL)allowsDraggingOutsideInitialContainer;
- (BOOL)isViewFirstResponder;
- (BOOL)trimModeOn;
- (BOOL)timePreservingModeOn;
- (void)setReloadLayersOnDurationChange:(BOOL)arg1;
- (BOOL)reloadLayersOnDurationChange;
@property BOOL allowPressAndHold;
@property id <TLKTimelineItem> curveEditorDraggedItem;
- (id)draggedItem;
- (BOOL)isDraggingLeadingEdge;
- (int)trimType;
- (int)autoscrollDirection;
@property(readonly) TLKTimelineView *timelineView;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


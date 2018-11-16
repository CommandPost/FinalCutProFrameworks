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

- (void)dealloc;
@property(readonly) TLKTimelineView *timelineView;
- (int)autoscrollDirection;
- (BOOL)isDraggingLeadingEdge;
- (BOOL)timePreservingModeOn;
- (BOOL)trimModeOn;
- (BOOL)isViewFirstResponder;
- (BOOL)allowsDraggingOutsideInitialContainer;
- (BOOL)shouldAutoscroll:(id)arg1;
- (id)savedVisibleRectStateIgnoringItems:(id)arg1 withCurrentPoint:(struct CGPoint)arg2 previousPoint:(struct CGPoint)arg3;
- (void)restoreVisibleRectState:(id)arg1 withCurrentPoint:(struct CGPoint *)arg2 previousPoint:(struct CGPoint *)arg3;
- (BOOL)isGearDownActive;
- (double)gearFactor;
- (void)_updateGearFactorIsActiveWithModifierFlags:(unsigned long long)arg1;
- (void)hideSkimmingPlayhead:(BOOL)arg1;
- (BOOL)isSkimmingPlayheadHidden;
- (void)stopSkimming:(id)arg1;
- (void)updateSkimming:(id)arg1;
- (BOOL)shouldSkimPlayhead;
- (BOOL)itemLevelSkimmingEnabled;
- (id)_itemInContainer:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2;
- (id)_itemToSkimInPartArray:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2;
- (BOOL)shouldSkimItem:(id)arg1;
- (BOOL)_shouldSkimItem:(id)arg1 atTime:(CDStruct_1b6d18a9 *)arg2 didSnap:(char *)arg3;
- (void)displayItemSkimmingIndicatorForItem:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2 snapped:(BOOL)arg3;
- (void)displayItemSkimmingIndicatorForItem:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2 snapped:(BOOL)arg3 unsnappedTime:(CDStruct_1b6d18a9)arg4;
- (void)hideItemSkimmingIndicator;
- (void)stopItemSkimming;
- (BOOL)itemSkimmingIndicatorActive;
- (void)updateItemSkimmingForItem:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2 snapped:(BOOL)arg3;
- (void)_stationaryFire:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)viewBoundsDidChange:(id)arg1;
- (void)flagsChanged:(id)arg1;
- (BOOL)startTracking:(id)arg1;
- (void)pauseHandling:(id)arg1;
- (BOOL)stopTracking:(id)arg1;
- (void)stopHandling:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1 dispatcher:(id)arg2;
- (BOOL)performKeyEquivalent:(id)arg1;
- (void)_updateOuterHandleRolloverWithPartArray:(id)arg1;
- (BOOL)enterRollover:(id)arg1;
- (void)updateRollover:(id)arg1;
- (void)exitRollover:(id)arg1;
- (void)movePlayheadToCurrentPosition:(id)arg1;
- (void)doubleClickedItemBackground:(id)arg1;
@property CDStruct_1b6d18a9 skimmedTime; // @synthesize skimmedTime=_skimmedTime;

@end


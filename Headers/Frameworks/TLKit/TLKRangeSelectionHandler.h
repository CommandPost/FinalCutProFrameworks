//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TLKit/TLKTimelineHandler.h>

@class TLKAbstractRangeSelectionLayer, TLKItemLayer;

@interface TLKRangeSelectionHandler : TLKTimelineHandler
{
    TLKItemLayer *_clickedLayer;
    TLKAbstractRangeSelectionLayer *_rangeLayer;
    struct CGPoint _initialPoint;
    struct {
        unsigned int simpleCursors:1;
        unsigned int draggingLeftHandle:1;
        unsigned int draggingRightHandle:1;
        unsigned int draggingSelection:1;
        unsigned int rollover:1;
        unsigned int beginSelectionHistoryGrouping:1;
        unsigned int singleClickSelectsClip:1;
        unsigned int RESERVED:25;
    } _dhFlags;
}

- (BOOL)shouldAutoscroll:(id)arg1;
- (void)clickedInBackground:(id)arg1;
- (void)exitRollover:(id)arg1;
- (BOOL)enterRollover:(id)arg1;
- (id)cursorAtPoint:(struct CGPoint)arg1 dispatcher:(id)arg2;
- (void)cancelTracking:(id)arg1;
- (BOOL)stopTracking:(id)arg1;
- (void)trackingStoppedNothingEdited:(id)arg1;
- (id)clickedItem;
- (BOOL)shouldSkimItem:(id)arg1;
- (BOOL)continueTracking:(id)arg1;
- (BOOL)startTracking:(id)arg1;
- (void)prepareForPressAndHold:(id)arg1;
- (void)setSelectedRangeFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2;
- (id)primaryItemForItem:(id)arg1;
- (BOOL)_initializeTrackingState:(id)arg1 atPoint:(struct CGPoint)arg2;
- (id)rangeLayerAtCurrentPoint:(struct CGPoint)arg1;
- (id)clickedLayer;
- (void)applyConfiguration:(id)arg1;
- (BOOL)isDraggingLeadingEdge;
- (void)dealloc;

@end


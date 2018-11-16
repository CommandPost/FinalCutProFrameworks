//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TLKit/TLKTimelineHandler.h>

@class TLKItemLayer, TLKRangeSelectionLayer;

@interface TLKRangeSelectionHandler : TLKTimelineHandler
{
    TLKItemLayer *_clickedLayer;
    TLKRangeSelectionLayer *_rangeLayer;
    double _initialX;
    struct {
        unsigned int draggingLeftHandle:1;
        unsigned int draggingRightHandle:1;
        unsigned int draggingSelection:1;
        unsigned int rollover:1;
        unsigned int beginSelectionHistoryGrouping:1;
        unsigned int RESERVED:27;
    } _dhFlags;
}

- (void)_setSelectedRangeStart:(double)arg1 andRangeEnd:(double)arg2;
- (BOOL)isDraggingLeadingEdge;
- (BOOL)startTracking:(id)arg1;
- (BOOL)continueTracking:(id)arg1;
- (BOOL)shouldSkimItem:(id)arg1;
- (BOOL)stopTracking:(id)arg1;
- (void)cancelTracking:(id)arg1;
- (id)cursorAtPoint:(struct CGPoint)arg1 dispatcher:(id)arg2;
- (BOOL)enterRollover:(id)arg1;
- (void)exitRollover:(id)arg1;
- (void)clickedInBackground:(id)arg1;

@end

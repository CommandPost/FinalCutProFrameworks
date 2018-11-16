//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TLKit/TLKTimelineHandler.h>

@class NSString, TLKItemLayer, TLKSimpleTrimEdgeBox;

@interface TLKDragEdgesHandler : TLKTimelineHandler
{
    id <TLKTimelineItem> _clickedItem;
    id <TLKTimelineItem> _draggedItem;
    id <TLKTimelineItem> _adjacentItem;
    id <TLKTimelineItem> _container;
    TLKItemLayer *_clickedLayer;
    int _trimType;
    int _edgeType;
    NSString *_draggedPart;
    CDStruct_1b6d18a9 _originalStartTime;
    CDStruct_1b6d18a9 _deltaTime;
    struct CGPoint _originalPoint;
    double _originalLocation;
    double _offset;
    double _scrollDelta;
    double _originalClipWidth;
    double _draggingClipWidth;
    CDStruct_1b6d18a9 _draggingTimeToKeepStatic;
    double _draggingLocationToKeepStatic;
    double _geardownCursorOffset;
    double _originDeltaAfterAutoscroll;
    double _thumbnailAdjustment;
    struct CGRect _timecodeDisplayRect;
    TLKSimpleTrimEdgeBox *_trimEdgeBoxLayer;
    struct {
        unsigned int simpleCursors:1;
        unsigned int useTrimmingEdge:1;
        unsigned int draggingLeadingEdge:1;
        unsigned int draggingTrailingEdge:1;
        unsigned int rollover:1;
        unsigned int beginSelectionHistoryGrouping:1;
        unsigned int hiddenSkimmingLine:1;
        unsigned int draggingTransition:1;
        unsigned int draggingAnchoredObject:1;
        unsigned int draggingAudioComponent:1;
        unsigned int draggingSplitEdit:1;
        unsigned int mouseDidMove:1;
        unsigned int isRollTrim:1;
        unsigned int isRippleTrim:1;
        unsigned int atMediaLimits:1;
        unsigned int selectedAudioComponentEdges:1;
        unsigned int terminalTransition:1;
        unsigned int RESERVED:15;
    } _dhFlags;
}

+ (CDStruct_1b6d18a9)staticTimeWhenTrimmingEdge:(id)arg1 trimType:(int)arg2 ofItem:(id)arg3 inTimelineView:(id)arg4;
@property(retain) id <TLKTimelineItem> container; // @synthesize container=_container;
@property(retain, nonatomic) id <TLKTimelineItem> adjacentItem; // @synthesize adjacentItem=_adjacentItem;
@property NSString *draggedPart; // @synthesize draggedPart=_draggedPart;
@property(retain) TLKItemLayer *clickedLayer; // @synthesize clickedLayer=_clickedLayer;
@property(retain) id <TLKTimelineItem> draggedItem; // @synthesize draggedItem=_draggedItem;
@property(retain) id <TLKTimelineItem> clickedItem; // @synthesize clickedItem=_clickedItem;
- (int)autoscrollDirection;
@property(readonly) double draggingClipWidth;
- (double)_calculateCurrentLocation:(double)arg1 cursorPosition:(double)arg2;
- (void)_updateItemInfo:(id)arg1;
- (void)exitRollover:(id)arg1;
- (void)updateRollover:(id)arg1;
- (BOOL)enterRollover:(id)arg1;
- (id)cursorAtPoint:(struct CGPoint)arg1 dispatcher:(id)arg2;
- (id)cursorNameAtPoint:(struct CGPoint)arg1 dispatcher:(id)arg2;
- (CDStruct_1b6d18a9)_visibleEndTimeOfItem:(id)arg1;
- (CDStruct_1b6d18a9)_endTimeOfItem:(id)arg1;
- (CDStruct_1b6d18a9)_endTimeOfItemInContainerSpace:(id)arg1;
- (CDStruct_1b6d18a9)_visibleStartTimeOfItem:(id)arg1;
- (CDStruct_1b6d18a9)_startTimeOfItem:(id)arg1;
- (CDStruct_1b6d18a9)_startTimeOfItemInContainerSpace:(id)arg1;
- (BOOL)_itemHasValidLayoutInfo:(id)arg1;
- (BOOL)isSplitEdit;
- (BOOL)rollOver;
- (CDStruct_1b6d18a9)_visibleDurationOfItem:(id)arg1;
- (BOOL)_itemIsGap:(id)arg1;
- (BOOL)_itemIsLastSpineItem:(id)arg1;
- (BOOL)_itemIsFirstSpineItem:(id)arg1;
- (BOOL)_itemIsSpineItem:(id)arg1;
- (BOOL)_itemIsAudioComponent:(id)arg1;
- (id)_itemAfterItem:(id)arg1;
- (id)_itemBeforeItem:(id)arg1;
- (id)_itemAdjacentToEdge:(id)arg1 ofItem:(id)arg2;
- (BOOL)_item:(id)arg1 hasTransitionAtEdge:(id)arg2;
- (BOOL)isGearDownActive;
@property(readonly, nonatomic) int movementType;
- (BOOL)shouldMoveEdgeUsingDelta;
- (CDStruct_1b6d18a9)timeToKeepStatic;
- (double)_offsetOfEdgeFromPoint:(struct CGPoint)arg1;
- (id)itemToDrag:(id)arg1;
- (id)clickedItem:(id)arg1;
- (BOOL)shouldPerformResize;
- (BOOL)shouldPerformRipple:(id)arg1;
- (BOOL)shouldPerformRoll:(id)arg1;
- (id)partToDrag:(id)arg1;
- (void)autoscrollWithChange:(struct CGRect)arg1 andAfter:(struct CGRect)arg2;
- (BOOL)isDraggingLeadingEdge;
- (void)resumeHandling:(id)arg1;
- (void)pauseHandling:(id)arg1;
- (void)stopHandling:(id)arg1;
- (void)cancelTracking:(id)arg1;
- (double)gearFactor;
- (BOOL)stopTracking:(id)arg1;
- (BOOL)stopTrackingWithCommit:(BOOL)arg1;
- (BOOL)continueTracking:(id)arg1;
- (CDStruct_1b6d18a9)moveEdgeToPoint:(struct CGPoint)arg1;
- (CDStruct_1b6d18a9)_timeOffsetForMovingEdgeToPoint:(struct CGPoint)arg1;
- (CDStruct_1b6d18a9)_timeOffsetForDraggingTransitionFromLocation:(double)arg1 toLocation:(double)arg2;
- (void)updateTimecodeDisplayWithOffset:(CDStruct_1b6d18a9)arg1;
- (void)_resolveOverlappingRectangleConflicts;
- (void)adjustFramesOfItems:(id)arg1;
- (CDStruct_1b6d18a9)_moveEdgeByTimeOffset:(CDStruct_1b6d18a9)arg1;
- (BOOL)_moveStaticPointToLocation:(double)arg1 playheadLocation:(double)arg2 deltaTimeThisMove:(CDStruct_1b6d18a9)arg3;
- (double)_locationOfPlayhead;
- (double)_locationOfStaticPoint;
- (void)_updateTimelineItems;
- (void)updateDraggedItem:(id)arg1;
- (void)restoreClickedLayer:(id)arg1;
- (void)updateClickedLayer:(id)arg1;
- (id)_clickedLayerForItem:(id)arg1;
- (BOOL)shouldAutoscroll:(id)arg1;
- (BOOL)startTracking:(id)arg1;
- (void)selectItem:(id)arg1;
- (void)deselectItem:(id)arg1;
- (CDStruct_1b6d18a9)_convertTimeToTimelineView:(CDStruct_1b6d18a9)arg1;
- (double)_convertLocationFromTimelineView:(double)arg1;
- (void)applyConfiguration:(id)arg1;
- (void)dealloc;

@end


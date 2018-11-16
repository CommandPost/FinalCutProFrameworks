//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TLKDataSourceProxy : NSObject
{
    id _timelineView;
    id <TLKTimelineViewDataSource> _dataSource;
    long long _transactionLevel;
    struct {
        unsigned int respondsToBeginDataAccess:1;
        unsigned int respondsToEndDataAccess:1;
        unsigned int respondsToBeginTransaction:1;
        unsigned int respondsToEndTransaction:1;
        unsigned int respondsToAdjacentItemForItemComponent:1;
        unsigned int respondsToBackgroundColorForItemComponent:1;
        unsigned int respondsToItemComponentsForItem:1;
        unsigned int respondsToRangeItemsForAudioComponent:1;
        unsigned int respondsToContentsMaskForItem:1;
        unsigned int respondsToTimeRangeForAudioComponentRangeItem:1;
        unsigned int respondsToAudioComponentRangeItemIsDisabled:1;
        unsigned int respondsToThumbnailAspectRatioForItem:1;
        unsigned int respondsToShouldSetAnchorTime:1;
        unsigned int respondsToShouldAnchorItem:1;
        unsigned int respondsToShouldRollEdge:1;
        unsigned int respondsToShouldRollEdgeOfRangeItem:1;
        unsigned int respondsToShouldRippleEdge:1;
        unsigned int respondsToShouldResizeEdge:1;
        unsigned int respondsToShouldTrimGap:1;
        unsigned int respondsToShouldTrimEdge:1;
        unsigned int respondsToShouldRollEdgeByTimeOffset:1;
        unsigned int respondsToShouldMoveItems:1;
        unsigned int respondsToPrepareItemAsContainer:1;
        unsigned int respondsToShouldHighlightItemComponent:1;
        unsigned int respondsToShouldOrderItem:1;
        unsigned int respondsToShouldSplitItem:1;
        unsigned int respondsToMoveTracks:1;
        unsigned int respondsToDisplayNameForItemComponent:1;
        unsigned int respondsToEditableNameForItemComponent:1;
        unsigned int respondsToAccessibilityDisplayNameForObject:1;
        unsigned int respondsToDisplayNameForMarker:1;
        unsigned int respondsToSetDisplayName:1;
        unsigned int respondsToValidateDrop:1;
        unsigned int respondsToAcceptDrop:1;
        unsigned int respondsToDraggingSessionEnded:1;
        unsigned int respondsToTimeRangeLimits:1;
        unsigned int respondsToClippedAudioTimeRange:1;
        unsigned int respondsToRenderInfoForTimeRange:1;
        unsigned int respondsToTransitionPosterFramesForItem:1;
        unsigned int respondsToAdjustTimeOfPosterItem:1;
        unsigned int responseToWillTrimEdge:1;
        unsigned int responseToWillRollEdge:1;
        unsigned int respondsToFilterOutLeadingTrailingTransitions:1;
        unsigned int respondsToMarkerForIteminTimeRange:1;
        unsigned int respondsToAdjustOffsetMarker:1;
        unsigned int respondsToVisibilityForItem:1;
        unsigned int respondsToDeleteMarker:1;
        unsigned int respondsToMoveMarker:1;
        unsigned int respondsToAddItemsToPasteboardWithName:1;
        unsigned int respondsToEndBeginTimelineTransaction:1;
        unsigned int respondsToAccessibilityValueForTime:1;
        unsigned int respondsToAccessibilityValueDescriptionForTime:1;
        unsigned int respondsToAccessibilityLocalizedString:1;
        unsigned int respondsToOperationsForDragContext:1;
        unsigned int RESERVED:10;
    } _tlkDataSourceFlags;
    struct {
        unsigned int respondsToLanesForContainer:1;
        unsigned int respondsToSpineLaneForContainer:1;
        unsigned int respondsToLanesForItemComponent:1;
        unsigned int respondsToBackgroundMusicLane:1;
        unsigned int respondsToChildLanesForItemLaneInfo:1;
        unsigned int respondsToNameForItemLane:1;
        unsigned int respondsToBackgroundColorForItemLane:1;
        unsigned int respondsToBoxMetricsForLane:1;
        unsigned int respondsToItemLaneExpanded:1;
        unsigned int respondsToShouldMoveLane:1;
        unsigned int respondsToShouldHidePrimaryComponent:1;
        unsigned int respondsToMoveLane:1;
        unsigned int RESERVED:22;
    } _tlkDataSourceFlags2;
}

- (id)accessibilityLocalizedString:(id)arg1;
- (id)accessibilityValueDescriptionForTime:(CDStruct_1b6d18a9)arg1;
- (id)accessibilityValueForTime:(CDStruct_1b6d18a9)arg1;
- (BOOL)adjustOffsetOfMarker:(id)arg1 toTime:(CDStruct_1b6d18a9)arg2;
- (BOOL)moveMarker:(id)arg1 toItem:(id)arg2 atTime:(CDStruct_1b6d18a9)arg3;
- (BOOL)deleteMarker:(id)arg1;
- (id)markersForItem:(id)arg1 inTimeRange:(CDStruct_e83c9415)arg2;
- (void)adjustTimeOfPosterItem:(id)arg1 byTimeOffset:(CDStruct_1b6d18a9 *)arg2;
- (id)transitionPosterFramesForItem:(id)arg1;
- (BOOL)fetchShouldHighlightItemComponent:(id)arg1;
- (id)renderInfoForTimeRange:(CDStruct_e83c9415)arg1;
- (BOOL)endBeginTimelineHandlerTransaction;
- (BOOL)addItems:(id)arg1 toPasteboardWithName:(id)arg2;
- (void)splitItem:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2;
- (BOOL)shouldSplitItem:(id)arg1 atTime:(CDStruct_1b6d18a9 *)arg2;
- (void)rollEdge:(id)arg1 ofRangeItem:(id)arg2 toTime:(CDStruct_1b6d18a9 *)arg3;
- (BOOL)shouldRollEdge:(id)arg1 ofRangeItem:(id)arg2 toTime:(CDStruct_1b6d18a9 *)arg3;
- (void)notifyWillRollEdge:(id)arg1 ofItem:(id)arg2 adjacentItem:(id)arg3;
- (void)rollEdge:(id)arg1 ofItem:(id)arg2 adjacentItem:(id)arg3 byTimeOffset:(CDStruct_1b6d18a9 *)arg4;
- (BOOL)shouldRollEdge:(id)arg1 ofItem:(id)arg2 adjacentItem:(id)arg3 byTimeOffset:(CDStruct_1b6d18a9 *)arg4;
- (void)notifyWillTrimEdge:(id)arg1 trimType:(int)arg2 ofItem:(id)arg3 movementType:(int)arg4;
- (void)trimEdge:(id)arg1 trimType:(int)arg2 edgeType:(int)arg3 ofItem:(id)arg4 byTimeOffset:(CDStruct_1b6d18a9 *)arg5 movementType:(int)arg6;
- (BOOL)shouldTrimEdge:(id)arg1 trimType:(int)arg2 ofItem:(id)arg3 byTimeOffset:(CDStruct_1b6d18a9 *)arg4 movementType:(int)arg5;
- (BOOL)shouldTrimGap:(id)arg1;
- (BOOL)shouldResizeEdge:(id)arg1 ofItem:(id)arg2;
- (BOOL)shouldRippleEdge:(id)arg1 ofItem:(id)arg2;
- (BOOL)shouldRollEdge:(id)arg1 ofItem:(id)arg2 adjacentItem:(id)arg3;
- (void)draggingSessionEnded:(BOOL)arg1;
- (id)acceptDrop:(id)arg1 onItem:(id)arg2 atIndex:(long long)arg3 inLane:(id)arg4 dropTime:(CDStruct_1b6d18a9)arg5 dropHighlight:(CDStruct_e83c9415 *)arg6;
- (unsigned long long)validateDrop:(id)arg1 onItem:(id)arg2 atIndex:(long long)arg3 inLane:(id)arg4 dropTime:(CDStruct_1b6d18a9 *)arg5 proposedHighlightItems:(id *)arg6;
- (unsigned long long)validateDrop:(id)arg1 onItem:(id)arg2 atIndex:(long long)arg3 inLane:(id)arg4 dropTime:(CDStruct_1b6d18a9 *)arg5;
- (void)setDisplayName:(id)arg1 forItem:(id)arg2;
- (BOOL)shouldSetDisplayNameForItem:(id)arg1;
- (id)orderItemInfosAbove:(id)arg1 itemInfosBelow:(id)arg2;
- (void)resolveVerticalOrderAfterTrimForStartEdits:(id)arg1 endEdits:(id)arg2;
- (BOOL)orderItem:(id)arg1 aboveItems:(id)arg2 belowItems:(id)arg3 besideItems:(id)arg4;
- (void)setAnchorTime:(CDStruct_1b6d18a9)arg1 inItem:(id)arg2;
- (BOOL)shouldSetAnchorTime:(CDStruct_1b6d18a9 *)arg1 inItem:(id)arg2;
- (id)anchorItems:(id)arg1 inContainer:(id)arg2 byAnchoringItem:(id)arg3 inLane:(id)arg4 atTime:(CDStruct_1b6d18a9)arg5;
- (BOOL)shouldAnchorItems:(id)arg1 inContainer:(id)arg2 byAnchoringItem:(id)arg3 inLane:(id)arg4 atTime:(CDStruct_1b6d18a9)arg5;
- (id)prepareItemAsContainer:(id)arg1 forMovingItems:(id)arg2 toIndex:(unsigned long long)arg3 atTime:(CDStruct_1b6d18a9)arg4;
- (id)filterOutLeadingTrailingTransitions:(id)arg1;
- (void)nudgeItems:(id)arg1 byTimeOffset:(CDStruct_1b6d18a9)arg2 inContainer:(id)arg3;
- (id)operationsForDragContext:(id)arg1;
- (void)moveItems:(id)arg1 byPlacingItem:(id)arg2 inContainer:(id)arg3 atIndex:(unsigned long long)arg4 atTime:(CDStruct_1b6d18a9)arg5;
- (BOOL)shouldMoveItems:(id)arg1 byPlacingItem:(id)arg2 inContainer:(id)arg3 atIndex:(unsigned long long)arg4 atTime:(CDStruct_1b6d18a9)arg5;
- (void)moveTracks:(id)arg1 toIndex:(unsigned long long)arg2;
- (void)endTransaction;
- (void)beginTransaction;
- (long long)transactionLevel;
- (void)endDataAccess:(BOOL)arg1;
- (void)beginDataAccess:(BOOL)arg1;
- (int)fetchTypeForItem:(id)arg1;
- (id)fetchDisplayNameForMarker:(id)arg1;
- (id)fetchAccessibilityDisplayNameForContainerInfo:(id)arg1;
- (id)fetchAccessibilityDisplayNameForItemComponent:(id)arg1;
- (id)fetchEditableNameForItemComponent:(id)arg1;
- (id)fetchDisplayNameForItemComponent:(id)arg1;
- (id)fetchDisplayNameForTrack:(id)arg1;
- (struct CGSize)fetchThumbnailAspectRatioForItem:(id)arg1;
- (int)fetchContentsMaskForObject:(id)arg1;
- (int)fetchVisibilityForItem:(id)arg1;
- (BOOL)fetchAudioComponentRangeItemIsDisabled:(id)arg1;
- (CDStruct_e83c9415)fetchTimeRangeForAudioComponentRangeItem:(id)arg1 inContainer:(id)arg2;
- (id)fetchRangeItemsForAudioComponent:(id)arg1;
- (id)fetchItemComponentsForItem:(id)arg1;
- (CDStruct_e83c9415)fetchTimeRangeForItemComponentInfo:(id)arg1;
- (CDStruct_e83c9415)fetchPrecisionEditorTimeRangeForItem:(id)arg1 leftItem:(id)arg2 rightItem:(id)arg3;
- (CDStruct_e83c9415)fetchClippedAudioTimeRangeForItem:(id)arg1;
- (CDStruct_e83c9415)fetchTimeRangeForItem_HACK:(id)arg1;
- (CDStruct_e83c9415)fetchTimeRangeLimitsForItem:(id)arg1;
- (CDStruct_e83c9415)fetchClippedTimeRangeForItemComponent:(id)arg1;
- (CDStruct_e83c9415)fetchTimeRangeForItem:(id)arg1;
- (CDStruct_e83c9415)fetchTimeRangeForTrack:(id)arg1;
- (id)fetchBackgroundColorForItemComponentInfo:(id)arg1;
- (id)fetchAdjacentItemForItemComponent:(id)arg1 edgePart:(id)arg2;
- (BOOL)fetchShouldHidePrimaryComponentForItem:(id)arg1;
- (id)fetchBoxMetricsForLaneInfo:(id)arg1;
- (BOOL)fetchIsItemLaneExpanded:(id)arg1;
- (id)fetchBackgroundColorForLaneInfo:(id)arg1;
- (id)fetchNameForLaneInfo:(id)arg1;
- (id)fetchChildLanesForItemLaneInfo:(id)arg1;
- (id)fetchLaneForItemComponentInfo:(id)arg1;
- (id)fetchBackgroundMusicLaneForContainer:(id)arg1;
- (id)fetchSpineLaneForContainer:(id)arg1;
- (id)fetchItemLanesForContainer:(id)arg1;
- (id)fetchVerticalIndexValueForItemComponent:(id)arg1;
- (long long)fetchLayoutRegionForItemComponent:(id)arg1;
- (id)fetchAnchoredItemsForItem:(id)arg1;
- (id)containerForItemComponent:(id)arg1;
- (id)fetchItemsForContainer:(id)arg1;
- (id)fetchTracks;
- (void)setDataSource:(id)arg1;
- (id)dataSource;
- (id)timelineView;
- (id)initWithTimelineView:(id)arg1;

@end


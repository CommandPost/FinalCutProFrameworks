//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSColor, NSDictionary, NSSet, NSString, TLKDragContext, TLKTimelineView;

@protocol TLKTimelineViewDataSource <NSObject>
- (id <NSCopying>)timelineView:(TLKTimelineView *)arg1 verticalIndexValueForItemComponent:(id)arg2;
- (long long)timelineView:(TLKTimelineView *)arg1 layoutRegionForItemComponent:(id)arg2;
- (CDStruct_e83c9415)timelineView:(TLKTimelineView *)arg1 audioSummaryTimeRangeForItem:(id <TLKTimelineItem>)arg2;
- (CDStruct_e83c9415)timelineView:(TLKTimelineView *)arg1 timeRangeLimitsForItem:(id <TLKTimelineItem>)arg2;
- (CDStruct_e83c9415)timelineView:(TLKTimelineView *)arg1 clippedTimeRangeForItem:(id <TLKTimelineItem>)arg2;
- (CDStruct_e83c9415)timelineView:(TLKTimelineView *)arg1 timeRangeForItem:(id <TLKTimelineItem>)arg2;
- (CDStruct_e83c9415)timelineView:(TLKTimelineView *)arg1 timeRangeForTrack:(id)arg2;
- (NSSet *)timelineView:(TLKTimelineView *)arg1 anchoredItemsForItem:(id <TLKTimelineItem>)arg2;
- (id)timelineView:(TLKTimelineView *)arg1 containerForItemComponent:(id)arg2;
- (NSArray *)timelineView:(TLKTimelineView *)arg1 itemsForContainer:(id <TLKTimelineItem>)arg2;
- (id <TLKTimelineItem>)timelineView:(TLKTimelineView *)arg1 trackAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfTracksInTimelineView:(TLKTimelineView *)arg1;

@optional
- (BOOL)timelineView:(TLKTimelineView *)arg1 shouldHighlightItemComponent:(id)arg2;
- (int)timelineView:(TLKTimelineView *)arg1 visibilityForItem:(id <TLKTimelineItem>)arg2;
- (NSString *)timelineView:(TLKTimelineView *)arg1 accessibilityLocalizedString:(NSString *)arg2;
- (id)timelineView:(TLKTimelineView *)arg1 accessibilityValueDescriptionForTime:(CDStruct_1b6d18a9)arg2;
- (id)timelineView:(TLKTimelineView *)arg1 accessibilityValueForTime:(CDStruct_1b6d18a9)arg2;
- (BOOL)timelineView:(TLKTimelineView *)arg1 adjustOffsetOfMarker:(id <TLKTimelineItem>)arg2 toTime:(CDStruct_1b6d18a9)arg3;
- (BOOL)timelineView:(TLKTimelineView *)arg1 moveMarker:(id <TLKTimelineItem>)arg2 toItem:(id <TLKTimelineItem>)arg3 atTime:(CDStruct_1b6d18a9)arg4;
- (BOOL)timelineView:(TLKTimelineView *)arg1 deleteMarker:(id <TLKTimelineItem>)arg2;
- (NSSet *)timelineView:(TLKTimelineView *)arg1 markersForItem:(id <TLKTimelineItem>)arg2 inTimeRange:(CDStruct_e83c9415)arg3;
- (void)timelineView:(TLKTimelineView *)arg1 adjustTimeOfPosterItem:(id <TLKPosterFrameInfoProtocol>)arg2 byTimeOffset:(CDStruct_1b6d18a9 *)arg3;
- (NSArray *)timelineView:(TLKTimelineView *)arg1 transitionPosterFramesForItem:(id <TLKTimelineItem>)arg2;
- (NSArray *)timelineView:(TLKTimelineView *)arg1 renderInfoForTimeRange:(CDStruct_e83c9415)arg2;
- (void)timelineViewDidEndTransaction_TMP:(TLKTimelineView *)arg1;
- (void)timelineViewDidBeginTransaction_TMP:(TLKTimelineView *)arg1;
- (void)timelineViewDidEndTransaction:(TLKTimelineView *)arg1;
- (void)timelineViewDidBeginTransaction:(TLKTimelineView *)arg1;
- (void)timelineViewDidEndDataAccess:(TLKTimelineView *)arg1 readOnly:(BOOL)arg2;
- (void)timelineViewWillBeginDataAccess:(TLKTimelineView *)arg1 readOnly:(BOOL)arg2;
- (void)timelineView:(TLKTimelineView *)arg1 setDisplayName:(NSString *)arg2 forItems:(NSArray *)arg3;
- (void)timelineView:(TLKTimelineView *)arg1 draggingSessionEnded:(BOOL)arg2;
- (id <TLKTimelineItem>)timelineView:(TLKTimelineView *)arg1 copyOfItem:(id <TLKTimelineItem>)arg2 withTimeRange:(CDStruct_e83c9415)arg3;
- (NSArray *)timelineView:(TLKTimelineView *)arg1 acceptDrop:(id <NSDraggingInfo>)arg2 onItem:(id <TLKTimelineItem>)arg3 atIndex:(long long)arg4 inLane:(id)arg5 dropTime:(CDStruct_1b6d18a9)arg6 dropHighlight:(CDStruct_e83c9415 *)arg7;
- (unsigned long long)timelineView:(TLKTimelineView *)arg1 validateDrop:(id <NSDraggingInfo>)arg2 onItem:(id <TLKTimelineItem>)arg3 atIndex:(long long)arg4 inLane:(id)arg5 dropTime:(CDStruct_1b6d18a9 *)arg6 proposedHighlightItems:(id *)arg7;
- (unsigned long long)timelineView:(TLKTimelineView *)arg1 validateDrop:(id <NSDraggingInfo>)arg2 onItem:(id <TLKTimelineItem>)arg3 atIndex:(long long)arg4 inLane:(id)arg5 dropTime:(CDStruct_1b6d18a9 *)arg6;
- (BOOL)timelineView:(TLKTimelineView *)arg1 shouldSplitItem:(id <TLKTimelineItem>)arg2 atTime:(CDStruct_1b6d18a9 *)arg3;
- (BOOL)timelineView:(TLKTimelineView *)arg1 shouldOrderItem:(id <TLKTimelineItem>)arg2 aboveItems:(NSArray *)arg3 belowItems:(NSArray *)arg4 besideItems:(NSArray *)arg5;
- (BOOL)timelineView:(TLKTimelineView *)arg1 shouldAnchorItems:(NSArray *)arg2 inContainer:(id <TLKTimelineItem>)arg3 byAnchoringItem:(id <TLKTimelineItem>)arg4 inLane:(id)arg5 atTime:(CDStruct_1b6d18a9)arg6;
- (id <TLKTimelineItem>)timelineView:(TLKTimelineView *)arg1 prepareItemAsContainer:(id <TLKTimelineItem>)arg2 forMovingItems:(NSArray *)arg3 toIndex:(unsigned long long)arg4 atTime:(CDStruct_1b6d18a9)arg5;
- (BOOL)timelineView:(TLKTimelineView *)arg1 shouldMoveItems:(NSArray *)arg2 byPlacingItem:(id <TLKTimelineItem>)arg3 inContainer:(id <TLKTimelineItem>)arg4 atIndex:(unsigned long long)arg5 atTime:(CDStruct_1b6d18a9)arg6;
- (BOOL)timelineView:(TLKTimelineView *)arg1 shouldRollEdge:(NSString *)arg2 ofRangeItem:(id)arg3 toTime:(CDStruct_1b6d18a9 *)arg4;
- (void)timelineView:(TLKTimelineView *)arg1 willRollEdge:(NSString *)arg2 ofItem:(id)arg3 adjacentItem:(id)arg4;
- (BOOL)timelineView:(TLKTimelineView *)arg1 shouldRollEdge:(NSString *)arg2 ofItem:(id <TLKTimelineItem>)arg3 adjacentItem:(id)arg4 byTimeOffset:(CDStruct_1b6d18a9 *)arg5;
- (void)timelineView:(TLKTimelineView *)arg1 willTrimItem:(id)arg2 atTime:(CDStruct_1b6d18a9)arg3 trimType:(int)arg4 andItem:(id)arg5 atTime:(CDStruct_1b6d18a9)arg6 movementType:(int)arg7;
- (void)timelineView:(TLKTimelineView *)arg1 willTrimEdge:(NSString *)arg2 trimType:(int)arg3 ofItem:(id)arg4 movementType:(int)arg5;
- (BOOL)timelineView:(TLKTimelineView *)arg1 shouldTrimEdge:(NSString *)arg2 trimType:(int)arg3 ofItem:(id)arg4 byTimeOffset:(CDStruct_1b6d18a9 *)arg5 movementType:(int)arg6;
- (BOOL)timelineView:(TLKTimelineView *)arg1 shouldTrimEdge:(NSString *)arg2 trimType:(int)arg3 edgeType:(int)arg4 ofItems:(NSArray *)arg5 byTimeOffset:(CDStruct_1b6d18a9 *)arg6 movementType:(int)arg7;
- (BOOL)timelineView:(TLKTimelineView *)arg1 shouldTrimGap:(id <TLKTimelineItem>)arg2;
- (BOOL)timelineView:(TLKTimelineView *)arg1 shouldResizeEdge:(NSString *)arg2 ofItem:(id <TLKTimelineItem>)arg3;
- (BOOL)timelineView:(TLKTimelineView *)arg1 shouldRippleEdge:(NSString *)arg2 ofItem:(id <TLKTimelineItem>)arg3;
- (BOOL)timelineView:(TLKTimelineView *)arg1 shouldRollEdge:(NSString *)arg2 ofItem:(id <TLKTimelineItem>)arg3 adjacentItem:(id <TLKTimelineItem>)arg4;
- (BOOL)timelineView:(TLKTimelineView *)arg1 shouldSetAnchorTime:(CDStruct_1b6d18a9 *)arg2 inItem:(id <TLKTimelineItem>)arg3;
- (CDStruct_e83c9415)timelineView:(TLKTimelineView *)arg1 clippedAudioTimeRangeForItem:(id <TLKTimelineItem>)arg2;
- (BOOL)timelineViewEndBeginTimelineHandlerTransaction:(TLKTimelineView *)arg1;
- (BOOL)timelineView:(TLKTimelineView *)arg1 addItems:(NSArray *)arg2 toPasteboardWithName:(NSString *)arg3;
- (void)timelineView:(TLKTimelineView *)arg1 splitItem:(id <TLKTimelineItem>)arg2 atTime:(CDStruct_1b6d18a9)arg3;
- (NSArray *)timelineView:(TLKTimelineView *)arg1 orderItemInfosAbove:(NSArray *)arg2 itemInfosBelow:(NSArray *)arg3;
- (void)timelineView:(TLKTimelineView *)arg1 resolveVerticalOrderAfterTrimForStartEdits:(NSArray *)arg2 endEdits:(NSArray *)arg3;
- (void)timelineView:(TLKTimelineView *)arg1 setItemLane:(id)arg2 forItems:(NSArray *)arg3;
- (void)timelineView:(TLKTimelineView *)arg1 orderItem:(id <TLKTimelineItem>)arg2 aboveItems:(NSArray *)arg3 belowItems:(NSArray *)arg4 besideItems:(NSArray *)arg5;
- (NSArray *)timelineView:(TLKTimelineView *)arg1 anchorItems:(NSArray *)arg2 inContainer:(id <TLKTimelineItem>)arg3 byAnchoringItem:(id <TLKTimelineItem>)arg4 inLane:(id)arg5 atTime:(CDStruct_1b6d18a9)arg6 resolveLaneConflicts:(BOOL)arg7;
- (NSArray *)timelineView:(TLKTimelineView *)arg1 anchorItems:(NSArray *)arg2 inContainer:(id <TLKTimelineItem>)arg3 byAnchoringItem:(id <TLKTimelineItem>)arg4 inLane:(id)arg5 atTime:(CDStruct_1b6d18a9)arg6;
- (void)timelineView:(TLKTimelineView *)arg1 nudgeItems:(NSArray *)arg2 byTimeOffset:(CDStruct_1b6d18a9)arg3 inContainer:(id <TLKTimelineItem>)arg4;
- (NSArray *)timelineView:(TLKTimelineView *)arg1 operationsForDragContext:(TLKDragContext *)arg2;
- (void)timelineView:(TLKTimelineView *)arg1 moveItems:(NSArray *)arg2 byPlacingItem:(id <TLKTimelineItem>)arg3 inContainer:(id <TLKTimelineItem>)arg4 atIndex:(unsigned long long)arg5 atTime:(CDStruct_1b6d18a9)arg6;
- (void)timelineView:(TLKTimelineView *)arg1 rollEdge:(NSString *)arg2 ofRangeItem:(id)arg3 toTime:(CDStruct_1b6d18a9 *)arg4;
- (void)timelineView:(TLKTimelineView *)arg1 rollEdge:(NSString *)arg2 ofItem:(id <TLKTimelineItem>)arg3 adjacentItem:(id <TLKTimelineItem>)arg4 byTimeOffset:(CDStruct_1b6d18a9 *)arg5;
- (void)timelineView:(TLKTimelineView *)arg1 trimEdge:(NSString *)arg2 trimType:(int)arg3 edgeType:(int)arg4 ofItem:(id)arg5 byTimeOffset:(CDStruct_1b6d18a9 *)arg6 movementType:(int)arg7;
- (void)timelineView:(TLKTimelineView *)arg1 trimEdge:(NSString *)arg2 trimType:(int)arg3 edgeType:(int)arg4 ofItems:(NSArray *)arg5 byTimeOffset:(CDStruct_1b6d18a9 *)arg6 movementType:(int)arg7;
- (void)timelineView:(TLKTimelineView *)arg1 setAnchorTime:(CDStruct_1b6d18a9)arg2 inItem:(id <TLKTimelineItem>)arg3;
- (struct CGSize)timelineView:(TLKTimelineView *)arg1 thumbnailAspectRatioForItem:(id)arg2;
- (NSString *)timelineView:(TLKTimelineView *)arg1 angleTitleForItem:(id <TLKTimelineItem>)arg2;
- (NSDictionary *)timelineView:(TLKTimelineView *)arg1 rolesForItem:(id <TLKTimelineItem>)arg2;
- (void)timelineView:(TLKTimelineView *)arg1 moveTracks:(NSArray *)arg2 toIndex:(unsigned long long)arg3;
- (int)timelineView:(TLKTimelineView *)arg1 contentsMaskForObject:(id)arg2;
- (BOOL)timelineView:(TLKTimelineView *)arg1 audioComponentRangeItemIsDisabled:(id)arg2;
- (CDStruct_e83c9415)timelineView:(TLKTimelineView *)arg1 timeRangeForAudioComponentRangeItem:(id)arg2 inContainer:(id <TLKTimelineItem>)arg3;
- (NSArray *)timelineView:(TLKTimelineView *)arg1 rangeItemsForAudioComponent:(id <TLKTimelineItem>)arg2;
- (BOOL)timelineView:(TLKTimelineView *)arg1 shouldHidePrimaryComponentForItem:(id)arg2;
- (NSArray *)timelineView:(TLKTimelineView *)arg1 itemComponentsForItem:(id)arg2;
- (id)timelineView:(TLKTimelineView *)arg1 adjacentItemForItemComponent:(id)arg2 edgePart:(NSString *)arg3;
- (NSColor *)timelineView:(TLKTimelineView *)arg1 backgroundColorForItemComponent:(id)arg2;
- (id)timelineView:(TLKTimelineView *)arg1 boxMetricsForLane:(id)arg2;
- (NSColor *)timelineView:(TLKTimelineView *)arg1 backgroundColorForItemLane:(id)arg2;
- (NSString *)timelineView:(TLKTimelineView *)arg1 nameForItemLane:(id)arg2;
- (long long)timelineView:(TLKTimelineView *)arg1 layoutRegionForItemLane:(id)arg2;
- (BOOL)timelineView:(TLKTimelineView *)arg1 isItemLaneExpanded:(id)arg2;
- (id)timelineView:(TLKTimelineView *)arg1 laneForItemComponent:(id)arg2;
- (id)timelineView:(TLKTimelineView *)arg1 backgroundMusicLaneForContainer:(id)arg2;
- (id)timelineView:(TLKTimelineView *)arg1 spineLaneForContainer:(id)arg2;
- (NSArray *)timelineView:(TLKTimelineView *)arg1 childLanesForTimelineLane:(id)arg2;
- (NSArray *)timelineView:(TLKTimelineView *)arg1 itemLanesForContainer:(id)arg2;
- (NSString *)timelineView:(TLKTimelineView *)arg1 displayNameForMarker:(id)arg2;
- (NSString *)timelineView:(TLKTimelineView *)arg1 accessibilityDisplayNameForObject:(id)arg2;
- (NSString *)timelineView:(TLKTimelineView *)arg1 editableNameForItemComponent:(id)arg2;
- (NSString *)timelineView:(TLKTimelineView *)arg1 displayNameForItemComponent:(id)arg2;
@end


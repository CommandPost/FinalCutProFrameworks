//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, TLKTimelineView;

@protocol TLKTimelineViewDataSource <NSObject>
- (CDStruct_e83c9415)timelineView:(TLKTimelineView *)arg1 timeRangeLimitsForItem:(id <TLKTimelineItem>)arg2;
- (CDStruct_e83c9415)timelineView:(TLKTimelineView *)arg1 clippedTimeRangeForItem:(id <TLKTimelineItem>)arg2;
- (CDStruct_e83c9415)timelineView:(TLKTimelineView *)arg1 timeRangeForItem:(id <TLKTimelineItem>)arg2;
- (NSArray *)timelineView:(TLKTimelineView *)arg1 anchoredItemsForItem:(id <TLKTimelineItem>)arg2;
- (NSArray *)timelineView:(TLKTimelineView *)arg1 itemsForContainer:(id <TLKTimelineItem>)arg2;
- (id <TLKTimelineItem>)timelineView:(TLKTimelineView *)arg1 trackAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfTracksInTimelineView:(TLKTimelineView *)arg1;

@optional
- (void)timelineView:(TLKTimelineView *)arg1 adjustTimeOfPosterItem:(id <TLKPosterFrameInfoProtocol>)arg2 byTimeOffset:(CDStruct_1b6d18a9 *)arg3;
- (NSArray *)timelineView:(TLKTimelineView *)arg1 transitionPosterFramesForItem:(id <TLKTimelineItem>)arg2;
- (NSArray *)timelineView:(TLKTimelineView *)arg1 renderInfoForTimeRange:(CDStruct_e83c9415)arg2;
- (void)timelineViewDidEndTransaction_TMP:(TLKTimelineView *)arg1;
- (void)timelineViewDidBeginTransaction_TMP:(TLKTimelineView *)arg1;
- (void)timelineViewDidEndTransaction:(TLKTimelineView *)arg1;
- (void)timelineViewDidBeginTransaction:(TLKTimelineView *)arg1;
- (void)timelineViewDidEndDataAccess:(TLKTimelineView *)arg1 readOnly:(BOOL)arg2;
- (void)timelineViewWillBeginDataAccess:(TLKTimelineView *)arg1 readOnly:(BOOL)arg2;
- (void)timelineView:(TLKTimelineView *)arg1 setDisplayName:(NSString *)arg2 forItem:(id <TLKTimelineItem>)arg3;
- (void)timelineView:(TLKTimelineView *)arg1 draggingSessionEnded:(BOOL)arg2;
- (NSArray *)timelineView:(TLKTimelineView *)arg1 acceptDrop:(id <NSDraggingInfo>)arg2 onItem:(id <TLKTimelineItem>)arg3 atIndex:(long long)arg4 dropTime:(CDStruct_1b6d18a9)arg5;
- (unsigned long long)timelineView:(TLKTimelineView *)arg1 validateDrop:(id <NSDraggingInfo>)arg2 onItem:(id <TLKTimelineItem>)arg3 atIndex:(long long)arg4 dropTime:(CDStruct_1b6d18a9 *)arg5;
- (BOOL)timelineView:(TLKTimelineView *)arg1 shouldSplitItem:(id <TLKTimelineItem>)arg2 atTime:(CDStruct_1b6d18a9 *)arg3;
- (BOOL)timelineView:(TLKTimelineView *)arg1 shouldOrderItem:(id <TLKTimelineItem>)arg2 aboveItems:(NSArray *)arg3 belowItems:(NSArray *)arg4 besideItems:(NSArray *)arg5;
- (BOOL)timelineView:(TLKTimelineView *)arg1 shouldAnchorItems:(NSArray *)arg2 inContainer:(id <TLKTimelineItem>)arg3 byAnchoringItem:(id <TLKTimelineItem>)arg4 atTime:(CDStruct_1b6d18a9)arg5;
- (id <TLKTimelineItem>)timelineView:(TLKTimelineView *)arg1 prepareItemAsContainer:(id <TLKTimelineItem>)arg2 forMovingItems:(NSArray *)arg3 toIndex:(unsigned long long)arg4 atTime:(CDStruct_1b6d18a9)arg5;
- (NSArray *)timelineView:(TLKTimelineView *)arg1 filterOutLeadingTrailingTransitions:(NSArray *)arg2;
- (BOOL)timelineView:(TLKTimelineView *)arg1 shouldMoveItems:(NSArray *)arg2 byPlacingItem:(id <TLKTimelineItem>)arg3 inContainer:(id <TLKTimelineItem>)arg4 atIndex:(unsigned long long)arg5 atTime:(CDStruct_1b6d18a9)arg6;
- (BOOL)timelineView:(TLKTimelineView *)arg1 shouldRollEdge:(NSString *)arg2 ofRangeItem:(id)arg3 toTime:(CDStruct_1b6d18a9 *)arg4;
- (void)timelineView:(TLKTimelineView *)arg1 willRollEdge:(NSString *)arg2 edgeType:(int)arg3 ofSpineItem:(id <TLKTimelineItem>)arg4;
- (BOOL)timelineView:(TLKTimelineView *)arg1 shouldRollEdge:(NSString *)arg2 edgeType:(int)arg3 ofSpineItem:(id <TLKTimelineItem>)arg4 byTimeOffset:(CDStruct_1b6d18a9 *)arg5;
- (void)timelineView:(TLKTimelineView *)arg1 willTrimEdge:(NSString *)arg2 trimType:(int)arg3 edgeType:(int)arg4 ofItems:(NSArray *)arg5 movementType:(int)arg6;
- (BOOL)timelineView:(TLKTimelineView *)arg1 shouldTrimEdge:(NSString *)arg2 trimType:(int)arg3 edgeType:(int)arg4 ofItems:(NSArray *)arg5 byTimeOffset:(CDStruct_1b6d18a9 *)arg6 movementType:(int)arg7;
- (BOOL)timelineView:(TLKTimelineView *)arg1 shouldTrimGap:(id <TLKTimelineItem>)arg2;
- (BOOL)timelineView:(TLKTimelineView *)arg1 shouldRippleEdge:(NSString *)arg2 ofItem:(id <TLKTimelineItem>)arg3;
- (BOOL)timelineView:(TLKTimelineView *)arg1 shouldRollEdge:(NSString *)arg2 ofItem:(id <TLKTimelineItem>)arg3;
- (BOOL)timelineView:(TLKTimelineView *)arg1 shouldSetAnchorTime:(CDStruct_1b6d18a9 *)arg2 inItem:(id <TLKTimelineItem>)arg3;
- (CDStruct_e83c9415)timelineView:(TLKTimelineView *)arg1 clippedAudioTimeRangeForItem:(id <TLKTimelineItem>)arg2;
- (NSArray *)timelineView:(TLKTimelineView *)arg1 insertCopiesOfItems:(NSArray *)arg2 clickedItem:(id *)arg3;
- (void)timelineView:(TLKTimelineView *)arg1 splitItem:(id <TLKTimelineItem>)arg2 atTime:(CDStruct_1b6d18a9)arg3;
- (NSArray *)timelineView:(TLKTimelineView *)arg1 orderItemInfosAbove:(NSArray *)arg2 itemInfosBelow:(NSArray *)arg3;
- (void)timelineView:(TLKTimelineView *)arg1 resolveVerticalOrderAfterTrimForItems:(NSArray *)arg2;
- (void)timelineView:(TLKTimelineView *)arg1 orderItem:(id <TLKTimelineItem>)arg2 aboveItems:(NSArray *)arg3 belowItems:(NSArray *)arg4 besideItems:(NSArray *)arg5;
- (NSArray *)timelineView:(TLKTimelineView *)arg1 anchorItems:(NSArray *)arg2 inContainer:(id <TLKTimelineItem>)arg3 byAnchoringItem:(id <TLKTimelineItem>)arg4 atTime:(CDStruct_1b6d18a9)arg5;
- (void)timelineView:(TLKTimelineView *)arg1 moveItems:(NSArray *)arg2 byPlacingItem:(id <TLKTimelineItem>)arg3 inContainer:(id <TLKTimelineItem>)arg4 atIndex:(unsigned long long)arg5 atTime:(CDStruct_1b6d18a9)arg6;
- (void)timelineView:(TLKTimelineView *)arg1 rollEdge:(NSString *)arg2 ofRangeItem:(id)arg3 toTime:(CDStruct_1b6d18a9 *)arg4;
- (void)timelineView:(TLKTimelineView *)arg1 rollEdge:(NSString *)arg2 edgeType:(int)arg3 ofSpineItem:(id <TLKTimelineItem>)arg4 byTimeOffset:(CDStruct_1b6d18a9 *)arg5;
- (void)timelineView:(TLKTimelineView *)arg1 trimEdge:(NSString *)arg2 trimType:(int)arg3 edgeType:(int)arg4 ofItems:(NSArray *)arg5 byTimeOffset:(CDStruct_1b6d18a9 *)arg6 movementType:(int)arg7;
- (void)timelineView:(TLKTimelineView *)arg1 setAnchorTime:(CDStruct_1b6d18a9)arg2 inItem:(id <TLKTimelineItem>)arg3;
- (int)timelineView:(TLKTimelineView *)arg1 itemSizeForItem:(id <TLKTimelineItem>)arg2;
- (NSString *)timelineView:(TLKTimelineView *)arg1 angleTitleForItem:(id <TLKTimelineItem>)arg2;
- (NSArray *)timelineView:(TLKTimelineView *)arg1 rolesForItem:(id <TLKTimelineItem>)arg2;
- (void)timelineView:(TLKTimelineView *)arg1 moveTracks:(NSArray *)arg2 toIndex:(unsigned long long)arg3;
- (BOOL)timelineView:(TLKTimelineView *)arg1 audioComponentRangeItemIsDisabled:(id)arg2;
- (CDStruct_e83c9415)timelineView:(TLKTimelineView *)arg1 timeRangeForAudioComponentRangeItem:(id)arg2;
- (NSArray *)timelineView:(TLKTimelineView *)arg1 rangeItemsForAudioComponent:(id <TLKTimelineItem>)arg2;
- (NSArray *)timelineView:(TLKTimelineView *)arg1 audioComponentsForItem:(id <TLKTimelineItem>)arg2;
@end


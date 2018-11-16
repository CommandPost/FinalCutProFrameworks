//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CALayer<TLKItemLayerInfo>, LKExtendedTimecode, NSArray, NSException, NSMenu, NSString, TLKContainerLayer, TLKItemLaneFragmentLayer, TLKSelectionManager, TLKTimelineLayer, TLKTimelineView;

@protocol TLKTimelineViewDelegate <NSObject>

@optional
- (TLKItemLaneFragmentLayer *)timelineView:(TLKTimelineView *)arg1 layerForLane:(id)arg2;
- (TLKTimelineLayer *)timelineView:(TLKTimelineView *)arg1 layerForItemComponent:(id)arg2;
- (TLKContainerLayer *)timelineView:(TLKTimelineView *)arg1 layerForContainer:(id)arg2;
- (BOOL)timelineView:(TLKTimelineView *)arg1 validateUserInterfaceItem:(id <NSValidatedUserInterfaceItem>)arg2;
- (BOOL)timelineView:(TLKTimelineView *)arg1 shouldOpenClipTrimmerForItem:(id <TLKTimelineItem>)arg2;
- (BOOL)timelineView:(TLKTimelineView *)arg1 willOpenClosePrecisionEditor:(BOOL)arg2 leftItem:(id <TLKTimelineItem>)arg3 rightItem:(id <TLKTimelineItem>)arg4 transition:(id <TLKTimelineItem>)arg5;
- (LKExtendedTimecode *)timelineView:(TLKTimelineView *)arg1 timecodeAtTime:(CDStruct_1b6d18a9)arg2;
- (NSMenu *)timelineView:(TLKTimelineView *)arg1 contextMenuForItem:(id <TLKTimelineItem>)arg2;
- (void)timelineViewStopItemSkimming:(TLKTimelineView *)arg1;
- (void)timelineView:(TLKTimelineView *)arg1 updateItemSkimming:(id <TLKTimelineItem>)arg2 layer:(CALayer<TLKItemLayerInfo> *)arg3 atTime:(CDStruct_1b6d18a9)arg4;
- (CDStruct_1b6d18a9)timelineViewAudioSampleDuration:(TLKTimelineView *)arg1;
- (CDStruct_1b6d18a9)timelineViewFrameDuration:(TLKTimelineView *)arg1;
- (NSArray *)timelineView:(TLKTimelineView *)arg1 badgeLayersForItem:(id <TLKTimelineItem>)arg2 currentBadges:(NSArray *)arg3;
- (void)timelineView:(TLKTimelineView *)arg1 layoutSublayersOfAudioLayer:(CALayer<TLKItemLayerInfo> *)arg2 forItem:(id <TLKTimelineItem>)arg3;
- (void)timelineView:(TLKTimelineView *)arg1 layoutSublayersOfVideoLayer:(CALayer<TLKItemLayerInfo> *)arg2 forItem:(id <TLKTimelineItem>)arg3;
- (void)timelineView:(TLKTimelineView *)arg1 layoutSublayers:(CALayer<TLKItemLayerInfo> *)arg2 forItem:(id <TLKTimelineItem>)arg3 needsLayout:(BOOL)arg4;
- (void)timelineView:(TLKTimelineView *)arg1 didUpdateItemLayer:(TLKTimelineLayer *)arg2;
- (BOOL)timelineView:(TLKTimelineView *)arg1 shouldSkimItem:(id <TLKTimelineItem>)arg2 atTime:(CDStruct_1b6d18a9 *)arg3 didSnap:(char *)arg4;
- (BOOL)timelineViewShouldSkimPlayhead:(TLKTimelineView *)arg1;
- (BOOL)timelineViewIsPlayheadSkimming:(TLKTimelineView *)arg1;
- (void)timelineView:(TLKTimelineView *)arg1 enablePlayheadSkimming:(BOOL)arg2;
- (void)timelineView:(TLKTimelineView *)arg1 changedPlayheadTimeWithEmptySelection:(CDStruct_1b6d18a9)arg2;
- (CDStruct_1b6d18a9)timelineView:(TLKTimelineView *)arg1 adjustTimePerMarker:(CDStruct_1b6d18a9)arg2;
- (void)timelineView:(TLKTimelineView *)arg1 didSetPlayheadTime:(CDStruct_1b6d18a9)arg2;
- (CDStruct_1b6d18a9)timelineView:(TLKTimelineView *)arg1 willSetPlayheadTime:(CDStruct_1b6d18a9)arg2 snap:(BOOL)arg3;
- (void)selectionManager:(TLKSelectionManager *)arg1 didSelectTimeRange:(CDStruct_e83c9415)arg2 withObjects:(NSArray *)arg3;
- (CDStruct_e83c9415)selectionManager:(TLKSelectionManager *)arg1 willSelectTimeRange:(CDStruct_e83c9415)arg2 withObjects:(NSArray *)arg3;
- (NSArray *)selectionManager:(TLKSelectionManager *)arg1 willDeselectObjects:(NSArray *)arg2 selectionMask:(unsigned long long)arg3;
- (NSArray *)selectionManager:(TLKSelectionManager *)arg1 willSelectObjects:(NSArray *)arg2 selectionMask:(unsigned long long *)arg3;
- (BOOL)selectionManagerShouldChange:(TLKSelectionManager *)arg1;
- (void)selectionManagerDidChange:(TLKSelectionManager *)arg1;
- (NSArray *)timelineView:(TLKTimelineView *)arg1 draggableItemsForProposedSelection:(NSArray *)arg2;
- (int)timelineView:(TLKTimelineView *)arg1 visibilityForItem:(id <TLKTimelineItem>)arg2;
- (BOOL)timelineView:(TLKTimelineView *)arg1 didDoubleClickItem:(id <TLKTimelineItem>)arg2 part:(NSString *)arg3;
- (BOOL)timelineView:(TLKTimelineView *)arg1 executeBlockAndHandleException:(void (^)(void))arg2;
- (BOOL)timelineView:(TLKTimelineView *)arg1 shouldHandleException:(NSException *)arg2;
@end


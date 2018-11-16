//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFAnchoredTimelineModule.h>

#import "TLKTimelineViewDataSource.h"
#import "TLKTimelineViewDelegate.h"

@interface FFAnchoredTimelineModule (FFTLKDataSource) <TLKTimelineViewDataSource, TLKTimelineViewDelegate>
+ (BOOL)_shouldShowImplicitTransitionForAudioItem:(id)arg1 leftEdge:(BOOL)arg2 timeRange:(CDStruct_e83c9415 *)arg3;
- (id)_anchoredClipsFromPasteboard:(id)arg1 videoProps:(id *)arg2 displayDropFrame:(long long *)arg3;
- (struct __CFString *)_performanceInstrumentNameForHandler:(id)arg1;
- (void)startPerformanceTimerForHandler:(id)arg1;
- (void)stopPerformanceTimerForHandler:(id)arg1;
- (void)_logTemporaryTransactionString:(id)arg1 atLevel:(long long)arg2;
- (void)_beginTemporaryTransaction;
- (BOOL)_endTemporaryTransactionWithCommit:(BOOL)arg1 error:(id *)arg2;
- (void)beginTimelineHandlerTransaction:(id)arg1;
- (BOOL)endTimelineHandlerTransaction:(id)arg1 commit:(BOOL)arg2 error:(id *)arg3;
- (id)_deferredDropDraggingPasteboard;
- (void)_setDeferredDropDraggingPasteboard:(id)arg1;
- (struct CGPoint)_deferredDropDragLocation;
- (void)_setDeferredDropDragLocation:(struct CGPoint)arg1;
- (id)_deferredDropTargetItem;
- (void)_setDeferredDropTargetItem:(id)arg1;
- (BOOL)_deferredDropWantsPopupMenu;
- (void)_setDeferredDropWantsPopupMenu:(BOOL)arg1;
- (id)_deferredDropAddedItems;
- (void)_setDeferredDropAddedItems:(id)arg1;
- (id)_deferredDropRootItem;
- (void)_setDeferredDropRootItem:(id)arg1;
- (id)_deferredDropBestGuess;
- (void)_setDeferredDropBestGuess:(id)arg1;
- (SEL)_deferredDropSelector;
- (void)_setDeferredDropSelector:(SEL)arg1;
- (BOOL)_needConfirmSequenceSetting;
- (void)_setNeedConfirmSequenceSetting:(BOOL)arg1;
- (void)_resetDeferredDropState;
- (void)_processDeferredDrop;
- (void)actionDropMenuCancel:(id)arg1;
- (void)actionDropMenuAddToStack:(id)arg1;
- (void)actionDropMenuReplaceAndStack:(id)arg1;
- (void)actionDropMenuAddEditsToGroup:(id)arg1;
- (void)actionDropMenuReplace:(id)arg1;
- (void)actionDropMenuReplaceFromStart:(id)arg1;
- (void)actionDropMenuReplaceFromEnd:(id)arg1;
- (void)actionDropMenuReplaceAtPlayhead:(id)arg1;
- (void)popUpMenuForItem:(id)arg1 inTimelineItem:(id)arg2;
- (void)_gearMenuWillSendAction:(id)arg1;
- (void)_filterItems:(id)arg1;
- (void)_filterOrphanedStackedAnchorsForModifiedItems:(id)arg1 removedAnchors:(id *)arg2 addedAnchors:(id *)arg3;
- (void)verifyAlignmentsInChangeDictionary:(id)arg1 repair:(BOOL)arg2;
- (void)reloadTimelineViewWithChangeDictionary:(id)arg1;
- (void)_cleanupGapForPreviousLast:(id)arg1 inContainer:(id)arg2;
- (CDStruct_1b6d18a9)timelineViewFrameDuration:(id)arg1;
- (CDStruct_1b6d18a9)timelineViewAudioSampleDuration:(id)arg1;
- (id)timelineView:(id)arg1 itemsForContainer:(id)arg2;
- (id)timelineView:(id)arg1 anchoredItemsForItem:(id)arg2;
- (CDStruct_1b6d18a9)_startOffsetForSpineOrItem:(id)arg1;
- (CDStruct_e83c9415)_timeRangeForItem:(id)arg1 clipped:(BOOL)arg2;
- (CDStruct_e83c9415)timelineView:(id)arg1 timeRangeForItem:(id)arg2;
- (CDStruct_e83c9415)timelineView:(id)arg1 clippedTimeRangeForItem:(id)arg2;
- (CDStruct_e83c9415)timelineView:(id)arg1 timeRangeLimitsForItem:(id)arg2;
- (BOOL)timelineView:(id)arg1 flagValueForItem:(id)arg2 withFlagID:(const id)arg3;
- (void)timelineView:(id)arg1 setFlagValueForItem:(id)arg2 withFlagID:(const id)arg3 value:(BOOL)arg4;
- (CDStruct_e83c9415)timelineView:(id)arg1 clippedAudioTimeRangeForItem:(id)arg2;
- (id)timelineView:(id)arg1 rolesForItem:(id)arg2;
- (void)timelineViewWillBeginDataAccess:(id)arg1 readOnly:(BOOL)arg2;
- (void)timelineViewDidEndDataAccess:(id)arg1 readOnly:(BOOL)arg2;
- (void)beginTimelineTrackingIteration;
- (void)endTimelineTrackingIteration;
- (void)timelineViewDidBeginTransaction:(id)arg1;
- (void)timelineViewDidEndTransaction:(id)arg1;
- (void)timelineViewDidBeginTransaction_TMP:(id)arg1;
- (void)timelineViewDidEndTransaction_TMP:(id)arg1;
- (CDStruct_1b6d18a9)_anchorInsetForItem:(id)arg1;
- (BOOL)_isCopyMode;
- (id)_itemsInContainerTimeForItems:(id)arg1 inContainer:(id)arg2 byAnchoringItem:(id)arg3 atTime:(CDStruct_1b6d18a9)arg4;
- (BOOL)_operationAnchorItems:(id *)arg1 inContainer:(id)arg2 byAnchoringItem:(id)arg3 atTime:(CDStruct_1b6d18a9)arg4 error:(id *)arg5;
- (BOOL)_operationMoveItems:(id)arg1 toContainer:(id)arg2 atIndex:(unsigned long long)arg3 atTime:(CDStruct_1b6d18a9)arg4 error:(id *)arg5;
- (int)_temporalResolutionModeForEdits:(id)arg1 edgeType:(int *)arg2;
- (int)_trimCommandForTrimEdge:(id)arg1 trimType:(int)arg2 edgeType:(int)arg3 ofEdits:(id)arg4;
- (BOOL)timelineView:(id)arg1 shouldRippleEdge:(id)arg2 ofItem:(id)arg3;
- (BOOL)shouldTrimEdge:(id)arg1 edgeType:(int)arg2 ofEdits:(id)arg3 byTimeOffset:(CDStruct_1b6d18a9 *)arg4 withCommand:(int)arg5;
- (void)trimEdge:(id)arg1 edgeType:(int)arg2 ofEdits:(id)arg3 byTimeOffset:(CDStruct_1b6d18a9 *)arg4 withCommand:(int)arg5 movementType:(int)arg6;
- (BOOL)timelineView:(id)arg1 shouldTrimEdge:(id)arg2 trimType:(int)arg3 edgeType:(int)arg4 ofItems:(id)arg5 byTimeOffset:(CDStruct_1b6d18a9 *)arg6 movementType:(int)arg7;
- (void)timelineView:(id)arg1 trimEdge:(id)arg2 trimType:(int)arg3 edgeType:(int)arg4 ofItems:(id)arg5 byTimeOffset:(CDStruct_1b6d18a9 *)arg6 movementType:(int)arg7;
- (BOOL)timelineView:(id)arg1 shouldRollEdge:(id)arg2 edgeType:(int)arg3 ofSpineItem:(id)arg4 byTimeOffset:(CDStruct_1b6d18a9 *)arg5;
- (void)timelineView:(id)arg1 rollEdge:(id)arg2 edgeType:(int)arg3 ofSpineItem:(id)arg4 byTimeOffset:(CDStruct_1b6d18a9 *)arg5;
- (BOOL)timelineView:(id)arg1 shouldMoveItems:(id)arg2 toContainer:(id)arg3 atIndex:(unsigned long long)arg4 atTime:(CDStruct_1b6d18a9)arg5;
- (void)timelineView:(id)arg1 moveItems:(id)arg2 toContainer:(id)arg3 atIndex:(unsigned long long)arg4 atTime:(CDStruct_1b6d18a9)arg5;
- (id)timelineView:(id)arg1 prepareItemAsContainer:(id)arg2 forMovingItems:(id)arg3 toIndex:(unsigned long long)arg4 atTime:(CDStruct_1b6d18a9)arg5;
- (CDStruct_1b6d18a9)_snappedTimeForAnchoringItem:(id)arg1 toTime:(CDStruct_1b6d18a9)arg2 inSpine:(id)arg3;
- (BOOL)_anchorOffsetsOK:(id)arg1 atTimes:(CDStruct_1b6d18a9 *)arg2 inContainer:(id)arg3;
- (CDStruct_1b6d18a9)_adjustmentForAnchoringItems:(id)arg1 atTimes:(CDStruct_1b6d18a9 *)arg2 inContainer:(id)arg3;
- (BOOL)_validateAnchorTime:(CDStruct_1b6d18a9 *)arg1 byIgnoringItems:(id)arg2 inContainer:(id)arg3;
- (id)_shouldAnchorItems:(id)arg1 inContainer:(id)arg2 byAnchoringItem:(id)arg3 atTime:(CDStruct_1b6d18a9)arg4;
- (BOOL)timelineView:(id)arg1 shouldAnchorItems:(id)arg2 inContainer:(id)arg3 byAnchoringItem:(id)arg4 atTime:(CDStruct_1b6d18a9)arg5;
- (id)timelineView:(id)arg1 anchorItems:(id)arg2 inContainer:(id)arg3 byAnchoringItem:(id)arg4 atTime:(CDStruct_1b6d18a9)arg5;
- (BOOL)timelineView:(id)arg1 shouldSetAnchorTime:(CDStruct_1b6d18a9 *)arg2 inItem:(id)arg3;
- (void)timelineView:(id)arg1 setAnchorTime:(CDStruct_1b6d18a9)arg2 inItem:(id)arg3;
- (long long)_validateVerticalIndex:(long long)arg1 aboveSpine:(BOOL)arg2;
- (void)timelineView:(id)arg1 orderItem:(id)arg2 aboveItems:(id)arg3 belowItems:(id)arg4 besideItems:(id)arg5;
- (BOOL)timelineView:(id)arg1 shouldSplitItem:(id)arg2 atTime:(CDStruct_1b6d18a9 *)arg3;
- (void)timelineView:(id)arg1 splitItem:(id)arg2 atTime:(CDStruct_1b6d18a9)arg3;
- (unsigned long long)_validateAudioEffectsDrop:(id)arg1 onItem:(id)arg2;
- (unsigned long long)_validateEffectsDrop:(id)arg1 onItem:(id)arg2 atIndex:(long long)arg3;
- (void)_calculateAnchorTimes:(CDStruct_1b6d18a9 *)arg1 forDroppedItems:(id)arg2 atTime:(CDStruct_1b6d18a9)arg3;
- (unsigned long long)_validateMediaDropOfItems:(id)arg1 onItem:(id)arg2 atIndex:(long long)arg3 dropTime:(CDStruct_1b6d18a9 *)arg4;
- (unsigned long long)timelineView:(id)arg1 validateDrop:(id)arg2 onItem:(id)arg3 atIndex:(long long)arg4 dropTime:(CDStruct_1b6d18a9 *)arg5;
- (id)_acceptAnchoredDrop:(id)arg1 inContainer:(id)arg2 atTime:(CDStruct_1b6d18a9)arg3 error:(id *)arg4;
- (id)_acceptDrop:(id)arg1 onItem:(id)arg2 error:(id *)arg3;
- (id)_acceptDrop:(id)arg1 inContainer:(id)arg2 atIndex:(long long)arg3 error:(id *)arg4;
- (id)timelineView:(id)arg1 acceptDrop:(id)arg2 onItem:(id)arg3 atIndex:(long long)arg4 dropTime:(CDStruct_1b6d18a9)arg5;
- (int)_editModeForItemsToBeCopied:(id)arg1;
- (id)_copyAndInsertItems:(id)arg1 clickedItem:(id *)arg2 container:(id)arg3;
- (id)_copyAndAnchorItems:(id)arg1 clickedItem:(id *)arg2;
- (id)_anchorStorylineItems:(id)arg1 container:(id)arg2;
- (id)timelineView:(id)arg1 copyItems:(id)arg2 clickedItem:(id *)arg3;
- (id)timelineView:(id)arg1 renderInfoForTimeRange:(CDStruct_e83c9415)arg2;
- (id)timelineView:(id)arg1 transitionPosterFramesForItem:(id)arg2;
- (void)timelineView:(id)arg1 adjustTimeOfPosterItem:(id)arg2 byTimeOffset:(CDStruct_1b6d18a9 *)arg3;
- (BOOL)timelineView:(id)arg1 shouldHandleException:(id)arg2;
- (CDStruct_1b6d18a9)timelineView:(id)arg1 willSetPlayheadTime:(CDStruct_1b6d18a9)arg2 snap:(BOOL)arg3;
- (void)timelineView:(id)arg1 didSetPlayheadTime:(CDStruct_1b6d18a9)arg2;
- (CDStruct_1b6d18a9)timelineView:(id)arg1 adjustTimePerMarker:(CDStruct_1b6d18a9)arg2;
- (id)timelineView:(id)arg1 timecodeAtTime:(CDStruct_1b6d18a9)arg2;
- (id)selectionManager:(id)arg1 willSelectObjects:(id)arg2 selectionMask:(unsigned long long)arg3;
- (id)selectionManager:(id)arg1 willDeselectObjects:(id)arg2 selectionMask:(unsigned long long)arg3;
- (void)selectionManagerDidChange:(id)arg1;
- (CDStruct_e83c9415)selectionManager:(id)arg1 willSelectTimeRange:(CDStruct_e83c9415)arg2 withObjects:(id)arg3;
- (void)selectionManager:(id)arg1 didSelectTimeRange:(CDStruct_e83c9415)arg2 withObjects:(id)arg3;
- (BOOL)timelineView:(id)arg1 isItemExpandable:(id)arg2;
- (void)timelineView:(id)arg1 didDoubleClickItem:(id)arg2;
- (void)timelineView:(id)arg1 layoutSublayers:(id)arg2 forItem:(id)arg3;
- (id)_transitionColorFilter;
- (void)timelineView:(id)arg1 layoutSublayersOfVideoLayer:(id)arg2 audioLayer:(id)arg3 forItem:(id)arg4;
- (id)timelineView:(id)arg1 badgeLayersForItem:(id)arg2 currentBadges:(id)arg3;
- (BOOL)isPlaying;
- (void)timelineView:(id)arg1 enablePlayheadSkimming:(BOOL)arg2;
- (BOOL)timelineViewIsPlayheadSkimming:(id)arg1;
- (BOOL)timelineViewShouldSkimPlayhead:(id)arg1;
- (BOOL)_snapItemSkimTimeToClipEnds;
- (void)timelineView:(id)arg1 willSkimItem:(id)arg2 atTime:(CDStruct_1b6d18a9 *)arg3 didSnap:(char *)arg4;
- (void)timelineView:(id)arg1 willTrimEdge:(id)arg2 trimType:(int)arg3 edgeType:(int)arg4 ofItems:(id)arg5 movementType:(int)arg6;
- (void)timelineView:(id)arg1 willRollEdge:(id)arg2 edgeType:(int)arg3 ofSpineItem:(id)arg4;
- (int)timelineView:(id)arg1 itemSizeForItem:(id)arg2;
- (void)handlerWillStartTracking:(id)arg1;
- (void)_constrainVideoAboveSpineForItems:(id)arg1;
- (void)changeSettingsSheetClosing:(int)arg1 addedItems:(id)arg2 rootItem:(id)arg3;
- (void)_confirmSequenceSetting;
- (void)_handlerDidStopTracking:(id)arg1;
- (void)handlerDidCancelTracking:(id)arg1;
- (void)handlerDidStopTracking:(id)arg1;
- (void)_updateHandlerPasteboardWithDraggingInfo:(id)arg1;
- (void)timelineHandler:(id)arg1 willPerformDraggingEntered:(id)arg2;
- (BOOL)_allowToolSkimming:(id)arg1;
- (void)_updateToolSkimming:(id)arg1 anchoredObject:(id)arg2 atTime:(CDStruct_1b6d18a9)arg3;
- (void)_endToolSkimming:(id)arg1;
- (void)endToolSkimming;
- (BOOL)isToolSkimming;
- (void)eventDispatcher:(id)arg1 willSetCurrentHandler:(id)arg2;
- (void)eventDispatcher:(id)arg1 didSetCurrentHandler:(id)arg2;
- (void)_skimObject:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2;
- (void)timelineViewStopItemSkimming:(id)arg1;
- (void)timelineView:(id)arg1 updateItemSkimming:(id)arg2 layer:(id)arg3 atTime:(CDStruct_1b6d18a9)arg4;
- (id)timelineView:(id)arg1 contextMenuForItem:(id)arg2;
- (void)flagsChanged:(id)arg1;
@property SEL nUpDisplayAction;
@property(retain) id nUpDisplayObject;
- (void)_beginNUpDisplayForAnchoringItem:(id)arg1;
- (void)_createNUpDisplayForRippleEdge:(id)arg1 ofItems:(id)arg2;
- (void)_createNUpDisplayForRollEdge:(id)arg1 ofItems:(id)arg2;
- (void)_createNUpDisplayForSlideOfItems:(id)arg1;
- (void)_createNUpDisplayForSlipOfItems:(id)arg1;
- (void)_createNUpDisplayForResizeEdge:(id)arg1 ofTransition:(id)arg2;
- (void)_createNUpDisplayForResizeEdge:(id)arg1 ofItems:(id)arg2;
- (void)_createNUpDisplayForTrimEdge:(id)arg1 ofItems:(id)arg2 withCommand:(int)arg3;
- (void)_endNUpDisplay;
- (double)_xCoordAtTime:(CDStruct_1b6d18a9)arg1 containingItemClippedRange:(CDStruct_e83c9415)arg2 superlayer:(id)arg3;
- (void)_addMarkerLayersForMarkers:(id)arg1 superlayer:(id)arg2 containingItemClippedRange:(CDStruct_e83c9415)arg3 userInfo:(id)arg4;
- (void)_removeMarkerLayersForMarkers:(id)arg1 userInfo:(id)arg2;
@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PCChangeLog, TLKContainerMetrics, TLKLayoutDatabase, TLKLayoutMetrics, TLKTimelineView;

@interface TLKLayoutManager : NSObject
{
    TLKTimelineView *_timelineView;
    TLKLayoutDatabase *_layoutDatabase;
    TLKContainerMetrics *_sharedContainerMetrics;
    TLKContainerMetrics *_sharedNestedContainerMetrics;
    double _hyphenationFactor;
    double _minimumItemComponentFragmentWidth;
    struct {
        unsigned int wraps:1;
        unsigned int RESERVED:31;
    } _layoutFlags;
    struct {
        unsigned int willUseLayoutFrame:1;
        unsigned int didCompletLayoutForTile:1;
        unsigned int didEndLayout:1;
        unsigned int willBeginLayout:1;
        unsigned int RESERVED:28;
    } _delegateRespondsTo;
    BOOL _wantsVerticalLayout;
    BOOL _autocollapsesLayoutContextsToFit;
    BOOL _keepsDraggedItemsVerticallyFixed;
    id <TLKLayoutManagerDelegate> _delegate;
    PCChangeLog *_changeLog;
    TLKLayoutMetrics *_layoutMetrics;
    struct CGSize _defaultTileSize;
}

@property(retain, nonatomic) TLKLayoutMetrics *layoutMetrics; // @synthesize layoutMetrics=_layoutMetrics;
@property(retain, nonatomic) TLKContainerMetrics *sharedNestedContainerMetrics; // @synthesize sharedNestedContainerMetrics=_sharedNestedContainerMetrics;
@property(retain, nonatomic) TLKContainerMetrics *sharedContainerMetrics; // @synthesize sharedContainerMetrics=_sharedContainerMetrics;
@property(nonatomic) BOOL keepsDraggedItemsVerticallyFixed; // @synthesize keepsDraggedItemsVerticallyFixed=_keepsDraggedItemsVerticallyFixed;
@property(nonatomic) BOOL autocollapsesLayoutContextsToFit; // @synthesize autocollapsesLayoutContextsToFit=_autocollapsesLayoutContextsToFit;
@property(nonatomic) double minimumItemComponentFragmentWidth; // @synthesize minimumItemComponentFragmentWidth=_minimumItemComponentFragmentWidth;
@property(nonatomic) struct CGSize defaultTileSize; // @synthesize defaultTileSize=_defaultTileSize;
@property(retain, nonatomic) PCChangeLog *changeLog; // @synthesize changeLog=_changeLog;
@property(nonatomic) id <TLKLayoutManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) TLKLayoutDatabase *layoutDatabase; // @synthesize layoutDatabase=_layoutDatabase;
@property(nonatomic) TLKTimelineView *timelineView; // @synthesize timelineView=_timelineView;
@property(nonatomic) BOOL wantsVerticalLayout; // @synthesize wantsVerticalLayout=_wantsVerticalLayout;
@property(nonatomic) double hyphenationFactor; // @synthesize hyphenationFactor=_hyphenationFactor;
- (void)_debugHideInvalidLayoutSegments;
- (void)_debugShowInvalidLayoutSegments:(id)arg1;
- (void)_removeDebugFeedbackForUsedRegions;
- (void)_showDebugFeedbackForUsedRegion:(id)arg1 inLayoutContext:(id)arg2;
- (id)_subtreeDescription;
- (id)debugDescription;
- (void)_separateItems:(id)arg1 intoSpineItems:(id)arg2 anchoredItems:(id)arg3;
- (void)exitPrecisionEditor;
- (void)enterPrecisionEditorWithLeftItem:(id)arg1 rightItem:(id)arg2 transition:(id)arg3;
- (void)_getPrecisionEditorLayoutContext:(id *)arg1 referenceTime:(CDStruct_1b6d18a9 *)arg2 forContainer:(id)arg3 leftItem:(id)arg4 rightItem:(id)arg5;
- (void)_finishPrecisionEditorLayoutWithFinalState:(int)arg1 savedVisibleRectState:(id)arg2;
- (BOOL)_notifyDidEndLayout;
- (BOOL)_notifyWillBeginLayout;
- (BOOL)_notifyDidCompleteLayoutForTile:(id)arg1 atEnd:(BOOL)arg2;
- (struct CGRect)_requestFrameForItemComponentFragment:(id)arg1 proposedFrame:(struct CGRect)arg2;
- (id)layoutContextForPoint:(struct CGPoint)arg1;
- (id)layoutContextForContainer:(id)arg1 atLocation:(double)arg2;
- (CDStruct_1b6d18a9)timeForPoint:(struct CGPoint)arg1;
- (struct CGPoint)wrappedPointForPoint:(struct CGPoint)arg1 timeMovement:(int)arg2;
- (int)timeMovementFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2;
- (struct _TLKRange)locationRangeForPoint:(struct CGPoint)arg1;
- (struct CGPoint)pointForLocation:(double)arg1;
- (id)lineFragmentForPoint:(struct CGPoint)arg1;
- (id)lineFragmentForLocation:(double)arg1;
- (id)lineFragmentContainingLocation:(double)arg1;
- (struct _TLKRange)locationRangeForRect:(struct CGRect)arg1;
- (struct CGPoint)constrainPointToNonWrappingRegion:(struct CGPoint)arg1;
- (struct CGRect)convertRect:(struct CGRect)arg1 fromLayoutContext:(id)arg2;
- (struct CGRect)convertRect:(struct CGRect)arg1 toLayoutContext:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromLayoutContext:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toLayoutContext:(id)arg2;
- (struct CGRect)convertRect:(struct CGRect)arg1 toLineFragment:(id)arg2;
- (struct CGRect)convertRect:(struct CGRect)arg1 fromLineFragment:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toLineFragment:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromLineFragment:(id)arg2;
- (CDStruct_1b6d18a9)convertTime:(CDStruct_1b6d18a9)arg1 fromContainer:(id)arg2;
- (CDStruct_1b6d18a9)convertTime:(CDStruct_1b6d18a9)arg1 toContainer:(id)arg2;
- (struct _TLKRange)convertTimeRangeInSeconds:(struct _TLKRange)arg1 fromContainer:(id)arg2;
- (struct _TLKRange)convertTimeRangeInSeconds:(struct _TLKRange)arg1 toContainer:(id)arg2;
- (struct _TLKRange)convertLocationRange:(struct _TLKRange)arg1 fromContainer:(id)arg2;
- (struct _TLKRange)convertLocationRange:(struct _TLKRange)arg1 toContainer:(id)arg2;
- (CDStruct_1b6d18a9)timeFromLocation:(double)arg1 inContainer:(id)arg2;
- (CDStruct_1b6d18a9)timeFromLocation:(double)arg1;
- (struct _TLKRange)locationRangeForTime:(CDStruct_1b6d18a9)arg1 inContainer:(id)arg2;
- (struct _TLKRange)locationRangeForTime:(CDStruct_1b6d18a9)arg1;
- (id)itemComponentsAtTime:(CDStruct_1b6d18a9)arg1;
- (id)spineItemsAtTime:(CDStruct_1b6d18a9)arg1 inContainer:(id)arg2;
- (struct CGRect)spineFrameAtLocation:(double)arg1 inContainer:(id)arg2;
- (struct CGRect)_spineFrameForLayoutContext:(id)arg1 usedRect:(struct CGRect)arg2;
- (struct CGRect)_minimumSpineFrameForContainer:(id)arg1;
- (struct CGRect)thumbnailFrameForItem:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2 inContainer:(id)arg3;
- (struct CGSize)thumbnailSizeForItem:(id)arg1;
- (double)heightForItemComponentFragment:(id)arg1;
- (struct CGRect)bounds;
- (void)reloadWithItemsAdded:(id)arg1 removed:(id)arg2 modified:(id)arg3;
- (void)reloadWithItemsAdded:(id)arg1 removed:(id)arg2 modified:(id)arg3 horizontally:(BOOL)arg4 vertically:(BOOL)arg5;
- (id)_reloadSegmentTablesWithItemsAdded:(id)arg1 removed:(id)arg2 modified:(id)arg3;
- (id)_separateChangeListsBySegmentTableForItemsAdded:(id)arg1 removed:(id)arg2 modified:(id)arg3;
- (void)_performVerticalLayoutWithItemsAdded:(id)arg1 removed:(id)arg2 modified:(id)arg3;
- (void)_correctFirstLineFragmentForEmptyTimelineIfNeeded;
- (void)_deleteEmptyLineFragments;
- (void)_performVerticalLayoutForSegments:(id)arg1;
- (void)_tileLineFragments:(id)arg1 inRange:(struct _NSRange)arg2;
- (void)_tileTracksInLineFragment:(id)arg1;
- (struct CGRect)_calculatedBoundsForLayoutContext:(id)arg1;
- (void)_addLineBreakTime:(CDStruct_1b6d18a9)arg1 toSegments:(id)arg2;
- (id)_findItemComponentsInLocationRange:(struct _TLKRange)arg1 forSegments:(id)arg2;
- (id)_findLayoutSegmentsEndingBeforeLineBreak:(CDStruct_1b6d18a9)arg1 inSegments:(id)arg2;
- (id)_findLayoutSegmentsStartingBeforeLineBreak:(CDStruct_1b6d18a9)arg1 inSegments:(id)arg2;
- (void)_purgeItemComponentFragmentsInSegments:(id)arg1;
- (void)_resetLayoutInfoForSegments:(id)arg1 startingAfterTime:(CDStruct_1b6d18a9)arg2;
- (BOOL)_prepareLineFragmentForLayout:(id)arg1 afterLineFragment:(id)arg2 withStartTime:(CDStruct_1b6d18a9)arg3;
- (struct _TLKRange)_hyphenatedLocationRange:(struct _TLKRange)arg1 forSpineItem:(id)arg2;
- (id)_spineItemForHyphenatingAtLocation:(double)arg1;
- (void)_performVerticalLayoutForSegments:(id)arg1 inLineFragment:(id)arg2;
- (void)_layoutItemComponents:(id)arg1 inLayoutContext:(id)arg2;
- (void)_sizeItemLaneBoundsToFitLayoutContextIfNeeded:(id)arg1;
- (void)_layoutSpineItemComponents:(id)arg1 inLayoutContext:(id)arg2 usedRegion:(id)arg3;
- (void)_layoutAnchoredItemComponentsByLane:(id)arg1 inLayoutContext:(id)arg2 usedRegion:(id)arg3;
- (void)_layoutAnchoredItemComponents:(id)arg1 inExpandedLane:(id)arg2 layoutContext:(id)arg3 usedRegion:(id)arg4;
- (BOOL)_autocollapseShouldSetBounds:(struct CGRect)arg1 forLaneFragment:(id)arg2;
- (void)_layoutAnchoredItemComponents:(id)arg1 inCollapsedLane:(id)arg2 layoutContext:(id)arg3 usedRegion:(id)arg4;
- (void)_layoutAnchoredItemComponents:(id)arg1 inLayoutContext:(id)arg2 usedRegion:(id)arg3 isFlipped:(BOOL)arg4;
- (struct CGRect)_intrinsicFrameForItemLaneFragment:(id)arg1;
- (void)_reserveSpaceForItemComponentFragments:(id)arg1 inUsedRegion:(id)arg2 isFlipped:(BOOL)arg3;
- (void)_reserveSpaceForItemComponentFragment:(id)arg1 inUsedRegion:(id)arg2 isFlipped:(BOOL)arg3;
- (double)_verticalSpacingBeforeItemComponentFragment:(id)arg1;
- (id)_recycleNextItemFragmentForComponentInfo:(id)arg1 inLayoutContext:(id)arg2;
- (CDStruct_1b6d18a9)_timelineStartTime;
- (void)_performHorizontalLayoutForItemsAdded:(id)arg1 removed:(id)arg2 modified:(id)arg3;
- (id)_performHorizontalLayoutForItems:(id)arg1;
- (void)_updateAnchorLocationForItem:(id)arg1;
- (id)_itemsNeedingRippleAdjustmentForItemsAdded:(id)arg1 removed:(id)arg2 modified:(id)arg3;
- (struct _TLKRange)_locationRangeForItemTimeRange:(CDStruct_e83c9415)arg1 inContainer:(id)arg2;
- (struct _TLKRange)_roundedLocationRange:(struct _TLKRange)arg1;
- (void)invalidateCachedLocationRanges;
- (void)timingModelChanged:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)containerMetricsForContainerInfo:(id)arg1;
- (id)containerMetricsForContainer:(id)arg1;
@property(nonatomic) BOOL wraps;
@property(nonatomic) BOOL allowsMultipleTracks;
- (void)dealloc;
- (id)initWithLayoutDatabase:(id)arg1;

@end


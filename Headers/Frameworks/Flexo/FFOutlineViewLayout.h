//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FFOutlineViewExpandableRow, NSArray, NSIndexPath, NSMutableArray;

__attribute__((visibility("hidden")))
@interface FFOutlineViewLayout : NSObject
{
    id <FFOutlineViewLayoutManager> _manager;
    double _defaultRowHeight;
    NSMutableArray *_visibleCells;
    unsigned long long _visibleCellsLocation;
    struct FFEdgeInsets _edgeInsets;
    NSIndexPath *_baseIndexPath;
    double _preferredContentHeight;
    NSMutableArray *_sublayouts;
    NSMutableArray *_rows;
    FFOutlineViewExpandableRow *_parentRow;
    BOOL _hasExpandableRows;
}

@property(readonly, nonatomic) struct _NSRange visibleCellsRange;
- (id)collectVisibleCellsByIndexPathToDictionary:(id)arg1;
- (id)collectIndexPathsToArray:(id)arg1;
- (void)visitSublayoutsWithBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSIndexPath *lastIndexPath;
- (id)indexPathForRowAtYCoordinate:(double)arg1;
- (struct CGRect)frameForRowAtIndexPath:(id)arg1;
- (id)initWithBaseIndexPath:(id)arg1;
- (id)init;
- (unsigned long long)dataSourceNumberOfRows;
- (id)dataSourceCellForRowAtIndex:(unsigned long long)arg1;
- (BOOL)dataSourceIsRowExpandableAtIndex:(unsigned long long)arg1;
- (BOOL)dataSourceIsRowInitiallyExpandedAtIndex:(unsigned long long)arg1;
- (double)delegateHeightForRowAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) double summaryHeight;
- (double)yDistanceToRowAtIndex:(unsigned long long)arg1;
- (struct _NSRange)rangeOfItemsInRect:(struct CGRect)arg1;
- (struct _NSRange)dataSourceToVisibleRange:(struct _NSRange)arg1;
- (id)dataSourceToVisibleIndexes:(id)arg1;
- (void)removeVisibleCellsInRange:(struct _NSRange)arg1;
- (void)removeAllVisibleCells;
- (void)removeVisibleCellsFromEdge:(int)arg1 toLocation:(unsigned long long)arg2;
- (void)addVisibleCellsAtEdge:(int)arg1 count:(unsigned long long)arg2;
@property(readonly, nonatomic) struct CGRect layoutViewBounds;
- (void)updateVisibleCells;
- (void)layout;
@property(readonly, nonatomic) BOOL canUpdateVisibleRect;
- (void)updatePreferredContentHeight;
- (id)mutableRows;
- (id)mutableSublayouts;
- (void)cleanupRows;
- (void)fillRows;
- (void)reloadRows;
- (void)reloadData;
- (void)updateExpandedRows;
- (void)updateLayoutViewVisibleRect;
- (BOOL)hasExpandableRows;
- (id)dataSource;
- (id)delegate;
- (id)reuseManager;
- (id)layoutView;
- (id)outlineView;
- (struct CGRect)visibleRectForLayout;
- (double)yOriginOfLayout:(id)arg1;
- (double)indentationForLayout:(id)arg1;
@property(readonly, nonatomic) double yOrigin;
- (BOOL)isExpanded;
- (void)dealloc;
@property(readonly, nonatomic) NSArray *sublayouts; // @synthesize sublayouts=_sublayouts;
@property(readonly) NSIndexPath *baseIndexPath; // @synthesize baseIndexPath=_baseIndexPath;
@property(readonly, nonatomic) NSArray *rows; // @synthesize rows=_rows;
@property(nonatomic) FFOutlineViewExpandableRow *parentRow; // @synthesize parentRow=_parentRow;
@property(readonly, nonatomic) double preferredContentHeight; // @synthesize preferredContentHeight=_preferredContentHeight;
@property(nonatomic) id <FFOutlineViewLayoutManager> manager; // @synthesize manager=_manager;
@property(nonatomic) struct FFEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
@property(readonly, nonatomic) NSArray *visibleCells; // @synthesize visibleCells=_visibleCells;
@property(readonly, nonatomic) double defaultRowHeight; // @synthesize defaultRowHeight=_defaultRowHeight;

@end

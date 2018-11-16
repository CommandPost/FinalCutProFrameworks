//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray, NSMutableArray, TLKItemEdgeTable;

@interface TLKLayoutSegmentTable : NSObject <NSCopying>
{
    id _container;
    NSMutableArray *_layoutSegments;
    TLKItemEdgeTable *_itemEdgeTable;
    BOOL _isFlipped;
}

@property(nonatomic) BOOL isFlipped; // @synthesize isFlipped=_isFlipped;
@property(readonly, nonatomic) id container; // @synthesize container=_container;
- (id)layoutSegmentsNeedingLayout;
- (id)reloadWithItemsAdded:(id)arg1 removed:(id)arg2 modified:(id)arg3 spineItems:(id)arg4 timeRangeBlock:(CDUnknownBlockType)arg5;
- (id)calculateLayoutSegments;
- (id)_updateItemTimeRangesWithBlock:(CDUnknownBlockType)arg1;
- (id)layoutSegmentForItem:(id)arg1;
- (void)removeObject:(id)arg1;
- (void)_addSpineObject:(id)arg1 withTimeRange:(CDStruct_e83c9415)arg2;
- (void)_addAnchoredObject:(id)arg1 withTimeRange:(CDStruct_e83c9415)arg2;
- (void)removeLayoutSegmentsObject:(id)arg1;
- (void)addLayoutSegmentsObject:(id)arg1;
@property(copy, nonatomic) NSArray *layoutSegments;
- (id)_subtreeDescription;
- (id)description;
- (void)reset;
- (CDStruct_e83c9415)timeRange;
- (BOOL)isEmpty;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithContainer:(id)arg1;
- (id)init;

@end

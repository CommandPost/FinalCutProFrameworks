//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TLKit/NSCopying-Protocol.h>

@class NSArray, NSMutableArray, TLKItemEdgeTable;

@interface TLKLayoutSegmentTable : NSObject <NSCopying>
{
    id _container;
    NSMutableArray *_layoutSegments;
    BOOL _isFlipped;
    TLKItemEdgeTable *_itemEdgeTable;
}

@property(retain) TLKItemEdgeTable *itemEdgeTable; // @synthesize itemEdgeTable=_itemEdgeTable;
@property(nonatomic) BOOL isFlipped; // @synthesize isFlipped=_isFlipped;
@property(readonly, nonatomic) id container; // @synthesize container=_container;
- (id)layoutSegmentsNeedingLayout;
- (id)reloadWithItemsAdded:(id)arg1 removed:(id)arg2 modified:(id)arg3 spineItems:(id)arg4 timeRangeBlock:(CDUnknownBlockType)arg5;
- (id)calculateLayoutSegments;
- (id)_updateItemTimeRangesWithBlock:(CDUnknownBlockType)arg1;
- (void)enumerateLayoutSegmentsInTimeRange:(CDStruct_e83c9415)arg1 withBlock:(CDUnknownBlockType)arg2;
- (struct _NSRange)rangeOfLayoutSegmentsInTimeRange:(CDStruct_e83c9415)arg1;
- (id)layoutSegmentAtTime:(CDStruct_1b6d18a9)arg1;
- (id)layoutSegmentForItem:(id)arg1;
- (void)removeObject:(id)arg1;
- (void)removeLayoutSegmentsObject:(id)arg1;
- (void)addLayoutSegmentsObject:(id)arg1;
@property(copy, nonatomic) NSArray *layoutSegments;
- (id)_subtreeDescription;
- (id)description;
- (CDStruct_e83c9415)timeRange;
- (BOOL)isEmpty;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithContainer:(id)arg1;
- (id)init;

@end


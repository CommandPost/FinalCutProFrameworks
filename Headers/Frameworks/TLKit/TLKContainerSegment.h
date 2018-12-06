//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableSet, NSSet, TLKContainerSegmentTable;

@interface TLKContainerSegment : NSObject
{
    TLKContainerSegmentTable *_containerSegmentTable;
    NSMutableSet *_anchoredItems;
    NSMutableSet *_spineItems;
    struct _TLKRange _locationRange;
    struct {
        unsigned int needsLayout:1;
        unsigned int locationRangeNeedsUpdate:1;
        unsigned int RESERVED:30;
    } _lsFlags;
}

+ (CDUnknownBlockType)containerSegmentComparator;
- (id)init;
- (void)dealloc;
@property(nonatomic) struct _TLKRange locationRange; // @synthesize locationRange=_locationRange;
- (BOOL)locationRangeNeedsUpdate;
@property(nonatomic) BOOL needsLayout;
- (void)addAnchoredItemsObject:(id)arg1;
- (void)removeAnchoredItemsObject:(id)arg1;
- (void)addSpineItemsObject:(id)arg1;
- (void)removeSpineItemsObject:(id)arg1;
- (long long)compareContainerSegment:(id)arg1;
- (id)description;
@property(nonatomic) TLKContainerSegmentTable *containerSegmentTable; // @synthesize containerSegmentTable=_containerSegmentTable;
@property(copy, nonatomic) NSSet *spineItems; // @synthesize spineItems=_spineItems;
@property(copy, nonatomic) NSSet *anchoredItems; // @synthesize anchoredItems=_anchoredItems;

@end


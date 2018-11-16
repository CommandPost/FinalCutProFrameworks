//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, TLKItemEdgeTable;

@interface TLKContainerSegmentTable : NSObject
{
    NSMutableArray *_containerSegments;
    TLKItemEdgeTable *_itemEdgeTable;
}

@property(copy, nonatomic) NSArray *containerSegments; // @synthesize containerSegments=_containerSegments;
- (id)findInvalidItemsForItems:(id)arg1;
- (id)invalidSegments;
- (void)calculateSegments;
- (void)removeManagedItemsObject:(id)arg1 fromContainerSegment:(id)arg2;
- (void)addManagedItemsObject:(id)arg1 withFrame:(struct CGRect)arg2 isAnchored:(BOOL)arg3;
- (void)removeContainerSegmentsObject:(id)arg1;
- (void)addContainerSegmentsObject:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)init;

@end


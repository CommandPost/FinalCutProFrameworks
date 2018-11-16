//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray, NSMapTable, NSMutableArray;

@interface TLKItemEdgeTable : NSObject <NSCopying>
{
    NSMutableArray *_itemEdges;
    NSMapTable *_leadingEdgesTOC;
    NSMapTable *_trailingEdgesTOC;
}

@property(copy, nonatomic) NSArray *itemEdges; // @synthesize itemEdges=_itemEdges;
- (id)trailingEdgeInfoForItem:(id)arg1;
- (id)leadingEdgeInfoForItem:(id)arg1;
- (void)noteTimeRangeChanged:(CDStruct_e83c9415)arg1 forItem:(id)arg2;
- (void)removeItemEdgeInfoForItem:(id)arg1;
- (void)addItemEdgeInfoForItem:(id)arg1 withTimeRange:(CDStruct_e83c9415)arg2 isAnchored:(BOOL)arg3;
- (void)_addTrailingEdgeInfo:(id)arg1 forItem:(id)arg2;
- (void)_addLeadingEdgeInfo:(id)arg1 forItem:(id)arg2;
- (id)description;
- (void)reset;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

@end


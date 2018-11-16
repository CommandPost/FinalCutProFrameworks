//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMapTable, NSMutableSet, NSSet;

@interface TLKVerticalIndexTable : NSObject
{
    BOOL _allowsDuplicateObjects;
    unsigned long long _sortOrder;
    NSMapTable *_objectsTable;
    NSMapTable *_reverseObjectsTable;
    NSMutableSet *_keysNeedingSort;
    NSArray *_orderedVerticalIndexTableKeys;
}

@property(copy, nonatomic) NSArray *orderedVerticalIndexTableKeys; // @synthesize orderedVerticalIndexTableKeys=_orderedVerticalIndexTableKeys;
@property(readonly, nonatomic) NSMutableSet *keysNeedingSort; // @synthesize keysNeedingSort=_keysNeedingSort;
@property(readonly, nonatomic) NSMapTable *reverseObjectsTable; // @synthesize reverseObjectsTable=_reverseObjectsTable;
@property(readonly, nonatomic) NSMapTable *objectsTable; // @synthesize objectsTable=_objectsTable;
@property(nonatomic) unsigned long long sortOrder; // @synthesize sortOrder=_sortOrder;
@property(nonatomic) BOOL allowsDuplicateObjects; // @synthesize allowsDuplicateObjects=_allowsDuplicateObjects;
- (id)findNextLayoutGraphNode:(id)arg1 delta:(long long)arg2 inRange:(struct _TLKRange)arg3;
- (id)nextVerticalIndexTableKey:(long long)arg1 fromVerticalIndexTableKey:(id)arg2;
- (void)sortRowsByTimeRange;
- (void)sortRowsUsingComparator:(CDUnknownBlockType)arg1;
- (void)_noteObjectsChangedForVerticalIndexTableKey:(id)arg1;
- (BOOL)containsLayoutGraphNode:(id)arg1;
- (void)removeLayoutGraphNodeObjects:(id)arg1;
- (BOOL)removeLayoutGraphNode:(id)arg1;
- (BOOL)_removeLayoutGraphNode:(id)arg1 forVerticalIndexTableKey:(id)arg2;
- (void)updateLayoutGraphNodeObjects:(id)arg1;
- (BOOL)updateLayoutGraphNode:(id)arg1;
- (void)addLayoutGraphNodeObjects:(id)arg1;
- (void)addLayoutGraphNode:(id)arg1;
- (void)removeObjectsForVerticalIndexTableKey:(id)arg1;
@property(readonly, nonatomic) BOOL isEmpty;
@property(readonly, nonatomic) NSArray *orderedLayoutGraphNodes;
- (id)layoutGraphNodesForVerticalIndexTableKey:(id)arg1;
- (id)verticalIndexTableKeyForLayoutGraphNode:(id)arg1;
@property(readonly, nonatomic) NSSet *verticalIndexTableKeys;
- (BOOL)_isDuplicateLayoutGraphNode:(id)arg1;
- (id)debugDescription;
- (void)dealloc;
- (id)init;

@end


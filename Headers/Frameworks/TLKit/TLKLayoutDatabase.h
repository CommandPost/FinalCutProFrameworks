//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TLKit/ERLRelationalModel.h>

#import "NSCopying.h"

@class ERLRelationalTable, NSArray, NSMapTable, NSMutableArray, NSMutableSet, NSSet, PCChangeLog, TLKDataSourceProxy, TLKDelegateProxy, TLKItemLaneInfo, TLKLayoutGraph, TLKLayoutManager, TLKRangeSelection, TLKTimingModel;

@interface TLKLayoutDatabase : ERLRelationalModel <NSCopying>
{
    TLKLayoutManager *_layoutManager;
    TLKDataSourceProxy *_dataSourceProxy;
    TLKTimingModel *_timingModel;
    CDStruct_e83c9415 _trimmingTimeRift;
    NSSet *_managedItems;
    NSSet *_managedItemComponents;
    NSMapTable *_lineFragmentContextsMap;
    NSMapTable *_containerInfoMap;
    NSMutableSet *_itemInfoRecords;
    NSMapTable *_itemsIndex;
    NSMutableSet *_itemComponentRecords;
    NSMapTable *_itemComponentsIndex;
    NSMutableSet *_itemLaneInfoRecords;
    NSMapTable *_itemLanesIndex;
    NSMutableSet *_itemLaneFragments;
    NSMapTable *_itemLaneFragmentsIndex;
    NSMutableArray *_lineFragments;
    NSMutableArray *_tracks;
    NSMutableArray *_layoutTiles;
    unsigned long long _transactionLevel;
    CDStruct_1b6d18a9 _logicalStartTime;
    int _rulerPlacementMode;
    int _layoutRoundingMode;
    NSSet *_draggedObjects;
    struct {
        unsigned int showsTransitionPlaceholders:1;
        unsigned int RESERVED:31;
    } _ldFlags;
    struct {
        unsigned int didCompleteLayoutForTile:1;
        unsigned int willUseLayoutFrameForItem:1;
        unsigned int willUseLineFragmentRectForItems:1;
        unsigned int RESERVED:29;
    } _delegateRespondsTo;
    NSMutableSet *_cachedLayoutContexts;
    TLKItemLaneInfo *_backgroundMusicLane;
    BOOL _backgroundMusicLaneIsValid;
    BOOL _allowsMultipleTracks;
    double _minThumbnailCount;
    TLKDelegateProxy *_delegateProxy;
    TLKRangeSelection *_rangeSelection;
    ERLRelationalTable *_containersTable;
    ERLRelationalTable *_itemsTable;
    ERLRelationalTable *_itemComponentsTable;
    ERLRelationalTable *_itemComponentFragmentsTable;
    ERLRelationalTable *_lineFragmentsTable;
    ERLRelationalTable *_lanesTable;
    ERLRelationalTable *_laneFragmentsTable;
    ERLRelationalTable *_layoutContextsTable;
    TLKLayoutGraph *_layoutGraph;
    NSSet *_selectedItemComponents;
    TLKItemLaneInfo *_spineLaneInfo;
}

@property(copy, nonatomic) NSSet *managedItemComponents; // @synthesize managedItemComponents=_managedItemComponents;
@property(copy, nonatomic) NSSet *managedItems; // @synthesize managedItems=_managedItems;
@property(retain, nonatomic) TLKItemLaneInfo *spineLaneInfo; // @synthesize spineLaneInfo=_spineLaneInfo;
@property(copy, nonatomic) NSSet *selectedItemComponents; // @synthesize selectedItemComponents=_selectedItemComponents;
@property(retain, nonatomic) TLKLayoutGraph *layoutGraph; // @synthesize layoutGraph=_layoutGraph;
@property(readonly, nonatomic) ERLRelationalTable *layoutContextsTable; // @synthesize layoutContextsTable=_layoutContextsTable;
@property(readonly, nonatomic) ERLRelationalTable *laneFragmentsTable; // @synthesize laneFragmentsTable=_laneFragmentsTable;
@property(readonly, nonatomic) ERLRelationalTable *lanesTable; // @synthesize lanesTable=_lanesTable;
@property(readonly, nonatomic) ERLRelationalTable *lineFragmentsTable; // @synthesize lineFragmentsTable=_lineFragmentsTable;
@property(readonly, nonatomic) ERLRelationalTable *itemComponentFragmentsTable; // @synthesize itemComponentFragmentsTable=_itemComponentFragmentsTable;
@property(readonly, nonatomic) ERLRelationalTable *itemComponentsTable; // @synthesize itemComponentsTable=_itemComponentsTable;
@property(readonly, nonatomic) ERLRelationalTable *itemsTable; // @synthesize itemsTable=_itemsTable;
@property(readonly, nonatomic) ERLRelationalTable *containersTable; // @synthesize containersTable=_containersTable;
@property(readonly, nonatomic) TLKRangeSelection *rangeSelection; // @synthesize rangeSelection=_rangeSelection;
@property(nonatomic) CDStruct_e83c9415 trimmingTimeRift; // @synthesize trimmingTimeRift=_trimmingTimeRift;
@property(nonatomic) BOOL allowsMultipleTracks; // @synthesize allowsMultipleTracks=_allowsMultipleTracks;
@property(copy, nonatomic) NSArray *tracks; // @synthesize tracks=_tracks;
@property(retain, nonatomic) TLKTimingModel *timingModel; // @synthesize timingModel=_timingModel;
@property(retain, nonatomic) TLKDelegateProxy *delegateProxy; // @synthesize delegateProxy=_delegateProxy;
@property(retain, nonatomic) TLKDataSourceProxy *dataSourceProxy; // @synthesize dataSourceProxy=_dataSourceProxy;
@property(nonatomic) double minThumbnailCount; // @synthesize minThumbnailCount=_minThumbnailCount;
@property(nonatomic) CDStruct_1b6d18a9 logicalStartTime; // @synthesize logicalStartTime=_logicalStartTime;
@property(nonatomic) int layoutRoundingMode; // @synthesize layoutRoundingMode=_layoutRoundingMode;
@property(nonatomic) int rulerPlacementMode; // @synthesize rulerPlacementMode=_rulerPlacementMode;
- (id)debugDumpRepresentedObjects;
- (id)_dumpItemComponentFragmentsTable;
- (id)_lineFragmentDebugDescription:(id)arg1 forItemComponents:(id)arg2 padding:(id)arg3;
- (id)_debugDescriptionForItemComponentsInUnassignedLane:(id)arg1 inLayoutContext:(id)arg2 padding:(id)arg3;
- (id)_layoutContextDebugDescription:(id)arg1 selectedItemComponents:(id)arg2 padding:(id)arg3;
- (id)_laneFragmentDebugDescription:(id)arg1 selectedItemComponents:(id)arg2 padding:(id)arg3;
- (id)_debugDescriptionForItemComponentFragments:(id)arg1 selectedItemComponents:(id)arg2 padding:(id)arg3;
- (id)debugDescriptionForItemComponents:(id)arg1;
- (id)debugDescription;
- (id)transitionPlaceholderIndexesForContainer:(id)arg1;
- (id)itemLaneFragmentForItemLane:(id)arg1 inLayoutContext:(id)arg2;
- (id)laneFragmentForLaneInfo:(id)arg1 inLayoutContext:(id)arg2;
- (void)removeItemLaneFragment:(id)arg1;
- (void)addItemLaneFragment:(id)arg1;
- (id)_newPrimaryKeyForItemLaneFragmentsTableWithLaneInfo:(id)arg1 layoutContext:(id)arg2;
- (void)setItemLaneFragments:(id)arg1;
- (id)itemLaneFragments;
- (unsigned long long)countOfItemLaneFragments;
- (void)setLayoutContext:(id)arg1 forContainer:(id)arg2 inLineFragment:(id)arg3;
- (id)layoutContextForContainer:(id)arg1 inLineFragment:(id)arg2;
- (void)enumerateLayoutContextsWithBlock:(CDUnknownBlockType)arg1;
- (id)trackLayoutContexts;
- (id)layoutContexts;
- (void)resetCachedLayoutContexts;
- (void)removeLineFragment:(id)arg1;
- (void)addLineFragment:(id)arg1;
- (void)setLineFragments:(id)arg1;
- (id)lineFragments;
- (unsigned long long)indexOfObjectInLineFragments:(id)arg1;
- (id)lineFragmentAtIndex:(unsigned long long)arg1;
- (unsigned long long)countOfLineFragments;
- (void)removeLayoutTile:(id)arg1;
- (void)addLayoutTile:(id)arg1;
- (id)layoutTileAtIndex:(unsigned long long)arg1;
- (unsigned long long)countOfLayoutTiles;
- (void)setLayoutTiles:(id)arg1;
- (id)layoutTiles;
- (struct CGRect)boundingBox;
@property(readonly, nonatomic) PCChangeLog *changeLog;
- (void)removeItemComponentInfoRecordsObject:(id)arg1;
- (void)addItemComponentInfoRecordsObject:(id)arg1;
- (id)itemComponentInfoRecords;
@property(nonatomic) BOOL showsTransitionPlaceholders;
- (void)enumerateTracksWithBlock:(CDUnknownBlockType)arg1;
- (id)objectAtIndexInTracks:(unsigned long long)arg1;
- (unsigned long long)indexOfObjectInTracks:(id)arg1;
- (unsigned long long)numberOfTracks;
- (void)reset;
- (id)focusedTrack;
- (id)timingTrack;
- (id)backgroundMusicLaneInfo;
- (void)resetBackgroundMusicLane;
- (id)itemLanesForTrack:(id)arg1;
- (void)setItemLaneInfo:(id)arg1 forItemLane:(id)arg2 inTrack:(id)arg3;
- (id)itemLaneInfoForItemLane:(id)arg1 inTrack:(id)arg2;
- (id)_indexKeyForItemLane:(id)arg1 inTrack:(id)arg2;
- (id)topLevelLanesPredicate;
- (id)itemLaneInfoRecords;
- (void)removeContainerInfoForContainer:(id)arg1;
- (void)setContainerInfo:(id)arg1 forContainer:(id)arg2;
- (id)containerInfoForContainer:(id)arg1;
- (void)removeContainerInfoRecordsObject:(id)arg1;
- (void)addContainerInfoRecordsObject:(id)arg1;
@property(readonly, nonatomic) NSSet *containerInfoRecords;
- (void)setLayoutInfo:(id)arg1 forItemComponent:(id)arg2;
- (id)layoutInfoForItemComponent:(id)arg1;
- (void)setLayoutInfo:(id)arg1 forItem:(id)arg2;
- (id)layoutInfoForItem:(id)arg1;
- (id)containersForItem:(id)arg1;
- (id)itemsGroupedByContainer:(id)arg1;
- (id)itemComponentFragments;
- (void)removeItemInfoRecordsObject:(id)arg1;
- (void)addItemInfoRecordsObject:(id)arg1;
- (id)itemInfoRecords;
- (unsigned long long)countOfItemInfoRecords;
@property(copy, nonatomic) NSSet *draggedObjects;
- (void)_setIsDragging:(BOOL)arg1 forObject:(id)arg2;
- (BOOL)isManagedItem:(id)arg1;
- (id)timelineItemComponents;
- (id)timelineItems;
- (id)containers;
@property(readonly, nonatomic) TLKLayoutManager *layoutManager;
@property(nonatomic) double defaultItemHeight;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TLKit/ERLRelationalObject.h>

#import "NSCopying.h"

@class NSArray, NSMutableArray, NSMutableSet, NSSet, NSString, TLKContainerMetrics, TLKLayoutSegmentTable, TLKVerticalIndexTable;

@interface TLKContainerInfo : ERLRelationalObject <NSCopying>
{
    NSMutableSet *_itemComponentInfoRecords;
    NSMutableArray *_itemLaneInfoRecords;
    NSMutableSet *_subcontainerInfoRecords;
    NSMutableSet *_layoutContexts;
    NSArray *_spineItems;
    NSMutableArray *_spineItemInfoRecords;
    TLKContainerMetrics *_containerMetrics;
    TLKLayoutSegmentTable *_segmentTableAboveSpine;
    TLKLayoutSegmentTable *_segmentTableBelowSpine;
    NSString *_accessibilityDisplayName;
    BOOL _isTrack;
    BOOL _precisionEditorIsChangingEditPoint;
    int _precisionEditorState;
    id _representedObject;
    TLKContainerInfo *_enclosingContainerInfo;
    unsigned long long _trackIndex;
    TLKVerticalIndexTable *_verticalIndexTableOnSpine;
    TLKVerticalIndexTable *_verticalIndexTableAboveSpine;
    TLKVerticalIndexTable *_verticalIndexTableBelowSpine;
    id _leftPrecisionEditorItem;
    id _rightPrecisionEditorItem;
    id _precisionEditorTransitionItem;
    id _savedWrappingState;
    CDStruct_e83c9415 _timeRange;
}

@property(nonatomic) CDStruct_e83c9415 timeRange; // @synthesize timeRange=_timeRange;
@property(copy, nonatomic) NSSet *itemComponentInfoRecords; // @synthesize itemComponentInfoRecords=_itemComponentInfoRecords;
@property(retain, nonatomic) id savedWrappingState; // @synthesize savedWrappingState=_savedWrappingState;
@property(nonatomic) BOOL precisionEditorIsChangingEditPoint; // @synthesize precisionEditorIsChangingEditPoint=_precisionEditorIsChangingEditPoint;
@property(nonatomic) int precisionEditorState; // @synthesize precisionEditorState=_precisionEditorState;
@property(retain, nonatomic) id precisionEditorTransitionItem; // @synthesize precisionEditorTransitionItem=_precisionEditorTransitionItem;
@property(retain, nonatomic) id rightPrecisionEditorItem; // @synthesize rightPrecisionEditorItem=_rightPrecisionEditorItem;
@property(retain, nonatomic) id leftPrecisionEditorItem; // @synthesize leftPrecisionEditorItem=_leftPrecisionEditorItem;
@property(retain, nonatomic) TLKVerticalIndexTable *verticalIndexTableBelowSpine; // @synthesize verticalIndexTableBelowSpine=_verticalIndexTableBelowSpine;
@property(retain, nonatomic) TLKVerticalIndexTable *verticalIndexTableAboveSpine; // @synthesize verticalIndexTableAboveSpine=_verticalIndexTableAboveSpine;
@property(retain, nonatomic) TLKVerticalIndexTable *verticalIndexTableOnSpine; // @synthesize verticalIndexTableOnSpine=_verticalIndexTableOnSpine;
@property(readonly, nonatomic) TLKLayoutSegmentTable *segmentTableBelowSpine; // @synthesize segmentTableBelowSpine=_segmentTableBelowSpine;
@property(readonly, nonatomic) TLKLayoutSegmentTable *segmentTableAboveSpine; // @synthesize segmentTableAboveSpine=_segmentTableAboveSpine;
@property(retain, nonatomic) TLKContainerMetrics *containerMetrics; // @synthesize containerMetrics=_containerMetrics;
@property(copy, nonatomic) NSString *accessibilityDisplayName; // @synthesize accessibilityDisplayName=_accessibilityDisplayName;
@property(copy, nonatomic) NSArray *spineItems; // @synthesize spineItems=_spineItems;
@property(nonatomic) unsigned long long trackIndex; // @synthesize trackIndex=_trackIndex;
@property(nonatomic) BOOL isTrack; // @synthesize isTrack=_isTrack;
@property(nonatomic) TLKContainerInfo *enclosingContainerInfo; // @synthesize enclosingContainerInfo=_enclosingContainerInfo;
@property(readonly, nonatomic) id representedObject; // @synthesize representedObject=_representedObject;
@property(readonly, nonatomic) NSSet *timelineItems;
- (id)newUnifiedVisuallyOrderedVerticalIndexTable;
- (id)newVerticalIndexTableForLayoutRegions:(id)arg1 withNodesPassingTest:(CDUnknownBlockType)arg2;
- (id)verticalIndexTableForLayoutRegion:(long long)arg1;
- (id)itemLaneInfoRecordsForLayoutRegion:(long long)arg1;
- (void)removeItemLaneInfoRecordsObject:(id)arg1;
- (void)addItemLaneInfoRecordsObject:(id)arg1;
@property(copy, nonatomic) NSArray *itemLaneInfoRecords;
- (id)nonWrappingLayoutContext;
- (void)removeSubcontainerInfoRecordsObject:(id)arg1;
- (void)addSubcontainerInfoRecordsObject:(id)arg1;
@property(copy, nonatomic) NSSet *subcontainerInfoRecords;
- (void)removeLayoutContextsObject:(id)arg1;
- (void)addLayoutContextsObject:(id)arg1;
@property(copy, nonatomic) NSSet *layoutContexts;
- (void)removeItemComponentInfoRecordsObject:(id)arg1;
- (void)addItemComponentInfoRecordsObject:(id)arg1;
- (void)removeSpineItemInfoRecordsObject:(id)arg1;
- (void)addSpineItemInfoRecordsObject:(id)arg1;
@property(nonatomic) NSArray *spineItemInfoRecords; // @synthesize spineItemInfoRecords=_spineItemInfoRecords;
- (void)_rebuildSpineItemInfoRecords;
- (void)_noteSpineItemInfoRecordsNeedRebuilding;
- (id)database;
@property(readonly, nonatomic) unsigned long long nestingLevel;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_breakItemComponentRetainCycles;
- (void)dealloc;
- (id)initWithRepresentedObject:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TLKit/ERLRelationalObject.h>

#import "NSCopying.h"
#import "TLKLayoutConstraining.h"

@class NSArray, NSColor, NSMutableArray, NSMutableSet, NSSet, NSString, TLKContainerInfo, TLKItemLaneInfo, TLKItemLayoutInfo, TLKLayoutDatabase, TLKVerticalIndexTable;

@interface TLKItemComponentInfo : ERLRelationalObject <NSCopying, TLKLayoutConstraining>
{
    struct {
        unsigned int accessoryLayerVisible:1;
        unsigned int RESERVED:31;
    } _componentFlags;
    TLKItemLayoutInfo *_itemInfo;
    TLKContainerInfo *_enclosingContainerInfo;
    id _representedObject;
    BOOL _shouldHighlightComponent;
    NSMutableArray *_itemComponentFragments;
    NSMutableSet *_layoutConstraints;
    NSMutableSet *_layoutConstraintObservers;
    BOOL _resortingItemComponentFragments;
    struct _TLKRange _locationRange;
    BOOL _locationRangeNeedsUpdate;
    BOOL _isDragging;
    BOOL _needsLayout;
    BOOL _hidden;
    int _containmentTypeMask;
    int _itemComponentType;
    unsigned long long _itemComponentIndex;
    double _height;
    NSColor *_backgroundColor;
    id <TLKVerticalIndexing> _verticalIndexValue;
    NSString *_displayName;
    NSString *_editableName;
    NSString *_accessibilityDisplayName;
    TLKVerticalIndexTable *_verticalIndexTable;
    TLKContainerInfo *_deletedFromContainerInfo;
    TLKItemLaneInfo *_deletedFromLaneInfo;
    unsigned long long _flags;
    long long _layoutRegion;
    TLKItemLaneInfo *_laneInfo;
    TLKLayoutDatabase *_layoutDatabase;
    struct _TLKRange _timeRangeInSeconds;
    struct _TLKRange _nonOverlappingTimeRangeInSeconds;
    CDStruct_e83c9415 _timeRange;
    CDStruct_e83c9415 _nonOverlappingTimeRange;
    CDStruct_e83c9415 _timeRangeLimits;
}

@property(nonatomic) TLKLayoutDatabase *layoutDatabase; // @synthesize layoutDatabase=_layoutDatabase;
@property(nonatomic) BOOL hidden; // @synthesize hidden=_hidden;
@property(nonatomic) TLKItemLaneInfo *laneInfo; // @synthesize laneInfo=_laneInfo;
@property(nonatomic) long long layoutRegion; // @synthesize layoutRegion=_layoutRegion;
@property(nonatomic) BOOL needsLayout; // @synthesize needsLayout=_needsLayout;
@property(nonatomic) unsigned long long flags; // @synthesize flags=_flags;
@property(readonly, nonatomic) TLKItemLaneInfo *deletedFromLaneInfo; // @synthesize deletedFromLaneInfo=_deletedFromLaneInfo;
@property(readonly, nonatomic) TLKContainerInfo *deletedFromContainerInfo; // @synthesize deletedFromContainerInfo=_deletedFromContainerInfo;
@property(nonatomic) TLKVerticalIndexTable *verticalIndexTable; // @synthesize verticalIndexTable=_verticalIndexTable;
@property(nonatomic) BOOL isDragging; // @synthesize isDragging=_isDragging;
@property(nonatomic) CDStruct_e83c9415 timeRangeLimits; // @synthesize timeRangeLimits=_timeRangeLimits;
@property(nonatomic) struct _TLKRange nonOverlappingTimeRangeInSeconds; // @synthesize nonOverlappingTimeRangeInSeconds=_nonOverlappingTimeRangeInSeconds;
@property(nonatomic) CDStruct_e83c9415 nonOverlappingTimeRange; // @synthesize nonOverlappingTimeRange=_nonOverlappingTimeRange;
@property(nonatomic) struct _TLKRange timeRangeInSeconds; // @synthesize timeRangeInSeconds=_timeRangeInSeconds;
@property(nonatomic) CDStruct_e83c9415 timeRange; // @synthesize timeRange=_timeRange;
@property(copy, nonatomic) NSString *accessibilityDisplayName; // @synthesize accessibilityDisplayName=_accessibilityDisplayName;
@property(copy, nonatomic) NSString *editableName; // @synthesize editableName=_editableName;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(copy, nonatomic) id <TLKVerticalIndexing> verticalIndexValue; // @synthesize verticalIndexValue=_verticalIndexValue;
@property(copy, nonatomic) NSColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) int itemComponentType; // @synthesize itemComponentType=_itemComponentType;
@property(nonatomic) int containmentTypeMask; // @synthesize containmentTypeMask=_containmentTypeMask;
@property(nonatomic) double height; // @synthesize height=_height;
@property(nonatomic) BOOL locationRangeNeedsUpdate; // @synthesize locationRangeNeedsUpdate=_locationRangeNeedsUpdate;
@property(nonatomic) unsigned long long itemComponentIndex; // @synthesize itemComponentIndex=_itemComponentIndex;
@property(nonatomic) BOOL shouldHighlightComponent; // @synthesize shouldHighlightComponent=_shouldHighlightComponent;
@property(readonly, nonatomic) id representedObject; // @synthesize representedObject=_representedObject;
- (void)didInsertObjectsInItemComponentFragments:(id)arg1;
- (void)_resortInsertedItemComponentFragments:(id)arg1;
@property(readonly, nonatomic) NSSet *itemComponentLayoutConstraintObservers;
@property(readonly, nonatomic) NSSet *itemComponentLayoutConstraints;
- (struct CGRect)layoutFrameForLayoutContext:(id)arg1;
- (void)removeObserver:(id)arg1 forLayoutConstraint:(id)arg2;
- (void)addObserver:(id)arg1 forLayoutConstraint:(id)arg2;
@property(copy, nonatomic) NSSet *layoutConstraintObservers;
- (void)removeLayoutConstraints:(id)arg1;
- (void)removeLayoutConstraint:(id)arg1;
- (void)addLayoutConstraints:(id)arg1;
- (void)addLayoutConstraint:(id)arg1;
@property(copy, nonatomic) NSSet *layoutConstraints;
@property(readonly, nonatomic) TLKContainerInfo *trackContainerInfo;
@property(nonatomic) TLKContainerInfo *enclosingContainerInfo;
@property(readonly, nonatomic) id container;
- (id)nonWrappingItemComponentFragment;
- (id)itemComponentFragmentForLayoutContext:(id)arg1;
- (id)itemComponentFragmentAtLocation:(double)arg1;
- (id)lastItemComponentFragment;
- (id)firstItemComponentFragment;
- (void)removeItemComponentFragmentsObject:(id)arg1;
- (void)addItemComponentFragmentsObject:(id)arg1;
@property(copy, nonatomic) NSArray *itemComponentFragments;
- (void)enumerateItemComponentFragmentsWithBlock:(CDUnknownBlockType)arg1;
- (BOOL)isLastItemComponent;
- (BOOL)isLastSecondaryComponent;
- (BOOL)isFirstSecondaryComponent;
- (BOOL)isPrimaryComponent;
@property(readonly, nonatomic) struct CGColor *backgroundColorRef;
- (long long)compareByTimeRange:(id)arg1;
@property(nonatomic) struct _TLKRange locationRange;
- (struct _TLKRange)locationRangeForSeconds:(double)arg1;
@property(retain, nonatomic) TLKItemLayoutInfo *itemInfo;
@property(nonatomic) BOOL isAccessoryLayerVisible;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithItemComponent:(id)arg1;
- (id)init;
@property(readonly) BOOL isPrimary;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


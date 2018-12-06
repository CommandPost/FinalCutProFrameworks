//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFPersistentModule.h>

#import "FFOutlineViewDataSource.h"
#import "FFOutlineViewDelegate.h"

@class CATextLayer, FFAnchoredCollection, FFContext, FFOutlineView, FFResponderLayerCheckbox, FFThemeFacetLayer, LKSearchField, LKSegmentedControl, NSArray, NSIndexPath, NSMutableDictionary, NSSet, NSView;

@interface FFDataListModule : FFPersistentModule <FFOutlineViewDataSource, FFOutlineViewDelegate>
{
    BOOL _showsContainedItems;
    BOOL _searchesEffects;
    BOOL _timelineDragging;
    BOOL _showsTotalDuration;
    BOOL _showsDisplayedItemTypesBar;
    BOOL _syncingToTimelineSelection;
    BOOL _timelineSelectionChangingViaTimelineIndex;
    long long _playheadPosition;
    long long _viewType;
    struct FFProcrastinatedDispatch_t _procrastinatedReload;
    CATextLayer *_infoLabelLayer;
    CATextLayer *_clipsButtonTextLayer;
    CATextLayer *_tagsButtonTextLayer;
    FFResponderLayerCheckbox *_clipsButton;
    FFResponderLayerCheckbox *_tagsButton;
    FFThemeFacetLayer *_playheadLayer;
    NSIndexPath *_playheadIndex;
    NSSet *_items;
    NSArray *_arrangedItems;
    NSMutableDictionary *_subpredicateToIdentifierMap;
    FFContext *_context;
    FFAnchoredCollection *_rootItem;
    id <FFDataListDelegate> _dataListDelegate;
    FFOutlineView *_outlineView;
    NSView *_filterBar;
    NSView *_filterBarContentView;
    LKSearchField *_filterField;
    NSView *_infoLabelHostView;
    NSView *_clipsButtonHostView;
    NSView *_tagsButtonHostView;
    NSView *_filterBarBackgroundView;
    NSView *_clipsItemTypesBar;
    LKSegmentedControl *_clipsItemTypesAllButton;
    LKSegmentedControl *_clipsItemTypesControl;
    NSView *_tagsItemTypesBar;
    LKSegmentedControl *_tagsItemTypesAllButton;
    LKSegmentedControl *_tagsItemTypesControl;
    NSIndexPath *_playheadIndexPath;
}

+ (unsigned long long)_themeRef;
+ (id)_playheadFacet;
- (id)init;
- (void)dealloc;
@property(retain, nonatomic) FFAnchoredCollection *rootItem; // @synthesize rootItem=_rootItem;
- (id)registrationDefaults;
- (void)loadDefaults;
- (void)storeDefaults;
- (void)rangeInvalidated:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)showClips:(id)arg1;
- (void)showTags:(id)arg1;
- (void)selectNextTabViewItemAction:(id)arg1;
- (void)selectPreviousTabViewItemAction:(id)arg1;
- (void)filter:(id)arg1;
- (void)changeDisplayedItemTypes:(id)arg1;
- (void)moduleViewWasInstalled:(id)arg1;
- (void)moduleViewWillBeRemoved:(id)arg1;
- (void)module:(id)arg1 didAddSubmodule:(id)arg2;
- (void)module:(id)arg1 willRemoveSubmodule:(id)arg2;
- (void)moduleDidHide;
- (void)moduleDidUnhide;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (id)firstKeyView;
@property(retain, nonatomic) FFContext *context; // @synthesize context=_context;
- (void)timeRateChangedForContext:(id)arg1;
- (void)dataListShouldSearch;
- (void)dataListShouldDeleteItemsAtIndexPaths:(id)arg1;
- (void)setFilterCondition:(id)arg1 forIdentifier:(id)arg2;
- (void)removeFilterConditionForIdentifier:(id)arg1;
- (long long)clipsDisplayedItemTypes;
- (long long)tagsDisplayedItemTypes;
- (void)setDisplayedItemTypes:(long long)arg1;
- (void)timelineWillStartDragging:(id)arg1;
- (void)timelineDidStopDragging:(id)arg1;
- (void)syncToTimelineSelection:(id)arg1;
- (BOOL)isItem:(id)arg1 containedInItem:(id)arg2;
- (long long)outlineView:(id)arg1 numberOfRowsAtIndexPath:(id)arg2;
- (BOOL)outlineView:(id)arg1 isRowExpandableAtIndexPath:(id)arg2;
- (id)outlineView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)outlineViewSelectionDidChange:(id)arg1;
- (BOOL)outlineView:(id)arg1 mouseDownForRowAtIndexPath:(id)arg2 withEvent:(id)arg3;
- (void)_reloadData;
- (void)_rearrangeItems;
- (void)_refilterItems;
- (void)_updateLayout;
- (void)_updateInfoLabel;
- (void)_updatePlayheadAnimated:(BOOL)arg1;
- (void)_changeContextTimeToMatchSelection;
- (id)_supportedItemPredicate;
- (id)_playheadLayer;
- (CDStruct_1b6d18a9)_visibleStartTimeOfObjectInRootItemSpace:(id)arg1;
@property(retain, nonatomic) FFOutlineView *outlineView; // @synthesize outlineView=_outlineView;
@property(nonatomic) id <FFDataListDelegate> dataListDelegate; // @synthesize dataListDelegate=_dataListDelegate;
@property(retain, nonatomic) NSArray *arrangedItems; // @synthesize arrangedItems=_arrangedItems;
@property(retain, nonatomic) NSSet *items; // @synthesize items=_items;
@property(nonatomic) BOOL timelineSelectionChangingViaTimelineIndex; // @synthesize timelineSelectionChangingViaTimelineIndex=_timelineSelectionChangingViaTimelineIndex;
@property(nonatomic) BOOL syncingToTimelineSelection; // @synthesize syncingToTimelineSelection=_syncingToTimelineSelection;
@property(retain, nonatomic) NSIndexPath *playheadIndexPath; // @synthesize playheadIndexPath=_playheadIndexPath;

@end


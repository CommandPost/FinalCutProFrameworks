//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LKViewModule.h"

@class FFAnchoredCollection, FFContext, FFDataListHeaderView, FFDataListModeViewController, LKSearchField, LKSegmentedControl, LKTextField, NSArray, NSMutableDictionary, NSSet, NSView;

@interface FFDataListModule : LKViewModule
{
    BOOL _showsContainedItems;
    BOOL _searchesEffects;
    BOOL _searchesCustomMetadata;
    BOOL _customMetadataIncludesNames;
    BOOL _timelineDragging;
    BOOL _showsTotalDuration;
    BOOL _showsDisplayedItemTypesBar;
    BOOL _syncingToTimelineSelection;
    BOOL _timelineSelectionChangingViaTimelineIndex;
    int _curMode;
    struct FFProcrastinatedDispatch_t _procrastinatedReload;
    NSSet *_items;
    NSArray *_arrangedItems;
    NSMutableDictionary *_subpredicateToIdentifierMap;
    FFContext *_context;
    FFAnchoredCollection *_rootItem;
    id <FFDataListDelegate> _dataListDelegate;
    FFDataListHeaderView *_headerView;
    LKSearchField *_filterField;
    LKSegmentedControl *_tabSwitcher;
    LKTextField *_infoLabel;
    NSView *_contentContainerView;
    BOOL _debugDisplayPlayheadOnItem;
    FFDataListModeViewController *_curModeViewController;
    long long clipFilterTyle;
    long long tagFilterType;
}

@property(nonatomic) BOOL debugDisplayPlayheadOnItem; // @synthesize debugDisplayPlayheadOnItem=_debugDisplayPlayheadOnItem;
@property(nonatomic) long long tagFilterType; // @synthesize tagFilterType;
@property(nonatomic) long long clipFilterTyle; // @synthesize clipFilterTyle;
@property(retain, nonatomic) FFDataListModeViewController *curModeViewController; // @synthesize curModeViewController=_curModeViewController;
@property(retain, nonatomic) NSView *contentContainerView; // @synthesize contentContainerView=_contentContainerView;
@property(retain, nonatomic) LKTextField *infoLabel; // @synthesize infoLabel=_infoLabel;
@property(retain, nonatomic) LKSearchField *filterField; // @synthesize filterField=_filterField;
@property(retain, nonatomic) FFDataListHeaderView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) int curMode; // @synthesize curMode=_curMode;
@property(nonatomic) id <FFDataListDelegate> dataListDelegate; // @synthesize dataListDelegate=_dataListDelegate;
@property(retain, nonatomic) NSArray *arrangedItems; // @synthesize arrangedItems=_arrangedItems;
@property(retain, nonatomic) NSSet *items; // @synthesize items=_items;
@property(retain, nonatomic) FFContext *context; // @synthesize context=_context;
@property(retain, nonatomic) FFAnchoredCollection *rootItem; // @synthesize rootItem=_rootItem;
@property(nonatomic) BOOL timelineSelectionChangingViaTimelineIndex; // @synthesize timelineSelectionChangingViaTimelineIndex=_timelineSelectionChangingViaTimelineIndex;
@property(nonatomic) BOOL syncingToTimelineSelection; // @synthesize syncingToTimelineSelection=_syncingToTimelineSelection;
- (CDStruct_1b6d18a9)_visibleEndTimeOfObjectInRootItemSpace:(id)arg1;
- (CDStruct_1b6d18a9)_visibleStartTimeOfObjectInRootItemSpace:(id)arg1;
- (id)_supportedItemPredicate;
- (void)_changeContextTimeToMatchTableSelection:(id)arg1;
- (void)_updateTagModePlayhead;
- (void)_updateClipModePlayhead;
- (void)_updatePlayhead;
- (CDStruct_1b6d18a9)_timelinePlayheadTime;
- (void)updateInfoLabel;
- (void)_refilterItems;
- (void)_rearrangeItems;
- (void)_reloadData;
- (BOOL)isTimeLineInMultiAngleEditMode;
- (BOOL)isItem:(id)arg1 containedInItem:(id)arg2;
- (id)imageForItem:(id)arg1;
- (id)startTimecodeForItem:(id)arg1;
- (void)removeFilterConditionForIdentifier:(id)arg1;
- (void)setFilterCondition:(id)arg1 forIdentifier:(id)arg2;
- (void)syncTimelineToSelection:(id)arg1;
- (void)syncTimelineToSelectedItems:(id)arg1;
- (void)syncToTimelineSelection:(id)arg1;
- (void)timelineDidStopDragging:(id)arg1;
- (void)timelineWillStartDragging:(id)arg1;
- (void)timeRateChangedForContext:(id)arg1;
- (id)firstKeyView;
- (id)targetModules;
- (void)moduleDidUnhide;
- (void)moduleDidHide;
- (void)module:(id)arg1 willRemoveSubmodule:(id)arg2;
- (void)module:(id)arg1 didAddSubmodule:(id)arg2;
- (void)moduleViewWillBeRemoved:(id)arg1;
- (void)moduleViewWasInstalled:(id)arg1;
- (void)filter:(id)arg1;
- (void)selectPreviousTabViewItemAction:(id)arg1;
- (void)selectNextTabViewItemAction:(id)arg1;
- (void)incrementTabViewItemByAmount:(long long)arg1;
- (void)switchTabs:(id)arg1;
- (void)switchModes:(int)arg1;
- (int)currentMode;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)rangeInvalidated:(id)arg1;
- (id)contentLayoutDictionary;
- (void)takeContentLayoutFromDictionary:(id)arg1;
- (void)awakeFromNib;
- (void)dealloc;
- (id)init;

@end


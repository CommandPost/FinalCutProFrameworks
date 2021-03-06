//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Flexo/FFOrganizerFilmstripViewController.h>

#import <Flexo/FFOrganizerFilmListOutlineViewDelegate-Protocol.h>
#import <Flexo/FFOrganizerFilmstripViewDelegate-Protocol.h>
#import <Flexo/FFRolesMenuDelegate-Protocol.h>
#import <Flexo/NSOutlineViewDataSource-Protocol.h>
#import <Flexo/NSSplitViewDelegate-Protocol.h>

@class FFOrganizerFilmListOutlineView, FigTimeRangeAndObject, LKMenu, LKSplitView, LKTableColumn, NSArray, NSDictionary, NSMenuItem, NSString, NSTreeNode;
@protocol FFOrganizerFilmstripViewDelegate;

__attribute__((visibility("hidden")))
@interface FFOrganizerFilmListViewController : FFOrganizerFilmstripViewController <FFOrganizerFilmstripViewDelegate, FFOrganizerFilmListOutlineViewDelegate, NSOutlineViewDataSource, NSSplitViewDelegate, FFRolesMenuDelegate>
{
    BOOL _needsData;
    BOOL _syncingListWithFilmstrip;
    BOOL _syncingFilmstripWithList;
    BOOL _wasPlayingBeforeSelectionChange;
    BOOL _forceClustersOpenOnNextReload;
    BOOL _listViewWasFocusedLast;
    id <FFOrganizerFilmstripViewDelegate> _filmstripViewDelegate;
    NSTreeNode *_filmOutlineRootNode;
    long long _currentClusterMode;
    BOOL _ignoreOultineViewSelectionDidChange;
    FigTimeRangeAndObject *_deferredFilmstripArbitrarySelection;
    NSArray *_filmstripFilteredRanges;
    NSArray *_previousFilmstripFilteredRanges;
    BOOL _maintianFilmstripSelectionOnNextUpdate;
    FFOrganizerFilmListOutlineView *_outlineView;
    LKSplitView *_splitView;
    LKMenu *_clipsContextualMenu;
    LKMenu *_stacksContextualMenu;
    LKMenu *_favoritesContextualMenu;
    LKMenu *_rejectsContextualMenu;
    LKMenu *_keywordsContextualMenu;
    LKMenu *_analysisKeywordsContextualMenu;
    LKMenu *_markersContextualMenu;
    LKMenu *_consumerProjectContextualMenu;
    LKMenu *_projectContextualMenu;
    NSMenuItem *_openProjectMenuItem;
    NSMenuItem *_consumerOpenProjectMenuItem;
    NSMenuItem *_clipAnalyzeAndFixContextualMenuItem;
    NSMenuItem *_stackAnalyzeAndFixContextualMenuItem;
    NSMenuItem *_clipsCompoundClipsContextualMenuItem;
    NSMenuItem *_stacksCompoundClipsContextualMenuItem;
    NSMenuItem *_clipsSynchronizeClipsContextualMenuItem;
    NSMenuItem *_stacksSynchronizeClipsContextualMenuItem;
    NSMenuItem *_createAuditionContextualMenuItem;
    NSMenuItem *_shareProjectContextualMenu;
    NSMenuItem *_createMulticamClipContextualMenuItem;
    NSMenuItem *_cameraAngleMenuItem;
    NSMenuItem *_sphericalProjectionTypeMenuItem;
    NSMenuItem *_stereoscopicModeMenuItem;
    LKTableColumn *_cameraAngleTableColumn;
    LKTableColumn *_sphericalProjectionTypeTableColumn;
    LKTableColumn *_stereoscopicModeTableColumn;
    LKTableColumn *_colorProfileTableColumn;
    LKTableColumn *_sizeTableColumn;
    struct PCProcrastinatedDispatch_t _procrastinatedReloadData;
    NSArray *_cachedFlattenedNodes;
    NSDictionary *_cachedFlattenedNodesIdsForUnknown;
    NSArray *_monospacedFontColumnIdentifiers;
}

@property(retain, nonatomic) LKMenu *markersContextualMenu; // @synthesize markersContextualMenu=_markersContextualMenu;
@property(retain, nonatomic) LKMenu *analysisKeywordsContextualMenu; // @synthesize analysisKeywordsContextualMenu=_analysisKeywordsContextualMenu;
@property(retain, nonatomic) LKMenu *keywordsContextualMenu; // @synthesize keywordsContextualMenu=_keywordsContextualMenu;
@property(retain, nonatomic) LKMenu *rejectsContextualMenu; // @synthesize rejectsContextualMenu=_rejectsContextualMenu;
@property(retain, nonatomic) LKMenu *favoritesContextualMenu; // @synthesize favoritesContextualMenu=_favoritesContextualMenu;
@property(retain, nonatomic) LKMenu *stacksContextualMenu; // @synthesize stacksContextualMenu=_stacksContextualMenu;
@property(retain, nonatomic) LKMenu *clipsContextualMenu; // @synthesize clipsContextualMenu=_clipsContextualMenu;
@property(retain, nonatomic) LKSplitView *splitView; // @synthesize splitView=_splitView;
@property(retain, nonatomic) FFOrganizerFilmListOutlineView *outlineView; // @synthesize outlineView=_outlineView;
@property(retain, nonatomic) NSArray *previousFilmstripFilteredRanges; // @synthesize previousFilmstripFilteredRanges=_previousFilmstripFilteredRanges;
@property(retain, nonatomic) FigTimeRangeAndObject *deferredFilmstripArbitrarySelection; // @synthesize deferredFilmstripArbitrarySelection=_deferredFilmstripArbitrarySelection;
@property(retain, nonatomic) NSTreeNode *filmOutlineRootNode; // @synthesize filmOutlineRootNode=_filmOutlineRootNode;
@property(nonatomic) id <FFOrganizerFilmstripViewDelegate> filmstripViewDelegate; // @synthesize filmstripViewDelegate=_filmstripViewDelegate;
@property(nonatomic) BOOL listViewWasFocusedLast; // @synthesize listViewWasFocusedLast=_listViewWasFocusedLast;
@property(nonatomic) BOOL forceClustersOpenOnNextReload; // @synthesize forceClustersOpenOnNextReload=_forceClustersOpenOnNextReload;
@property(nonatomic) BOOL wasPlayingBeforeSelectionChange; // @synthesize wasPlayingBeforeSelectionChange=_wasPlayingBeforeSelectionChange;
@property(nonatomic) BOOL syncingFilmstripWithList; // @synthesize syncingFilmstripWithList=_syncingFilmstripWithList;
@property(nonatomic) BOOL syncingListWithFilmstrip; // @synthesize syncingListWithFilmstrip=_syncingListWithFilmstrip;
@property(nonatomic) BOOL needsData; // @synthesize needsData=_needsData;
- (id)_enabledControlTextColor;
- (id)_disabledControlTextColor;
- (BOOL)outlineView:(id)arg1 acceptDrop:(id)arg2 item:(id)arg3 childIndex:(long long)arg4;
- (unsigned long long)outlineView:(id)arg1 validateDrop:(id)arg2 proposedItem:(id)arg3 proposedChildIndex:(long long)arg4;
- (BOOL)shouldAlwaysPlacePlayhead;
- (void)performEditAction;
- (BOOL)editActionAllowed;
- (void)performPlayheadButton1Action;
- (BOOL)action1OrAction2;
- (BOOL)wantsPlayheadActions;
- (BOOL)wantsRanges;
- (BOOL)wantsSkimmerInfo;
- (void)rolesMenuController:(id)arg1 shouldAddRole:(id)arg2 forContext:(id)arg3;
- (id)contextForRolesMenuController:(id)arg1;
- (void)showKeywordEditor;
- (BOOL)actionMoveMarker:(id)arg1 toRange:(id)arg2 error:(id *)arg3;
- (BOOL)markerEditorIsShown;
- (void)hideMarkerEditor;
- (void)showMarkerEditorForMarkerLayer:(id)arg1 object:(id)arg2;
- (void)showMarkerEditorAtTime:(CDStruct_1b6d18a9)arg1 forObject:(id)arg2;
- (void)deactivateActiveSelections;
- (void)deactivateRangeOfMedia:(id)arg1;
- (void)activateSelectionMarkers:(id)arg1 extendingSelection:(BOOL)arg2;
- (void)removeAllSelectionMarkersFromClips:(id)arg1;
- (void)removeSelectionMarkers:(id)arg1 onlyRemoveOverlap:(BOOL)arg2 addSelectionMarkers:(id)arg3 extendingSelection:(BOOL)arg4;
- (void)modifySelectionMarkersFromClip:(id)arg1 removeRange:(CDStruct_e83c9415)arg2 onlyRemoveOverlap:(BOOL)arg3 rangeToAdd:(CDStruct_e83c9415)arg4 newSelection:(id)arg5 extending:(BOOL)arg6;
- (void)stopUsingMedia:(id)arg1;
- (id)editorModule;
- (void)displayMedia:(id)arg1 context:(id)arg2 effectCount:(long long)arg3 unloadingBlock:(CDUnknownBlockType)arg4;
- (void)makeSequenceActive:(id)arg1;
- (BOOL)canBeginSkimming;
- (id)markerEditorDelegate;
- (id)skimmingDelegate;
- (void)moveToPreviusClip;
- (void)moveToNextClip;
- (id)activeSelection;
- (void)setActiveSelection:(id)arg1;
- (void)activeSelectionDidChangeScrollToSelection:(BOOL)arg1;
- (void)activeSelectionDidChange;
- (void)_activeSelectionChangedTo:(id)arg1 scrollToSelection:(BOOL)arg2;
- (void)selectionDidChangeToTime:(CDStruct_e83c9415)arg1 inObject:(id)arg2;
- (void)selectionDidChangeToObject:(id)arg1;
- (void)selectedRangesOfMediaDidChange;
- (void)invalidateFilteredItems;
- (void)invalidateUnfilteredItems;
- (id)filteredRanges;
- (id)contextualMenuForSelection:(id)arg1;
- (id)itemsClusteredByMetadataValue:(id)arg1;
- (BOOL)isClustering;
- (void)openItemFromRangeObject:(id)arg1;
- (void)organizerFilmstripViewDidReloadData:(id)arg1;
- (unsigned long long)filmstripView:(id)arg1 writeRangesOfMedia:(id)arg2 toPasteboard:(id)arg3;
- (id)module;
- (void)synchronousReloadData;
- (void)_deferredSyncSelectionToRemovedKeyword:(id)arg1;
- (void)_deferredSyncSelectionToAddedKeyword:(id)arg1;
- (void)didRemoveKeywordsWithRanges:(id)arg1 onSequence:(id)arg2 animationRange:(CDStruct_e83c9415)arg3;
- (void)didAddKeywordsNamed:(id)arg1 removeKeywordsNamed:(id)arg2 onSequence:(id)arg3 forRange:(CDStruct_e83c9415)arg4;
- (BOOL)removeObserversAndNotifications:(id)arg1;
- (BOOL)attachObserversAndNotifications:(id)arg1;
- (void)setClipLabelSize:(int)arg1;
- (void)moveToRangeOfMedia:(id)arg1 andTime:(CDStruct_1b6d18a9)arg2;
- (void)moveToNextClipExtendingSelection:(BOOL)arg1;
- (void)moveToPreviousClipExtendingSelection:(BOOL)arg1;
- (void)moveToFirstSelectedClip;
- (void)moveToLastClip;
- (void)moveToFirstClip;
- (void)moveToEndOfClip;
- (void)moveToStartOfClip;
- (void)setMaintianFilmstripSelectionOnNextUpdate:(BOOL)arg1;
- (void)scrollSelectionIntoView;
- (id)rangeToSelectAfterDelete;
- (id)_rangeAfterNode:(id)arg1;
- (id)_nextNodeToSelect:(id)arg1;
- (id)_nextClipNodeAfterNode:(id)arg1;
- (id)_nextSiblingNodeAfterNode:(id)arg1;
- (void)syncMarkerToRange:(id)arg1;
- (void)syncSelectionToRange:(id)arg1;
- (void)setSelectionEndTime:(CDStruct_1b6d18a9)arg1 clearExistingSelection:(BOOL)arg2;
- (void)setSelectionStartTime:(CDStruct_1b6d18a9)arg1 clearExistingSelection:(BOOL)arg2;
- (id)selectedRangesOfMediaForTimelineEditing;
- (id)_selectedRangesofMediaFromFilmstrip;
- (id)_selectedRangesofMediaFromOutline;
- (id)selectedRangesOfMediaForSwitchingDisplayMode;
- (id)selectedRangesOfMedia;
- (id)_evaluateIfNode:(id)arg1 isInSelection:(id)arg2 recursivelyBecauseThisIsAllInsane:(BOOL)arg3;
- (void)_highlightClipInList:(id)arg1;
- (void)addArbitraryRange:(id)arg1 byExtendingSelection:(BOOL)arg2;
- (void)selectArbitraryRange:(id)arg1 byExtendingSelection:(BOOL)arg2;
- (BOOL)revealAndSelectRange:(id)arg1 playheadTime:(CDStruct_1b6d18a9)arg2;
- (void)setSelectedRangesOfMedia:(id)arg1 byExtendingSelection:(BOOL)arg2;
- (void)setSelectedRangesOfMedia:(id)arg1 byExtendingSelection:(BOOL)arg2 onlyClearAffected:(BOOL)arg3;
- (void)matchSelectionToPreviousModeSelection:(id)arg1;
- (void)clearSelection;
- (void)progressiveClearSelection;
- (void)selectAll;
- (void)fixUpSelectionForLoadingView;
- (void)fixUpSelectionForUnloadingView;
- (void)restoreProjectExpandedStates:(id)arg1;
- (void)saveProjectExpandedStates:(id)arg1;
- (void)takeContentLayoutDictionary:(id)arg1;
- (id)contentLayoutDictionary;
- (void)setDelegate:(id)arg1;
- (void)splitView:(id)arg1 resizeSubviewsWithOldSize:(struct CGSize)arg2;
- (BOOL)splitView:(id)arg1 shouldAdjustSizeOfSubview:(id)arg2;
- (double)splitView:(id)arg1 constrainMaxCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (double)splitView:(id)arg1 constrainMinCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (id)figTimeRangeAndObjectInOutline:(id)arg1 atRow:(long long)arg2;
- (void)addRangesInClipNode:(id)arg1 containedInNodesList:(id)arg2 toRangesList:(id)arg3 addingForTimelineEditing:(BOOL)arg4;
- (BOOL)figTimeRange:(CDStruct_e83c9415)arg1 contains:(CDStruct_e83c9415)arg2;
- (BOOL)figTimeRange:(CDStruct_e83c9415)arg1 equals:(CDStruct_e83c9415)arg2;
- (int)calcClipTypeForFigTimeAndRange:(id)arg1;
- (id)findTreeNodeMatching:(id)arg1 andMediaID:(id)arg2;
- (id)findTreeNodeWithData:(id)arg1;
- (id)fileNodeAfterNode:(id)arg1;
- (id)fileNodeBeforeNode:(id)arg1;
- (id)lastClickedNode;
- (id)lastSelectedNode;
- (id)firstSelectedNode;
- (void)selectRangeOfMedia:(id)arg1;
- (BOOL)isRowIndexSelected:(long long)arg1;
- (long long)lastSelectedRow;
- (long long)firstSelectedRow;
- (void)selectLastClip;
- (void)selectFirstClip;
- (BOOL)selectionIsEmpty;
- (BOOL)allClustersClosed;
- (void)expandClusteredItems;
- (void)_recursiveExpandClusteredItemsForRootNode:(id)arg1;
- (void)_recursiveCollapseClusteredItemsForRootNode:(id)arg1;
- (BOOL)rootNodeContainsClusteredItems;
- (BOOL)nodeContainsClusteredItems:(id)arg1;
- (void)addChildNodeWithData:(id)arg1 toTreeNode:(id)arg2;
- (long long)numChildItemsInClipItem:(id)arg1;
- (id)markerItemsFromClipItem:(id)arg1 ofType:(id)arg2;
- (id)selectionByClips;
- (void)_storeClipArray:(id)arg1 inArrangedItems:(id)arg2;
- (CDStruct_e83c9415)clippedMarkerRangeToClippedParent:(id)arg1;
- (void)syncToChangedContent;
- (void)syncLastViewFocusedWithCurrentResponder;
- (void)syncVisibilityToFilteredRanges;
- (void)updateFilmstripView;
- (void)updatefilmstripFilteredRanges;
- (id)filmstripFilteredRanges;
- (void)setFilmstripFilteredRanges:(id)arg1;
- (void)restoreExpandedNodes:(id)arg1;
- (id)expandedNodes;
- (BOOL)restoreSelection:(id)arg1;
- (void)selectNodes:(id)arg1 extendSelection:(BOOL)arg2;
- (id)selectedNodes;
- (id)_cachedFlattenedNodesIdsForUnknownArray;
- (id)_cachedFlattenedNodesInTreeWitoutStartAndRecursive;
- (void)_invalidateCachedFlattenedNodes;
- (id)flattenNodesInTreeIdsForUnknown:(id)arg1;
- (id)flattenNodesInTree:(id)arg1 includeStartingNode:(BOOL)arg2 recursively:(BOOL)arg3;
- (void)outlineViewItemDidCollapse:(id)arg1;
- (void)outlineViewItemDidExpand:(id)arg1;
- (BOOL)outlineView:(id)arg1 writeItems:(id)arg2 toPasteboard:(id)arg3;
- (void)outlineViewColumnDidMove:(id)arg1;
- (void)outlineView:(id)arg1 sortDescriptorsDidChange:(id)arg2;
- (id)_sortDescriptors;
- (void)_recursiveSortContentsOfClusters:(id)arg1 withSortDescriptors:(id)arg2;
- (id)fontForColumnIdentifier:(id)arg1;
- (SEL)_selectorForColumnIdentifier:(id)arg1;
- (void)setCameraName:(id)arg1;
- (void)setShot:(id)arg1;
- (void)setScene:(id)arg1;
- (void)setReel:(id)arg1;
- (void)setNotes:(id)arg1;
- (void)setCameraAngle:(id)arg1;
- (void)setClipDurationTimeCode:(id)arg1;
- (void)setClipEndTimeCode:(id)arg1;
- (void)setClipStartTimeCode:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (id)_nodeForSender:(id)arg1;
- (void)outlineView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 byItem:(id)arg4;
- (id)outlineView:(id)arg1 objectValueForTableColumn:(id)arg2 byItem:(id)arg3;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (void)adjustStereoModeCell:(id)arg1 forDataNode:(id)arg2;
- (void)doSetStereoscopicMode:(id)arg1;
- (void)adjustSphericalModeCell:(id)arg1 forDataNode:(id)arg2;
- (BOOL)shouldEdit360ForDataNode:(id)arg1;
- (BOOL)shouldShow360ForDataNode:(id)arg1;
- (void)doSetSphericalMode:(id)arg1;
- (void)adjustRolesCell:(id)arg1 forDataNode:(id)arg2 isVideoNotAudio:(BOOL)arg3;
- (void)ultratoggleForRow:(long long)arg1;
- (void)outlineViewSelectionDidChange:(id)arg1;
- (id)outlineView:(id)arg1 selectionIndexesForProposedSelection:(id)arg2;
- (BOOL)shouldEditTableColumn:(id)arg1 item:(id)arg2;
- (BOOL)outlineView:(id)arg1 shouldReorderColumn:(long long)arg2 toColumn:(long long)arg3;
- (double)outlineView:(id)arg1 sizeToFitWidthOfColumn:(long long)arg2;
- (id)outlineView:(id)arg1 menuForColumn:(id)arg2 item:(id)arg3;
- (id)outlineView:(id)arg1 viewForTableColumn:(id)arg2 item:(id)arg3;
- (double)outlineView:(id)arg1 heightOfRowByItem:(id)arg2;
- (BOOL)isDefaultColumn:(id)arg1;
- (void)sizeColumnToFitData:(id)arg1;
- (BOOL)isRowVisible:(long long)arg1;
- (id)contextualMenuForTreeNode:(id)arg1;
- (id)treeNodeMatchingClusterIdentifier:(id)arg1;
- (id)bestTreeNodeMatchingFigTimeRangeAndObject:(id)arg1 dataType:(int)arg2;
- (id)treeNodeMatchingEndTimeOfFigTimeRangeAndObject:(id)arg1 dataType:(int)arg2;
- (id)treeNodeMatchingStartTimeOfFigTimeRangeAndObject:(id)arg1 dataType:(int)arg2;
- (id)treeNodeMatchingStartOrEndTimeOfFigTimeRangeAndObject:(id)arg1 dataType:(int)arg2 matchStart:(BOOL)arg3;
- (id)treeNodeMatchingFigTimeRangeAndObject:(id)arg1 dataType:(int)arg2;
- (id)treeNodeContainingFigTimeRangeAndObject:(id)arg1 dataType:(int)arg2;
- (id)treeNodeContainingOrMatchingFigTimeRangeAndObject:(id)arg1 dataType:(int)arg2 checkMatching:(BOOL)arg3;
- (BOOL)areAllNodeAncestorsExpanded:(id)arg1;
- (id)firstExpandedClipAncestorOfNode:(id)arg1;
- (id)firstClipAncestorOfNode:(id)arg1;
- (void)expandAllParentsOfTreeNode:(id)arg1;
- (void)reloadChildrenOfTreeNode:(id)arg1;
- (void)addTimeMarker:(id)arg1 toTreeNode:(id)arg2;
- (void)addAnalysisKeywordMarker:(id)arg1 toTreeNode:(id)arg2;
- (void)addKeywordMarker:(id)arg1 toTreeNode:(id)arg2;
- (void)addFavoriteMarker:(id)arg1 toTreeNode:(id)arg2;
- (void)addUsedMediaRange:(id)arg1 toTreeNode:(id)arg2;
- (void)addAnchoredItemsInClipItem:(id)arg1 toTreeNode:(id)arg2;
- (void)addClipItemsinList:(id)arg1 toTreeNode:(id)arg2;
- (void)updateDataForFilmOutlineView;
- (void)reloadItemAndChildren:(id)arg1;
- (void)reloadData;
- (void)toggleColumnHeader:(id)arg1;
- (void)hideAllColumns:(id)arg1;
- (void)showAllColumns:(id)arg1;
- (void)showOnlyDefaultColumns:(id)arg1;
- (void)hideColumn:(id)arg1;
- (void)autoSizeAllColumns:(id)arg1;
- (void)autoSizeColumn:(id)arg1;
- (void)outlineDoubleClicked:(id)arg1;
- (void)outlineClicked:(id)arg1;
- (id)contextualMenuColumn;
- (id)columnIDFromOutlinePopupItemTag:(long long)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)_documentWasRemoved:(id)arg1;
- (BOOL)canDisplayPlayer;
- (void)notificationHandler:(id)arg1;
- (void)_contentDidChange;
- (void)_rootNode:(id)arg1 hasProjectCluster:(id *)arg2 AndClipsCluster:(id *)arg3;
- (id)lastKeyView;
- (id)firstKeyView;
- (void)viewDidLoad;
- (void)removeUnsupportedColumns;
- (void)loadView;
- (void)originalOrProxyAssetDidChange:(id)arg1;
- (void)_rolesInLibraryChanged:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)init;
- (void)_recursivelyTellDataNodesToPostListOutlineRowDataChangedNotification:(id)arg1;
- (void)_recursivelyTellDataNodesToRemoveObservers:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


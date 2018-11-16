//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFMediaSidebarController.h>

@class NSIndexSet, NSMutableSet, NSTimer;

@interface FFEventMediaSidebarController : FFMediaSidebarController
{
    unsigned long long _mediaManagerLoadingCount;
    NSMutableSet *_nonEmptyMediaManagers;
    NSMutableSet *_emptyMediaManagers;
    long long _nodeSet;
    NSIndexSet *_indexToSpringLoad;
    NSTimer *_springLoadingTimer;
    BOOL _observingEventProjectDataDidLoad;
    BOOL _shouldReturnToSourceSidebar;
    BOOL _silenceSelectionChange;
    BOOL _showYears;
    int _sortType;
    int _sortDirection;
}

+ (BOOL)deleteEvents:(id)arg1 error:(id *)arg2;
+ (id)libraryForTargetInfo:(const CDStruct_4cb9d06e *)arg1 defaultToLastSelectedLibrary:(BOOL)arg2;
+ (id)libraryNodeForTargetInfo:(const CDStruct_4cb9d06e *)arg1;
+ (id)projectForTargetInfo:(const CDStruct_4cb9d06e *)arg1;
+ (id)creationNodeForTargetInfo:(const CDStruct_4cb9d06e *)arg1 folder:(id *)arg2;
+ (BOOL)areNodesAllFolderObjects:(id)arg1;
+ (id)eventMediaSidebarController;
@property(nonatomic) int sortDirection; // @synthesize sortDirection=_sortDirection;
@property(nonatomic) int sortType; // @synthesize sortType=_sortType;
@property(nonatomic) BOOL showYears; // @synthesize showYears=_showYears;
@property(nonatomic) BOOL silenceSelectionChange; // @synthesize silenceSelectionChange=_silenceSelectionChange;
- (id)nodeToSelectAfterDeletionForTargetInfo:(const CDStruct_4cb9d06e *)arg1;
- (BOOL)deleteLibraryFolderNode:(id)arg1 nodeToSelect:(id)arg2 error:(id *)arg3;
- (BOOL)deleteFolderObjectNodes:(id)arg1 nodeToSelect:(id)arg2 error:(id *)arg3;
- (void)addANode:(id)arg1 toMediaDetailSet:(id)arg2 ignoreIfNode:(id)arg3;
- (id)_newRootNodeWithNodeSet:(long long)arg1;
- (void)loadSidebarNodes;
- (BOOL)isCurrentSidebar;
- (void)sidebarDragDidEnd;
- (void)sidebarDragDidBegin;
- (id)_eventLibraryModule;
- (id)_containingSidebarModule;
- (id)cellForNode:(id)arg1 atTableColumn:(id)arg2;
- (id)outlineView:(id)arg1 toolTipForCell:(id)arg2 rect:(struct CGRect *)arg3 tableColumn:(id)arg4 item:(id)arg5 mouseLocation:(struct CGPoint)arg6;
- (id)outlineView:(id)arg1 selectionIndexesForProposedSelection:(id)arg2;
- (void)outlineViewSelectionDidChangeAutonomously:(id)arg1;
- (void)outlineViewSelectionIsChanging:(id)arg1;
- (void)outlineViewRootDidRepopulate:(id)arg1;
- (void)outlineViewRootDidDepopulate:(id)arg1;
- (void)outlineViewSelectionDidChange:(id)arg1;
- (BOOL)acceptDrop:(id)arg1 onNode:(id)arg2 atChildIndex:(long long)arg3;
- (unsigned long long)validateDrop:(id)arg1 onNode:(id)arg2 atChildIndex:(long long)arg3;
- (void)_setupSpringLoadingForNode:(id)arg1;
- (void)_springLoadingAction:(id)arg1;
- (void)_invalidateSpringLoading;
- (void)addNodes:(id)arg1 toPasteboard:(id)arg2;
- (void)_addNodes:(id)arg1 toPasteboard:(id)arg2;
- (id)_pasteboardTypeDictionariesForWritingNodes:(id)arg1 toPasteboard:(id)arg2 xmlNodes:(id *)arg3;
- (id)dragTypesForNodes:(id)arg1;
- (BOOL)containsOnlyDraggableNodes:(id)arg1;
- (id)supportedDragTypes;
- (void)showAndSelectDataItem:(id)arg1;
- (void)selectAndRevealAllProjects;
- (void)selectAndRevealAllEvents;
- (void)_selectAndRevealFirstNodeWithClass:(Class)arg1;
- (id)_firstNodeWithClass:(Class)arg1;
- (void)selectAndRevealEvents:(id)arg1;
- (void)revealEvents:(id)arg1;
- (void)_revealEvents:(id)arg1 select:(BOOL)arg2;
- (void)editEvent:(id)arg1;
- (void)revealEvent:(id)arg1;
- (void)selectAndRevealEvent:(id)arg1;
- (id)_parentNodeForEvent:(id)arg1;
- (id)projectMediaNodeForEvent:(id)arg1;
- (void)setSelectionToNodesWithParentNodeOfClass:(Class)arg1;
- (id)allVideoEventRecords;
- (id)selectedVideoEventRecords;
- (id)libraryForCurrentSelection;
- (id)selectedLibraries;
- (id)selectedEvents;
- (id)activeProjectEvent;
- (id)activeProject;
- (SEL)_endDateSelector;
- (SEL)_startDateSelector;
- (long long)_yearForSortingEvent:(id)arg1;
- (long long)yearForSortingEventRecord:(id)arg1;
- (id)sortedEventRecords:(id)arg1 forYear:(long long)arg2;
- (id)sortedYearsForEventRecords:(id)arg1;
- (void)sortEventRecords:(id)arg1;
- (void)sortEvents:(id)arg1;
- (void)configureSidebar;
- (void)configureDefaultSelectionAndExpansionAfterUpgradeAtLaunch:(id)arg1;
- (void)configureDefaultSelectionAndExpansion;
- (void)_proConfigureDefaultSelectionAndExpansion;
- (void)_consumerConfigureDefaultSelectionAndExpansion;
- (void)_checkLibrary:(int)arg1;
- (void)_consumerConfigurePhotoLibraryNodes;
- (BOOL)_photoLibraryNonEmptyLibraryForNode:(id)arg1 libraryNodeClass:(Class)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)outlineDoubleClickAction:(id)arg1;
- (id)persistentState;
- (void)restorePersistentState:(id)arg1;
- (void)notificationHandler:(id)arg1;
- (void)removeNotifications;
- (void)installNotifications;
- (void)_eventProjectDataDidLoad:(id)arg1;
- (void)dealloc;
- (id)initWithNodeSet:(long long)arg1;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Ozone/OZProViewModule.h>

#import "NSMatrixDelegate.h"
#import "NSOutlineViewDataSource.h"
#import "NSOutlineViewDelegate.h"
#import "OZPreviewModule.h"

@class CALayer, LKButton, LKImageView, LKPaneCapSegmentedControl, LKSearchField, LKSegmentedControl, LKSlider, LKTextField, NSImageView, NSMatrix, NSMutableArray, NSOutlineView, NSPasteboard, NSProThemeImageView, NSProView, NSScrollView, NSSplitView, NSString, NSTimer, OZLibraryEntry, OZLibraryEntryFilter, OZLibraryPreviewCtrl, OZPreviewBackgroundView, OZPreviewPlayButtonView, OZQTMovieLayer, OZSelectedObjectPreview;

@interface OZLibraryModuleBase : OZProViewModule <NSMatrixDelegate, NSOutlineViewDataSource, NSOutlineViewDelegate, OZPreviewModule>
{
    LKPaneCapSegmentedControl *_pathPopup;
    OZPreviewBackgroundView *_previewView;
    NSOutlineView *_outlineView;
    NSScrollView *_outlineScrollView;
    NSMatrix *_thumbnailView;
    NSScrollView *_thumbnailScrollView;
    NSSplitView *_splitView;
    id _zoomMinButton;
    id _zoomMaxButton;
    LKPaneCapSegmentedControl *_backForwardSegmentedControl;
    LKSegmentedControl *_viewModeSegmentedControl;
    id _addRemoveButton;
    id _createFolderButton;
    LKImageView *_dummyImageView;
    CALayer *_playButtonLayer;
    CALayer *_selectedObjPrevLayer;
    CALayer *_customPreviewCtrlLayer;
    OZQTMovieLayer *_movieLayer;
    OZPreviewPlayButtonView *_playButtonView;
    LKImageView *_imagePreview;
    NSImageView *_previewSmallIcon;
    OZSelectedObjectPreview *_previewBackground;
    NSProThemeImageView *_backgroundView;
    LKTextField *_desciption1TextField;
    LKTextField *_desciption2TextField;
    LKTextField *_desciption3TextField;
    LKTextField *_desciption4TextField;
    LKTextField *_desciption5TextField;
    LKButton *_applyButton;
    LKButton *_playButton;
    LKButton *_playAudioButton;
    LKSearchField *_searchField;
    LKSlider *_zoomSlider;
    NSProThemeImageView *_smallZoomImage;
    NSProThemeImageView *_largeZoomImage;
    NSProView *_slideUpSearchView;
    LKSegmentedControl *_contentsControl;
    OZLibraryEntry *_rootEntry;
    OZLibraryEntry *_topEntry;
    NSString *_searchString;
    double _lastKeyTime;
    int _thumbnailSize;
    float _topPaneHeight;
    BOOL _sortIsDescending;
    SEL _sortSelector;
    NSString *_sortColumn;
    int _viewMode;
    int _previewMode;
    OZLibraryEntry *_previewedEntry;
    NSTimer *_playTimer;
    OZLibraryPreviewCtrl *_customPreviewCtrl;
    NSMutableArray *_backList;
    NSMutableArray *_forwardList;
    BOOL _ignoreNotifications;
    OZLibraryEntryFilter *_viewFilter;
    BOOL _collapseSequences;
    NSPasteboard *_dropSourcePasteboard;
    OZLibraryEntry *_dropParent;
    BOOL _listenToNotifications;
    BOOL _tnailReadQueued;
}

+ (void)initialize;
+ (id)getEntryForPath:(id)arg1 fromRoot:(id)arg2 byDisplayName:(BOOL)arg3;
+ (id)createUniqueName:(id)arg1 parentEntry:(id)arg2;
+ (id)writePasteEntryToXML:(struct OZPasteList *)arg1 entryToWrite:(int)arg2 parent:(id)arg3 substitutePrimaryType:(const struct PCUUID *)arg4 fileName:(id)arg5 theme:(id)arg6 customIcon:(id)arg7;
- (id)init;
- (void)_setupCALayers;
- (void)viewDidLoad;
- (void)moduleViewWasInstalled:(id)arg1;
- (void)moduleViewWillBeRemoved:(id)arg1;
- (void)dealloc;
- (void)prefsChanged;
- (int)getViewMode;
- (void)setViewMode:(int)arg1;
- (id)getTopEntryPath;
- (id)getTopEntryDisplayPath;
- (id)getTopEntry;
- (id)getRootEntry;
- (void)setTopEntry:(id)arg1;
- (void)setTopEntryByPath:(id)arg1 byDisplayName:(BOOL)arg2;
- (void)setBestTopEntry:(id)arg1 byDisplayName:(BOOL)arg2;
- (void)saveTopEntryPath;
- (void)buildTree;
- (void)updateTopPaneSelection;
- (id)prefsBaseName;
- (id)createHistoryEntry;
- (id)makePrefsName:(id)arg1;
- (int)defaultViewMode;
- (BOOL)putFoldersLast;
- (void)sortList;
- (void)changeViewMode:(id)arg1;
- (void)setThumbnailMode:(id)arg1;
- (void)setHierarchicalMode:(id)arg1;
- (void)refreshList;
- (void)refreshList2:(id)arg1;
- (void)readThumbnailNotification:(id)arg1;
- (void)readThumbnailCooperatively:(id)arg1 keyPath:(id)arg2;
- (void)setZoomMin:(id)arg1;
- (void)setZoomMax:(id)arg1;
- (void)setZoom:(id)arg1;
- (void)addRemoveFavorite:(id)arg1;
- (void)playAudio:(id)arg1;
- (void)togglePlay:(id)arg1;
- (void)playCheck:(id)arg1;
- (void)updateApplyButtonState;
- (id)getSelectedEntries;
- (void)apply:(id)arg1;
- (void)doSearch:(id)arg1;
- (void)createFolder:(id)arg1;
- (void)contentsControlAction:(id)arg1;
- (int)getThumbnailSize;
- (void)setThumbnailSize:(int)arg1;
- (void)appendSearchString:(id)arg1 atTime:(double)arg2;
- (id)getSearchString;
- (BOOL)collapseSequences;
- (void)setCollapseSequences:(BOOL)arg1;
- (void)deselectAll;
- (void)deleteSelected;
- (void)reReadDirectoryContents:(id)arg1;
- (void)showInFinder:(id)arg1;
- (void)showNetworkInFinder;
- (void)openInQuickTime:(id)arg1;
- (void)openInPreview:(id)arg1;
- (void)showInViewer:(id)arg1;
- (void)showEntryInViewer:(id)arg1;
- (void)renameEntry:(id)arg1;
- (void)moveToTrash:(id)arg1;
- (void)modifyTheme:(id)arg1;
- (id)menuForEvent:(id)arg1;
- (void)configureThumbnailView:(id)arg1;
- (void)populateThumbnailView;
- (void)splitViewDidResizeSubviews:(id)arg1;
- (double)splitView:(id)arg1 constrainSplitPosition:(double)arg2 ofSubviewAt:(long long)arg3;
- (void)splitView:(id)arg1 resizeSubviewsWithOldSize:(struct CGSize)arg2;
- (id)outlineView:(id)arg1 child:(int)arg2 ofItem:(id)arg3;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (int)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (id)outlineView:(id)arg1 objectValueForTableColumn:(id)arg2 byItem:(id)arg3;
- (BOOL)outlineView:(id)arg1 shouldSelectItem:(id)arg2;
- (void)delayedRefresh;
- (void)outlineView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 byItem:(id)arg4;
- (void)outlineView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 item:(id)arg4;
- (BOOL)outlineView:(id)arg1 shouldEditTableColumn:(id)arg2 item:(id)arg3;
- (void)setSortSelector:(SEL)arg1;
- (SEL)getSortSelector;
- (void)setSortIsDescending:(BOOL)arg1;
- (BOOL)sortIsDescending;
- (void)setSortColumn:(id)arg1;
- (id)sortColumn;
- (void)updateSortSelector;
- (BOOL)outlineView:(id)arg1 shouldSelectTableColumn:(id)arg2;
- (void)updateTableHeaderToMatchCurrentSort:(id)arg1;
- (void)outlineViewDoubleClick:(id)arg1;
- (void)setListenToOVNotifications:(BOOL)arg1;
- (void)outlineViewSelectionDidChange:(id)arg1;
- (void)setRootFolder:(id)arg1;
- (id)getRootFolder;
- (id)truncatedString:(id)arg1 fontStyle:(unsigned int)arg2;
- (void)showEntryPreview:(id)arg1;
- (void)showEntryPreview:(id)arg1 multipleSelection:(BOOL)arg2;
- (id)realMovieForMovieView:(id)arg1;
- (id)getPreviewedEntry;
- (void)startPreviewPlaying;
- (void)stopPreviewPlaying;
- (void)abortDelayedPreviewPlaying;
- (void)outlineViewItemDidExpand:(id)arg1;
- (void)outlineViewItemDidCollapse:(id)arg1;
- (void)updateExpandedRows;
- (void)updateSelection;
- (id)getViewFilter;
- (id)currentTheme;
- (id)themes;
- (BOOL)outlineView:(id)arg1 writeItems:(id)arg2 toPasteboard:(id)arg3;
- (void)setDropParent:(id)arg1;
- (id)retargetDrop:(id)arg1 switchToBestLocation:(BOOL)arg2;
- (unsigned long long)validateDrag:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1 view:(id)arg2;
- (void)draggingEnded:(id)arg1;
- (void)draggingExited:(id)arg1 view:(id)arg2;
- (BOOL)prepareForDragOperation:(id)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (void)concludeDragOperation:(id)arg1;
- (unsigned long long)outlineView:(id)arg1 validateDrop:(id)arg2 proposedItem:(id)arg3 proposedChildIndex:(long long)arg4;
- (BOOL)outlineView:(id)arg1 acceptDrop:(id)arg2 item:(id)arg3 childIndex:(long long)arg4;
- (void)createAliasFrom:(id)arg1 to:(id)arg2 name:(id)arg3;
- (BOOL)moveFiles;
- (BOOL)copyFiles;
- (BOOL)linkFiles;
- (BOOL)duplicateSelected;
- (BOOL)canDuplicate;
- (void)didModifyEntries;
- (BOOL)dropIntoMultipleFiles:(id)arg1;
- (BOOL)dropIntoMultipleFiles;
- (BOOL)dropIntoOneFile;
- (void)updatePathPopup;
- (void)updatePathPopupLabel;
- (void)pathPopupChanged:(id)arg1;
- (void)snapshotViewState;
- (void)goBackForward:(id)arg1;
- (void)goBack:(id)arg1;
- (void)goForward:(id)arg1;
- (void)swipeWithEvent:(id)arg1;
- (void)magnifyWithEvent:(id)arg1;
- (void)windowDidBecomeKey:(id)arg1;
- (void)windowDidResignKey:(id)arg1;
- (void)appDidBecomeActive:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)nudgeUp:(id)arg1;
- (void)togglePreviewPlayback:(id)arg1;
- (BOOL)selectedObjectHasPlayablePreview;
- (BOOL)hasSelection;

@end

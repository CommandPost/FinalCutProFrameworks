//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LKViewModule.h"

#import "FFEventsDetailModuleDelegate.h"
#import "FFOrganizerFilmstripModuleDelegate.h"
#import "FFOrganizerFilterHUDDelegate.h"
#import "NSSplitViewDelegate.h"
#import "NSWindowDelegate.h"

@class FFCapsController, FFEventLibrarySplitView, FFEventsDetailModule, FFEventsLibraryLinenBackground, FFItemsContainerView, FFMediaEventProject, FFMediaEventSmartCollection, FFMediaSidebarModule, FFOrganizerFilterHUD, FFOrganizerTextFieldView, LKButton, LKMenu, LKProgressIndicator, LKSplitView, LKTextField, LKWindowModule, NSArray, NSBox, NSMenuItem, NSProView, NSView, NSWindow, OKPaneCapFilterMenuAndStatus, OKPaneCapItemButton, OKPaneCapItemMenu, OKPaneCapItemSidebarHeader;

@interface FFEventsSuperModule : LKViewModule <FFOrganizerFilmstripModuleDelegate, NSSplitViewDelegate, FFEventsDetailModuleDelegate, FFOrganizerFilterHUDDelegate, NSWindowDelegate>
{
    BOOL _restorePlayheadInfo;
    int _channelChangeCount;
    FFMediaSidebarModule *_mediaSidebarModule;
    FFEventsDetailModule *_itemsModule;
    FFCapsController *_capsController;
    FFOrganizerFilterHUD *_filterHUD;
    NSWindow *_filterHUDPopoverWindow;
    LKWindowModule *_filterWindowModule;
    FFMediaEventSmartCollection *_sidebarHUDOwner;
    OKPaneCapFilterMenuAndStatus *_searchStatusCapItem;
    OKPaneCapItemMenu *_filterMenuPaneCapItem;
    OKPaneCapItemMenu *_actionMenuPaneCapItem;
    OKPaneCapItemSidebarHeader *_sidebarHeaderPaneCapItem;
    OKPaneCapItemButton *_showHideSidebarPaneCapItem;
    FFOrganizerTextFieldView *_fieldEditor;
    NSView *_sidebarModuleViewContainer;
    FFItemsContainerView *_itemsModuleViewContainer;
    FFEventLibrarySplitView *_splitView;
    NSProView *_taskProgressContainerView;
    LKProgressIndicator *_taskProgressIndicator;
    LKMenu *_filterPulldownMenu;
    LKMenu *_gearMenu;
    NSMenuItem *_groupBySubmenu;
    NSMenuItem *_arrangeBySubmenu;
    LKButton *_importImovieLibrary;
    LKButton *_importImovieLibraryBigButton;
    LKButton *_firstLaunchFileImport;
    LKButton *_firstLaunchFileImportBigButton;
    LKButton *_firstLaunchCameraImport;
    LKButton *_firstLaunchCameraImportBigButton;
    NSBox *_dividerLine;
    FFEventsLibraryLinenBackground *_emptyLinenBackground;
    LKButton *_linenShadow;
    LKButton *_emptyFileImport;
    LKButton *_emptyFileImportBigButton;
    LKTextField *_emptyFileImportLabel;
    LKButton *_emptyCameraImport;
    LKButton *_emptyCameraImportBigButton;
}

+ (id)defaultModuleNibName;
@property(retain, nonatomic) FFMediaSidebarModule *mediaSidebarModule; // @synthesize mediaSidebarModule=_mediaSidebarModule;
@property(readonly, nonatomic) LKMenu *filterPulldownMenu; // @synthesize filterPulldownMenu=_filterPulldownMenu;
@property(readonly, nonatomic) NSView *sidebarModuleViewContainer; // @synthesize sidebarModuleViewContainer=_sidebarModuleViewContainer;
@property(retain, nonatomic) FFEventsDetailModule *itemsModule; // @synthesize itemsModule=_itemsModule;
- (void)syncToNewSidebarState:(BOOL)arg1;
- (void)didUninstallItemsModule;
- (void)willUninstallItemsModule;
- (void)didInstallItemsModule;
- (void)willInstallItemsModule;
- (id)contentsViewForItemsModule:(id)arg1;
- (id)selectionOrProject;
- (id)targetSelectionForModule:(id)arg1;
- (id)targetSelection;
- (id)targetObjectForItem:(id)arg1 inModule:(id)arg2;
- (id)targetObjectForItem:(id)arg1;
- (void)refreshFilterMenu;
- (void)channelChangeEnd:(id)arg1;
- (void)channelChangeBegin:(id)arg1;
- (BOOL)shouldHandleChannelChange:(id)arg1;
- (BOOL)uiActionEndForProject:(id)arg1 mediaRanges:(id)arg2 playingRange:(id)arg3 atTime:(CDStruct_1b6d18a9)arg4 actionType:(long long)arg5 save:(BOOL)arg6 error:(id *)arg7;
- (void)uiActionBeginForProject:(id)arg1 mediaRanges:(id)arg2 playingRange:(id)arg3 atTime:(CDStruct_1b6d18a9)arg4 actionType:(long long)arg5;
- (void)revealMediaRanges:(id)arg1;
- (void)setNoItemsInfoTextVisible:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)_shouldDisplayImportControlsInOrganizer;
- (id)_firstSelectedSidebarItem;
- (unsigned long long)_organizerItemCount;
- (BOOL)noItemsOrNoEventOrEmptySelection;
- (id)currentNoItemsString;
- (void)splitViewDidResizeSubviews:(id)arg1;
- (double)splitView:(id)arg1 constrainMaxCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (double)splitView:(id)arg1 constrainMinCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (BOOL)splitView:(id)arg1 shouldAdjustSizeOfSubview:(id)arg2;
@property(nonatomic, getter=isSidebarHidden) BOOL sidebarHidden;
- (void)sidebarModule:(id)arg1 didSelectNodes:(id)arg2;
- (id)eventSidebarModule;
- (id)sidebarModule;
- (id)project;
- (void)removePaneCapItem:(id)arg1;
- (void)addPaneCapItem:(id)arg1;
- (BOOL)presentError:(id)arg1;
- (void)stopUsingMedia:(id)arg1;
- (BOOL)canBeginPlaying;
- (BOOL)canSkimWithAudio;
- (BOOL)canBeginSkimming;
- (void)makeSequenceActive:(id)arg1;
- (id)editorModule;
- (void)displayMedia:(struct NSObject *)arg1 context:(id)arg2 effectCount:(long long)arg3 loadingBlock:(CDUnknownBlockType)arg4 unloadingBlock:(CDUnknownBlockType)arg5;
- (void)displayMedia:(struct NSObject *)arg1 context:(id)arg2 effectCount:(long long)arg3 unloadingBlock:(CDUnknownBlockType)arg4;
- (void)displayMedia:(struct NSObject *)arg1 context:(id)arg2 effectCount:(long long)arg3;
- (BOOL)isSkimmingSkimmable:(struct NSObject *)arg1 owner:(id)arg2;
- (void)stopSkimmingForOwner:(id)arg1;
- (BOOL)startSkimmingWithSkimmable:(struct NSObject *)arg1 context:(id)arg2 effectCount:(long long)arg3 allowPlayback:(BOOL)arg4 owner:(id)arg5;
- (void)openSettingsWithModule:(id)arg1;
- (BOOL)markerEditorIsShown;
- (void)hideMarkerEditor;
- (void)showMarkerEditorForMarkerLayer:(id)arg1 object:(id)arg2;
- (void)showMarkerEditorAtTime:(CDStruct_1b6d18a9)arg1 forObject:(id)arg2;
- (void)openStack:(id)arg1;
- (void)setShowFilmstripView:(BOOL)arg1;
- (BOOL)showFilmstripView;
- (id)roleSetsForCurrentProject;
- (id)keywordsForCurrentProject;
- (id)_scrapedKeywordsFromSidebarProviderArray:(id)arg1;
- (void)filterHUDDidUpdate:(id)arg1;
- (id)_submoduleWithTag:(long long)arg1;
- (void)moveToRangeOfMedia:(id)arg1 andTime:(CDStruct_1b6d18a9)arg2;
- (BOOL)browserModuleRespondsToFavoriteActions;
- (struct CGRect)screenRectForMarkerLayer:(id)arg1;
- (struct CGRect)playheadFrame;
- (struct CGRect)selectedRangeFrame;
- (void)favoriteFilterMenu:(id)arg1;
- (id)selectedRangesOfMediaForTimelineEditing;
- (id)selectedRangesOfMedia;
- (id)selectedItems;
- (void)openFilterHUDForSidebarItem:(id)arg1 atLocation:(struct CGRect)arg2;
- (void)filterHUDAction:(id)arg1;
- (void)windowWillClose:(id)arg1;
- (void)clearFilterToStartingPoint;
- (void)setTextFilter:(id)arg1;
- (id)localModuleActions;
- (void)hideHUD;
- (void)updateSearchStatusToFilterDict:(id)arg1 andFavFilter:(int)arg2;
- (void)searchAction:(id)arg1;
- (void)toggleSidebarHidden:(id)arg1;
- (id)module:(id)arg1 fieldEditorForView:(id)arg2 cell:(id)arg3;
- (BOOL)module:(id)arg1 validate:(char *)arg2 userInterfaceItem:(id)arg3;
- (id)submoduleLayoutArray;
@property(readonly, nonatomic) FFMediaEventProject *currentMediaEventProject;
- (id)targetModules;
- (id)firstKeyView;
- (void)takeContentLayoutFromDictionary:(id)arg1;
- (id)contentLayoutDictionary;
- (void)loadSideBar;
- (void)viewDidLoad;
@property(retain, nonatomic) NSView *itemsModuleBottomAccessoryView;
@property(readonly, nonatomic) FFItemsContainerView *itemsModuleViewContainer;
- (id)newItemsModule;
- (id)newMediaSidebarModule;
- (struct CGSize)viewMaxSize;
- (struct CGSize)viewMinSize;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)notificationHandler:(id)arg1;
- (void)finishedLoadingChanged;
@property(readonly) NSArray *sidebarSelectedItems;
- (void)dealloc;
- (id)init;
- (BOOL)wantsFooterBar;
- (BOOL)wantsHeaderBar;
@property(readonly) NSView *moduleFooterAccessoryView;
@property(readonly) NSView *moduleHeaderAccessoryView;
- (id)capsController;
@property(readonly, nonatomic) LKSplitView *splitView;

@end


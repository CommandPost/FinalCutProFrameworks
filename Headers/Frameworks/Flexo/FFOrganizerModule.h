//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <LunaKit/LKViewModule.h>

#import <Flexo/FFArrangedItemsModuleDelegate-Protocol.h>
#import <Flexo/FFOrganizerFilmstripModuleDelegate-Protocol.h>
#import <Flexo/FFOrganizerSkimmingDelegate-Protocol.h>
#import <Flexo/FFSidebarModuleDelegate-Protocol.h>
#import <Flexo/NSSplitViewDelegate-Protocol.h>
#import <Flexo/NSWindowDelegate-Protocol.h>

@class FFArrangedItemsModule, FFCapsController, FFItemsContainerView, FFMediaEventProject, FFMediaEventSmartCollection, FFOrganizerFilterHUD, FFOrganizerLinenBackground, FFOrganizerSplitView, FFSidebarModule, LKButton, LKMenu, LKProgressIndicator, LKSplitView, LKWindow, LKWindowModule, NSArray, NSBox, NSMenuItem, NSString, NSView, OKPaneCapItemButton, OKPaneCapItemMenu, OKPaneCapItemSidebarHeader;

@interface FFOrganizerModule : LKViewModule <FFOrganizerFilmstripModuleDelegate, FFSidebarModuleDelegate, NSSplitViewDelegate, FFOrganizerSkimmingDelegate, FFArrangedItemsModuleDelegate, NSWindowDelegate>
{
    FFSidebarModule *_sidebarModule;
    FFArrangedItemsModule *_itemsModule;
    NSView *_sidebarModuleViewContainer;
    FFItemsContainerView *_itemsModuleViewContainer;
    FFCapsController *_capsController;
    FFOrganizerFilterHUD *_filterHUD;
    LKWindow *_filterHUDPopoverWindow;
    LKWindowModule *_filterWindowModule;
    FFMediaEventSmartCollection *_sidebarHUDOwner;
    BOOL _filterSearch;
    FFOrganizerSplitView *_splitView;
    NSView *_taskProgressContainerView;
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
    FFOrganizerLinenBackground *_emptyLinenBackground;
    LKButton *_linenShadow;
    LKButton *_emptyFileImport;
    LKButton *_emptyFileImportBigButton;
    LKButton *_emptyCameraImport;
    LKButton *_emptyCameraImportBigButton;
    OKPaneCapItemMenu *_filterMenuPaneCapItem;
    OKPaneCapItemMenu *_actionMenuPaneCapItem;
    OKPaneCapItemSidebarHeader *_sidebarHeaderPaneCapItem;
    OKPaneCapItemButton *_showHideSidebarPaneCapItem;
    BOOL _restorePlayheadInfo;
    int _channelChangeCount;
}

+ (id)defaultModuleNibName;
@property(readonly, nonatomic) LKMenu *filterPulldownMenu; // @synthesize filterPulldownMenu=_filterPulldownMenu;
@property(readonly, nonatomic) NSView *sidebarModuleViewContainer; // @synthesize sidebarModuleViewContainer=_sidebarModuleViewContainer;
@property(retain, nonatomic) FFArrangedItemsModule *itemsModule; // @synthesize itemsModule=_itemsModule;
@property(readonly, nonatomic) FFSidebarModule *sidebarModule; // @synthesize sidebarModule=_sidebarModule;
- (void)refreshFilterMenu;
- (void)channelChangeEnd:(id)arg1;
- (void)channelChangeBegin:(id)arg1;
- (BOOL)shouldHandleChannelChange:(id)arg1;
- (BOOL)uiActionEndForProject:(id)arg1 mediaRanges:(id)arg2 playingRange:(id)arg3 atTime:(CDStruct_1b6d18a9)arg4 actionType:(long long)arg5 save:(BOOL)arg6 error:(id *)arg7;
- (void)uiActionBeginForProject:(id)arg1 mediaRanges:(id)arg2 playingRange:(id)arg3 atTime:(CDStruct_1b6d18a9)arg4 actionType:(long long)arg5;
- (void)revealMediaRanges:(id)arg1;
- (void)finishedLoadingChanged;
- (void)setNoItemsInfoTextVisible:(BOOL)arg1 animated:(BOOL)arg2;
- (id)currentNoItemsString;
- (BOOL)organizerEmpty;
- (void)splitViewDidResizeSubviews:(id)arg1;
@property(nonatomic, getter=isSidebarHidden) BOOL sidebarHidden;
- (id)sidebarModule:(id)arg1 menuForItem:(id)arg2 event:(id)arg3;
- (void)removePaneCapItem:(id)arg1;
- (void)addPaneCapItem:(id)arg1;
- (BOOL)presentError:(id)arg1;
- (id)organizerSelection;
- (id)timelineSelection;
- (void)stopUsingMedia:(id)arg1;
- (BOOL)canBeginPlaying;
- (BOOL)canSkimWithAudio;
- (BOOL)canBeginSkimming;
- (void)makeSequenceActive:(id)arg1;
- (id)editorModule;
- (void)displayMedia:(id)arg1 context:(id)arg2 effectCount:(long long)arg3 loadingBlock:(CDUnknownBlockType)arg4 unloadingBlock:(CDUnknownBlockType)arg5;
- (void)displayMedia:(id)arg1 context:(id)arg2 effectCount:(long long)arg3 unloadingBlock:(CDUnknownBlockType)arg4;
- (void)displayMedia:(id)arg1 context:(id)arg2 effectCount:(long long)arg3;
- (BOOL)isSkimmingSkimmable:(id)arg1 owner:(id)arg2;
- (void)stopSkimmingForOwner:(id)arg1;
- (BOOL)startSkimmingWithSkimmable:(id)arg1 context:(id)arg2 effectCount:(long long)arg3 allowPlayback:(BOOL)arg4 owner:(id)arg5;
- (void)openSettingsWithModule:(id)arg1;
- (id)organizerDelegate;
- (id)markerEditorDelegate;
- (id)skimmingDelegate;
- (void)openStack:(id)arg1;
- (void)setShowFilmstripView:(BOOL)arg1;
- (BOOL)showFilmstripView;
- (id)defaultEventForNewProject;
- (id)libraryForCurrentProject;
- (id)mainRolesForCurrentProject;
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
- (void)hideHUD;
- (void)updateSearchStatusToFilterDict:(id)arg1 andFavFilter:(int)arg2;
- (void)searchAction:(id)arg1;
- (void)sidebarModuleSelectionDidChange:(id)arg1;
- (void)toggleSidebarHidden:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (BOOL)module:(id)arg1 validate:(char *)arg2 userInterfaceItem:(id)arg3;
- (id)submoduleLayoutArray;
@property(readonly, nonatomic) FFMediaEventProject *currentMediaEventProject;
- (id)targetModules;
- (id)firstKeyView;
- (id)contentLayoutDictionary;
- (void)takeContentLayoutFromDictionary:(id)arg1;
- (void)viewDidLoad;
@property(retain, nonatomic) NSView *itemsModuleBottomAccessoryView;
@property(readonly, nonatomic) FFItemsContainerView *itemsModuleViewContainer;
- (id)newItemsModule;
- (id)newSidebarModule;
- (struct CGSize)viewMaxSize;
- (struct CGSize)viewMinSize;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)configureSidebar:(id)arg1;
@property(readonly) NSArray *sidebarSelectedItems;
- (void)dealloc;
- (id)init;
- (BOOL)wantsFooterBar;
- (BOOL)wantsHeaderBar;
@property(readonly) NSView *moduleFooterAccessoryView;
@property(readonly) NSView *moduleHeaderAccessoryView;
- (id)capsController;
@property(readonly, nonatomic) LKSplitView *splitView;
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

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


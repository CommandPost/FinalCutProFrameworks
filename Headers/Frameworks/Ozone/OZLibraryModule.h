//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Ozone/OZLibraryModuleBase.h>

@class LKPanel, LKPopUpButton, LKTableColumn, LKTextField, LKTextView, NSArray, NSBrowser, NSMutableArray, NSString, OZFileSystemLibEntry, OZLibraryEntry, OZLibraryTopPaneController;

@interface OZLibraryModule : OZLibraryModuleBase
{
    NSBrowser *_browserView;
    LKTableColumn *_artistColumn;
    LKTableColumn *_albumColumn;
    LKTableColumn *_durationColumn;
    LKTableColumn *_sizeColumn;
    LKPopUpButton *_themePopup;
    OZLibraryTopPaneController *_topPaneCtrl;
    LKPanel *_editDescriptionPanel;
    LKTextView *_descriptionTextField;
    LKPanel *_newThemePanel;
    LKTextField *_newThemeName;
    OZFileSystemLibEntry *_descriptionEntry;
    OZLibraryEntry *_allDirectory;
    BOOL _searchAll;
    BOOL _loaded;
    float _iTunesNameColumnWidth;
    NSArray *_globalThemes;
    NSMutableArray *_userThemes;
    NSString *_currentTheme;
    struct PCHash128 _libraryCacheKey;
}

+ (struct OZPasteList *)getObjectForPreset:(const struct OZLibraryPresetsMapDatum *)arg1;
+ (BOOL)savePreset:(const struct PCUUID *)arg1 name:(id)arg2 customIcon:(id)arg3 includeRefNodes:(BOOL)arg4 object:(struct OZFactoryBase *)arg5;
+ (id)getUserPathForPresetType:(const struct PCUUID *)arg1;
+ (id)presetPath:(const struct PCUUID *)arg1;
+ (id)canSavePreset:(const struct PCUUID *)arg1 name:(id)arg2;
+ (BOOL)createDirectoryStructureToPreset:(id)arg1;
+ (struct OZLibraryPresetsMap *)getPresets:(const struct PCUUID *)arg1 exclude:(const struct PCUUID *)arg2;
+ (void)addPresets:(id)arg1 withFilter:(id)arg2 toMap:(struct OZLibraryPresetsMap *)arg3 defaultRoot:(id)arg4;
+ (void)cleanup;
+ (id)sharedLibraryModule;
- (id).cxx_construct;
- (double)splitView:(id)arg1 constrainSplitPosition:(double)arg2 ofSubviewAt:(long long)arg3;
- (void)hideiTunesColumns;
- (void)showiTunesColumns;
- (void)updateTableHeaderToMatchCurrentSort:(id)arg1;
- (void)didModifyLibraryNotification:(id)arg1;
- (void)appDidBecomeActive:(id)arg1;
- (void)didModifyEntries;
- (id)createHistoryEntry;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)createFolder:(id)arg1;
- (unsigned long long)validateDrag:(id)arg1;
- (id)retargetDrop:(id)arg1 switchToBestLocation:(BOOL)arg2;
- (id)themes;
- (id)currentTheme;
- (void)setCurrentTheme:(id)arg1;
- (void)setTheme:(id)arg1;
- (void)doSearch:(id)arg1;
- (void)searchSelected:(id)arg1;
- (void)searchAll:(id)arg1;
- (void)newThemePanelOK:(id)arg1;
- (void)newThemePanelCancel:(id)arg1;
- (void)createNewTheme:(id)arg1;
- (void)removeTheme:(id)arg1;
- (void)editDescription:(id)arg1;
- (void)descriptionPanelCancel:(id)arg1;
- (void)descriptionPanelOK:(id)arg1;
- (void)openDescriptionPanel:(id)arg1;
- (void)switchToFavoritesMenuCategory;
- (void)buildFavoritesMenu;
- (void)buildFavoritesMenuForEntry:(id)arg1 inMenu:(id)arg2;
- (void)performFavoriteMenuItem:(id)arg1;
- (id)getTopPaneBrowser;
- (void)addTopPaneEntry:(id)arg1;
- (id)prefsBaseName;
- (void)updatePathPopup;
- (BOOL)putFoldersLast;
- (void)refreshTopPane;
- (void)updateTopPaneSelection;
- (void)buildTree;
- (void)buildTreeForMotionEffect;
- (void)buildTreeForMotion;
- (void)createDefaultDirsAtPath:(id)arg1;
- (id)addMediaLibrary:(unsigned long long)arg1;
- (id)addRootFolder:(int)arg1;
- (id)getAllDirectory;
- (void)setAllDirectory:(id)arg1;
- (void)saveTopEntryPath;
- (int)defaultViewMode;
- (void)willTerminateNotification:(id)arg1;
- (void)writeLibraryCacheToDisk;
- (id)libraryCachePath;
- (struct PCHash128)calcCacheKey;
- (void)getFolderKey:(id)arg1 stream:(struct PCHashWriteStream *)arg2 symbolicLinkLevel:(int)arg3;
- (void)updateThemePopupLabel;
- (void)refreshThemePopup;
- (id)label;
- (void)update;
- (void)moduleViewWillBeRemoved:(id)arg1;
- (void)moduleViewWasInstalled:(id)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;
- (id)initWithModuleNibName:(id)arg1 quarantined:(BOOL)arg2;

@end


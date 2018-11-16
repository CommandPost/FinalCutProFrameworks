//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSMenuDelegate.h"

@class LKCreateLayoutDialog, LKManageLayoutDialog, NSMenu, NSMutableArray, NSMutableSet, NSString;

@interface LKModuleLayoutManager : NSObject <NSCoding, NSMenuDelegate>
{
    NSMenu *_layoutMenu;
    id _delegate;
    LKManageLayoutDialog *_manageDialog;
    LKCreateLayoutDialog *_createDialog;
    NSMutableArray *_viewModules;
    NSMutableArray *_windowControllers;
    NSMutableArray *_categoryArrays;
    NSMutableArray *_layouts;
    NSMutableSet *_editedLayouts;
    NSMutableSet *_layoutNamesToBeRemoved;
    NSString *_executableName;
    int _originalMenuCount;
    struct {
        unsigned int autosizesLayouts:1;
        unsigned int needsSaveDefaultLayout:1;
        unsigned int readingLayout:1;
        unsigned int RESERVED:13;
    } _flags;
    NSString *_currentLayoutName;
}

+ (Class)_newMenuItemClass;
+ (void)substituteClassName:(id)arg1 withClassName:(id)arg2;
+ (id)classNameForArchivedClassName:(id)arg1;
+ (id)_nameSubstituteNameMap;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (Class)newTabModuleClass;
+ (Class)newWindowModuleClass;
+ (Class)newLayoutClass;
+ (Class)manageDialogClass;
+ (Class)createDialogClass;
+ (id)sharedInstance;
+ (BOOL)_sharedInstanceExists;
+ (void)initialize;
- (id)tabModule:(id)arg1 contextMenuForSubmodule:(id)arg2;
- (BOOL)isCompatibleAppLayoutVersion:(unsigned long long)arg1;
- (unsigned long long)compatibleAppLayoutVersion;
- (BOOL)isReadingLayout;
- (void)setIsReadingLayout:(BOOL)arg1;
- (BOOL)autosizesLayouts;
- (void)setAutosizesLayouts:(BOOL)arg1;
- (id)layoutDocument;
- (id)_currentDocument;
- (struct CGSize)_currentScreenSize;
- (BOOL)_layout:(id)arg1 fitsOnScreen:(struct CGSize)arg2;
- (BOOL)layoutFitsOnScreen:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)_addCategory:(int)arg1 toMenu:(id)arg2;
- (void)_addLayoutsToMenu:(id)arg1;
- (id)_newItemForLayout:(id)arg1;
- (void)menuNeedsUpdate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id)moduleLayoutMenu;
- (void)setModuleLayoutMenu:(id)arg1;
- (BOOL)shouldInstallModuleLayoutMenu;
- (id)layoutArray;
- (void)_willFinishChangingModuleLayout;
- (void)applyModuleLayout:(id)arg1;
- (void)resizeWindowsToScreen:(id)arg1 forLayout:(id)arg2;
- (void)discardChanges;
- (void)saveLayout:(id)arg1;
- (void)_saveLayoutToModified;
- (void)saveChangedLayouts;
- (void)_unsheduleRemovalOfLayoutFileWithName:(id)arg1;
- (void)_scheduleRemovalOfLayoutFileWithName:(id)arg1;
- (void)moduleLayoutDidChangeName:(id)arg1 originalName:(id)arg2;
- (void)moduleLayoutDidChange:(id)arg1;
- (void)removeModuleLayout:(id)arg1;
- (void)_addModuleLayout:(id)arg1;
- (BOOL)addModuleLayout:(id)arg1;
- (void)_saveLayoutInDefaultLayout;
- (void)_saveDefaultLayoutIfNeeded;
- (BOOL)isDefaultLayout:(id)arg1;
- (id)newDefaultModuleLayout;
- (id)defaultModuleLayoutCreateIfNeeded:(BOOL)arg1;
- (id)defaultModuleLayout;
- (void)removeWindowController:(id)arg1;
- (void)addWindowController:(id)arg1;
- (id)windowControllers;
- (void)newWindowForModule:(id)arg1;
- (id)viewModules;
- (void)removeViewModule:(id)arg1;
- (void)addViewModule:(id)arg1;
- (id)registeredModules;
- (void)unregisterModule:(id)arg1;
- (void)registerModule:(id)arg1;
- (id)moduleWithIdentifier:(id)arg1;
- (id)moduleLayoutWithName:(id)arg1 inCategory:(int)arg2;
- (id)moduleLayoutWithName:(id)arg1;
- (BOOL)hasFactoryLayoutsOfType:(int)arg1;
- (id)_factoryLayoutsForScreenSize:(struct CGSize)arg1 withType:(int)arg2;
- (void)_loadLayoutsFromDisk;
- (void)_loadLayouts;
- (id)sortedModuleLayoutsForCategory:(int)arg1;
- (id)moduleLayoutsForCategory:(int)arg1;
- (id)moduleLayouts;
- (void)exposeViewModule:(id)arg1;
- (BOOL)canApplyLayout:(id)arg1;
- (void)applyLayout:(id)arg1;
- (void)resetCurrentLayout:(id)arg1;
- (void)sheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)saveCurrentLayout:(id)arg1;
- (void)manageLayouts:(id)arg1;
- (id)pathForLayout:(id)arg1;
- (id)uniqueLayoutName:(id)arg1;
- (id)nameForCategory:(int)arg1;
- (id)directoryForCategory:(int)arg1;
- (id)categoryNames;
- (id)searchPaths;
- (id)defaultLayoutPath;
- (id)userModifiedLayoutsDirectory;
- (id)userLayoutsDirectory;
- (id)sharedLayoutsDirectory;
- (id)factoryLayoutsDirectory;
- (void)setNeedsSaveDefaultLayout:(BOOL)arg1;
- (BOOL)needsSaveDefaultLayout;
- (void)documentWasAdded:(id)arg1;
- (void)documentDidChange:(id)arg1;
- (void)applicationDidUnhide:(id)arg1;
- (void)applicationWillHide:(id)arg1;
- (void)applicationWillTerminate:(id)arg1;
- (void)dealloc;
- (void)awakeFromNib;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)_commonInit;

@end


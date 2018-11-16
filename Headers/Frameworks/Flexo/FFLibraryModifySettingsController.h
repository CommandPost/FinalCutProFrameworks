//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

#import "NSOpenSavePanelDelegate.h"

@class FFLibrary, FFLibraryCacheMigrater, LKImageView, NSButton, NSDictionary, NSImageView, NSPopUpButton, NSString, NSTextField, NSURL, NSWindow;

@interface FFLibraryModifySettingsController : NSWindowController <NSOpenSavePanelDelegate>
{
    FFLibrary *_library;
    NSWindow *_parentWindow;
    NSImageView *_applicationIconImage;
    NSPopUpButton *_libraryMediaLocationPopup;
    NSPopUpButton *_libraryCacheLocationPopup;
    NSPopUpButton *_libraryBackupLocationPopup;
    LKImageView *_libraryMediaLocationWarningView;
    LKImageView *_libraryCacheLocationWarningView;
    LKImageView *_libraryBackupLocationWarningView;
    NSButton *_libraryOKButton;
    NSButton *_libraryCancelButton;
    NSButton *_libraryCheckAgainButton;
    NSButton *_libraryCloseLibraryButton;
    NSTextField *_libraryName;
    NSTextField *_libraryModifyDescription;
    NSURL *_libraryBundleLocation;
    NSURL *_libraryMediaLocation;
    NSURL *_libraryOriginalMediaLocation;
    NSURL *_libraryCacheLocation;
    NSURL *_libraryOriginalCacheLocation;
    NSURL *_libraryBackupLocation;
    NSURL *_libraryOriginalBackupLocation;
    BOOL _libraryBackupEnabled;
    BOOL _observeLocationErrors;
    NSDictionary *_libraryLocationErrors;
    FFLibraryCacheMigrater *_cacheMigrater;
    BOOL _libraryCacheLocationHadError;
    BOOL _canCloseLibrary;
    NSString *_errorDescription;
    unsigned long long _necessarySpaceAvailable;
}

+ (void)repairSettingsForLibrary:(id)arg1 parentWindow:(id)arg2 errorDescription:(id)arg3 canCancel:(BOOL)arg4 completionHandler:(CDUnknownBlockType)arg5;
+ (void)showLibraryModifySettingsForLibrary:(id)arg1 parentWindow:(id)arg2 errorDescription:(id)arg3 canCloseLibrary:(BOOL)arg4 necessarySpaceAvailable:(unsigned long long)arg5 completionHandler:(CDUnknownBlockType)arg6;
+ (void)showLibraryModifySettingsForLibrary:(id)arg1 parentWindow:(id)arg2 errorDescription:(id)arg3 canCloseLibrary:(BOOL)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)updateSheet;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)observeLibraryForLocationErrors:(BOOL)arg1;
- (void)updateSheetIfObservingLocationErrors:(id)arg1;
- (id)errorsForLocations:(id)arg1;
- (BOOL)panel:(id)arg1 validateURL:(id)arg2 error:(id *)arg3;
- (void)chooseLocation:(id)arg1;
- (void)doCloseLibrary:(id)arg1;
- (void)doCheckLocations:(id)arg1;
- (void)doDismissLibraryModifySettings:(id)arg1;
- (void)_updateLocationMenus;
- (BOOL)_allOriginalPathsExist;
- (id)_toolTipForError:(id)arg1 location:(int)arg2;
- (id)_errorForLocation:(int)arg1 original:(BOOL)arg2;
- (id)_menuItemForLocation:(int)arg1 original:(BOOL)arg2;
- (id)_nameForLocationID:(int)arg1 original:(BOOL)arg2 tag:(int *)arg3 url:(id *)arg4;
- (id)_nameForExternalMediaLocation:(id)arg1 useContainer:(BOOL)arg2;
- (BOOL)_urlPathContainsBackupPackage:(id)arg1;
- (BOOL)_commitLibrarySettings;
- (void)awakeFromNib;
- (void)dealloc;
- (id)initWithLibrary:(id)arg1 parentWindow:(id)arg2 errorDescription:(id)arg3 canCloseLibrary:(BOOL)arg4 necessarySpaceAvailable:(unsigned long long)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

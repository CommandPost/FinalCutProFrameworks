//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFModelDocument.h>

@class FFLibraryBackupTask, NSError, NSURL;

@interface FFLibraryDocument : FFModelDocument
{
    NSURL *_refURL;
    double _nextBackupTime;
    BOOL _checkedDatabases;
    BOOL _isTempLibrary;
    BOOL _reopening;
    NSError *_lastBackupError;
    long long _lastBackupErrorCount;
    FFLibraryBackupTask *_backupTask;
}

+ (BOOL)writeCorruptURL:(id)arg1 status:(id)arg2 error:(id *)arg3;
+ (id)readCorruptURLStatus:(id)arg1 error:(id *)arg2;
+ (void)alert:(id)arg1 runModalForWindow:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)alertFinished:(id)arg1 returnCode:(long long)arg2 context:(void *)arg3;
+ (id)oldDefaultBackupLocation;
+ (void)updateLegacyBackupLocation;
+ (id)openDocumentWithoutDisplay:(id)arg1 error:(id *)arg2;
+ (id)newTemporaryDocument:(id *)arg1;
+ (id)readLockInfo:(id)arg1 error:(id *)arg2;
+ (BOOL)writeLockInfo:(id)arg1 error:(id *)arg2;
+ (id)fileType;
+ (id)defaultFileExtension;
+ (id)defaultDocumentNameExtension;
+ (id)defaultDocumentName;
+ (id)defaultLocation;
+ (id)defaultURL;
+ (void)addEventRecordsToMenu:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
+ (void)addEventRecordsToMenu:(id)arg1 target:(id)arg2 action:(SEL)arg3 tag:(int)arg4;
+ (void)addLibraryRecordsToMenu:(id)arg1 target:(id)arg2 action:(SEL)arg3 tag:(int)arg4;
+ (id)resolveBookmark:(id)arg1 error:(id *)arg2;
+ (id)bookmarkForURL:(id)arg1 error:(id *)arg2;
+ (id)displayNameForURL:(id)arg1;
+ (id)modificationDateForURL:(id)arg1;
+ (BOOL)isLibraryURL:(id)arg1;
+ (id)copyActiveLibraries;
+ (void)initialize;
+ (void)patch_16119228;
+ (const char *)_databaseOpenURLStringForURL:(id)arg1;
@property(retain, nonatomic) FFLibraryBackupTask *backupTask; // @synthesize backupTask=_backupTask;
@property(nonatomic, getter=isReopening) BOOL reopening; // @synthesize reopening=_reopening;
@property(nonatomic) long long lastBackupErrorCount; // @synthesize lastBackupErrorCount=_lastBackupErrorCount;
@property(retain, nonatomic) NSError *lastBackupError; // @synthesize lastBackupError=_lastBackupError;
- (void)shutDownDueToCorruptDatabase:(id)arg1 exception:(id)arg2;
- (BOOL)_checkForCorruptDatabase:(id *)arg1;
- (BOOL)_checkForDamagedLibrary:(id *)arg1;
- (BOOL)_writeLibrarySyncState:(BOOL)arg1 error:(id *)arg2;
- (BOOL)_readLibrarySyncState;
- (BOOL)_validateStore:(id)arg1 location:(id)arg2 error:(id *)arg3;
- (void)alertMissingMedia;
- (BOOL)writeBackup:(id *)arg1;
- (void)cancelBackup:(id)arg1;
- (BOOL)backupNeeded;
- (double)backupInterval;
- (void)resetBackupTimer:(double)arg1;
- (BOOL)warnForUpdate;
- (BOOL)updateFromVersion:(int)arg1 error:(id *)arg2;
- (void)update_usePreviousCustomLibraryBackupLocation;
- (void)willBringUpToDate;
- (void)update_changeExternalCacheFoldersToEventNames;
- (id)newDocumentCatalog:(id *)arg1;
- (id)makeDefaultEvent:(id *)arg1;
- (void)setRootObject:(id)arg1;
- (id)library;
- (id)newRootObject:(id)arg1 type:(id)arg2;
- (int)rebuildLibraryFromDisk:(id *)arg1;
- (id)rebuildEventURL:(id)arg1 library:(id)arg2 error:(id *)arg3;
- (id)newClipAssetsFromDirectory:(id)arg1 manageFileType:(int)arg2 forEvent:(id)arg3 error:(id *)arg4;
- (void)markNotNew;
- (BOOL)isNew;
- (BOOL)isTemporary;
- (BOOL)moveToURL:(id)arg1 makeUnique:(BOOL)arg2 error:(id *)arg3;
- (BOOL)syncFileURL;
- (void)setFileURL:(id)arg1;
- (void)close;
- (void)dealloc;
- (id)initForURL:(id)arg1 withContentsOfURL:(id)arg2 ofType:(id)arg3 error:(id *)arg4;
- (id)initWithContentsOfURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (id)initWithURL:(id)arg1 isTemporary:(BOOL)arg2 createDefaultEvent:(BOOL)arg3 error:(id *)arg4;
- (id)initWithURL:(id)arg1 createDefaultEvent:(BOOL)arg2 error:(id *)arg3;
- (id)initWithURL:(id)arg1 error:(id *)arg2;
- (id)initWithType:(id)arg1 error:(id *)arg2;
- (id)init;
- (void)makeWindowControllers;
- (id)windowNibName;
- (BOOL)usesFileLock;
- (void)addEventRecordsToMenu:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)addEventRecordsToMenu:(id)arg1 target:(id)arg2 action:(SEL)arg3 tag:(int)arg4;

@end


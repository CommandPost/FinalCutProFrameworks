//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FFBackgroundTaskTarget.h"
#import "NSFileManagerDelegate.h"
#import "NSOpenSavePanelDelegate.h"

@class FFBackgroundTask, FFLibraryDocument, NSDateFormatter, NSDictionary, NSError, NSURL;

@interface FFLibraryBackupTask : NSObject <NSOpenSavePanelDelegate, NSFileManagerDelegate, FFBackgroundTaskTarget>
{
    FFLibraryDocument *_document;
    NSError *_error;
    NSDateFormatter *_formatter;
    BOOL _isSameVolume;
    BOOL _canOverwrite;
    unsigned long long _progressCounter;
    int _operation;
    NSDictionary *_backupFileModificationDateMap;
    NSURL *_backupURL;
    FFBackgroundTask *_backgroundTask;
}

+ (id)readBackup:(id)arg1 error:(id *)arg2;
+ (id)restoreBackup:(id)arg1 error:(id *)arg2;
+ (id)restoreDocument:(id)arg1 error:(id *)arg2;
+ (id)backupDocument:(id)arg1;
+ (void)_restoreCompleted:(id)arg1;
+ (id)standardBackupLocation;
+ (id)defaultBackupLocation;
+ (void)addDocumentBeingRestored:(id)arg1;
+ (void)removeDocumentBeingRestored:(id)arg1;
+ (BOOL)shouldAllowBackup:(id)arg1;
+ (id)documentsBeingRestored;
@property(retain, nonatomic) FFBackgroundTask *backgroundTask; // @synthesize backgroundTask=_backgroundTask;
@property(retain, nonatomic) NSURL *backupURL; // @synthesize backupURL=_backupURL;
@property(retain, nonatomic) NSDictionary *backupFileModificationDateMap; // @synthesize backupFileModificationDateMap=_backupFileModificationDateMap;
@property(readonly, nonatomic) FFLibraryDocument *document; // @synthesize document=_document;
@property(readonly, nonatomic) int operation; // @synthesize operation=_operation;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
- (BOOL)panel:(id)arg1 shouldEnableURL:(id)arg2;
- (id)chooseOther:(id *)arg1;
- (id)chooseBackup:(id *)arg1;
- (void)taskQueueDidCompleteTask:(id)arg1;
- (BOOL)waitUntilFinished:(id *)arg1;
- (void)canceledTask:(id)arg1;
- (id)librariesInUse;
- (id)assetsInUse;
- (void)cancelBackup:(id)arg1;
- (void)_runBackgroundBackupTask:(id)arg1 onTask:(id)arg2;
- (id)restore:(id)arg1 to:(id)arg2 error:(id *)arg3;
- (id)indexOfBackups;
- (void)backupsPurge:(id)arg1 relativeTo:(id)arg2;
- (id)backupsFolderCreate:(BOOL)arg1 error:(id *)arg2;
- (id)backupsFolderSyncLocation:(id)arg1 error:(id *)arg2;
- (BOOL)writeMetadata:(id)arg1 forDocument:(id)arg2 error:(id *)arg3;
- (id)readMetadataForDocument:(id)arg1 error:(id *)arg2;
- (BOOL)fileManager:(id)arg1 shouldCopyItemAtURL:(id)arg2 toURL:(id)arg3;
- (id)_src:(id)arg1 target:(id)arg2 error:(id *)arg3;
- (BOOL)_compareMapRecords:(id)arg1:(id)arg2;
- (id)_buildMap:(id)arg1;
- (id)_createMapRecordFor:(id)arg1;
- (BOOL)_finishRestore:(id)arg1 error:(id *)arg2;
- (BOOL)_finishBackup:(id)arg1 to:(id)arg2 error:(id *)arg3;
- (void)_startRestoreTask:(id)arg1 target:(id)arg2;
- (BOOL)_saveRestoreTask:(id)arg1 error:(id *)arg2;
- (id)_finalURLForURL:(id)arg1;
- (BOOL)_shouldBackupDirectoryNamed:(id)arg1;
- (BOOL)_isStoreURL:(id)arg1;
- (void)dealloc;
- (id)initWithDocument:(id)arg1 operation:(int)arg2;

@end


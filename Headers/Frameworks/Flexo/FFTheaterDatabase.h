//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Flexo/FFOrganizerMasterItemDropTarget-Protocol.h>
#import <Flexo/NSFilePresenter-Protocol.h>

@class FFLibraryDocument, FFMediaEventDocument, FFTheaterStore, NSData, NSMutableArray, NSOperationQueue, NSRecursiveLock, NSSet, NSString, NSURL, NSUndoManager;
@protocol FFTheaterDatabaseDelegate;

@interface FFTheaterDatabase : NSObject <FFOrganizerMasterItemDropTarget, NSFilePresenter>
{
    id <FFTheaterDatabaseDelegate> _delegate;
    NSURL *_baseURL;
    FFTheaterStore *_store;
    NSUndoManager *_undoManager;
    struct PCProcrastinatedDispatch_t _procrastinatedSave;
    NSOperationQueue *_presenterQueue;
    BOOL _isUbiquitous;
    FFLibraryDocument *_theaterDocument;
    BOOL _isPendingSave;
    NSMutableArray *_resolvedVersionIdentifiers;
    NSMutableArray *_runningOperations;
    BOOL _hasReadData;
    NSRecursiveLock *_lock;
    BOOL _usingBackupDatabase;
    BOOL _tooOldToRead;
    NSData *_lastLocallyEncodedStore;
}

+ (id)archiveDirectoryURL;
+ (id)keyPathsForValuesAffectingURL;
+ (id)currentDeviceID;
+ (id)safeUniqueArchiveOutputURLWithDisplayName:(id)arg1 extension:(id)arg2;
+ (BOOL)clientShouldCreateArchives;
+ (BOOL)shareShouldAddToTheater;
+ (void)loadSharedUbiquitousTheaterWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (id)sharedLocalTheater;
+ (id)_defaultLocalBaseURL;
+ (void)initialize;
+ (id)readableTypesForPasteboard:(id)arg1;
@property(retain) NSData *lastLocallyEncodedStore; // @synthesize lastLocallyEncodedStore=_lastLocallyEncodedStore;
@property(nonatomic) BOOL tooOldToRead; // @synthesize tooOldToRead=_tooOldToRead;
@property(nonatomic) BOOL usingBackupDatabase; // @synthesize usingBackupDatabase=_usingBackupDatabase;
@property BOOL isPendingSave; // @synthesize isPendingSave=_isPendingSave;
@property(nonatomic) id <FFTheaterDatabaseDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) BOOL isUbiquitous; // @synthesize isUbiquitous=_isUbiquitous;
@property(retain, nonatomic) NSUndoManager *undoManager; // @synthesize undoManager=_undoManager;
@property(retain, nonatomic) FFTheaterStore *store; // @synthesize store=_store;
@property(retain, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
- (void)removeItems:(id)arg1 addDeletionRecords:(BOOL)arg2 scheduleArchiveRepresentationsForDeletion:(id)arg3;
- (void)addItems:(id)arg1;
@property(readonly, copy, nonatomic) NSSet *items;
@property(readonly, retain, nonatomic) FFMediaEventDocument *theaterDocument;
- (id)_databaseBackupFileURL;
- (id)_databaseFileURL;
- (id)shareMediaRelativePathForSequence:(id)arg1 setting:(id)arg2;
- (id)mediaDirectoryURL;
- (id)thumbnailDirectoryURL;
- (id)URL;
- (void)theaterDatabase:(id)arg1 presentError:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_presentErrorsOnCurrentQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)presentErrors:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)presentError:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)databaseShareUnavailableError;
- (id)databaseViewUnavailableError;
- (BOOL)checkEligibilityForItems:(id)arg1 error:(id *)arg2;
- (BOOL)canWrite:(id *)arg1;
- (BOOL)canRead:(id *)arg1;
- (void)_endOperation:(id)arg1;
- (void)_startOperation:(id)arg1;
- (BOOL)_resolveConflicts:(id *)arg1;
- (void)presentedItemDidResolveConflictVersion:(id)arg1;
- (void)presentedItemDidGainVersion:(id)arg1;
- (void)accommodatePresentedItemDeletionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)savePresentedItemChangesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)presentedItemDidChange;
- (void)relinquishPresentedItemToWriter:(CDUnknownBlockType)arg1;
@property(readonly, retain) NSOperationQueue *presentedItemOperationQueue;
@property(readonly, copy) NSURL *presentedItemURL;
- (void)saveBackupWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_setupEmptyStoreUnlessOnOldOS:(BOOL)arg1;
- (id)_readDatabaseCorruptError;
- (void)_syncDatabaseWithFilesystemUsingBackup:(BOOL)arg1;
- (void)startDownloadingUbiquitousTheaterContent;
- (void)_syncDatabaseWithFilesystem;
- (BOOL)_isSafeToDeleteArchiveURL:(id)arg1 ignoringItems:(id)arg2;
- (void)_executePendingArchiveDeletions;
- (void)_updateWithStore:(id)arg1;
- (void)_saveImmediatelyOnCurrentQueue:(BOOL)arg1 forInitialSave:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_saveImmediatelyOnCurrentQueue:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)save;
- (void)unlock;
- (void)lock;
- (void)_disableICloud;
- (void)_enableICloud;
- (void)_ubiquityIdentityDidChange:(id)arg1;
- (void)_applicationWillTerminate:(id)arg1;
- (void)_stopObservingItems:(id)arg1;
- (void)_startObservingItems:(id)arg1;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void *)arg4;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (void)_removeObservers;
- (void)_addObservers;
- (id)initWithURL:(id)arg1 isUbiquitous:(BOOL)arg2;
- (void)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2 delegate:(id)arg3 didRecoverSelector:(SEL)arg4 contextInfo:(void *)arg5;
- (BOOL)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2;
- (void)actionRemoveItems:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)actionRemoveItems:(id)arg1;
- (void)actionRemoveItem:(id)arg1;
- (void)actionAddItemForSequence:(id)arg1 range:(CDStruct_e83c9415)arg2 displayName:(id)arg3 snapshot:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)actionAddItemForSequence:(id)arg1;
- (void)_validateEligibilityForItems:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_validateDuplicatesForItems:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_validateDatabaseWritableForItems:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_validateItems:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_actionAddItemsWithoutValidation:(id)arg1 restoreDeletedItems:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_actionAddItems:(id)arg1 restoreDeletedItems:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)actionAddItems:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)actionAddItems:(id)arg1;
- (void)actionAddItem:(id)arg1;
- (BOOL)performDrop:(id)arg1 validatedDragOperation:(unsigned long long)arg2 newSubitemInsertionIndex:(long long)arg3 organizerModule:(id)arg4;
- (unsigned long long)validateDrop:(id)arg1 newSubitemInsertionIndex:(long long)arg2;
- (BOOL)_upgradeDatabaseBeforeWriteIfNeeded:(id *)arg1;
- (id)_upgradeDatabaseBeforeReadIfNeededWithStoreData:(id)arg1 error:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) NSSet *observedPresentedItemUbiquityAttributes;
@property(readonly, copy) NSURL *primaryPresentedItemURL;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FFLibraryDocument.h"

@class FFAnchoredSequence, NSMutableDictionary;

@interface PEDocument : FFLibraryDocument
{
    FFAnchoredSequence *_activeSequence;
    NSMutableDictionary *_damagedItemsMap;
    BOOL _needsToBeClosed;
    unsigned int _locationsAlertCount;
    double _locationsAlertTime;
}

+ (void)failureToCloseUndoScope:(id)arg1;
+ (void)presentCatalogFailed:(id)arg1;
+ (id)alertForDocumentFailure:(id)arg1 documents:(id)arg2;
+ (void)checkAndRepairLocations;
+ (void)showMoreInfoForLibraryUpgradeFailure:(id)arg1;
+ (BOOL)presentLibraryUpgradeError:(id *)arg1 selectBackup:(id *)arg2;
+ (void)stopBackgroundTasks:(id)arg1 forReason:(int)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
+ (void)endProgressModal:(id)arg1;
+ (void)endProgressModalWithError:(id)arg1 usingCompletionBlock:(CDUnknownBlockType)arg2;
+ (void)shutdownBackgroundTaskQueueUsingCompletionBlock:(CDUnknownBlockType)arg1;
+ (void)drainBackgroundTaskQueueUsingCompletionBlock:(CDUnknownBlockType)arg1;
+ (void)cleanlyShutdownBackgroundTaskQueueUsingCompletionBlock:(CDUnknownBlockType)arg1;
+ (void)cancelTasks:(id)arg1 forReason:(int)arg2 completionBlock:(CDUnknownBlockType)arg3;
+ (id)cancelableTasksForDocument:(id)arg1 error:(id *)arg2;
+ (void)alert:(id)arg1 runModalForWindow:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (id)makeSequenceActive:(id)arg1;
+ (id)documentForSequence:(id)arg1 createIfNeeded:(BOOL)arg2;
+ (id)documentForProject:(id)arg1;
+ (id)documentForModule:(id)arg1;
+ (id)currentDocument;
+ (id)defaultDocumentName;
+ (id)defaultFileExtension;
+ (void)initialize;
@property(nonatomic) unsigned int locationsAlertCount; // @synthesize locationsAlertCount=_locationsAlertCount;
@property(nonatomic) double locationsAlertTime; // @synthesize locationsAlertTime=_locationsAlertTime;
@property(retain, nonatomic) FFAnchoredSequence *activeSequence; // @synthesize activeSequence=_activeSequence;
- (void)printDocument:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)saveDocumentAs:(id)arg1;
- (void)revertDocumentToSaved:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (BOOL)checkIfDocumentNeedsToBeClosed;
- (void)presentDocumentFailureAlert:(id)arg1;
- (void)commitCatalogFailed:(id)arg1;
- (id)runLibraryRepairTask:(id *)arg1;
- (void)closeAndRepairLibrary;
- (void)alertLibraryRepair:(id)arg1;
- (void)alertAsyncFailure:(id)arg1;
- (void)item:(id)arg1 asyncFailure:(id)arg2;
- (void)alertMissingMedia;
- (void)alertPeriodicBackupError:(id)arg1;
- (void)setLastBackupError:(id)arg1;
- (id)makeDefaultEvent:(id *)arg1;
- (void)makeSequenceActive:(id)arg1;
- (void)canCloseDocumentWithDelegate:(id)arg1 shouldCloseSelector:(SEL)arg2 contextInfo:(void *)arg3;
- (void)closeWhenPossible:(CDUnknownBlockType)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)updateFinished:(id)arg1;
- (id)saveChangesString;
- (id)newRootObject:(id)arg1 type:(id)arg2;
- (void)showWindows;
- (void)makeWindowControllers;
- (id)windowForSheet;
- (void)activate;
- (void)dealloc;
- (id)init;

@end


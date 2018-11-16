//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FFBackgroundTaskTarget.h"
#import "FFStorageLocationOutOfDiskSpaceProtocol.h"

@class FFAssetCopyRequest, FFBackgroundTaskWithPauseCondition, FFStorageLocation, NSMutableArray, NSMutableSet, NSRecursiveLock, NSString;

@interface FFAssetCopyQueue : NSObject <FFStorageLocationOutOfDiskSpaceProtocol, FFBackgroundTaskTarget>
{
    NSRecursiveLock *_lock;
    FFBackgroundTaskWithPauseCondition *_backgroundTask;
    NSMutableArray *_queuedRequests;
    NSMutableSet *_queuedRequestSet;
    FFAssetCopyRequest *_processingRequest;
    int _backgroundProgressFilesCompleted;
    int _backgroundProgressFilesTotal;
    long long _backgroundProgressBytesCompleted;
    long long _backgroundProgressBytesTotal;
    NSString *_taskName;
    int _taskType;
    id <FFAssetCopyQueueDelegateProtocol><NSObject> _delegate;
    FFStorageLocation *_currentStorageLocation;
}

+ (void)releaseSharedInstance;
+ (id)sharedInstance;
@property id <FFAssetCopyQueueDelegateProtocol><NSObject> delegate; // @synthesize delegate=_delegate;
- (id)queuedRequests;
- (id)processingRequest;
- (BOOL)isProcessingAsset:(id)arg1;
- (void)resumeTransactions;
- (unsigned int)pendingTransactionCount;
- (unsigned int)inFlightTransactionCount;
- (void)queueRequest:(id)arg1;
- (void)dealloc;
- (oneway void)release;
- (id)initWithTaskName:(id)arg1 taskType:(int)arg2;
- (id)init;
- (void)stopWritingFilesToLocation:(id)arg1;
- (void)_runBackgroundTask:(id)arg1 onTask:(id)arg2;
- (BOOL)_runCopyfile:(int)arg1 targetFD:(int)arg2 error:(id *)arg3;
- (int)_statusCallback:(int)arg1 stage:(int)arg2 state:(struct _copyfile_state *)arg3;
- (id)librariesInUse:(id)arg1;
- (BOOL)usesLibrary:(id)arg1;
- (id)assetsChanging:(id)arg1;
- (id)assetsInUse:(id)arg1;
- (void)canceledTask:(id)arg1;
- (void)resumedTask:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(retain) FFBackgroundTaskWithPauseCondition *backgroundTask;
- (void)_queueRequests:(id)arg1;
- (void)_unregisterAsDiskSpaceObserver;
- (void)_registerAsDiskSpaceObserverForURL:(id)arg1;
- (void)_ensureBackgroundTask;
- (void)_updateProgress;
- (void)_updateTaskPendingJobNamesForTask:(id)arg1;
- (id)_jobNameForRequest:(id)arg1;
- (void)_waitForBGTaskToFinish;
- (void)_cancelBGTask;
- (void)_unlock;
- (void)_lock;

@end


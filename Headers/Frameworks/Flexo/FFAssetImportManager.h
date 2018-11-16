//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FFBackgroundTaskTarget.h"
#import "FFStorageLocationOutOfDiskSpaceProtocol.h"
#import "MIOAssetImportQueueDelegate.h"

@class FFBackgroundTask, MIOAssetImportQueue, NSCondition, NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface FFAssetImportManager : NSObject <MIOAssetImportQueueDelegate, FFStorageLocationOutOfDiskSpaceProtocol, FFBackgroundTaskTarget>
{
    MIOAssetImportQueue *_importQueue;
    NSMutableDictionary *_importRequestsDictionary;
    NSMutableDictionary *_importPercentageDoneDictionary;
    FFBackgroundTask *_backgroundTask;
    NSCondition *_backgroundTaskCondition;
    unsigned long long _completedImportRequestsCount;
    unsigned long long _totalImportRequestsCount;
    NSMutableArray *_canceledImportRequests;
}

+ (void)releaseSharedInstance;
+ (id)sharedInstance;
@property(readonly) MIOAssetImportQueue *importQueue; // @synthesize importQueue=_importQueue;
- (void)postProcessImportRequest:(id)arg1;
- (void)stopWritingFilesToLocation:(id)arg1;
- (void)canceledTask:(id)arg1;
- (BOOL)confirmIsPaused:(id)arg1;
- (void)resumedTask:(id)arg1;
- (void)pausedTask:(id)arg1;
- (id)librariesInUse;
- (id)assetsInUse;
- (void)importProgress:(id)arg1 onTask:(id)arg2;
- (void)showCameraFileImportErrorAlert:(id)arg1;
- (void)assetImportError:(id)arg1 error:(id)arg2;
- (void)assetImportCanceled:(id)arg1;
- (void)assetDidImport:(id)arg1;
- (BOOL)isImportPendingOnRADVolume:(id)arg1;
- (void)removeDestinationFolderForImportRequest:(id)arg1;
- (void)assetWillImport:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)volumeDidUnmount:(id)arg1;
- (void)importRequestsRemovedFromQueue:(id)arg1;
- (void)importRequestsAddedToQueue:(id)arg1;
- (void)updateImportPercentageForClipID:(id)arg1;
- (unsigned long long)removeCanceledImportRequestsForVolume:(id)arg1;
- (void)cancelAll;
- (void)resetImportedRangeMarkerForImportRequest:(id)arg1;
- (id)importRangesOfMedia:(id)arg1 toEvent:(id)arg2 keywords:(id)arg3 importStartDate:(id)arg4;
- (void)appWillTerminate:(id)arg1;
- (void)dealloc;
- (oneway void)release;
- (id)init;

@end


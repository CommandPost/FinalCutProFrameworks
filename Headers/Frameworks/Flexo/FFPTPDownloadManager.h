//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FFBackgroundTaskTarget.h"
#import "FFStorageLocationOutOfDiskSpaceProtocol.h"
#import "MIOPTPDownloadQueueDelegate.h"

@class FFBackgroundTask, MIOPTPDeviceManager, NSCondition, NSMutableArray, NSMutableDictionary, NSString;

@interface FFPTPDownloadManager : NSObject <MIOPTPDownloadQueueDelegate, FFStorageLocationOutOfDiskSpaceProtocol, FFBackgroundTaskTarget>
{
    MIOPTPDeviceManager *_ptpDeviceManager;
    NSMutableDictionary *_downloadRequestsDictionary;
    NSMutableDictionary *_downloadPercentageDoneDictionary;
    FFBackgroundTask *_backgroundTask;
    NSCondition *_backgroundTaskCondition;
    unsigned long long _completedDownloadRequestsCount;
    unsigned long long _totalDownloadRequestsCount;
    NSMutableArray *_canceledDownloadRequests;
}

+ (void)updateSpotlightMetadataOfFileAtPath:(id)arg1;
+ (void)releaseSharedInstance;
+ (id)sharedInstance;
- (void)reimportCameraFile:(id)arg1 forAssetRef:(id)arg2 intoEvent:(id)arg3;
- (id)cameraFileWithClipID:(id)arg1;
- (void)postProcessDownloadRequestForReingest:(id)arg1;
- (void)postProcessDownloadRequest:(id)arg1;
- (void)stopWritingFilesToLocation:(id)arg1;
- (void)canceledTask:(id)arg1;
- (BOOL)confirmIsPaused:(id)arg1;
- (void)resumedTask:(id)arg1;
- (void)pausedTask:(id)arg1;
- (id)librariesInUse;
- (id)assetsInUse;
- (void)downloadProgress:(id)arg1 onTask:(id)arg2;
- (void)showCameraFileDownloadErrorAlertMain:(id)arg1;
- (void)showCameraFileDownloadErrorAlert:(id)arg1;
- (void)cameraFileDownloadError:(id)arg1 error:(id)arg2;
- (void)cameraFileDownloadCanceled:(id)arg1;
- (void)cameraFileDidDownloadMain:(id)arg1;
- (void)cameraFileDidDownload:(id)arg1;
- (void)removeDestinationFolderForDownloadRequest:(id)arg1;
- (void)cameraFileWillDownload:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)didRemoveDevice:(id)arg1;
- (void)downloadRequestsRemovedFromQueue:(id)arg1;
- (void)downloadRequestsAddedToQueue:(id)arg1;
- (void)updateDownloadPercentageForClipID:(id)arg1;
- (id)removeCanceledDownloadRequestsForDevice:(id)arg1;
- (void)cancelAll;
- (void)resetImportedRangeMarkerForDownloadRequest:(id)arg1;
- (id)importRangesOfMedia:(id)arg1 toEvent:(id)arg2 keywords:(id)arg3 importStartDate:(id)arg4;
- (id)ptpDeviceManager;
- (void)appWillTerminate:(id)arg1;
- (void)dealloc;
- (oneway void)release;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


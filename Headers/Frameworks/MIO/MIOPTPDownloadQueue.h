//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MIOPTPDownloadRequest, NSArray, NSData, NSMutableArray;
@protocol MIOPTPDownloadQueueDelegate;

@interface MIOPTPDownloadQueue : NSObject
{
    NSMutableArray *_downloadRequests;
    MIOPTPDownloadRequest *_currentDownloadRequest;
    NSData *_pausedReadData;
    BOOL _waitingForDataRead;
    BOOL _paused;
    long long _totalBytes;
    long long _bytesDownloaded;
    id <MIOPTPDownloadQueueDelegate> _delegate;
}

+ (id)clipIDForCameraFile:(id)arg1;
+ (BOOL)isPTPClipID:(id)arg1;
+ (id)creationDateForCameraFile:(id)arg1;
+ (id)serialNumberForCameraDevice:(id)arg1;
+ (void)addMetadataToMetadataArray:(id)arg1 key:(id)arg2 object:(id)arg3;
+ (BOOL)rewriteMetadata:(id)arg1 inMovieFile:(id)arg2;
+ (id)metadataFromMovieFile:(id)arg1;
+ (id)keyPathsForValuesAffectingPercentageDone;
@property(readonly) NSArray *downloadRequests; // @synthesize downloadRequests=_downloadRequests;
@property id <MIOPTPDownloadQueueDelegate> delegate; // @synthesize delegate=_delegate;
@property long long bytesDownloaded; // @synthesize bytesDownloaded=_bytesDownloaded;
@property long long totalBytes; // @synthesize totalBytes=_totalBytes;
@property(getter=isPaused) BOOL paused; // @synthesize paused=_paused;
@property(retain) MIOPTPDownloadRequest *currentDownloadRequest; // @synthesize currentDownloadRequest=_currentDownloadRequest;
- (BOOL)writeMetadata;
- (void)addProAppsMetadataToMetadataArray:(id)arg1;
- (void)fetchDeviceInfofromIOKitForCameraDevice:(id)arg1 manufacturer:(id *)arg2 modelName:(id *)arg3;
- (void)didDownloadFile:(id)arg1 error:(id)arg2 options:(id)arg3 contextInfo:(void *)arg4;
- (void)didReadData:(id)arg1 fromFile:(id)arg2 error:(id)arg3 contextInfo:(void *)arg4;
- (void)cancelCurrentDownloadRequest;
- (void)removeDownloadRequest:(id)arg1;
- (void)requestNextReadData;
- (void)startNewDownload;
- (double)percentageDone;
- (void)resume;
- (void)pause;
- (void)cancelDownloadRequests:(id)arg1;
- (void)cancelDownloadsFromCameraFile:(id)arg1;
- (void)cancelDownloadsFromCameraDevice:(id)arg1;
- (void)cancelAllDownloadRequests;
- (void)requestDownloadFiles:(id)arg1 toDirectoryPath:(id)arg2 tempFileExtension:(id)arg3 customFileNames:(id)arg4 customCameraName:(id)arg5 userData:(id)arg6;
- (void)shutdown;
- (void)dealloc;
- (id)init;

@end


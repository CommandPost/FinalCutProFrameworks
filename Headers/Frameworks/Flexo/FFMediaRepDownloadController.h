//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Flexo/FFDownloadController.h>

@class FFLibrary, NSMutableDictionary, NSOperationQueue;

__attribute__((visibility("hidden")))
@interface FFMediaRepDownloadController : FFDownloadController
{
    FFLibrary *_library;
    NSOperationQueue *_promiseQueue;
    NSMutableDictionary *_mediaRepToDLTask;
}

+ (id)keyForMediaRep:(id)arg1;
+ (id)repTypesToDownload;
- (void)cancelAnyDownloadsForAssets:(id)arg1;
- (BOOL)isPaused:(id)arg1;
- (BOOL)isDownloading:(id)arg1;
- (void)startDownloadForAnyWebAssets:(id)arg1;
- (void)scheduleDownloadForAssets:(id)arg1;
- (BOOL)needsDownloadForAnyWebAssets:(id)arg1;
- (id)progressPathForMediaRep:(id)arg1;
- (void)downloadCopyComplete:(id)arg1;
- (void)queuePostDownloadCopyFrom:(id)arg1 to:(id)arg2 forMediaRep:(id)arg3;
- (void)downloadCancelledForMediaRep:(id)arg1 toLocation:(id)arg2;
- (void)downloadCompletedForMediaRep:(id)arg1 toLocation:(id)arg2;
- (void)queueDownloadError:(id)arg1 forMediaRep:(id)arg2;
- (void)invalidateAssetForMediaRep:(id)arg1;
- (void)queueDownloadForMediaRep:(id)arg1 contentMD5:(id)arg2;
- (void)queueDownloadForAsset:(id)arg1;
- (void)updateTask:(id)arg1 bytesExpected:(long long)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)tryDownloadOfMediaRep:(id)arg1;
- (id)activeDownloadTaskForMediaRep:(id)arg1;
- (void)dealloc;
- (id)initWithLibrary:(id)arg1;
- (void)promptDownloadOfAnyWebAssets:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)valueForKey:(id)arg1;

@end


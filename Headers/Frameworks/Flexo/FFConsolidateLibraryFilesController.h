//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FFAssetCopyQueueDelegateProtocol.h"

@class FFAssetCopyQueue, FFConsolidateTaskSerializer, NSMutableArray;

__attribute__((visibility("hidden")))
@interface FFConsolidateLibraryFilesController : NSObject <FFAssetCopyQueueDelegateProtocol>
{
    NSMutableArray *_assetCopyRequests;
    FFAssetCopyQueue *_assetCopyQueue;
    FFConsolidateTaskSerializer *_taskSerializer;
}

+ (void)consolidateFilesInProjects:(id)arg1;
+ (void)consolidateFilesInEvents:(id)arg1;
+ (void)consolidateFilesInLibrary:(id)arg1;
+ (id)alertMessageDescriptionWithLibrary:(id)arg1;
+ (id)fileAttributesForMediaRep:(id)arg1 fileURL:(id)arg2;
@property(retain) FFConsolidateTaskSerializer *taskSerializer; // @synthesize taskSerializer=_taskSerializer;
@property(retain) FFAssetCopyQueue *assetCopyQueue; // @synthesize assetCopyQueue=_assetCopyQueue;
@property(retain) NSMutableArray *assetCopyRequests; // @synthesize assetCopyRequests=_assetCopyRequests;
- (void)taskFinished:(id)arg1;
- (BOOL)canCancelTask;
- (void)taskWasCancelled:(id)arg1 queuedRequests:(id)arg2;
- (void)_copyCompleted:(id)arg1;
- (void)consolidateFilesInProjects:(id)arg1;
- (void)consolidateFilesInEvents:(id)arg1;
- (void)consolidateFilesInLibrary:(id)arg1;
- (BOOL)consolidateMedia:(id)arg1 fromProject:(id)arg2 library:(id)arg3 taskName:(id)arg4 options:(int)arg5 hasOfflineFiles:(char *)arg6;
- (BOOL)hasDiskSpaceForEvents:(id)arg1 library:(id)arg2 options:(int)arg3;
- (void)warnAboutError:(int)arg1 forTaskName:(id)arg2 library:(id)arg3 filesExist:(BOOL)arg4;
- (void)dealloc;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Flexo/FFBackgroundTaskTarget-Protocol.h>

@class FFBackgroundTask, FFSegmentStoreRef, NSMutableArray;

__attribute__((visibility("hidden")))
@interface FFEffectLibraryThumbnailRequestManager : NSObject <FFBackgroundTaskTarget>
{
    NSMutableArray *_requests;
    FFBackgroundTask *_bTask;
    unsigned int _progressNumProcessed;
    unsigned int _progressTotal;
    unsigned int _progressCurrentBaseline;
    FFSegmentStoreRef *_segmentStoreRef;
    BOOL _shuttingDown;
}

+ (void)releaseSharedInstance;
+ (id)sharedInstance;
- (id)librariesInUse:(id)arg1;
- (id)assetsInUse:(id)arg1;
- (id)segmentStoreRef;
- (id)copyCachedImageForItem:(id)arg1;
- (void)queueRequestForItem:(id)arg1;
- (void)_notifyDidShutdown:(id)arg1;
- (void)_notifyWillShutdown:(id)arg1;
- (void)_waitForBGTaskToFinish;
- (void)_cancelBGTask;
- (void)_startBackgroundTask;
- (void)_backgroundTask:(id)arg1 onTask:(id)arg2;
- (CDStruct_bdcb2b0d)_iconCacheKeyForItem:(id)arg1;
- (void)dealloc;
- (oneway void)release;
- (id)init;

@end


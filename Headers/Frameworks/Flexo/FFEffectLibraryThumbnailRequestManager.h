//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FFBackgroundTask, FFSegmentStoreRef;

__attribute__((visibility("hidden")))
@interface FFEffectLibraryThumbnailRequestManager : NSObject
{
    struct FFLocklessQueue<FFEffectLibraryItemView*> *_requests;
    FFBackgroundTask *_bTask;
    unsigned int _progressStep;
    unsigned int _progressTotal;
    FFSegmentStoreRef *_segmentStoreRef;
}

+ (id)sharedInstance;
+ (void)releaseSharedInstance;
- (id)init;
- (void)dealloc;
- (CDStruct_60067b7e)_iconCacheKeyForItem:(id)arg1;
- (void)_backgroundTask:(id)arg1 onTask:(id)arg2;
- (void)_startBackgroundTask;
- (void)_cancelBGTask;
- (void)_waitForBGTaskToFinish;
- (void)_stopBackgroundTask:(id)arg1;
- (void)queueRequestForItem:(id)arg1;
- (id)copyCachedImageForItem:(id)arg1;
- (id)segmentStoreRef;

@end

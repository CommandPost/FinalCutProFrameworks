//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FFBackgroundTaskTarget.h"

@class FFBackgroundTask, FFStreamVideoCache, NSConditionLock, NSLock, NSMutableArray;

@interface FFThumbnailRequestManager : NSObject <FFBackgroundTaskTarget>
{
    NSMutableArray *_requests;
    NSLock *_requestsLock;
    NSMutableArray *_highPriorityRequests;
    NSLock *_highPriorityRequestsLock;
    FFStreamVideoCache *_streamVideoCache;
    FFBackgroundTask *_bTask;
    BOOL _disallowNewThumbnailRequests;
    NSConditionLock *_pause;
    long long _playersPlayering;
    BOOL _isAudio;
}

+ (void)initialize;
+ (void)FFRangeInvalidationNotification:(id)arg1;
+ (struct CGImage *)copyOldCachedImageForRequest:(id)arg1;
+ (CDStruct_bdcb2b0d)cachedMD5ForRequest:(id)arg1;
+ (void)releaseSharedInstanceVideo;
+ (id)sharedInstanceVideo;
+ (void)releaseSharedInstanceAudio;
+ (id)sharedInstanceAudio;
+ (struct CGImage *)_copyThemeCGImage:(long long)arg1;
@property BOOL disallowNewThumbnailRequests; // @synthesize disallowNewThumbnailRequests=_disallowNewThumbnailRequests;
- (id)librariesInUse;
- (id)assetsInUse;
- (id)_copySkimmableItems;
- (void)appWillTerminate:(id)arg1;
- (BOOL)newImage:(struct CGImage **)arg1 forRequest:(id)arg2;
- (void)addAsyncImageRequest:(id)arg1;
- (void)_waitForBGTaskToFinish;
- (void)_cancelBGTask;
- (void)_startBackgroundTask;
- (void)_backgroundTask:(id)arg1 onTask:(id)arg2;
- (void)canceledTask:(id)arg1;
- (void)uiPlaybackStateChange:(id)arg1;
- (id)streamVideoCache;
- (void)dealloc;
- (id)initForAudio:(BOOL)arg1;

@end


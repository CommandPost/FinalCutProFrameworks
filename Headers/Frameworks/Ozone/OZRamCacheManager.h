//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Ozone/OZRenderClient-Protocol.h>
#import <Ozone/OZRenderProgressManager-Protocol.h>

@class OZCacheDisplayManager;

@interface OZRamCacheManager : NSObject <OZRenderProgressManager, OZRenderClient>
{
    struct OZDocument *_doc;
    OZCacheDisplayManager *_pCacheDisplayManager;
    CDStruct_1b6d18a9 _startTime;
    CDStruct_1b6d18a9 _endTime;
    struct PCTimer *_globalTimer;
    struct PCTimer *_timer;
    BOOL _aborted;
    _Bool _isRendering;
    struct PCMutex _playbackMutex;
    struct shared_ptr<OZTimeStrategy> _timeStrategy;
    struct shared_ptr<OZPlaybackClock> _playbackClock;
    struct shared_ptr<OZFootageScheduler> _footageScheduler;
    struct vector<std::__1::shared_ptr<const HGComputeDevice>, std::__1::allocator<std::__1::shared_ptr<const HGComputeDevice>>> _workingDevices;
    struct set<CMTime, std::__1::less<CMTime>, std::__1::allocator<CMTime>> _canceledFrames;
}

+ (id)sharedInstance;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)updateCacheDisplayManager:(id)arg1;
- (void)renderNodeCancelled:(const CDStruct_1b6d18a9 *)arg1 userData:(void *)arg2;
- (void)renderNodeFinished:(struct OZHGRenderNode *)arg1 result:(const shared_ptr_3bf61ddf *)arg2;
- (void)getRenderRequestRenderParams:(struct OZRenderParams *)arg1 atTime:(CDStruct_1b6d18a9)arg2;
- (void)scheduleNextBuilderJob;
- (CDStruct_1b6d18a9)getNextTimeToRender;
- (void)stopRamPreview;
- (void)startRamPreview;
- (void)updateProgressDialog:(id)arg1;
- (void)abortRender;
- (_Bool)renderScene:(struct OZDocument *)arg1 cacheDisplayManager:(id)arg2 startTime:(const CDStruct_1b6d18a9 *)arg3 endTime:(const CDStruct_1b6d18a9 *)arg4 workingGPUs:(const struct FxDeviceSet *)arg5;
- (unsigned long long)getImageSize;
- (PCRect_07ce470f)getRenderROI;
- (void)renderFailed:(const CDStruct_1b6d18a9 *)arg1;
- (void)cleanupRender:(const CDStruct_1b6d18a9 *)arg1;
@property(readonly) BOOL aborted;
- (_Bool)ramCacheDone:(const CDStruct_1b6d18a9 *)arg1;
@property(readonly) struct PCTimer *timer;
- (struct OZDocument *)document;
- (void)dealloc;
- (id)init;

@end


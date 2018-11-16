//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFHGAsyncJob.h>

@class FFHGAsyncQueue, FFImage, NSConditionLock, NSMutableArray, NSObject<HGRQJobProtocol>, NSObject<OS_dispatch_group>;

@interface FFHGAsyncFanoutJob : FFHGAsyncJob
{
    NSConditionLock *_state;
    FFHGAsyncQueue *_assignedQueue;
    FFImage *_image;
    struct HGRenderJob *_renderJob;
    NSMutableArray *_outputs;
    NSMutableArray *_bypassOutputs;
    NSObject<OS_dispatch_group> *_bypassJobsGroup;
    NSConditionLock *_bypassJobsCond;
    struct HGRenderer *_specificRenderer;
    NSObject<HGRQJobProtocol> *_cbObj;
    _Bool _dumpGraph;
    _Bool _dumpDotFile;
    double _vScreenIdleTimeBeforeJob;
    CDStruct_0ea56580 _blockedInfo;
    struct _opaque_pthread_t *_threadThatInstalledBlockedInfo;
    long long _bypassCostUSec;
    CDStruct_0ea56580 _bypassBlockedInfo;
    int _amortizationCount;
    _Bool _dumpRenderStats;
}

@property _Bool dumpRenderStats; // @synthesize dumpRenderStats=_dumpRenderStats;
@property _Bool dumpDotFile; // @synthesize dumpDotFile=_dumpDotFile;
@property _Bool dumpGraph; // @synthesize dumpGraph=_dumpGraph;
@property struct HGRenderer *specificRenderer; // @synthesize specificRenderer=_specificRenderer;
- (int)amortizationCount;
- (void)incrementAmortizationCount;
- (int)virtualScreen;
- (CDStruct_0ea56580 *)graphExecBlockedInfo;
- (double)totalBufferCopyTime;
- (_Bool)dequeueJobIfNotStarted;
- (_Bool)enqueueToRenderLocation:(int)arg1 priority:(int)arg2;
- (double)vscreenIdleTimeBeforeJob;
- (void)_jobFinished;
- (void)_nodeDidFinish:(id)arg1;
- (void)_jobStarted;
- (_Bool)isComplete;
- (_Bool)bypassComplete;
- (_Bool)waitForCompletionBeforeDate:(id)arg1;
- (id)newRequestedOutput:(id)arg1 location:(int)arg2 roi:(struct CGRect)arg3 pixelTransform:(id)arg4 filterQuality:(int)arg5 dithered:(BOOL)arg6 background:(int)arg7 zebraMode:(unsigned int)arg8 zebraEpsilons:(struct FFRangeCheckEpsilonValues *)arg9 workingSpace:(int)arg10 clampColorSpace:(struct CGColorSpace *)arg11;
- (id)_newImgWithBackground:(int)arg1 location:(int)arg2 roi:(struct CGRect)arg3 pixelTransform:(id)arg4 filterQuality:(int)arg5 workingSpace:(int)arg6;
- (id)_findExistingOutput:(id)arg1 location:(int)arg2 roi:(struct HGRect)arg3 pixelTransform:(id)arg4 dithered:(BOOL)arg5 background:(int)arg6 zebraMode:(unsigned int)arg7;
- (id)description;
- (void)dealloc;
- (id)initWithSourceImage:(id)arg1 object:(id)arg2;

@end


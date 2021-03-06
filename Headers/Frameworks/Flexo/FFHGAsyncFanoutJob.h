//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Flexo/FFHGAsyncJob.h>

@class FFHGAsyncQueue, FFImage, FFImageRepBindingInfo, NSConditionLock, NSMutableArray, NSObject;
@protocol HGRQJobProtocol, OS_dispatch_group;

@interface FFHGAsyncFanoutJob : FFHGAsyncJob
{
    NSConditionLock *_state;
    FFHGAsyncQueue *_assignedQueue;
    FFImage *_image;
    FFImageRepBindingInfo *_bindingInfo;
    struct HGRenderJob *_renderJob;
    NSMutableArray *_outputs;
    NSMutableArray *_bypassOutputs;
    NSObject<OS_dispatch_group> *_bypassJobsGroup;
    NSConditionLock *_bypassJobsCond;
    struct HGRenderer *_specificRenderer;
    NSObject<HGRQJobProtocol> *_cbObj;
    _Bool _dumpGraph;
    _Bool _dumpDotFile;
    CDStruct_c93a53e8 _blockedInfo;
    struct _opaque_pthread_t *_threadThatInstalledBlockedInfo;
    long long _bypassCostUSec;
    CDStruct_c93a53e8 _bypassBlockedInfo;
    int _amortizationCount;
    double _gpuIdleTimeBeforeJob;
    _Bool _dumpRenderStats;
}

+ (id)newThumbImageForPQorHLGFromFFImage:(id)arg1;
+ (id)newClipped709FFImageFromFFImage:(id)arg1;
+ (id)newToneMappedDisplayLinear2020FFImageFromFFImage:(id)arg1;
@property _Bool dumpRenderStats; // @synthesize dumpRenderStats=_dumpRenderStats;
@property _Bool dumpDotFile; // @synthesize dumpDotFile=_dumpDotFile;
@property _Bool dumpGraph; // @synthesize dumpGraph=_dumpGraph;
@property struct HGRenderer *specificRenderer; // @synthesize specificRenderer=_specificRenderer;
- (void)performHeliumPreloadJobForSpecificRenderer;
- (int)amortizationCount;
- (void)incrementAmortizationCount;
- (int)virtualScreen;
- (CDStruct_c93a53e8 *)graphExecBlockedInfo;
- (double)totalBufferCopyTime;
- (_Bool)dequeueJobIfNotStarted;
- (_Bool)enqueueToRenderLocationList:(const struct FxDeviceSet *)arg1 priority:(int)arg2;
- (_Bool)enqueueToRenderLocation:(struct FxDevice *)arg1 priority:(int)arg2;
- (double)gpuIdleTimeBeforeJob;
- (void)_jobFinished;
- (void)_nodeDidFinish:(id)arg1;
- (void)_jobStarted;
- (_Bool)isComplete;
- (_Bool)bypassComplete;
- (_Bool)waitForCompletionBeforeDate:(id)arg1;
- (id)newRequestedOutput:(id)arg1 location:(const struct FxDeviceSet *)arg2 backingType:(int)arg3 roi:(struct CGRect)arg4 pixelTransform:(id)arg5 scalingInfo:(struct FFAsyncFanoutScalingInfo)arg6 dithered:(BOOL)arg7 background:(int)arg8 zebraMode:(unsigned int)arg9 zebraEpsilons:(struct FFRangeCheckEpsilonValues *)arg10 workingSpace:(int)arg11 streamColorSpace:(int)arg12 clampColorSpace:(struct CGColorSpace *)arg13 toneMapped:(BOOL)arg14;
- (id)_newImgWithBackground:(int)arg1 roi:(struct CGRect)arg2 pixelTransform:(id)arg3 scalingInfo:(struct FFAsyncFanoutScalingInfo)arg4 workingSpace:(int)arg5;
- (id)_findExistingOutput:(id)arg1 locationOptions:(const struct FxDeviceSet *)arg2 backingType:(int)arg3 roi:(struct HGRect)arg4 pixelTransform:(id)arg5 dithered:(BOOL)arg6 background:(int)arg7 zebraMode:(unsigned int)arg8 toneMapped:(BOOL)arg9;
- (id)description;
- (void)dealloc;
- (id)initWithSourceImage:(id)arg1 bindingInfo:(id)arg2 object:(id)arg3;

@end


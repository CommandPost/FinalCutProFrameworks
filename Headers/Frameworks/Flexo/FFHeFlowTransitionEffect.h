//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Flexo/FFHeliumEffect.h>

#import <Flexo/FFBackgroundTaskTarget-Protocol.h>

@class FFBackgroundTask, FFSVContext, FFSegmentStoreWriteLockIndexTracker, FFStreamVideo, NSSet, PCMatrix44Double;

__attribute__((visibility("hidden")))
@interface FFHeFlowTransitionEffect : FFHeliumEffect <FFBackgroundTaskTarget>
{
    FFSegmentStoreWriteLockIndexTracker *_indexTracker;
    struct FFSynchronizable *_bgProcLock;
    FFBackgroundTask *_bgTask;
    CDStruct_bdcb2b0d _bgTaskQueuedMD5;
    CDStruct_bdcb2b0d _bgTaskActiveMD5;
    CDStruct_bdcb2b0d _bgTaskLastFailedMD5;
    FFSVContext *_bgTaskContext;
    struct CGRect _bgTaskROI;
    CDStruct_1b6d18a9 _bgTaskSampleDur;
    FFStreamVideo *_bgStreamA;
    FFStreamVideo *_bgStreamB;
    PCMatrix44Double *_bgPTToUse;
    struct PC_CMTimePair _bgTaskTimes;
    NSSet *_bgTaskActiveAssets;
    NSSet *_bgTaskQueuedAssets;
}

+ (void)registerEffects;
- (id)newEffectSpecificTokensAtTime:(CDStruct_1b6d18a9)arg1 duration:(CDStruct_1b6d18a9)arg2 withInputStream:(id)arg3 context:(id)arg4 schedInfo:(id)arg5 downstreamPT:(id)arg6;
- (int)getEffectSchedulingFlags;
- (void)lastVideoStreamClosedOnEffect;
- (void)firstVideoStreamOpenedOnEffect;
- (id)newImageAtTime:(CDStruct_1b6d18a9)arg1 duration:(CDStruct_1b6d18a9)arg2 withInputStream:(id)arg3 context:(id)arg4 schedInfo:(id)arg5 downstreamPT:(id)arg6 channelOffset:(CDStruct_1b6d18a9)arg7 roi:(const struct CGRect *)arg8 graphBuildInfo:(id)arg9;
- (CDStruct_bdcb2b0d)md5;
- (void)_checkAnalysisAvailableState:(id)arg1 context:(id)arg2 analysisRect:(const struct CGRect *)arg3 downstreamPT:(id)arg4 resultBlock:(CDUnknownBlockType)arg5;
- (BOOL)wantsTrigger:(id)arg1 context:(id)arg2;
- (BOOL)analysisAvailable:(id)arg1 context:(id)arg2;
- (BOOL)needsAnalysis:(id)arg1 context:(id)arg2;
- (void)_ensureBackgroundJob:(id)arg1 roi:(struct CGRect)arg2 sampleDur:(CDStruct_1b6d18a9)arg3 streamA:(id)arg4 streamB:(id)arg5 inputTimes:(struct PC_CMTimePair)arg6 downstreamPT:(id)arg7 forMD5:(CDStruct_bdcb2b0d)arg8;
- (void)_flowTransBG:(id)arg1 onTask:(id)arg2;
- (id)librariesInUse:(id)arg1;
- (id)assetsInUse:(id)arg1;
- (int)_generateFlowInfo:(id)arg1 roi:(struct CGRect)arg2 sampleDur:(CDStruct_1b6d18a9)arg3 streamA:(id)arg4 timeA:(CDStruct_1b6d18a9)arg5 streamB:(id)arg6 timeB:(CDStruct_1b6d18a9)arg7 downstreamPT:(id)arg8 expectedMD5:(CDStruct_bdcb2b0d)arg9;
- (struct PC_CMTimePair)_getInputTimesForSource:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2;
- (void)_queueFlowFieldUpdate;
- (BOOL)supportsReentrancy;
- (id)inputKeys;
- (id)copySegStoreRefForFlowTransEffect;
- (void)dealloc;
- (id)initWithEffectID:(id)arg1;

@end


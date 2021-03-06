//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Flexo/FFRetimingEffect.h>

#import <Flexo/FFRateConformAndRetimingVideoProtocol-Protocol.h>

@class CHChannelBool, CHChannelEnum, FFSegmentStoreWriteLockIndexTracker;

__attribute__((visibility("hidden")))
@interface FFRetimingVideoEffect : FFRetimingEffect <FFRateConformAndRetimingVideoProtocol>
{
    CHChannelEnum *_chFrameSamplingMode;
    CHChannelBool *_chFlowVectorDisplay;
    unsigned int _pendingHQRescan;
    FFSegmentStoreWriteLockIndexTracker *_hqFramesIndexTracker;
}

+ (void)registerEffects;
- (id)newEffectNode;
- (CDStruct_bdcb2b0d)getContextBasedMD5Adjustment:(id)arg1;
- (id)inputKeys;
- (void)usePresetsChannelFolder:(id)arg1;
- (void)createChannelsInFolder:(id)arg1;
- (id)newEffectSpecificTokensAtTime:(CDStruct_1b6d18a9)arg1 duration:(CDStruct_1b6d18a9)arg2 withInputStream:(id)arg3 context:(id)arg4 schedInfo:(id)arg5 downstreamPT:(id)arg6;
- (id)newImageAtTime:(CDStruct_1b6d18a9)arg1 duration:(CDStruct_1b6d18a9)arg2 withInputStream:(id)arg3 context:(id)arg4 schedInfo:(id)arg5 downstreamPT:(id)arg6 channelOffset:(CDStruct_1b6d18a9)arg7 roi:(const struct CGRect *)arg8 graphBuildInfo:(id)arg9;
- (_Bool)shouldCheckCacheForTime:(CDStruct_1b6d18a9)arg1 withInputStream:(id)arg2 context:(id)arg3 props:(id)arg4;
- (CDStruct_1b6d18a9)sampleDurationForHQCaching;
- (id)highQualityFlowFrameRequestsForRange:(CDStruct_e83c9415)arg1 outputStartTime:(CDStruct_1b6d18a9)arg2 outputFrameDuration:(CDStruct_1b6d18a9)arg3;
- (id)hqOpticalFlowRenderFilePaths;
- (id)hqOpticalFlowRenderProps;
- (int)getEffectSchedulingFlags;
- (void)recordOffsetNeedingUpdate:(long long)arg1 forKey:(id)arg2;
- (BOOL)hasHQFlowFrameForKey:(id)arg1 atOffset:(long long)arg2;
- (void)_queueHQSegmentStoreCheck;
- (void)_rescanForHQRenderedFrames;
- (BOOL)hasFlowVectorAtTime:(CDStruct_1b6d18a9)arg1 mediaStartTime:(CDStruct_1b6d18a9)arg2 sampleDuration:(CDStruct_1b6d18a9)arg3 cachingStruct:(struct FFCachesForRepeatedRetimingCalculations *)arg4;
- (BOOL)_checkTime:(CDStruct_1b6d18a9)arg1 mediaStartTime:(CDStruct_1b6d18a9)arg2 sampleDuration:(CDStruct_1b6d18a9)arg3 mediaRep:(id)arg4 cachingStruct:(struct FFCachesForRepeatedRetimingCalculations *)arg5;
- (BOOL)currentSettingsRequireFlowVectors;
- (void)_performFlowAnalysis;
- (void)setFrameSampleMode:(long long)arg1;
- (long long)frameSampleMode;
- (BOOL)isAtDefaultSettings;
- (float)costAtTime:(CDStruct_1b6d18a9)arg1 context:(id)arg2;
- (void)dealloc;
- (id)initWithEffectID:(id)arg1;
- (void)markForRescanDueToDeletedRenderFiles;

@end


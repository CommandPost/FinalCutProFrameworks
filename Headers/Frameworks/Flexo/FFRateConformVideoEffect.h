//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFRateConformEffect.h>

#import "FFRateConformAndRetimingVideoProtocol.h"

@class CHChannelEnum;

__attribute__((visibility("hidden")))
@interface FFRateConformVideoEffect : FFRateConformEffect <FFRateConformAndRetimingVideoProtocol>
{
    CHChannelEnum *_chFrameSamplingMode;
}

+ (void)registerEffects;
- (BOOL)supportsReentrancy;
- (id)newEffectNode;
- (id)inputKeys;
- (void)createChannelsInFolder:(id)arg1;
- (id)newEffectSpecificTokensAtTime:(CDStruct_1b6d18a9)arg1 duration:(CDStruct_1b6d18a9)arg2 withInputStream:(id)arg3 context:(id)arg4 downstreamPT:(id)arg5;
- (id)newImageAtTime:(CDStruct_1b6d18a9)arg1 duration:(CDStruct_1b6d18a9)arg2 withInputStream:(id)arg3 context:(id)arg4 downstreamPT:(id)arg5 channelOffset:(CDStruct_1b6d18a9)arg6 roi:(const struct CGRect *)arg7 graphBuildInfo:(id)arg8;
- (int)getEffectSchedulingFlags;
- (BOOL)hasFlowVectorAtTime:(CDStruct_1b6d18a9)arg1 mediaStartTime:(CDStruct_1b6d18a9)arg2 sampleDuration:(CDStruct_1b6d18a9)arg3;
- (BOOL)_checkTime:(CDStruct_1b6d18a9)arg1 mediaStartTime:(CDStruct_1b6d18a9)arg2 sampleDuration:(CDStruct_1b6d18a9)arg3 mediaRep:(id)arg4;
- (BOOL)currentSettingsRequireFlowVectors;
- (void)_performFlowAnalysis;
- (float)costAtTime:(CDStruct_1b6d18a9)arg1 context:(id)arg2;
- (void)setFrameSampleMode:(long long)arg1;
- (long long)frameSampleMode;
- (void)dealloc;

@end


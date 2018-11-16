//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFRetimingEffect.h>

@class CHChannelBool, CHChannelEnum;

__attribute__((visibility("hidden")))
@interface FFRetimingVideoEffect : FFRetimingEffect
{
    CHChannelEnum *_chFrameSamplingMode;
    CHChannelBool *_chFlowVectorDisplay;
    BOOL _waitingForAnalysis;
}

+ (void)registerEffects;
- (BOOL)waitingForAnalysis;
- (id)newEffectNode;
- (id)inputKeys;
- (void)usePresetsChannelFolder:(struct CHChannelFolder *)arg1;
- (void)useSweetSpotPresetChannelFolder:(struct CHChannelFolder *)arg1;
- (void)createChannelsInFolder:(id)arg1;
- (void)createPresetsChannelsInFolder:(id)arg1;
- (void)createSweetSpotPresetChannelsInFolder:(id)arg1;
- (id)newEffectSpecificTokensAtTime:(CDStruct_1b6d18a9)arg1 duration:(CDStruct_1b6d18a9)arg2 withInputStream:(id)arg3 context:(id)arg4 downstreamPT:(id)arg5;
- (id)newImageAtTime:(CDStruct_1b6d18a9)arg1 duration:(CDStruct_1b6d18a9)arg2 withInputStream:(id)arg3 context:(id)arg4 downstreamPT:(id)arg5 channelOffset:(CDStruct_1b6d18a9)arg6 roi:(const struct CGRect *)arg7;
- (BOOL)hasFlowVectorAtTime:(CDStruct_1b6d18a9)arg1 mediaStartTime:(CDStruct_1b6d18a9)arg2 sampleDuration:(CDStruct_1b6d18a9)arg3;
- (BOOL)_checkTime:(CDStruct_1b6d18a9)arg1 mediaStartTime:(CDStruct_1b6d18a9)arg2 sampleDuration:(CDStruct_1b6d18a9)arg3 mediaRep:(id)arg4;
- (BOOL)currentSettingsRequireFlowVectors;
- (id)newImageWithFlowVectorAtTime:(CDStruct_1b6d18a9)arg1 inputImage:(id)arg2 stream:(id)arg3;
- (id)newFlowInterpolatedImageAtTime:(CDStruct_1b6d18a9)arg1 withStream:(id)arg2 context:(id)arg3 downstreamPT:(id)arg4 frameDuration:(CDStruct_1b6d18a9)arg5 sampleDuration:(CDStruct_1b6d18a9)arg6 roi:(const struct CGRect *)arg7;
- (void)_performFlowAnalysis;
- (id)newBlendedImageAtTime:(CDStruct_1b6d18a9)arg1 withStream:(id)arg2 context:(id)arg3 downstreamPT:(id)arg4 frameDuration:(CDStruct_1b6d18a9)arg5 sampleDuration:(CDStruct_1b6d18a9)arg6 roi:(const struct CGRect *)arg7;
- (void)setFrameSampleMode:(long long)arg1;
- (long long)frameSampleMode;
- (BOOL)isAtDefaultSettings;
- (float)costAtTime:(CDStruct_1b6d18a9)arg1 context:(id)arg2;
- (void)dealloc;

@end


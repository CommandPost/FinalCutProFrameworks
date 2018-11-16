//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFHeliumEffect.h>

@class CHChannelEnum, FFDominantMotionMediaRep, NSMutableArray;

__attribute__((visibility("hidden")))
@interface FFRollingShutterEffect : FFHeliumEffect
{
    NSMutableArray *_correctionTransforms;
    int _correctionTransformStartSample;
    CHChannelEnum *_chAmount;
    CDStruct_1b6d18a9 _mediaStartTime;
    FFDominantMotionMediaRep *_mediaRep;
    BOOL _requestPending;
    BOOL _analysisRequestInProgress;
    CDStruct_e83c9415 _requestedRange;
    id _notificationHandler;
    BOOL _suppressChannelChangeUpdate;
}

+ (id)effectForEffectStack:(id)arg1;
+ (id)effectInstanceForEffectStack:(id)arg1;
+ (id)effectIDForEffectStack:(id)arg1;
+ (void)registerEffects;
+ (id)copyClassDescription;
- (id).cxx_construct;
- (void)analysisDataReady:(id)arg1;
- (void)channelParameterChanged:(id)arg1;
- (void)setSuppressChannelChangeUpdate:(BOOL)arg1;
- (id)inputKeys;
- (BOOL)waitingForAnalysis;
- (void)loadPersistentData:(id)arg1;
- (id)persistentData;
- (void)createChannelsInFolder:(id)arg1;
- (id)newImageAtTime:(CDStruct_1b6d18a9)arg1 duration:(CDStruct_1b6d18a9)arg2 withInputStream:(id)arg3 context:(id)arg4 downstreamPT:(id)arg5 channelOffset:(CDStruct_1b6d18a9)arg6 roi:(const struct CGRect *)arg7;
- (void)_maybeRequestCorrectionTransform:(id)arg1;
- (id)newEffectSpecificTokensAtTime:(CDStruct_1b6d18a9)arg1 duration:(CDStruct_1b6d18a9)arg2 withInputStream:(id)arg3 context:(id)arg4 downstreamPT:(id)arg5;
- (void)requestOrRetrieveCorrectionTransform;
- (void)_requestCorrectionTransform;
- (void)_retrieveCorrectionTransform:(CDStruct_e83c9415)arg1;
- (void)_setCorrectionTransformsIfNoPendingRequest:(id)arg1;
- (void)_setCorrectionTransforms:(id)arg1;
- (void)_establishMediaRep;
- (void)setPersistentData:(id)arg1;
- (void)setRequestPending:(BOOL)arg1;
- (BOOL)requestPending;
- (void)setParameterValuesForNode:(struct HGNode *)arg1 atTime:(CDStruct_1b6d18a9)arg2 withInputStream:(id)arg3 context:(id)arg4 pixelTransform:(id)arg5;
- (int)frameFromTime:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)sampleTimeFromTime:(CDStruct_1b6d18a9)arg1;
- (int)sampleFromTime:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)mediaStartTime;
- (void)setAmount:(int)arg1;
- (int)amount;
- (float)correctionAmount;
- (struct HGNode *)newNodeForContext:(id)arg1;
- (BOOL)analysisAvailable;
- (BOOL)needsAnalysis;
- (CDStruct_1b6d18a9)durationToUseForMD5Calcs;
- (BOOL)effectStartAndDurationImpactMD5;
- (BOOL)writeDefaultChannels;
- (BOOL)isNoOp;
- (unsigned int)attributeCopyingFlags;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithEffectID:(id)arg1;

@end


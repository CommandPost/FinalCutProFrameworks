//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFHeliumEffect.h>

@class CHChannelDouble, FFDominantMotionMediaRep, NSMutableArray;

__attribute__((visibility("hidden")))
@interface FFStabilizationEffect : FFHeliumEffect
{
    NSMutableArray *_smoothTransforms;
    int _smoothTransformStartSample;
    CDStruct_e83c9415 _smoothingRange;
    CHChannelDouble *_chTranslationSmooth;
    CHChannelDouble *_chRotationSmooth;
    CHChannelDouble *_chScaleSmooth;
    CDStruct_1b6d18a9 _mediaStartTime;
    FFDominantMotionMediaRep *_mediaRep;
    BOOL _requestPending;
    BOOL _analysisRequestInProgress;
    CDStruct_e83c9415 _requestedRange;
    id _notificationHandler;
}

+ (id)copyClassDescription;
+ (void)registerEffects;
+ (id)effectIDForEffectStack:(id)arg1;
+ (id)effectInstanceForEffectStack:(id)arg1;
+ (id)effectForEffectStack:(id)arg1;
- (id)initWithEffectID:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)attributeCopyingFlags;
- (BOOL)_cachedIsNoOp;
- (BOOL)isNoOp;
- (BOOL)writeDefaultChannels;
- (BOOL)effectStartAndDurationImpactMD5;
- (CDStruct_1b6d18a9)durationToUseForMD5Calcs;
- (BOOL)needsAnalysis;
- (BOOL)analysisAvailable;
- (struct HGNode *)newNodeForContext:(id)arg1;
- (CDStruct_1b6d18a9)mediaStartTime;
- (double)translationSmooth;
- (double)rotationSmooth;
- (double)scaleSmooth;
- (int)sampleFromTime:(CDStruct_1b6d18a9)arg1;
- (int)frameFromTime:(CDStruct_1b6d18a9)arg1;
- (void)setParameterValuesForNode:(struct HGNode *)arg1 atTime:(CDStruct_1b6d18a9)arg2 withInputStream:(id)arg3 context:(id)arg4 pixelTransform:(id)arg5;
- (BOOL)_smoothingRangeChanged;
- (BOOL)requestPending;
- (void)setRequestPending:(BOOL)arg1;
- (void)setPersistentData:(id)arg1;
- (void)_establishMediaRep;
- (void)_setSmoothTransforms:(id)arg1;
- (void)_setSmoothTransformsIfNoPendingRequest:(id)arg1;
- (void)_addExcessiveShakeKeywords:(id)arg1;
- (void)_retrieveSmoothTransformAndShakyRanges:(CDStruct_e83c9415)arg1;
- (void)requestSmoothTransform;
- (id)newImageAtTime:(CDStruct_1b6d18a9)arg1 duration:(CDStruct_1b6d18a9)arg2 withInputStream:(id)arg3 context:(id)arg4 downstreamPT:(id)arg5 channelOffset:(CDStruct_1b6d18a9)arg6 roi:(struct CGRect *)arg7;
- (void)createChannelsInFolder:(id)arg1;
- (id)persistentData;
- (void)loadPersistentData:(id)arg1;
- (id)inputKeys;
- (BOOL)waitingForAnalysis;
- (void)channelParameterChanged:(id)arg1;
- (void)analysisDataReady:(id)arg1;

@end


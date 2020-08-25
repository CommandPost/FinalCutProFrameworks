//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFEffect.h>

@class CHChannelBool, CHChannelDouble, CHChannelEnum, CHChannelFolder;

__attribute__((visibility("hidden")))
@interface FFRetimingEffect : FFEffect
{
    CHChannelEnum *_chRetimingInterpolation;
    CHChannelEnum *_chRetimingExtrapolation;
    CHChannelDouble *_chTimeMapUI;
    CHChannelDouble *_chTimeMapEval;
    CHChannelDouble *_chConstantSpeed;
    CHChannelBool *_chDirection;
    CHChannelFolder *_folderAdvanced;
    CDStruct_1b6d18a9 _mediaStartTime;
    CDStruct_1b6d18a9 _mediaEndTime;
    CDStruct_1b6d18a9 _mediaSampleDuration;
    CDStruct_1b6d18a9 _mediaFrameDuration;
    CDStruct_1b6d18a9 _containerFrameDuration;
    double _audioInMediaTime;
    double _audioOutMediaTime;
    double *_anchoredSecondMediaTimes;
    double _anchoredFirstMediaTime;
    BOOL _suppressChannelChangeUpdate;
}

+ (id)effectForEffectStack:(id)arg1;
+ (id)effectIDForEffectStack:(id)arg1;
- (BOOL)suppressChannelChangeUpdate;
- (void)setSuppressChannelChangeUpdate:(BOOL)arg1;
- (unsigned int)intrinsicCacheFlag;
- (void)createChannelsInFolder:(id)arg1;
- (void)retimingReset;
- (CDStruct_1b6d18a9)lastKeyValueInTime;
- (CDStruct_1b6d18a9)firstKeyValueInTime;
- (CDStruct_1b6d18a9)lastKeyTime;
- (CDStruct_1b6d18a9)firstKeyTime;
- (CDStruct_1b6d18a9)UICurveTimeFromEvalCurveTime:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)evalCurveTimeFromUICurveTime:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)untime:(CDStruct_1b6d18a9)arg1 withContext:(id)arg2;
- (CDStruct_e83c9415)untimeRange:(CDStruct_e83c9415)arg1;
- (CDStruct_1b6d18a9)untime:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)untime:(CDStruct_1b6d18a9)arg1 cachingStruct:(struct FFCachesForRepeatedRetimingCalculations *)arg2;
- (BOOL)_timeOnDownSlope:(CDStruct_1b6d18a9)arg1 cachingStruct:(struct FFCachesForRepeatedRetimingCalculations *)arg2;
- (CDStruct_1b6d18a9)curveLookup:(CDStruct_1b6d18a9)arg1;
- (double)untimeToSeconds:(CDStruct_1b6d18a9)arg1;
- (double)untimeToSeconds:(CDStruct_1b6d18a9)arg1 cachingStruct:(struct FFCachesForRepeatedRetimingCalculations *)arg2;
- (BOOL)mapMediaTime:(CDStruct_1b6d18a9)arg1 toComponentTime:(CDStruct_1b6d18a9 *)arg2 inComponentTimeRange:(CDStruct_e83c9415)arg3;
- (BOOL)mapMediaTimeInSeconds:(double)arg1 toComponentTime:(CDStruct_1b6d18a9 *)arg2 inComponentTimeRange:(CDStruct_e83c9415)arg3;
- (BOOL)mapMediaTimeInSeconds:(double)arg1 toComponentKeyTime:(CDStruct_1b6d18a9 *)arg2 inComponentTimeRange:(CDStruct_e83c9415)arg3;
- (int)segmentCount;
- (double)mediaTimeAlongPrevSegment:(CDStruct_1b6d18a9)arg1 keyIndex:(unsigned int)arg2;
- (int)UIsegmentIndexForRange:(CDStruct_e83c9415)arg1 rate:(double *)arg2;
- (double)retimingRateForRange:(CDStruct_e83c9415)arg1;
- (int)evalSegmentIndexForComponentTime:(CDStruct_1b6d18a9)arg1;
- (int)UIsegmentIndexForComponentTime:(CDStruct_1b6d18a9)arg1;
- (int)_segmentIndexForChannel:(id)arg1 componentTime:(CDStruct_1b6d18a9)arg2;
- (CDStruct_1b6d18a9)UIsegmentDurationForComponentTime:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)_segmentDurationForChannel:(id)arg1 componentTime:(CDStruct_1b6d18a9)arg2;
- (CDStruct_e83c9415)UISegmentTimeRangeAtIndex:(int)arg1;
- (CDStruct_e83c9415)evalSegmentTimeRangeAtIndex:(int)arg1;
- (CDStruct_e83c9415)evalSegmentTimeRangeAtUIIndex:(int)arg1;
- (CDStruct_e83c9415)_segmentTimeRangeForChannel:(id)arg1 segmentIndex:(int)arg2;
- (double)evalSegmentRetimingRateAtSegmentIndex:(int)arg1;
- (double)UIsegmentRetimingRateAtSegmentIndex:(int)arg1;
- (double)_segmentRetimingRateForChannel:(id)arg1 segmentIndex:(int)arg2;
- (double)UIsegmentRetimingRateAroundComponentTime:(CDStruct_1b6d18a9)arg1;
- (BOOL)retimeInForwardState:(CDStruct_e83c9415)arg1;
- (double)constantRetimingRate;
- (BOOL)effectIntroducesAlpha;
- (BOOL)effectVariesOverTime;
- (BOOL)isNoOp;
- (BOOL)isAtDefaultSettings;
- (CDStruct_1b6d18a9)getTimeForInputTime:(CDStruct_1b6d18a9)arg1 streamOffset:(CDStruct_1b6d18a9)arg2;
- (BOOL)supportsReentrancy;
- (BOOL)isRetimeEffect;
- (void)setSmoothTransitionAtKeyframe:(BOOL)arg1 index:(int)arg2;
- (BOOL)smoothTransitionAtKeyframe:(int)arg1;
- (BOOL)smoothTransitionPossibleAtKeyframe:(int)arg1;
- (BOOL)allLinearTransitions;
- (BOOL)allSmoothTransitions;
- (BOOL)constantRetiming;
- (void)resetTransitionFalloffs;
- (void)setInterpolation:(long long)arg1;
- (long long)interpolation;
- (BOOL)smoothInterpolation;
- (void)setRetimingExtrapolation;
- (void)copyKeyValueWithTransitionFalloff:(void *)arg1 toTime:(CDStruct_1b6d18a9)arg2;
- (void)addKeyWithNoTransitionAtTime:(CDStruct_1b6d18a9)arg1 value:(double)arg2;
- (void)addKeyWithDefaultTransitionAtTime:(CDStruct_1b6d18a9)arg1 value:(double)arg2;
- (struct PC_CMTimePair)transitionTimesForKeyframe:(void *)arg1;
- (void)deriveEvalCurve:(BOOL)arg1;
- (void)deriveEvalCurve;
- (void)computeSmoothBezierTangents;
- (CDStruct_1b6d18a9)constantRetimedTimeFromUntimedTime:(CDStruct_1b6d18a9)arg1 useAbosoluteSpeed:(BOOL)arg2;
- (CDStruct_e83c9415)constantRetimedRangeFromUntimedRange:(CDStruct_e83c9415)arg1;
- (double)constantTimeMapInverse:(CDStruct_1b6d18a9)arg1;
- (double)constantTimeMapInverseSeconds:(double)arg1;
- (double)constantTimeMapInverseUseAbsoluteSpeed:(CDStruct_1b6d18a9)arg1;
- (double)constantTimeMapInverseSecondsUseAbsoluteSpeed:(double)arg1;
- (double)constantTimeMap:(CDStruct_1b6d18a9)arg1;
- (int)_computeMediaFrameOffsetFromComponentTime:(CDStruct_1b6d18a9)arg1;
- (BOOL)setRetimeCurveNewMediaStart:(CDStruct_1b6d18a9)arg1 newMediaEnd:(CDStruct_1b6d18a9)arg2;
- (BOOL)needToExtendRetimeCurveWithMediaStart:(CDStruct_1b6d18a9)arg1 mediaEnd:(CDStruct_1b6d18a9)arg2;
- (void)minUntimedTime:(double *)arg1 maxUntimedTime:(double *)arg2 forTimeRange:(CDStruct_e83c9415)arg3;
- (void)setupDefaultKeyframesFromSource;
- (void)setupDefaultKeyframes:(CDStruct_e83c9415)arg1;
- (double)anchoredFirstMediaTime;
- (void)setAnchoredFirstMediaTime;
- (double *)anchoredSecondMediaTimes;
- (void)setAnchoredSecondMediaTimes;
- (void)setAudioOutMediaTime:(double)arg1;
- (double)audioOutMediaTime;
- (void)setAudioInMediaTime:(double)arg1;
- (double)audioInMediaTime;
- (CDStruct_1b6d18a9)containerFrameDuration;
- (CDStruct_1b6d18a9)mediaFrameDuration;
- (CDStruct_1b6d18a9)mediaSampleDuration;
- (void)setMediaEndTime:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)mediaEndTime;
- (void)setMediaStartTime:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)mediaStartTime;
- (BOOL)timeMapChannelValueAtTime:(CDStruct_1b6d18a9)arg1 equalToValue:(double)arg2;
- (id)interpolationChannel;
- (id)directionChannel;
- (id)constantSpeedChannel;
- (id)timeMapEvalChannel;
- (id)timeMapUIChannel;
- (BOOL)isSecondaryRetimeEffect;
- (void)dealloc;
- (id)initWithEffectID:(id)arg1;

@end


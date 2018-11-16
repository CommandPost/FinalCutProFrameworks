//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFEffect.h>

@class CHChannelDouble, CHChannelEnum, CHChannelFolder;

__attribute__((visibility("hidden")))
@interface FFRetimingEffect : FFEffect
{
    CHChannelEnum *_chRetimingMode;
    CHChannelEnum *_chRetimingInterpolation;
    CHChannelEnum *_chRetimingExtrapolation;
    CHChannelDouble *_chTimeMap;
    CHChannelFolder *_folderAdvanced;
    int _activeSegment;
    CHChannelFolder *_folderSweetSpotPreset;
    CHChannelDouble *_chSweetSpotFrame;
    CHChannelDouble *_chSweetStartFrame;
    CHChannelDouble *_chSweetEndFrame;
    CHChannelDouble *_chSpeedBeforeSweetSpot;
    CHChannelDouble *_chSpeedAfterSweetSpot;
    CDStruct_1b6d18a9 _lastOutTime;
    CDStruct_1b6d18a9 _mediaStartTime;
    CDStruct_1b6d18a9 _mediaEndTime;
    CDStruct_1b6d18a9 _mediaSampleDuration;
    CDStruct_1b6d18a9 _mediaFrameDuration;
    CDStruct_1b6d18a9 _containerFrameDuration;
    double _audioInMediaTime;
    double _audioOutMediaTime;
    double *_anchoredSecondMediaTimes;
    double _anchoredFirstMediaTime;
    CDStruct_1b6d18a9 _sweetStartFrameComponentTime;
    CDStruct_1b6d18a9 _sweetEndFrameComponentTime;
}

+ (id)effectForEffectStack:(id)arg1;
+ (id)effectIDForEffectStack:(id)arg1;
- (id).cxx_construct;
- (void)createChannelsInFolder:(id)arg1;
- (CDStruct_1b6d18a9)lastKeyValueInTime;
- (CDStruct_1b6d18a9)firstKeyValueInTime;
- (CDStruct_1b6d18a9)lastKeyTime;
- (CDStruct_1b6d18a9)firstKeyTime;
- (CDStruct_1b6d18a9)untime:(CDStruct_1b6d18a9)arg1 withContext:(id)arg2;
- (CDStruct_e83c9415)untimeRange:(CDStruct_e83c9415)arg1;
- (CDStruct_1b6d18a9)untime:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)curveLookup:(CDStruct_1b6d18a9)arg1;
- (double)untimeToSeconds:(CDStruct_1b6d18a9)arg1;
- (BOOL)mapMediaTime:(CDStruct_1b6d18a9)arg1 toComponentTime:(CDStruct_1b6d18a9 *)arg2 inComponentTimeRange:(CDStruct_e83c9415)arg3;
- (BOOL)mapMediaTimeInSeconds:(double)arg1 toComponentTime:(CDStruct_1b6d18a9 *)arg2 inComponentTimeRange:(CDStruct_e83c9415)arg3;
- (BOOL)mapMediaTimeInSeconds:(double)arg1 toComponentKeyTime:(CDStruct_1b6d18a9 *)arg2 inComponentTimeRange:(CDStruct_e83c9415)arg3;
- (int)segmentCount;
- (double)mediaTimeAlongPrevSegment:(CDStruct_1b6d18a9)arg1 keyIndex:(unsigned int)arg2;
- (int)segmentIndexForComponentTime:(CDStruct_1b6d18a9)arg1;
- (CDStruct_e83c9415)segmentTimeRangeAtIndex:(int)arg1;
- (double)segmentRetimingRateAtSegmentIndex:(int)arg1;
- (double)segmentRetimingRateAroundComponentTime:(CDStruct_1b6d18a9)arg1;
- (BOOL)retimeInForwardState:(CDStruct_e83c9415)arg1;
- (double)constantRetimingRate;
- (BOOL)effectIntroducesAlpha;
- (BOOL)effectVariesOverTime;
- (BOOL)isNoOp;
- (BOOL)isAtDefaultSettings;
- (BOOL)isRetimeEffect;
- (void)setConstantRetiming:(BOOL)arg1;
- (BOOL)constantRetiming;
- (void)setSmoothInterpolation:(BOOL)arg1;
- (BOOL)smoothInterpolation;
- (void)setRetimingInterpolation;
- (void)setRetimingExtrapolation;
- (void)computeSmoothBezierTangents;
- (CDStruct_1b6d18a9)constantRetimedTimeFromUntimedTime:(CDStruct_1b6d18a9)arg1;
- (CDStruct_e83c9415)constantRetimedRangeFromUntimedRange:(CDStruct_e83c9415)arg1;
- (double)constantTimeMapInverse:(CDStruct_1b6d18a9)arg1;
- (double)constantTimeMapInverseSeconds:(double)arg1;
- (double)constantTimeMap:(CDStruct_1b6d18a9)arg1;
- (double)sweetFrameDuration;
- (double)speedAfterSweetSpot;
- (double)speedBeforeSweetSpot;
- (int)sweetSpotFrameOffset;
- (int)sweetSpotEndFrameOffset;
- (int)sweetSpotStartFrameOffset;
- (CDStruct_1b6d18a9)sweetEndFrameComponentTime;
- (CDStruct_1b6d18a9)sweetStartFrameComponentTime;
- (void)setSweetSpotFrameComponentTime:(CDStruct_1b6d18a9)arg1;
- (void)setSweetSpotEndFrameComponentTime:(CDStruct_1b6d18a9)arg1 computeOffset:(BOOL)arg2;
- (void)setSweetSpotStartFrameComponentTime:(CDStruct_1b6d18a9)arg1;
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
- (void)setActiveSegment:(int)arg1;
- (int)activeSegment;
- (void)setLastOutTime:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)lastOutTime;
- (void)setFrameSampleMode:(long long)arg1;
- (long long)frameSampleMode;
- (BOOL)timeMapChannelValueAtTime:(CDStruct_1b6d18a9)arg1 equalToValue:(double)arg2;
- (id)timeMapChannel;
- (void)dealloc;
- (id)initWithEffectID:(id)arg1;

@end


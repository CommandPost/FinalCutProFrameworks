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

+ (id)effectIDForEffectStack:(id)arg1;
+ (id)effectForEffectStack:(id)arg1;
- (id)initWithEffectID:(id)arg1;
- (void)dealloc;
- (id)timeMapChannel;
- (BOOL)timeMapChannelValueAtTime:(CDStruct_1b6d18a9)arg1 equalToValue:(double)arg2;
- (long long)frameSampleMode;
- (void)setFrameSampleMode:(long long)arg1;
- (CDStruct_1b6d18a9)lastOutTime;
- (void)setLastOutTime:(CDStruct_1b6d18a9)arg1;
- (int)activeSegment;
- (void)setActiveSegment:(int)arg1;
- (CDStruct_1b6d18a9)mediaStartTime;
- (void)setMediaStartTime:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)mediaEndTime;
- (void)setMediaEndTime:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)mediaSampleDuration;
- (CDStruct_1b6d18a9)mediaFrameDuration;
- (CDStruct_1b6d18a9)containerFrameDuration;
- (double)audioInMediaTime;
- (void)setAudioInMediaTime:(double)arg1;
- (double)audioOutMediaTime;
- (void)setAudioOutMediaTime:(double)arg1;
- (void)setAnchoredSecondMediaTimes;
- (double *)anchoredSecondMediaTimes;
- (void)setAnchoredFirstMediaTime;
- (double)anchoredFirstMediaTime;
- (void)setupDefaultKeyframes:(CDStruct_e83c9415)arg1;
- (void)setupDefaultKeyframesFromSource;
- (BOOL)setRetimeCurveNewMediaStart:(CDStruct_1b6d18a9)arg1 newMediaEnd:(CDStruct_1b6d18a9)arg2;
- (int)_computeMediaFrameOffsetFromComponentTime:(CDStruct_1b6d18a9)arg1;
- (void)setSweetSpotStartFrameComponentTime:(CDStruct_1b6d18a9)arg1;
- (void)setSweetSpotEndFrameComponentTime:(CDStruct_1b6d18a9)arg1 computeOffset:(BOOL)arg2;
- (void)setSweetSpotFrameComponentTime:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)sweetStartFrameComponentTime;
- (CDStruct_1b6d18a9)sweetEndFrameComponentTime;
- (int)sweetSpotStartFrameOffset;
- (int)sweetSpotEndFrameOffset;
- (int)sweetSpotFrameOffset;
- (double)speedBeforeSweetSpot;
- (double)speedAfterSweetSpot;
- (double)sweetFrameDuration;
- (double)constantTimeMap:(CDStruct_1b6d18a9)arg1;
- (double)constantTimeMapInverseSeconds:(double)arg1;
- (double)constantTimeMapInverse:(CDStruct_1b6d18a9)arg1;
- (void)computeSmoothBezierTangents;
- (void)setRetimingExtrapolation;
- (void)setRetimingInterpolation;
- (BOOL)smoothInterpolation;
- (void)setSmoothInterpolation:(BOOL)arg1;
- (BOOL)constantRetiming;
- (void)setConstantRetiming:(BOOL)arg1;
- (BOOL)isRetimeEffect;
- (BOOL)isAtDefaultSettings;
- (BOOL)isNoOp;
- (BOOL)effectVariesOverTime;
- (BOOL)effectIntroducesAlpha;
- (double)constantRetimingRate;
- (BOOL)retimeInForwardState:(CDStruct_e83c9415)arg1;
- (double)segmentRetimingRateAroundComponentTime:(CDStruct_1b6d18a9)arg1;
- (double)segmentRetimingRateAtSegmentIndex:(int)arg1;
- (CDStruct_e83c9415)segmentTimeRangeAtIndex:(int)arg1;
- (int)segmentIndexForComponentTime:(CDStruct_1b6d18a9)arg1;
- (double)mediaTimeAlongPrevSegment:(CDStruct_1b6d18a9)arg1 keyIndex:(unsigned int)arg2;
- (int)segmentCount;
- (BOOL)mapMediaTimeInSeconds:(double)arg1 toComponentKeyTime:(CDStruct_1b6d18a9 *)arg2 inComponentTimeRange:(CDStruct_e83c9415)arg3;
- (BOOL)mapMediaTimeInSeconds:(double)arg1 toComponentTime:(CDStruct_1b6d18a9 *)arg2 inComponentTimeRange:(CDStruct_e83c9415)arg3;
- (BOOL)mapMediaTime:(CDStruct_1b6d18a9)arg1 toComponentTime:(CDStruct_1b6d18a9 *)arg2 inComponentTimeRange:(CDStruct_e83c9415)arg3;
- (double)untimeToSeconds:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)curveLookup:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)untime:(CDStruct_1b6d18a9)arg1;
- (CDStruct_e83c9415)untimeRange:(CDStruct_e83c9415)arg1;
- (CDStruct_1b6d18a9)untime:(CDStruct_1b6d18a9)arg1 withContext:(id)arg2;
- (CDStruct_1b6d18a9)firstKeyTime;
- (CDStruct_1b6d18a9)lastKeyTime;
- (CDStruct_1b6d18a9)firstKeyValueInTime;
- (CDStruct_1b6d18a9)lastKeyValueInTime;
- (void)createChannelsInFolder:(id)arg1;

@end

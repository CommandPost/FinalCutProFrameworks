//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ProChannel/CHChannelBase.h>

@interface CHChannel : CHChannelBase
{
}

+ (BOOL)_isOZChannelClassOK:(struct OZChannelBase *)arg1;
- (struct OZChannel *)ozChannel;
- (unsigned long long)keyframeCount;
- (BOOL)hasKeyframeAtTime:(CDStruct_1b6d18a9)arg1;
- (void)removeAllKeyframes;
- (BOOL)removeKeyframeAtTime:(CDStruct_1b6d18a9)arg1;
- (BOOL)moveKeyframeAtTime:(CDStruct_1b6d18a9)arg1 toTime:(CDStruct_1b6d18a9)arg2;
- (void)retimeKeyframesWithScale:(double)arg1;
- (unsigned int)curveInterpolation;
- (void)setCurveInterpolation:(unsigned int)arg1;
- (void)setCurveExtrapolation:(unsigned int)arg1 direction:(unsigned int)arg2;
- (unsigned int)curveExtrapolation:(unsigned int)arg1;
- (void)setSegmentInterpolation:(void *)arg1 interpolation:(unsigned int)arg2;
- (unsigned int)segmentInterpolation:(void *)arg1;
- (void)setSegmentSpeed:(void *)arg1 speed:(unsigned int)arg2;
- (unsigned int)segmentSpeed:(void *)arg1;
- (void)adjustSegmentSpeed:(void *)arg1 offset:(double)arg2;
- (BOOL)createCurveSegment:(CDStruct_1b6d18a9)arg1 maxTime:(CDStruct_1b6d18a9)arg2 deltaTime:(CDStruct_1b6d18a9)arg3 ease:(BOOL)arg4;
- (double)precisionStep;
- (void)setPrecisionStep:(double)arg1;
- (id)sliderTransformerName;
- (void)setSliderTransformerName:(id)arg1;
- (void)beginPlayback:(CDStruct_1b6d18a9)arg1 scope:(unsigned int)arg2 mode:(unsigned int)arg3 resolution:(CDStruct_1b6d18a9)arg4;
- (void)endPlayback:(CDStruct_1b6d18a9)arg1;
- (void)beginRecording:(CDStruct_1b6d18a9)arg1;
- (void)endRecording:(CDStruct_1b6d18a9)arg1;
- (BOOL)isPlayingWithScope:(unsigned int *)arg1 mode:(unsigned int *)arg2 resolution:(CDStruct_1b6d18a9 *)arg3;
- (BOOL)isRecording;
- (void)registerRecordingCallback:(CDUnknownFunctionPointerType)arg1 context:(void *)arg2;
- (void)unregisterRecordingCallback:(CDUnknownFunctionPointerType)arg1 context:(void *)arg2;
- (void *)keyframeAtTime:(CDStruct_1b6d18a9)arg1;
- (BOOL)getKeyframe:(void *)arg1 time:(CDStruct_1b6d18a9 *)arg2;
- (void *)firstKeyframe;
- (void *)lastKeyframe;
- (void *)nextKeyframe:(void *)arg1;
- (void *)previousKeyframe:(void *)arg1;
- (void *)nextKeyframeFromTime:(CDStruct_1b6d18a9)arg1;
- (void *)previousKeyframeFromTime:(CDStruct_1b6d18a9)arg1;
- (BOOL)removeKeyframe:(void *)arg1;
- (BOOL)moveKeyframe:(void *)arg1 toTime:(CDStruct_1b6d18a9)arg2 constrainToOtherKeys:(BOOL)arg3;
- (BOOL)appendKeyframe:(CDStruct_1b6d18a9)arg1 value:(double)arg2;
- (BOOL)appendKeyframes:(unsigned int)arg1 times:(CDStruct_1b6d18a9 *)arg2 values:(double *)arg3;
- (BOOL)setKeyframeInputTangents:(void *)arg1 inTanTime:(double)arg2 inTanValue:(double)arg3;
- (BOOL)setKeyframeOutputTangents:(void *)arg1 outTanTime:(double)arg2 outTanValue:(double)arg3;
- (BOOL)getKeyframeInputTangents:(void *)arg1 inTanTime:(double *)arg2 inTanValue:(double *)arg3;
- (BOOL)getKeyframeOutputTangents:(void *)arg1 outTanTime:(double *)arg2 outTanValue:(double *)arg3;
- (void)setFadeInOffset:(CDStruct_1b6d18a9)arg1;
- (void)setFadeOutOffset:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)fadeInOffset;
- (CDStruct_1b6d18a9)fadeOutOffset;
- (void)setFadeInCurve:(unsigned int)arg1;
- (void)setFadeOutCurve:(unsigned int)arg1;
- (unsigned int)fadeInCurve;
- (unsigned int)fadeOutCurve;
- (double)fadeRatio:(CDStruct_1b6d18a9)arg1;
- (BOOL)hasFadeHandles;
- (double)valueAsDoubleAtTime:(CDStruct_1b6d18a9)arg1;
- (double)curveValueAsDoubleAtTime:(CDStruct_1b6d18a9)arg1;
- (double)defaultCurveValueAsDouble;
- (double)minCurveValueAsDouble;
- (double)maxCurveValueAsDouble;
- (BOOL)getFirstKeyframeTime:(CDStruct_1b6d18a9 *)arg1 curveValueAsDouble:(double *)arg2;
- (BOOL)getLastKeyframeTime:(CDStruct_1b6d18a9 *)arg1 curveValueAsDouble:(double *)arg2;
- (BOOL)getKeyframeAfterTime:(CDStruct_1b6d18a9)arg1 time:(CDStruct_1b6d18a9 *)arg2 curveValueAsDouble:(double *)arg3;
- (BOOL)getKeyframeBeforeTime:(CDStruct_1b6d18a9)arg1 time:(CDStruct_1b6d18a9 *)arg2 curveValueAsDouble:(double *)arg3;
- (CDStruct_1b6d18a9)localToGlobalTime:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)globalToLocalTime:(CDStruct_1b6d18a9)arg1;
- (BOOL)getTime:(CDStruct_1b6d18a9 *)arg1 forCurveDoubleValue:(double)arg2 inRange:(CDStruct_5c5366e1)arg3 options:(unsigned int)arg4;
- (id)suffix;
- (void)setSuffix:(id)arg1;
- (double)scale;
- (void)setScale:(double)arg1;

@end


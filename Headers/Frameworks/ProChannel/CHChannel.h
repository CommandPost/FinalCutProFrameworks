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
- (void)setScale:(double)arg1;
- (double)scale;
- (void)setSuffix:(id)arg1;
- (id)suffix;
- (BOOL)getTime:(CDStruct_198678f7 *)arg1 forCurveDoubleValue:(double)arg2 inRange:(CDStruct_3c1748cc)arg3 options:(unsigned int)arg4;
- (CDStruct_198678f7)globalToLocalTime:(CDStruct_198678f7)arg1;
- (CDStruct_198678f7)localToGlobalTime:(CDStruct_198678f7)arg1;
- (BOOL)getKeyframeBeforeTime:(CDStruct_198678f7)arg1 time:(CDStruct_198678f7 *)arg2 curveValueAsDouble:(double *)arg3;
- (BOOL)getKeyframeAfterTime:(CDStruct_198678f7)arg1 time:(CDStruct_198678f7 *)arg2 curveValueAsDouble:(double *)arg3;
- (BOOL)getLastKeyframeTime:(CDStruct_198678f7 *)arg1 curveValueAsDouble:(double *)arg2;
- (BOOL)getFirstKeyframeTime:(CDStruct_198678f7 *)arg1 curveValueAsDouble:(double *)arg2;
- (double)maxCurveValueAsDouble;
- (double)minCurveValueAsDouble;
- (double)defaultCurveValueAsDouble;
- (void)setInitialCurveValueWithDouble:(double)arg1;
- (double)initialCurveValueAsDouble;
- (void)setCurveValueWithDouble:(double)arg1 atTime:(CDStruct_198678f7)arg2 options:(unsigned int)arg3;
- (double)curveValueAsDoubleAtTime:(CDStruct_198678f7)arg1;
- (double)valueAsDoubleAtTime:(CDStruct_198678f7)arg1;
- (BOOL)hasFadeHandles;
- (double)fadeRatio:(CDStruct_198678f7)arg1;
- (unsigned int)fadeOutCurve;
- (unsigned int)fadeInCurve;
- (void)setFadeOutCurve:(unsigned int)arg1;
- (void)setFadeInCurve:(unsigned int)arg1;
- (CDStruct_198678f7)fadeOutOffset;
- (CDStruct_198678f7)fadeInOffset;
- (void)setFadeOutOffset:(CDStruct_198678f7)arg1;
- (void)setFadeInOffset:(CDStruct_198678f7)arg1;
- (void)getKeyframeOutputTangents:(void *)arg1 outTanTime:(double *)arg2 outTanValue:(double *)arg3;
- (void)getKeyframeInputTangents:(void *)arg1 inTanTime:(double *)arg2 inTanValue:(double *)arg3;
- (void)setKeyframeOutputTangents:(void *)arg1 outTanTime:(double)arg2 outTanValue:(double)arg3;
- (void)setKeyframeInputTangents:(void *)arg1 inTanTime:(double)arg2 inTanValue:(double)arg3;
- (void)appendKeyframes:(unsigned int)arg1 times:(CDStruct_198678f7 *)arg2 values:(double *)arg3;
- (BOOL)moveKeyframe:(void *)arg1 toTime:(CDStruct_198678f7)arg2 constrainToOtherKeys:(BOOL)arg3;
- (BOOL)removeKeyframe:(void *)arg1;
- (void *)previousKeyframeFromTime:(CDStruct_198678f7)arg1;
- (void *)nextKeyframeFromTime:(CDStruct_198678f7)arg1;
- (void *)previousKeyframe:(void *)arg1;
- (void *)nextKeyframe:(void *)arg1;
- (void *)lastKeyframe;
- (void *)firstKeyframe;
- (BOOL)getKeyframe:(void *)arg1 time:(CDStruct_198678f7 *)arg2 value:(double *)arg3;
- (BOOL)getKeyframe:(void *)arg1 time:(CDStruct_198678f7 *)arg2;
- (void *)keyframeAtTime:(CDStruct_198678f7)arg1;
- (void)unregisterRecordingCallback:(CDUnknownFunctionPointerType)arg1 context:(void *)arg2;
- (void)registerRecordingCallback:(CDUnknownFunctionPointerType)arg1 context:(void *)arg2;
- (BOOL)isRecording;
- (BOOL)isPlayingWithScope:(unsigned int *)arg1 mode:(unsigned int *)arg2 resolution:(CDStruct_198678f7 *)arg3;
- (void)endRecording:(CDStruct_198678f7)arg1;
- (void)beginRecording:(CDStruct_198678f7)arg1;
- (void)endPlayback:(CDStruct_198678f7)arg1;
- (void)beginPlayback:(CDStruct_198678f7)arg1 scope:(unsigned int)arg2 mode:(unsigned int)arg3 resolution:(CDStruct_198678f7)arg4;
- (void)setSliderTransformerName:(id)arg1;
- (id)sliderTransformerName;
- (BOOL)createCurveSegment:(CDStruct_198678f7)arg1 maxTime:(CDStruct_198678f7)arg2 deltaTime:(CDStruct_198678f7)arg3 ease:(BOOL)arg4;
- (void)adjustSegmentSpeed:(void *)arg1 offset:(double)arg2;
- (unsigned int)segmentSpeed:(void *)arg1;
- (void)setSegmentSpeed:(void *)arg1 speed:(unsigned int)arg2;
- (unsigned int)segmentInterpolation:(void *)arg1;
- (void)setSegmentInterpolation:(void *)arg1 interpolation:(unsigned int)arg2;
- (unsigned int)curveExtrapolation:(unsigned int)arg1;
- (void)setCurveExtrapolation:(unsigned int)arg1 direction:(unsigned int)arg2;
- (void)setCurveInterpolation:(unsigned int)arg1;
- (unsigned int)curveInterpolation;
- (void)retimeKeyframesWithScale:(double)arg1;
- (BOOL)moveKeyframeAtTime:(CDStruct_198678f7)arg1 toTime:(CDStruct_198678f7)arg2;
- (BOOL)removeKeyframeAtTime:(CDStruct_198678f7)arg1;
- (void)removeAllKeyframes;
- (BOOL)hasKeyframeAtTime:(CDStruct_198678f7)arg1;
- (unsigned long long)keyframeCount;
- (struct OZChannel *)ozChannel;

@end


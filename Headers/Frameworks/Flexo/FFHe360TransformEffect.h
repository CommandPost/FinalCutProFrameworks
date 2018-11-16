//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFHeliumEffect.h>

@class CHChannelAngle, CHChannelBool, CHChannelDouble, CHChannelEnum;

__attribute__((visibility("hidden")))
@interface FFHe360TransformEffect : FFHeliumEffect
{
    CHChannelEnum *_chCoordinates;
    CHChannelAngle *_chLatitude;
    CHChannelAngle *_chLongitude;
    CHChannelDouble *_chDistance;
    CHChannelDouble *_chXPosition;
    CHChannelDouble *_chYPosition;
    CHChannelDouble *_chZPosition;
    CHChannelBool *_chAutoOrient;
    CHChannelAngle *_chXOrientation;
    CHChannelAngle *_chYOrientation;
    CHChannelAngle *_chZOrientation;
    CHChannelDouble *_chConvergence;
    CHChannelDouble *_chInteraxial;
}

+ (void)registerEffects;
@property(readonly) CHChannelDouble *interaxialChannel; // @synthesize interaxialChannel=_chInteraxial;
@property(readonly) CHChannelDouble *convergenceChannel; // @synthesize convergenceChannel=_chConvergence;
@property(readonly) CHChannelAngle *zOrientationChannel; // @synthesize zOrientationChannel=_chZOrientation;
@property(readonly) CHChannelAngle *yOrientationChannel; // @synthesize yOrientationChannel=_chYOrientation;
@property(readonly) CHChannelAngle *xOrientationChannel; // @synthesize xOrientationChannel=_chXOrientation;
@property(readonly) CHChannelBool *autoOrientChannel; // @synthesize autoOrientChannel=_chAutoOrient;
@property(readonly) CHChannelDouble *zPositionChannel; // @synthesize zPositionChannel=_chZPosition;
@property(readonly) CHChannelDouble *yPositionChannel; // @synthesize yPositionChannel=_chYPosition;
@property(readonly) CHChannelDouble *xPositionChannel; // @synthesize xPositionChannel=_chXPosition;
@property(readonly) CHChannelDouble *distanceChannel; // @synthesize distanceChannel=_chDistance;
@property(readonly) CHChannelAngle *longitudeChannel; // @synthesize longitudeChannel=_chLongitude;
@property(readonly) CHChannelAngle *latitudeChannel; // @synthesize latitudeChannel=_chLatitude;
@property(readonly) CHChannelEnum *coordinatesChannel; // @synthesize coordinatesChannel=_chCoordinates;
- (id)onScreenControlsForChannelFolder:(id)arg1 effectStack:(id)arg2;
- (id)primaryAnimationChannel;
- (id)new360TransformedImage:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2 eye:(double)arg3 outputWidth:(double)arg4 outputHeight:(double)arg5 downstreamPT:(id)arg6;
- (id)newImageAtTime:(CDStruct_1b6d18a9)arg1 duration:(CDStruct_1b6d18a9)arg2 withInputStream:(id)arg3 context:(id)arg4 schedInfo:(id)arg5 downstreamPT:(id)arg6 channelOffset:(CDStruct_1b6d18a9)arg7 roi:(const struct CGRect *)arg8 graphBuildInfo:(id)arg9;
- (void)effectActivated:(int)arg1;
- (void)channelParameterChanged:(id)arg1;
- (void)setParameterValuesForCoordinates:(int)arg1;
- (void)showHideChannel:(id)arg1 show:(BOOL)arg2;
- (id)inputKeys;
- (void)setParameterValuesForNode:(struct HGNode *)arg1 atTime:(CDStruct_1b6d18a9)arg2 withInputStream:(id)arg3 context:(id)arg4 pixelTransform:(id)arg5 inputData:(id)arg6 inputBounds:(struct CGRect)arg7;
- (PCMatrix44Tmpl_9c426645)getPlaneTranslationMatrixAtTime:(CDStruct_1b6d18a9)arg1;
- (PCMatrix44Tmpl_9c426645)getPlaneScaleMatrixAtTime:(CDStruct_1b6d18a9)arg1;
- (PCMatrix44Tmpl_9c426645)getPlaneOrientationMatrixAtTime:(CDStruct_1b6d18a9)arg1;
- (PCMatrix44Tmpl_9c426645)getPlaneLocalOrientationMatrix:(CDStruct_1b6d18a9)arg1;
- (BOOL)isAtDefaultSettings;
- (BOOL)writeDefaultChannels;
- (BOOL)isNoOp;
- (struct HGNode *)newNodeForContext:(id)arg1;
- (void)setup360TransformChannel:(id *)arg1 folder:(id)arg2 name:(id)arg3 channelID:(unsigned int)arg4 defaultCurve:(double)arg5 minCurve:(double)arg6 maxCurve:(double)arg7 minUI:(double)arg8 maxUI:(double)arg9 coarseDelta:(double)arg10 fineDelta:(double)arg11 hidden:(BOOL)arg12;
- (void)createChannelsInFolder:(id)arg1;
- (void)reset;
- (void)dealloc;
- (id)initWithEffectID:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Flexo/FFHeliumEffect.h>

@class CHChannelAngle, CHChannelDouble, CHChannelEnum;

__attribute__((visibility("hidden")))
@interface FFHeOrientationEffect : FFHeliumEffect
{
    CHChannelAngle *_chLatitude;
    CHChannelAngle *_chLongitude;
    CHChannelAngle *_chRoll;
    CHChannelDouble *_chFieldOfView;
    CHChannelDouble *_chFieldOfViewTinyPlanet;
    CHChannelEnum *_chMapping;
}

+ (double)convertToFOVYFromFOVX:(double)arg1 width:(double)arg2 height:(double)arg3;
+ (void)registerEffects;
@property(readonly) CHChannelEnum *mappingChannel; // @synthesize mappingChannel=_chMapping;
@property(readonly) CHChannelDouble *fieldOfViewTinyPlanetChannel; // @synthesize fieldOfViewTinyPlanetChannel=_chFieldOfViewTinyPlanet;
@property(readonly) CHChannelDouble *fieldOfViewChannel; // @synthesize fieldOfViewChannel=_chFieldOfView;
@property(readonly) CHChannelAngle *rollChannel; // @synthesize rollChannel=_chRoll;
@property(readonly) CHChannelAngle *longitudeChannel; // @synthesize longitudeChannel=_chLongitude;
@property(readonly) CHChannelAngle *latitudeChannel; // @synthesize latitudeChannel=_chLatitude;
- (BOOL)supportsReentrancy;
- (id)onScreenControlsForChannelFolder:(id)arg1 effectStack:(id)arg2;
- (CDStruct_bdcb2b0d)md5;
- (id)newChannelFolderWithParent:(id)arg1 name:(id)arg2;
- (id)primaryAnimationChannel;
- (id)inputKeys;
- (id)newImageAtTime:(CDStruct_1b6d18a9)arg1 duration:(CDStruct_1b6d18a9)arg2 withInputStream:(id)arg3 context:(id)arg4 schedInfo:(id)arg5 downstreamPT:(id)arg6 channelOffset:(CDStruct_1b6d18a9)arg7 roi:(const struct CGRect *)arg8 graphBuildInfo:(id)arg9;
- (void)setParameterValuesForNode:(struct HGNode *)arg1 atTime:(CDStruct_1b6d18a9)arg2 withInputStream:(id)arg3 context:(id)arg4 pixelTransform:(id)arg5 inputData:(id)arg6 inputBounds:(struct CGRect)arg7;
- (BOOL)isAtDefaultSettings;
- (BOOL)writeDefaultChannels;
- (BOOL)isNoOp;
- (struct HGNode *)newNodeForContext:(id)arg1;
- (unsigned int)intrinsicCacheFlag;
- (void)channelParameterChanged:(id)arg1;
- (void)showHideChannel:(id)arg1 show:(BOOL)arg2;
- (void)createChannelsInFolder:(id)arg1;
- (void)reset;
- (void)dealloc;
- (id)initWithEffectID:(id)arg1;

@end


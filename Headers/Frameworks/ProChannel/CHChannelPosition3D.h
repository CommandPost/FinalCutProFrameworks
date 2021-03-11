//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProChannel/CHChannelPosition.h>

@interface CHChannelPosition3D : CHChannelPosition
{
}

+ (struct OZChannelBase *)_newOZChannelWithName:(id)arg1 channelID:(unsigned int)arg2 flags:(unsigned int)arg3;
+ (BOOL)_isOZChannelClassOK:(struct OZChannelBase *)arg1;
- (id)zChannel;
- (void)setMaxCurveX:(double)arg1 curveY:(double)arg2 curveZ:(double)arg3;
- (void)getMaxCurveX:(double *)arg1 curveY:(double *)arg2 curveZ:(double *)arg3;
- (void)setMinCurveX:(double)arg1 curveY:(double)arg2 curveZ:(double)arg3;
- (void)getMinCurveX:(double *)arg1 curveY:(double *)arg2 curveZ:(double *)arg3;
- (void)setDefaultCurveX:(double)arg1 curveY:(double)arg2 curveZ:(double)arg3;
- (void)getDefaultCurveX:(double *)arg1 curveY:(double *)arg2 curveZ:(double *)arg3;
- (void)offsetPositionAtTime:(CDStruct_198678f7)arg1 deltaX:(double)arg2 deltaY:(double)arg3 deltaZ:(double)arg4 options:(unsigned int)arg5;
- (void)setDoubleValuesAtTime:(CDStruct_198678f7)arg1 curveX:(double)arg2 curveY:(double)arg3 curveZ:(double)arg4 options:(unsigned int)arg5;
- (void)getPositionAtTime:(CDStruct_198678f7)arg1 curveX:(double *)arg2 curveY:(double *)arg3 curveZ:(double *)arg4;
- (void)getPositionAtTime:(CDStruct_198678f7)arg1 x:(double *)arg2 y:(double *)arg3 z:(double *)arg4;
- (struct OZChannelPosition3D *)ozChannel;

@end


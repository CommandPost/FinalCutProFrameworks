//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProChannel/CHCompoundChannel.h>

@interface CHChannel2D : CHCompoundChannel
{
}

+ (struct OZChannelBase *)_newOZChannelWithName:(id)arg1 channelID:(unsigned int)arg2 flags:(unsigned int)arg3;
+ (BOOL)_isOZChannelClassOK:(struct OZChannelBase *)arg1;
- (id)yChannel;
- (id)xChannel;
- (void)setMaxCurveX:(double)arg1 curveY:(double)arg2;
- (void)getMaxCurveX:(double *)arg1 curveY:(double *)arg2;
- (void)setMinCurveX:(double)arg1 curveY:(double)arg2;
- (void)getMinCurveX:(double *)arg1 curveY:(double *)arg2;
- (void)setDefaultCurveX:(double)arg1 curveY:(double)arg2;
- (void)getDefaultCurveX:(double *)arg1 curveY:(double *)arg2;
- (void)offsetDoubleValuesAtTime:(CDStruct_198678f7)arg1 deltaX:(double)arg2 deltaY:(double)arg3 options:(unsigned int)arg4;
- (void)setDoubleValuesAtTime:(CDStruct_198678f7)arg1 curveX:(double)arg2 curveY:(double)arg3 options:(unsigned int)arg4;
- (void)getDoubleValuesAtTime:(CDStruct_198678f7)arg1 curveX:(double *)arg2 curveY:(double *)arg3;
- (void)getDoubleValuesAtTime:(CDStruct_198678f7)arg1 x:(double *)arg2 y:(double *)arg3;
- (struct OZChannel2D *)ozChannel;

@end


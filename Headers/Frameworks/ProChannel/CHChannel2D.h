//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ProChannel/CHCompoundChannel.h>

@interface CHChannel2D : CHCompoundChannel
{
}

+ (BOOL)_isOZChannelClassOK:(struct OZChannelBase *)arg1;
+ (struct OZChannelBase *)_newOZChannelWithName:(id)arg1 channelID:(unsigned int)arg2 flags:(unsigned int)arg3;
- (struct OZChannel2D *)ozChannel;
- (void)getDoubleValuesAtTime:(CDStruct_1b6d18a9)arg1 x:(double *)arg2 y:(double *)arg3;
- (void)getDoubleValuesAtTime:(CDStruct_1b6d18a9)arg1 curveX:(double *)arg2 curveY:(double *)arg3;
- (void)setDoubleValuesAtTime:(CDStruct_1b6d18a9)arg1 curveX:(double)arg2 curveY:(double)arg3 options:(unsigned int)arg4;
- (void)offsetDoubleValuesAtTime:(CDStruct_1b6d18a9)arg1 deltaX:(double)arg2 deltaY:(double)arg3 options:(unsigned int)arg4;
- (void)getDefaultCurveX:(double *)arg1 curveY:(double *)arg2;
- (void)setDefaultCurveX:(double)arg1 curveY:(double)arg2;
- (void)getMinCurveX:(double *)arg1 curveY:(double *)arg2;
- (void)setMinCurveX:(double)arg1 curveY:(double)arg2;
- (void)getMaxCurveX:(double *)arg1 curveY:(double *)arg2;
- (void)setMaxCurveX:(double)arg1 curveY:(double)arg2;
- (id)xChannel;
- (id)yChannel;

@end


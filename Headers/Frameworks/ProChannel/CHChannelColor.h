//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProChannel/CHChannelColorNoAlpha.h>

@interface CHChannelColor : CHChannelColorNoAlpha
{
}

+ (struct OZChannelBase *)_newOZChannelWithName:(id)arg1 channelID:(unsigned int)arg2 flags:(unsigned int)arg3;
+ (BOOL)_isOZChannelClassOK:(struct OZChannelBase *)arg1;
- (id)alphaChannel;
- (void)setAlphaAtTime:(CDStruct_198678f7)arg1 curveAlpha:(double)arg2 options:(unsigned int)arg3;
- (void)setColorAtTime:(CDStruct_198678f7)arg1 curveRed:(double)arg2 curveGreen:(double)arg3 curveBlue:(double)arg4 curveAlpha:(double)arg5 options:(unsigned int)arg6;
- (double)alphaCurveValueAtTime:(CDStruct_198678f7)arg1;
- (void)getColorAtTime:(CDStruct_198678f7)arg1 curveRed:(double *)arg2 curveGreen:(double *)arg3 curveBlue:(double *)arg4 curveAlpha:(double *)arg5;
- (double)alphaValueAtTime:(CDStruct_198678f7)arg1;
- (void)getColorAtTime:(CDStruct_198678f7)arg1 red:(double *)arg2 green:(double *)arg3 blue:(double *)arg4 alpha:(double *)arg5 inColorSpace:(struct CGColorSpace *)arg6;
- (void)setDefaultCurveRed:(double)arg1 curveGreen:(double)arg2 curveBlue:(double)arg3 curveAlpha:(double)arg4;
- (struct OZChannelColor *)ozChannel;

@end


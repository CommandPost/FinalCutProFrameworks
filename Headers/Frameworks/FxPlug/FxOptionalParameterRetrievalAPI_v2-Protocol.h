//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FxPlug/NSObject-Protocol.h>

@protocol FxOptionalParameterRetrievalAPI_v2 <NSObject>
- (BOOL)getGradientSamples:(void *)arg1 numSamples:(unsigned long long)arg2 depth:(unsigned long long)arg3 fromParm:(unsigned int)arg4 atFxTime:(CDUnion_2516e51e)arg5;
- (BOOL)getHistogramBlackIn:(double *)arg1 BlackOut:(double *)arg2 WhiteIn:(double *)arg3 WhiteOut:(double *)arg4 Gamma:(double *)arg5 forChannel:(unsigned long long)arg6 fromParm:(unsigned int)arg7 atFxTime:(CDUnion_2516e51e)arg8;
@end


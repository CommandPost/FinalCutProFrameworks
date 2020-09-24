//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol FxParameterRetrievalAPI_v6 <NSObject>
- (BOOL)getGradientSamples:(void *)arg1 numSamples:(unsigned long long)arg2 depth:(unsigned long long)arg3 fromParameter:(unsigned int)arg4 atTime:(CDStruct_1b6d18a9)arg5;
- (BOOL)getHistogramBlackIn:(double *)arg1 BlackOut:(double *)arg2 WhiteIn:(double *)arg3 WhiteOut:(double *)arg4 Gamma:(double *)arg5 forChannel:(unsigned long long)arg6 fromParameter:(unsigned int)arg7 atTime:(CDStruct_1b6d18a9)arg8;
- (BOOL)getFontName:(id *)arg1 fromParameter:(unsigned int)arg2 atTime:(CDStruct_1b6d18a9)arg3;
- (BOOL)getPathID:(void **)arg1 fromParameter:(unsigned int)arg2 atTime:(CDStruct_1b6d18a9)arg3;
- (BOOL)getCustomParameterValue:(id *)arg1 fromParameter:(unsigned int)arg2 atTime:(CDStruct_1b6d18a9)arg3;
- (BOOL)getStringParameterValue:(id *)arg1 fromParameter:(unsigned int)arg2;
- (BOOL)getParameterFlags:(unsigned int *)arg1 fromParameter:(unsigned int)arg2;
- (BOOL)getXValue:(double *)arg1 YValue:(double *)arg2 fromParameter:(unsigned int)arg3 atTime:(CDStruct_1b6d18a9)arg4;
- (BOOL)getRedValue:(double *)arg1 greenValue:(double *)arg2 blueValue:(double *)arg3 alphaValue:(double *)arg4 fromParameter:(unsigned int)arg5 atTime:(CDStruct_1b6d18a9)arg6;
- (BOOL)getRedValue:(double *)arg1 greenValue:(double *)arg2 blueValue:(double *)arg3 fromParameter:(unsigned int)arg4 atTime:(CDStruct_1b6d18a9)arg5;
- (BOOL)getBoolValue:(char *)arg1 fromParameter:(unsigned int)arg2 atTime:(CDStruct_1b6d18a9)arg3;
- (BOOL)getIntValue:(int *)arg1 fromParameter:(unsigned int)arg2 atTime:(CDStruct_1b6d18a9)arg3;
- (BOOL)getFloatValue:(double *)arg1 fromParameter:(unsigned int)arg2 atTime:(CDStruct_1b6d18a9)arg3;
@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Flexo/FFEffect.h>

@interface FFHeliumEffect : FFEffect
{
}

- (BOOL)effectVariesOverTime;
- (BOOL)useSourcePixelSpace;
- (id)newImageAtTime:(CDStruct_1b6d18a9)arg1 duration:(CDStruct_1b6d18a9)arg2 withInputStream:(id)arg3 context:(id)arg4 schedInfo:(id)arg5 downstreamPT:(id)arg6 channelOffset:(CDStruct_1b6d18a9)arg7 roi:(const struct CGRect *)arg8 graphBuildInfo:(id)arg9;
- (struct CGRect)getROIForOutput:(const struct CGRect *)arg1 atTime:(CDStruct_1b6d18a9)arg2 input:(id)arg3 pt:(id)arg4 downstreamPT:(id)arg5;
- (struct HGNode *)_newInterlaceProgressiveConversionNode:(struct HGNode *)arg1 inputImage:(id)arg2 inputStream:(id)arg3 index:(unsigned long long)arg4 context:(id)arg5 requestedPT:(id)arg6 format:(id)arg7 filterQuality:(int)arg8 newBoundsForInput:(struct CGRect *)arg9 didConvert:(char *)arg10;
- (struct HGTransform *)newHGTransformFromPCMatrix44Double:(id)arg1;
- (void)convertHGTransformBackToPixelTransformSpace:(struct HGTransform *)arg1 pixelTransform:(id)arg2;
- (struct HGTransform *)createBaseTransformFromInversePixelTransform:(id)arg1;
- (struct CGRect)updatePixelSpaceBounds:(struct CGRect)arg1 atTime:(CDStruct_1b6d18a9)arg2 pixelTransform:(id)arg3;
- (void)setParameterValuesForNode:(struct HGNode *)arg1 atTime:(CDStruct_1b6d18a9)arg2 withInputStream:(id)arg3 context:(id)arg4 pixelTransform:(id)arg5 inputData:(id)arg6 inputBounds:(struct CGRect)arg7;
- (void)setParameterValuesForNode:(CDStruct_fcaf9308)arg1 atTime:(CDStruct_1b6d18a9)arg2 withInputStream:(id)arg3 context:(id)arg4 pixelTransform:(id)arg5;
- (void)setParameterValuesForNode:(CDStruct_fcaf9308)arg1 atTime:(CDStruct_1b6d18a9)arg2 withInputStream:(id)arg3 context:(id)arg4 pixelTransform:(id)arg5 inputData:(id)arg6;
- (void)analyzeInputStream:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2 context:(id)arg3 pixelTransform:(id)arg4 downstreamPT:(id)arg5;
- (BOOL)hasVideo;
- (struct HGNode *)newNodeForContext:(id)arg1;
- (void)dealloc;
- (id)initWithEffectID:(id)arg1;

@end


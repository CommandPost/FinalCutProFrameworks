//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Flexo/FFHeliumEffect.h>

@class NSObject;
@protocol FFHeBurnInImageGeneration;

__attribute__((visibility("hidden")))
@interface FFHeBurnInEffect : FFHeliumEffect
{
    NSObject<FFHeBurnInImageGeneration> *_burnInGenerator;
}

+ (void)registerEffects;
- (BOOL)supportsReentrancy;
- (BOOL)effectVariesOverTime;
- (CDStruct_e83c9415)effectSubSegmentForTime:(CDStruct_1b6d18a9)arg1 channelOffset:(CDStruct_1b6d18a9)arg2 sampleDur:(CDStruct_1b6d18a9)arg3;
- (BOOL)shouldCacheSimplifesResults;
- (id)simplifiesToPassThruAtTime:(CDStruct_1b6d18a9)arg1 forInputSource:(id)arg2 sampleDur:(CDStruct_1b6d18a9)arg3 context:(id)arg4 channelOffset:(CDStruct_1b6d18a9)arg5;
- (void)setParameterValuesForNode:(struct HGNode *)arg1 atTime:(CDStruct_1b6d18a9)arg2 withInputStream:(id)arg3 context:(id)arg4 pixelTransform:(id)arg5 inputData:(id)arg6 inputBounds:(struct CGRect)arg7;
- (id)processingFormat:(int)arg1;
- (id)newEffectSpecificTokensAtTime:(CDStruct_1b6d18a9)arg1 duration:(CDStruct_1b6d18a9)arg2 withInputStream:(id)arg3 context:(id)arg4 schedInfo:(id)arg5 downstreamPT:(id)arg6;
- (struct CGRect)_calcSquareBounds:(id)arg1 context:(id)arg2;
- (struct HGNode *)newNodeForContext:(id)arg1;
- (void)setBurnInGenerator:(id)arg1;
- (void)dealloc;

@end


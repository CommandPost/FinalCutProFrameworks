//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Flexo/FFHeliumEffect.h>

__attribute__((visibility("hidden")))
@interface FFSimpleMaskEffect : FFHeliumEffect
{
}

+ (void)registerEffects;
- (BOOL)supportsReentrancy;
- (id)augmentChannelChangeDescriptionForNotification:(id)arg1;
- (void)setParameterValuesForNode:(struct HGNode *)arg1 atTime:(CDStruct_1b6d18a9)arg2 withInputStream:(id)arg3 context:(id)arg4 pixelTransform:(id)arg5 inputData:(id)arg6 inputBounds:(struct CGRect)arg7;
- (struct HGNode *)newNodeForContext:(id)arg1;
- (id)processingFormat:(int)arg1;
- (BOOL)isAtDefaultSettings;
- (BOOL)isNoOp;
- (id)inputKeys;
- (void)createChannelsInFolder:(id)arg1;
- (id)initWithEffectID:(id)arg1;

@end


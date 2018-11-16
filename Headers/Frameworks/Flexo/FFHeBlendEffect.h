//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFHeliumEffect.h>

@class CHChannelDouble, CHChannelEnum;

__attribute__((visibility("hidden")))
@interface FFHeBlendEffect : FFHeliumEffect
{
    CHChannelEnum *_chBlendMode;
    CHChannelDouble *_chOpacity;
}

+ (void)registerEffects;
- (id)initWithEffectID:(id)arg1;
- (void)dealloc;
- (BOOL)writeDefaultChannels;
- (struct HGNode *)newNodeForContext:(id)arg1;
- (void)setParameterValuesForNode:(struct HGNode *)arg1 atTime:(CDStruct_1b6d18a9)arg2 withInputStream:(id)arg3 context:(id)arg4 pixelTransform:(id)arg5;
- (void)createChannelsInFolder:(id)arg1;
- (id)primaryAnimationChannel;
- (id)inputKeys;
- (double)_getChannelValue:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2 isConstant:(_Bool *)arg3 subSegmentRange:(CDStruct_e83c9415 *)arg4 channelOffset:(CDStruct_1b6d18a9)arg5 sampleDur:(CDStruct_1b6d18a9)arg6;
- (id)simplifiesToPassThruAtTime:(CDStruct_1b6d18a9)arg1 forInputSource:(id)arg2 sampleDur:(CDStruct_1b6d18a9)arg3 context:(id)arg4 channelOffset:(CDStruct_1b6d18a9)arg5;
- (CDStruct_e83c9415)effectSubSegmentForTime:(CDStruct_1b6d18a9)arg1 channelOffset:(CDStruct_1b6d18a9)arg2 sampleDur:(CDStruct_1b6d18a9)arg3;
- (float)costAtTime:(CDStruct_1b6d18a9)arg1 context:(id)arg2;
- (BOOL)useSourcePixelSpace;

@end

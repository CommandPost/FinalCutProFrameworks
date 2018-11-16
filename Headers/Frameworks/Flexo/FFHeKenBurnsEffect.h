//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFHeliumEffect.h>

@class CHChannelDouble;

__attribute__((visibility("hidden")))
@interface FFHeKenBurnsEffect : FFHeliumEffect
{
    CHChannelDouble *_chLeft;
    CHChannelDouble *_chRight;
    CHChannelDouble *_chBottom;
    CHChannelDouble *_chTop;
}

+ (void)registerEffects;
- (id)inputKeys;
- (id)onScreenControlsForChannelFolder:(id)arg1 effectStack:(id)arg2;
- (void)createChannelsInFolder:(id)arg1;
- (void)modifyImageTransform:(id)arg1 andImageSpaceBounds:(struct CGRect *)arg2 atTime:(CDStruct_1b6d18a9)arg3;
- (struct CGRect)updatePixelSpaceBounds:(struct CGRect)arg1 atTime:(CDStruct_1b6d18a9)arg2 pixelTransform:(id)arg3;
- (id)newImageAtTime:(CDStruct_1b6d18a9)arg1 duration:(CDStruct_1b6d18a9)arg2 withInputStream:(id)arg3 context:(id)arg4 downstreamPT:(id)arg5 channelOffset:(CDStruct_1b6d18a9)arg6 roi:(const struct CGRect *)arg7;
- (void)setParameterValuesForNode:(struct HGNode *)arg1 atTime:(CDStruct_1b6d18a9)arg2 withInputStream:(id)arg3 context:(id)arg4 pixelTransform:(id)arg5;
- (id)bottomChannel;
- (id)topChannel;
- (id)rightChannel;
- (id)leftChannel;
- (struct HGNode *)newNodeForContext:(id)arg1;
- (BOOL)isNoOp;
- (id)newChannelFolderWithParent:(id)arg1 name:(id)arg2;
- (void)dealloc;
- (id)initWithEffectID:(id)arg1;

@end


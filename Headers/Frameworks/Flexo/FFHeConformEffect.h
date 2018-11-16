//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFHeliumEffect.h>

@class CHChannelEnum;

__attribute__((visibility("hidden")))
@interface FFHeConformEffect : FFHeliumEffect
{
    CHChannelEnum *_chType;
}

+ (void)registerEffects;
- (id)initWithEffectID:(id)arg1;
- (void)dealloc;
- (unsigned int)attributeCopyingFlags;
- (BOOL)writeDefaultChannels;
- (void)printTransform:(id)arg1 header:(id)arg2;
- (struct HGNode *)newNodeForContext:(id)arg1;
- (void)computeConformScaleX:(double *)arg1 scaleY:(double *)arg2 frameBounds:(struct CGRect *)arg3 squareInputBounds:(struct CGRect *)arg4;
- (void)setParameterValuesForNode:(struct HGNode *)arg1 atTime:(CDStruct_1b6d18a9)arg2 withInputStream:(id)arg3 context:(id)arg4 pixelTransform:(id)arg5;
- (id)newUpdatedDownstreamPT:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2;
- (struct CGRect)getROIForOutput:(struct CGRect *)arg1 atTime:(CDStruct_1b6d18a9)arg2 input:(id)arg3 pt:(id)arg4 downstreamPT:(id)arg5;
- (void)modifyImageTransform:(id)arg1 andImageSpaceBounds:(struct CGRect *)arg2 atTime:(CDStruct_1b6d18a9)arg3;
- (void)createChannelsInFolder:(id)arg1;
- (id)inputKeys;
- (BOOL)isNoOp;
- (CDStruct_60067b7e)md5;
- (BOOL)effectIntroducesAlpha;
- (BOOL)useSourcePixelSpace;

@end

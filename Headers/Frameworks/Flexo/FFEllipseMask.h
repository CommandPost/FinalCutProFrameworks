//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFMaskBase.h>

__attribute__((visibility("hidden")))
@interface FFEllipseMask : FFMaskBase
{
}

- (struct HGNode *)newNodeAtTime:(CDStruct_1b6d18a9)arg1 pixelTransform:(id)arg2 pixelSpaceBounds:(struct CGRect)arg3;
- (void)drawMaskInGLNode:(struct HGNode *)arg1 atTime:(CDStruct_1b6d18a9)arg2 pixelTransform:(id)arg3;
- (id)onscreenControlsForEffectStack:(id)arg1;
- (id)parameterControllerClassName;
- (double)defaultShapeDimension;
- (void)calcTransform:(id)arg1 withScale:(BOOL)arg2 atTime:(CDStruct_1b6d18a9)arg3;
- (void)calcTransform:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2;
- (id)softnessChannel;
- (id)curvatureChannel;
- (id)rotationChannel;
- (id)scaleChannel;
- (id)positionChannel;
- (BOOL)updateChannelsWithFolder:(id)arg1;
- (void)createChannelsInFolder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)addXMLNode:(id)arg1 toElement:(id)arg2 version:(unsigned int)arg3;
- (void)populateAttributes:(id)arg1 fromElement:(id)arg2;
- (void)populateContent:(id)arg1 fromElement:(id)arg2 toEffect:(id)arg3 toObject:(id)arg4;

@end


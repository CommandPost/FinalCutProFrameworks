//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFMaskBase.h>

#import "FFMaskedEffectMask.h"
#import "FFProShapeOSCDelegate.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface FFImprovedEllipseMask : FFMaskBase <FFProShapeOSCDelegate, FFMaskedEffectMask>
{
    void *_shape;
}

+ (id)ellipseMaskWithParentEffect:(id)arg1;
- (id)shapeChannelFolder;
- (id)shapeMask;
- (struct FFShape *)shape;
- (BOOL)projectUpdaterConvertLegacyShapeMask:(id)arg1 effectStack:(id)arg2 error:(id *)arg3;
- (id)xmlUpdaterConvertToLegacyShapeMask;
- (BOOL)xmlUpdaterConvertFromLegacyShapeMask:(CDUnknownBlockType)arg1 effectStack:(id)arg2 error:(id *)arg3;
- (BOOL)_updaterConvertFromLegacyShapeMask:(id)arg1 effectStack:(id)arg2 error:(id *)arg3;
- (struct HGNode *)newNodeAtTime:(CDStruct_1b6d18a9)arg1 pixelTransform:(id)arg2 pixelSpaceBounds:(struct CGRect)arg3 workingSpace:(int)arg4;
- (void)_getTransform:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2 shape:(struct FFShape *)arg3;
- (void)parentEffectWasAddedToEffectStack:(id)arg1;
- (id)onscreenControlsForEffectStack:(id)arg1;
- (id)parameterControllerClassName;
- (id)transformChannel;
- (id)falloffChannel;
- (id)edgeRadiusChannel;
- (id)curvatureChannel;
- (id)radiusChannel;
- (void)createChannelsInFolder:(id)arg1;
- (void)_assignDefaultsUsingParentEffect:(id)arg1;
- (void)_assignShapeDefaultsForSourceUsingEffectStack:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (struct FFShape *)_newShape;
- (void)addXMLNode:(id)arg1 toElement:(id)arg2 version:(unsigned int)arg3;
- (void)populateAttributes:(id)arg1 fromElement:(id)arg2;
- (void)populateContent:(id)arg1 fromElement:(id)arg2 toEffect:(id)arg3 toObject:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


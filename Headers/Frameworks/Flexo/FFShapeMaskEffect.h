//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFEffect.h>

#import "FFProShapeOSCDelegate.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface FFShapeMaskEffect : FFEffect <FFProShapeOSCDelegate>
{
    struct FFShape *_shape;
    CDStruct_1b6d18a9 _offset;
}

- (id).cxx_construct;
- (id)inputKeys;
- (void)setParameterValuesForNode:(struct HGNode *)arg1 atTime:(CDStruct_1b6d18a9)arg2 withInputStream:(id)arg3 context:(id)arg4 pixelTransform:(id)arg5;
- (id)newImageAtTime:(CDStruct_1b6d18a9)arg1 duration:(CDStruct_1b6d18a9)arg2 withInputStream:(id)arg3 context:(id)arg4 downstreamPT:(id)arg5 channelOffset:(CDStruct_1b6d18a9)arg6 roi:(const struct CGRect *)arg7 graphBuildInfo:(id)arg8;
- (struct HGNode *)newNodeWithTransform:(id)arg1 andTime:(CDStruct_1b6d18a9)arg2 andInput:(struct HGNode *)arg3 andBounds:(struct CGRect)arg4 withShape:(struct FFShape *)arg5;
- (void)getTransform:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2;
- (struct FFShape *)getShapeForRenderWithContext:(id)arg1;
- (BOOL)shouldRenderShape:(struct FFShape *)arg1 atTime:(CDStruct_1b6d18a9)arg2;
- (BOOL)isNoOp;
- (id)primaryAnimationChannel;
- (BOOL)supportsReentrancy;
- (BOOL)effectIntroducesAlpha;
- (id)keyframeableChannels;
- (id)shapeChannelFolder;
- (struct FFShape *)shape;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (struct FFShape *)createShape;
- (void)dealloc;
- (id)initWithEffectID:(id)arg1;
- (void)finishedSettingEffectParameters;
- (id)designatedChannelsForXMLExport;
- (BOOL)hasDesignatedChannelsForXMLExport;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

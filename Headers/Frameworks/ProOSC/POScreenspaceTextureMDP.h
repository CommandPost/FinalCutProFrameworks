//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ProOSC/POMetalDrawPrimitive.h>

@class NSMutableDictionary;

@interface POScreenspaceTextureMDP : POMetalDrawPrimitive
{
    PCVector2_79efa81a _center;
    PCPtr_df275998 _texture;
    NSMutableDictionary *_indexBuffers;
    NSMutableDictionary *_vertexBuffers;
    NSMutableDictionary *_uniformBuffers;
    float _hitScale;
    struct POColor _attenuation;
    struct HGBlendingInfo _blendingInfo;
    PCMatrix44Tmpl_e98c85ee _transform;
}

+ (id)shaderName;
+ (id)quadWithHitId:(int)arg1 texture:(PCPtr_df275998)arg2 center:(const PCVector2_7e488b7d *)arg3;
@property(nonatomic) PCMatrix44Tmpl_e98c85ee transform; // @synthesize transform=_transform;
@property(nonatomic) float hitScale; // @synthesize hitScale=_hitScale;
@property(nonatomic) struct HGBlendingInfo blendingInfo; // @synthesize blendingInfo=_blendingInfo;
@property(nonatomic) struct POColor attenuation; // @synthesize attenuation=_attenuation;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)encodeQuad:(id)arg1 projection:(const PCMatrix44Tmpl_e98c85ee *)arg2 hitId:(int)arg3 hitCheckPass:(BOOL)arg4;
- (void)renderId:(id)arg1 pickMatrix:(const PCMatrix44Tmpl_e98c85ee *)arg2;
- (void)render:(id)arg1;
- (void)encodeQuad:(id)arg1;
- (id)vertexBufferWithHitId:(int)arg1 hitCheckPass:(BOOL)arg2 metalHelper:(id)arg3;
- (id)indexBuffer:(vector_8d85e9cb)arg1 device:(id)arg2;
- (id)uniformBuffer:(const PCMatrix44Tmpl_e98c85ee *)arg1 hitCheckPass:(BOOL)arg2 device:(id)arg3;
- (vector_5814a728)verticesForQuad:(const vector_8451d03a *)arg1;
- (vector_a5783ac0)verticesForQuad:(const vector_8451d03a *)arg1 hitId:(int)arg2;
- (vector_8451d03a)quad:(id)arg1 hitCheckPass:(BOOL)arg2;
- (vector_8d85e9cb)indices;
- (void)updateTexture:(PCPtr_df275998)arg1 center:(const PCVector2_7e488b7d *)arg2;
- (void)dealloc;
- (id)initWithHitId:(int)arg1 texture:(PCPtr_df275998)arg2 center:(const PCVector2_7e488b7d *)arg3;

@end


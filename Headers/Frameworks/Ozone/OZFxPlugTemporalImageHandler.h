//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FxLayerInfoAPI.h"
#import "FxTemporalImageAPI.h"

@interface OZFxPlugTemporalImageHandler : NSObject <FxTemporalImageAPI, FxLayerInfoAPI>
{
    struct OZImageNode *_imageNode;
    struct GLRenderer *_renderer;
    struct vector<std::tr1::shared_ptr<PCImage>, std::allocator<std::tr1::shared_ptr<PCImage>>> *_imageList;
    struct map<_opaque_pthread_t*, TemporalAPIContext, std::less<_opaque_pthread_t*>, std::allocator<std::pair<_opaque_pthread_t* const, TemporalAPIContext>>> _contexts;
}

- (id)init;
- (void)setImageNode:(struct OZImageNode *)arg1;
- (void)setLithiumInput:(PCPtr_2c56e3c4)arg1 withAgent:(struct LiAgent *)arg2 withRenderParams:(struct OZRenderParams *)arg3 withDOD:(PCRect_07ce470f)arg4;
- (void)destroyTemporalContextForCurrentThread;
- (void)_createTemporalContext:(struct TemporalAPIContext *)arg1 withRenderParams:(struct LiRenderParameters *)arg2;
- (void)_teardownLithiumInputAndAgentWithRenderParams:(struct LiRenderParameters *)arg1;
- (void)dealloc;
- (BOOL)_setupRenderer;
- (BOOL)getInputBitmap:(id *)arg1 withInfo:(CDStruct_8b442eb9)arg2 atTime:(double)arg3;
- (BOOL)getInputBitmap:(id *)arg1 withInfo:(CDStruct_8b442eb9)arg2 atTime:(double)arg3 appendHGGraph:(HGRef_265f9e4c)arg4;
- (BOOL)getInputBitmap:(id *)arg1 withInfo:(CDStruct_8b442eb9)arg2 atTime:(double)arg3 withROI:(struct HGRect *)arg4;
- (BOOL)getInputBitmap:(id *)arg1 withInfo:(CDStruct_8b442eb9)arg2 atTime:(double)arg3 withROI:(struct HGRect *)arg4 appendHGGraph:(HGRef_265f9e4c)arg5;
- (HGRef_265f9e4c)getFlexoInputNodeAtTime:(CDStruct_1b6d18a9)arg1 sourceOnly:(BOOL)arg2 imageType:(id)arg3 bounds:(PCRect_07ce470f *)arg4;
- (void)retrieveRenderer:(struct HGRenderer **)arg1 rendererInfo:(id *)arg2 withTempContext:(struct TemporalAPIContext *)arg3 andImageType:(id)arg4;
- (id)textureAndBitmapRetriever:(id)arg1;
- (BOOL)retrieveInput:(id *)arg1 requestInfo:(CDStruct_8b442eb9)arg2 atTime:(double)arg3 retriever:(SEL)arg4 imageType:(id)arg5 useSource:(BOOL)arg6;
- (BOOL)getInputTexture:(id *)arg1 withInfo:(CDStruct_8b442eb9)arg2 atTime:(double)arg3;
- (BOOL)getSourceBitmap:(id *)arg1 withInfo:(CDStruct_8b442eb9)arg2 atTime:(double)arg3;
- (BOOL)getSourceTexture:(id *)arg1 withInfo:(CDStruct_8b442eb9)arg2 atTime:(double)arg3;
- (BOOL)getHeliumImage:(id *)arg1 source:(BOOL)arg2 withInfo:(CDStruct_8b442eb9)arg3 atTime:(double)arg4;
- (BOOL)getLayerGlobalOffsetX:(double *)arg1 OffsetY:(double *)arg2 atTime:(double)arg3;
- (void)clearImageList;
- (int)getFootageFieldOrder:(struct OZRenderParams *)arg1;
- (struct TemporalAPIContext)getCurrentTemporalContext;
- (id).cxx_construct;
- (void).cxx_destruct;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Ozone/OZOverlay.h>

#import <Ozone/OZRenderClient-Protocol.h>
#import <Ozone/POOnScreenControlMetalRendering-Protocol.h>

@class MDPQuadTexture, MDPResizableImage, MDPScreenspaceQuad, MDPText, NSDictionary, NSString, PODrawableTexture;

@interface OZInsetViewOverlay : OZOverlay <OZRenderClient, POOnScreenControlMetalRendering>
{
    shared_ptr_8628efdd *_image;
    struct PCMutex *_imageLock;
    PODrawableTexture *_cameraNameTexture;
    struct PCString _cameraName;
    BOOL _isSceneCamera;
    float _lastBackingScale;
    struct PCPtr<POMultiResMultiPartTexture> _border;
    MDPText *_cameraNameMDP;
    MDPQuadTexture *_viewTexture;
    MDPScreenspaceQuad *_backgroundMDP;
    MDPResizableImage *_borderMDP;
    NSDictionary *_textAttributes;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)shouldDraw;
- (id)newPrimitivesForContext:(id)arg1 userInfo:(id)arg2;
- (void)renderNodeCancelled:(const CDStruct_1b6d18a9 *)arg1 userData:(void *)arg2;
- (void)renderNodeFinished:(struct OZHGRenderNode *)arg1 result:(const shared_ptr_3bf61ddf *)arg2;
- (id)getCursorWithEvent:(id)arg1;
- (void)notify:(unsigned int)arg1;
- (void)renderFrame;
- (struct OZCamera *)modifiedCameraForChannel:(const struct OZChannelRef *)arg1 scene:(struct OZScene *)arg2;
- (void)updateTip;
- (void)draw;
- (struct CGSize)previewSizeForViewSize:(struct CGSize)arg1 inScene:(struct OZScene *)arg2 returningScale:(float *)arg3;
- (void)drawGradientRectX:(float)arg1 y:(float)arg2 width:(float)arg3 height:(float)arg4 alpha:(float)arg5 direction:(int)arg6;
- (void)drawArcQuadrant:(int)arg1 x:(float)arg2 y:(float)arg3 radius:(float)arg4;
- (void)drawGradArcQuadrant:(int)arg1 x:(float)arg2 y:(float)arg3 radius:(float)arg4 alpha:(float)arg5;
- (void)willBeRemoved;
- (BOOL)is3DOSC;
- (int)getDrawingOrder;
- (void)dealloc;
- (id)initWithHostDelegate:(id)arg1 andViewDelegate:(id)arg2 andObjectDelegate:(id)arg3 andChannel:(struct OZChannelBase *)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


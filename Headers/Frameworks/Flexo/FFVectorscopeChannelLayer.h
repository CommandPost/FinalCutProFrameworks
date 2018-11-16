//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFVideoScopesChannelLayerGL.h>

#import "FFVectorscopeContextLayer.h"

__attribute__((visibility("hidden")))
@interface FFVectorscopeChannelLayer : FFVideoScopesChannelLayerGL <FFVectorscopeContextLayer>
{
    struct FFScopesBeginVectorscopeViewport *_openGL;
    long long _phase;
    float _traceBrightness;
    _Bool _monochrome;
    struct FFVideoScopesVectorscopeViewPrivate *_vectorscopeContext;
    CDStruct_69458254 _action_opt;
}

- (id)init;
- (void)dealloc;
- (void)setVectorscopeContext:(struct FFVideoScopesVectorscopeViewPrivate *)arg1;
- (struct CGRect)frameForBounds:(struct CGRect)arg1;
- (void)setNeedsUpdateFromDestInViewBounds:(struct CGRect)arg1 option:(unsigned long long)arg2;
- (id)actionForKey:(id)arg1;
- (struct _CGLPixelFormatObject *)copyCGLPixelFormatForDisplayMask:(unsigned int)arg1;
- (void)releaseCGLPixelFormat:(struct _CGLPixelFormatObject *)arg1;
- (struct _CGLContextObject *)copyCGLContextForPixelFormat:(struct _CGLPixelFormatObject *)arg1;
- (void)releaseCGLContext:(struct _CGLContextObject *)arg1;
- (BOOL)canDrawInCGLContext:(struct _CGLContextObject *)arg1 pixelFormat:(struct _CGLPixelFormatObject *)arg2 forLayerTime:(double)arg3 displayTime:(const CDStruct_e50ab651 *)arg4;
- (void)setPhase:(long long)arg1;
- (void)setMonochrome:(BOOL)arg1;
- (void)setTraceBrightness:(float)arg1;
- (struct CGRect)_boundsAppliedByContentsScale;
- (void)drawInCGLContext:(struct _CGLContextObject *)arg1 pixelFormat:(struct _CGLPixelFormatObject *)arg2 forLayerTime:(double)arg3 displayTime:(const CDStruct_e50ab651 *)arg4;

@end


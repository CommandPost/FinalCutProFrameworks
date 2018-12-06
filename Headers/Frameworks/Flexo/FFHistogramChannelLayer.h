//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFVideoScopesChannelLayerGL.h>

#import "FFHistogramContextLayer.h"

__attribute__((visibility("hidden")))
@interface FFHistogramChannelLayer : FFVideoScopesChannelLayerGL <FFHistogramContextLayer>
{
    struct FFVideoScopesHistogramViewPrivate *_histogramContext;
    unsigned long long _histogramIsaIndex;
    long long _viewMode;
    long long _displayColorMode;
    CDStruct_3de7261d _state;
    CDStruct_69458254 _action_opt;
}

- (void)setHistogramContext:(struct FFVideoScopesHistogramViewPrivate *)arg1;
- (void)setViewMode:(long long)arg1;
- (void)setDisplayColorMode:(long long)arg1;
- (void)setShowGuides:(BOOL)arg1;
- (void)setNeedsUpdateFromDestInViewBounds:(struct CGRect)arg1 option:(unsigned long long)arg2;
- (struct CGRect)frameForBounds:(struct CGRect)arg1;
- (id)actionForKey:(id)arg1;
- (struct _CGLPixelFormatObject *)copyCGLPixelFormatForDisplayMask:(unsigned int)arg1;
- (void)releaseCGLPixelFormat:(struct _CGLPixelFormatObject *)arg1;
- (struct _CGLContextObject *)copyCGLContextForPixelFormat:(struct _CGLPixelFormatObject *)arg1;
- (BOOL)canDrawInCGLContext:(struct _CGLContextObject *)arg1 pixelFormat:(struct _CGLPixelFormatObject *)arg2 forLayerTime:(double)arg3 displayTime:(const CDStruct_e50ab651 *)arg4;
- (void)drawInCGLContext:(struct _CGLContextObject *)arg1 pixelFormat:(struct _CGLPixelFormatObject *)arg2 forLayerTime:(double)arg3 displayTime:(const CDStruct_e50ab651 *)arg4;
- (id)accessibilityAttributeValue:(id)arg1;

@end


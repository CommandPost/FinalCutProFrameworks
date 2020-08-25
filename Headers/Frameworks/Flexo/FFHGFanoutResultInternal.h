//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFHGAsyncFanoutResult.h>

@class FFHGAsyncFanoutJob, FFHGAsyncQueue, FFHGCVPB, FFImageAbsoluteOutputFormat, FFPixelBuffer, FFTextureBuffer, PCMatrix44Double;

__attribute__((visibility("hidden")))
@interface FFHGFanoutResultInternal : FFHGAsyncFanoutResult
{
    FFImageAbsoluteOutputFormat *_format;
    const struct FxDeviceSet *_location;
    struct HGRect _roi;
    PCMatrix44Double *_pt;
    unsigned int _field;
    // Error parsing type: ^{HGRenderNode=^^?{atomic<unsigned int>=AI}^{HGNode}^{HGBitmap}{HGRect=iiii}iBiii{shared_ptr<const HGComputeDevice>=^{HGComputeDevice}^{__shared_weak_count}}{HGRef<HGGLContext>=^{HGGLContext}}Bdddd^{HGPixelBufferObj}Q^v*^?d^{HGRenderer}^{HGRenderJob}^{HGRenderQueue}}, name: _renderNode
    FFHGAsyncQueue *_queue;
    FFTextureBuffer *_flatTextureBuffer;
    FFPixelBuffer *_flatPixelBuffer;
    FFHGCVPB *_flatCVPixelBuffer;
    int _processingState;
    FFHGAsyncFanoutJob *_job;
    _Bool _inFinalState;
    double _bufferCopyTime;
    BOOL _dithered;
    int _bg;
    unsigned int _zebraAnalysisMode;
}

@property(readonly) unsigned int zebraAnalysisMode; // @synthesize zebraAnalysisMode=_zebraAnalysisMode;
@property(readonly) int bg; // @synthesize bg=_bg;
@property(readonly) BOOL dithered; // @synthesize dithered=_dithered;
@property double bufferCopyTime; // @synthesize bufferCopyTime=_bufferCopyTime;
@property _Bool inFinalState; // @synthesize inFinalState=_inFinalState;
@property int processingState; // @synthesize processingState=_processingState;
@property(readonly) PCMatrix44Double *pt; // @synthesize pt=_pt;
@property(readonly) struct HGRect roi; // @synthesize roi=_roi;
@property(readonly) FFImageAbsoluteOutputFormat *format; // @synthesize format=_format;
- (id)newImage;
-     // Error parsing type: v24@0:8^{HGRenderNode=^^?{atomic<unsigned int>=AI}^{HGNode}^{HGBitmap}{HGRect=iiii}iBiii{shared_ptr<const HGComputeDevice>=^{HGComputeDevice}^{__shared_weak_count}}{HGRef<HGGLContext>=^{HGGLContext}}Bdddd^{HGPixelBufferObj}Q^v*^?d^{HGRenderer}^{HGRenderJob}^{HGRenderQueue}}16, name: setRenderNode:
- (struct CGColorSpace *)colorSpace;
- (void)setLocation:(const struct FxDeviceSet *)arg1;
- (const struct FxDeviceSet *)location;
- (void)setQueue:(id)arg1 job:(id)arg2;
- (void)registerForNodeCallbacks;
- (void)_callbackRan;
- (id)description;
- (void)_nodeDidFinish;
- (void)dealloc;
- (id)initWithFormat:(id)arg1 location:(const struct FxDeviceSet *)arg2 roi:(struct HGRect)arg3 pixelTransform:(id)arg4 field:(unsigned int)arg5 dithered:(BOOL)arg6 background:(int)arg7 zebraMode:(unsigned int)arg8;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFDestRenderer.h>

@class FFQTMovieWriter, NSArray, NSError;

__attribute__((visibility("hidden")))
@interface FFDestQTExporter : FFDestRenderer
{
    FFQTMovieWriter *_movieWriter;
    BOOL _didCreateTracks;
    struct OpaqueCMMemoryPool *_memoryPoolRef;
    struct OpaqueVTCompressionSession *_compressionSession;
    struct opaqueCMFormatDescription *_videoFormatDescription;
    unsigned int _videoFrameCount;
    unsigned int _clockAdvancesNeeded;
    unsigned long long *_audioFrameCounts;
    NSArray *_audioRenderers;
    NSError *_exportError;
    int _callbackStatus;
    BOOL _downscaleToQuarterRes;
    BOOL _ignoreAlphaChannel;
    BOOL _requestStraightAlpha;
}

@property(nonatomic) BOOL requestStraightAlpha; // @synthesize requestStraightAlpha=_requestStraightAlpha;
@property(nonatomic) BOOL ignoreAlphaChannel; // @synthesize ignoreAlphaChannel=_ignoreAlphaChannel;
@property(nonatomic) BOOL downscaleToQuarterRes; // @synthesize downscaleToQuarterRes=_downscaleToQuarterRes;
- (_Bool)usesOSThrottlingForAllDiskIO;
- (void)pushFrame:(id)arg1;
- (BOOL)_isProRes4444AlphaModeCompatible:(struct opaqueCMSampleBuffer *)arg1;
- (int)_encodeFrame:(id)arg1 withPassThroughBuffer:(struct opaqueCMSampleBuffer *)arg2;
- (void)_conformPixelBufferForDVEncoding:(struct __CVBuffer **)arg1;
- (void)_setPixelBufferAttachments:(struct __CVBuffer *)arg1;
- (void)setSampleDuration:(CDStruct_1b6d18a9)arg1 fieldDominance:(int)arg2 sequenceBounds:(struct CGRect)arg3;
- (void)stop;
- (id)supportedPixelFormats;
- (void)dealloc;
- (id)initWithSampleDuration:(CDStruct_1b6d18a9)arg1 renderProps:(id)arg2 audioRenderers:(id)arg3 movieWriter:(id)arg4;
- (void)_closeCompressionSession;
- (int)_openCompressionSession:(struct __CVBuffer *)arg1 pixelAspectRatio:(float)arg2;
- (int)_setPaspClapProperties:(struct __CVBuffer *)arg1 pixelAspectRatio:(float)arg2;
- (int)_setColrProperty:(struct __CVBuffer *)arg1;
- (int)_setFielProperty:(struct __CVBuffer *)arg1;
- (int)_encodedFrameOutputCallback:(struct opaqueCMSampleBuffer *)arg1 withPassThroughBuffer:(struct opaqueCMSampleBuffer *)arg2;
- (void)_setCallbackStatus:(int)arg1;
- (void)raiseExportError:(int)arg1 description:(id)arg2;
- (int)drawFieldsInterlaced;

@end


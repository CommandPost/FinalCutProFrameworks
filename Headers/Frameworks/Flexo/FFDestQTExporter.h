//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFDestRenderer.h>

@class FFDestVideoRequestInfo, FFMovieWriter, NSArray, NSDictionary, NSError, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface FFDestQTExporter : FFDestRenderer
{
    FFMovieWriter *_movieWriter;
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
    CDStruct_1b6d18a9 _firstFrameTimeOffset;
    int _framesQueuedToEncoderButNotYetReturned;
    NSDictionary *_hdrMetadata;
    BOOL _trialRunPass;
    BOOL _smartMPEG2Export;
    int _bitRate;
    long long _vbvBufferSizeInBits;
    int _vbvDelayWithFullBuffer;
    int _numBytesBeforePST;
    BOOL _c31Mode;
    NSMutableArray *_frameInfoArray;
    NSMutableArray *_segmentInfoArray;
    NSString *_previousEventDocumentIDAndPath;
    CDStruct_1b6d18a9 _previousPTS;
    CDStruct_1b6d18a9 _sampleBufferDuration;
    BOOL _previousSameStream;
    int _firstSampleOfCurrentSegment;
    struct FFSynchronizable _cachedReqInfoLock;
    FFDestVideoRequestInfo *_cachedRequestInfo;
    int _whichSegment;
    struct __CFArray *_reorderBuffer;
    unsigned long long _audioFormat;
}

@property(nonatomic) unsigned long long audioFormat; // @synthesize audioFormat=_audioFormat;
@property(retain) NSDictionary *hdrMetadata; // @synthesize hdrMetadata=_hdrMetadata;
@property(nonatomic) BOOL requestStraightAlpha; // @synthesize requestStraightAlpha=_requestStraightAlpha;
@property(nonatomic) BOOL ignoreAlphaChannel; // @synthesize ignoreAlphaChannel=_ignoreAlphaChannel;
@property(nonatomic) BOOL downscaleToQuarterRes; // @synthesize downscaleToQuarterRes=_downscaleToQuarterRes;
- (int)destRecommendedFFSVPriority;
- (void)pushFrame:(id)arg1;
- (BOOL)_isProRes4444AlphaModeCompatible:(struct opaqueCMSampleBuffer *)arg1;
- (int)_encodeFrame:(id)arg1 withPassThroughBuffer:(struct opaqueCMSampleBuffer *)arg2;
- (void)_conformPixelBufferForDVEncoding:(struct __CVBuffer **)arg1;
- (void)_setPixelBufferAttachments:(struct __CVBuffer *)arg1;
- (void)setSampleDuration:(CDStruct_1b6d18a9)arg1 fieldDominance:(int)arg2 sequenceBounds:(struct CGRect)arg3 sequenceCameraMode:(int)arg4;
- (void)stop;
- (struct CGSize)requestedImageSizeWithFilterQuality:(int *)arg1;
- (id)requestedImageInfo;
- (id)_copyInternalRequestedImageInfo;
- (void)dealloc;
- (void)setTrialRunPass:(BOOL)arg1;
- (id)initWithSampleDuration:(CDStruct_1b6d18a9)arg1 renderProps:(id)arg2 audioRenderers:(id)arg3 movieWriter:(id)arg4;
- (void)_closeCompressionSession;
- (int)_openCompressionSession:(struct __CVBuffer *)arg1 pixelAspectRatio:(float)arg2;
- (int)_setPaspClapProperties:(struct __CVBuffer *)arg1 pixelAspectRatio:(float)arg2;
- (int)_setColrProperty:(struct __CVBuffer *)arg1;
- (int)_setFielProperty:(struct __CVBuffer *)arg1;
- (int)_encodedFrameOutputCallback:(struct opaqueCMSampleBuffer *)arg1 withPassThroughBuffer:(struct opaqueCMSampleBuffer *)arg2 pts:(CDStruct_1b6d18a9)arg3 dts:(CDStruct_1b6d18a9)arg4;
- (void)_setCallbackStatus:(int)arg1;
- (void)raiseExportError:(int)arg1 description:(id)arg2;
- (int)drawFieldsInterlaced;

@end


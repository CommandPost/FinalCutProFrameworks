//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CKMediaServerProtocol.h"

@class FFDestProMSExporter, FFMedia, FFPixelBuffer, FFPixelFormat, FFRenderer, FFStreamAudio, FFThrottleFile, ProMSFrameCache;

@interface ProMSMediaServer : NSObject <CKMediaServerProtocol>
{
    FFPixelFormat *_pixelFormatOut;
    struct CGColorSpace *_colorSpaceOut;
    double _pixelAspectOut;
    struct CGSize _renderSizeOut;
    FFPixelBuffer *_serverBuffer;
    FFRenderer *_renderer;
    FFDestProMSExporter *_destExporter;
    long long _lastFrameNumber;
    long long _lastDEFrameNumber;
    int _renderStatus;
    void *_serverAudioBuffer;
    int _serverAudioBufferSize;
    struct AudioStreamBasicDescription _asbd;
    FFStreamAudio *_audioStream;
    FFMedia *_renderSequence;
    BOOL _sequenceFromFile;
    CDStruct_1b6d18a9 _timeCodeDuration;
    CDStruct_1b6d18a9 _startTimeOffset;
    CDStruct_e83c9415 _renderRange;
    BOOL _hasCrop;
    struct CGRect _cropBounds;
    BOOL _allowCancel;
    FFThrottleFile *_throttleFile;
    long long _throttleValue;
    ProMSFrameCache *_frameCache;
    long long _playerFramesToDumpImage;
    struct FFPMRSimpleTimer _timerSession;
    struct FFPMRSimpleTimer _timerRender;
}

+ (id)loadMediaFromFile:(id)arg1 forItem:(id)arg2;
+ (BOOL)isCompressorKitPresent;
+ (BOOL)isStandaloneRenderer;
+ (void)setIsStandaloneRenderer:(BOOL)arg1;
+ (void)setUseGPU:(BOOL)arg1;
+ (BOOL)useGPU;
+ (BOOL)registerMediaServerRenderer;
+ (BOOL)unregisterMediaServerRenderer;
- (id)initWith:(id)arg1;
- (void)DO_initWith:(id)arg1;
- (void)dealloc;
- (void)deallocRenderSession;
- (id)end:(BOOL)arg1;
- (int)frameAccessMode:(long long)arg1 lastFrame:(long long)arg2;
- (id)renderVideoFrame:(unsigned int)arg1;
- (id)fillAudioBuffer:(unsigned long long)arg1 count:(int)arg2;
- (id)makeNSErrorFromOSStatus:(int)arg1 andComment:(id)arg2;
- (BOOL)adjustRenderingForThrottle;

@end


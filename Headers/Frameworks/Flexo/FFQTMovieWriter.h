//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFMovieWriter.h>

@class AVAssetWriter, AVAssetWriterInput, AVAssetWriterInputCaptionAdaptor, NSArray, NSMutableArray, NSObject<OS_dispatch_queue>;

__attribute__((visibility("hidden")))
@interface FFQTMovieWriter : FFMovieWriter
{
    int _fileFormat;
    AVAssetWriter *_assetWriter;
    BOOL _writerSessionOpen;
    NSObject<OS_dispatch_queue> *_serialQueue;
    struct _opaque_pthread_mutex_t _mutex;
    struct _opaque_pthread_cond_t _inputCond;
    struct _opaque_pthread_cond_t _outputCond;
    int _appendError;
    BOOL _closing;
    AVAssetWriterInput *_videoInput;
    struct __CFArray *_videoSampleBuffers;
    BOOL _videoInputMarkedAsFinished;
    CDStruct_79c71658 _videoTrackDimensions;
    CDStruct_1b6d18a9 _videoFrameDuration;
    CDStruct_1b6d18a9 _videoDuration;
    NSMutableArray *_audioInputs;
    struct __CFArray *_audioSampleBuffers;
    char *_audioInputMarkedAsFinished;
    CDStruct_1b6d18a9 _audioDuration;
    AVAssetWriterInput *_timecodeInput;
    CDStruct_1b6d18a9 _expectedVideoDuration;
    struct opaqueCMFormatDescription *_timecodeDesc;
    unsigned int _timecodeCounterValue;
    AVAssetWriterInput *_chapterNameInput;
    struct __CFArray *_chapterNameSampleBuffers;
    BOOL _chapterNameInputMarkedAsFinished;
    NSArray *_chapterMarkers;
    int _status;
    NSArray *_captionSets;
    NSArray *_captionArray;
    unsigned long long _currentCaptionIndex;
    AVAssetWriterInput *_captionInput;
    AVAssetWriterInputCaptionAdaptor *_captionInputAdapter;
    BOOL _captionInputMarkedAsFinished;
    CDStruct_1b6d18a9 _movieFragmentInterval;
}

@property(nonatomic) CDStruct_1b6d18a9 movieFragmentInterval; // @synthesize movieFragmentInterval=_movieFragmentInterval;
@property(retain) NSArray *captionSets; // @synthesize captionSets=_captionSets;
- (int)close;
- (BOOL)_allInputsHaveBeenMarkedAsFinished;
- (int)writeVideo:(struct opaqueCMSampleBuffer *)arg1;
- (int)writeAudio:(struct opaqueCMSampleBuffer *)arg1 audioTrackIndex:(unsigned int)arg2;
- (BOOL)_hasTooManyBuffers;
- (int)_beginAssetWriterSession;
- (int)_writeTimecode;
- (int)_createChapterNameTrack;
- (int)_createTimecodeTrack;
- (int)writeMetadata:(id)arg1;
- (int)writeChapterNames:(id)arg1 videoFrameDuration:(CDStruct_1b6d18a9)arg2;
- (void)setExpectedVideoDuration:(CDStruct_1b6d18a9)arg1;
- (int)createVideoTrack:(struct opaqueCMFormatDescription *)arg1 timescale:(int)arg2;
- (int)createAudioTracks:(unsigned int)arg1 trackMetadata:(id)arg2 withCompressionPreset:(int)arg3 numberOfChannels:(const int *)arg4 sampleRate:(int)arg5 formatDescription:(struct opaqueCMFormatDescription *)arg6;
- (int)removeListenerForWriteFailure:(const void *)arg1 callback:(CDUnknownFunctionPointerType)arg2;
- (int)addListenerForWriteFailure:(const void *)arg1 callback:(CDUnknownFunctionPointerType)arg2;
- (void)dealloc;
- (id)initWithPath:(id)arg1 error:(int *)arg2;
- (id)initWithPath:(id)arg1 fileFormat:(int)arg2 error:(int *)arg3;
- (void)setStartTimecode:(struct opaqueCMFormatDescription *)arg1 value:(unsigned int)arg2;

@end


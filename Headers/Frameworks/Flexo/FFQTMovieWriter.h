//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface FFQTMovieWriter : NSObject
{
    NSString *_fileFormat;
    struct OpaqueFigAssetWriter *_writer;
    BOOL _writerSessionOpen;
    struct OpaqueFigSemaphore *_writerQueueLowSemaphore;
    int _videoTrackID;
    CDStruct_79c71658 _videoTrackDimensions;
    CDStruct_1b6d18a9 _videoFrameDuration;
    CDStruct_1b6d18a9 _videoDuration;
    CDStruct_1b6d18a9 _audioDuration;
    int *_audioTrackIDs;
    unsigned int _audioTrackCount;
    unsigned long long *_audioSampleCounts;
    BOOL _needTimecodeTrack;
    int _timecodeTrackID;
    BOOL _needChapterNameTrack;
    int _chapterNameTrackID;
}

- (int)close;
- (int)writeMetadata:(id)arg1;
- (int)writeChapterNames:(id)arg1;
- (void)willWriteChapterNames;
- (int)_createChapterNameTrack;
- (int)writeTimecode:(struct opaqueCMFormatDescription *)arg1 sampleValue:(unsigned int)arg2;
- (void)willWriteTimecode;
- (int)_createTimecodeTrack;
- (int)writeAudio:(struct opaqueCMSampleBuffer *)arg1 audioTrackIndex:(unsigned int)arg2;
- (int)createAudioTracks:(unsigned int)arg1 chunkSize:(unsigned int)arg2 withCompressionPreset:(struct __CFString *)arg3;
- (int)writeVideo:(struct opaqueCMSampleBuffer *)arg1;
- (int)_endAssetWriterSession;
- (int)_beginAssetWriterSession;
- (int)_throttleWriterTrackQueue;
- (int)createVideoTrack:(struct opaqueCMFormatDescription *)arg1 timescale:(int)arg2;
- (int)removeListenerForWriteFailure:(const void *)arg1 callback:(CDUnknownFunctionPointerType)arg2;
- (int)addListenerForWriteFailure:(const void *)arg1 callback:(CDUnknownFunctionPointerType)arg2;
- (void)dealloc;
- (id)initWithPath:(id)arg1 error:(int *)arg2;
- (id)initWithPath:(id)arg1 fileFormat:(id)arg2 error:(int *)arg3;

@end


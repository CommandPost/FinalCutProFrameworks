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
    float _videoTrackWidth;
    CDStruct_1b6d18a9 _videoDuration;
    int *_audioTrackIDs;
    unsigned int _audioTrackCount;
    unsigned long long *_audioSampleCounts;
    int _timecodeTrackID;
}

- (id)initWithPath:(id)arg1 fileFormat:(id)arg2 error:(int *)arg3;
- (id)initWithPath:(id)arg1 error:(int *)arg2;
- (void)dealloc;
- (int)addListenerForWriteFailure:(const void *)arg1 callback:(CDUnknownFunctionPointerType)arg2;
- (int)removeListenerForWriteFailure:(const void *)arg1 callback:(CDUnknownFunctionPointerType)arg2;
- (int)createVideoTrack:(struct opaqueCMFormatDescription *)arg1 timescale:(int)arg2;
- (int)_throttleWriterTrackQueue;
- (int)_beginAssetWriterSession;
- (int)_endAssetWriterSession;
- (int)writeVideo:(struct opaqueCMSampleBuffer *)arg1;
- (int)createAudioTracks:(unsigned int)arg1 chunkSize:(unsigned int)arg2 withCompressionPreset:(struct __CFString *)arg3;
- (int)writeAudio:(struct opaqueCMSampleBuffer *)arg1 audioTrackIndex:(unsigned int)arg2;
- (int)createTimecodeTrack;
- (int)writeTimecode:(struct opaqueCMFormatDescription *)arg1 sampleValue:(unsigned int)arg2;
- (int)close;

@end

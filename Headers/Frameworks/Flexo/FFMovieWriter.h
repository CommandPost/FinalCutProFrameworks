//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface FFMovieWriter : NSObject
{
}

- (int)close;
- (int)writeMetadata:(id)arg1;
- (int)writeChapterNames:(id)arg1 videoFrameDuration:(CDStruct_1b6d18a9)arg2;
- (void)willWriteChapterNames;
- (void)setStartTimecode:(struct opaqueCMFormatDescription *)arg1 value:(unsigned int)arg2;
- (int)writeAudio:(struct opaqueCMSampleBuffer *)arg1 audioTrackIndex:(unsigned int)arg2;
- (int)createAudioTracks:(unsigned int)arg1 chunkSize:(unsigned int)arg2 withCompressionPreset:(int)arg3 numberOfChannels:(const int *)arg4 sampleRate:(int)arg5 formatDescription:(struct opaqueCMFormatDescription *)arg6;
- (int)writeVideo:(struct opaqueCMSampleBuffer *)arg1;
- (void)setExpectedVideoDuration:(CDStruct_1b6d18a9)arg1;
- (int)createVideoTrack:(struct opaqueCMFormatDescription *)arg1 timescale:(int)arg2;
- (int)removeListenerForWriteFailure:(const void *)arg1 callback:(CDUnknownFunctionPointerType)arg2;
- (int)addListenerForWriteFailure:(const void *)arg1 callback:(CDUnknownFunctionPointerType)arg2;
- (id)initWithPath:(id)arg1 error:(int *)arg2;
- (id)initWithPath:(id)arg1 fileFormat:(int)arg2 error:(int *)arg3;
- (void)setMovieFragmentInterval:(CDStruct_1b6d18a9)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFMovieWriter.h>

@class FFMedia, FFRenderFormat, MXFFileWriter, NSString;

__attribute__((visibility("hidden")))
@interface FFMXFMovieWriter : FFMovieWriter
{
    NSString *databasePath;
    struct MXMovieDesc *_mxfMovieDesc;
    struct GZFileStream *_fileDriver;
    MXFFileWriter *_mxfFile;
    struct GZMemory *_myEssenceDataInterLeave;
    int _aspectRatio;
    int _timecodeDropFrame;
    unsigned long long _timecodeStartFrame;
    NSString *_videoFileType;
    int _editRate;
    NSString *_pathOfExportFile;
    FFMedia *_media;
    long long _numberFrames;
    BOOL _initReady;
    int _fileFlags;
    struct list<VideoFrameDatas, std::__1::allocator<VideoFrameDatas>> _listVideoFrameDatas;
    unsigned long long *_TransferCharacteristic;
    unsigned long long *_ColorPrimaries;
    unsigned long long *_CodingEquations;
    FFRenderFormat *_renderFormat;
    NSString *_videoFormatKey;
    long long _videoFrameCounter;
    unsigned int _AlphaSampleDepth;
    unsigned char _AlphaSampleMode;
    int _audioChannelCount;
    int _fillAudioChannelCount;
    int _audioTrackCount;
    int _audioPacked;
    int _audioResolution;
    int _destinationAudioSampleSizeInBytes;
    long long _audioForFrameCounter;
    char **_audioTracks;
    struct opaqueCMSampleBuffer **_audioTracksSampleBufferRef;
    unsigned long long *_audioTracksLength;
    unsigned long long *_readedBytesPerTracks;
    char *_channelCountPerTrack;
    int _numberOfTracks;
    struct list<unsigned char **, std::__1::allocator<unsigned char **>> _audioForFramePtr;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (int)getProResAlphaMode:(struct opaqueCMFormatDescription *)arg1;
- (int)getProResAlphaSampleDepth:(char *)arg1 dataSize:(int)arg2;
- (void)setAdditionalColorSpaceData:(struct opaqueCMFormatDescription *)arg1;
- (long long)_getSoundSamplesPerFrameRoundedDown:(int)arg1;
- (long long)_getSoundSamplesPerFrameAtPosition:(unsigned int)arg1 atFrameRate:(int)arg2;
- (int)getMTRatio:(CDStruct_1b6d18a9)arg1;
- (int)splitTrackAudioToFrameAudio;
- (void)_putFrameDataTo:(struct GZMemory *)arg1 soundData:(char **)arg2 withSampleCount:(int)arg3;
- (struct MXMovieDesc *)_getEdlWithDuration:(unsigned long long)arg1;
- (int)close;
- (int)writeMetadata:(id)arg1;
- (int)writeChapterNames:(id)arg1;
- (void)willWriteChapterNames;
- (int)writeTimecode:(struct opaqueCMFormatDescription *)arg1 sampleValue:(unsigned int)arg2;
- (void)willWriteTimecode;
- (int)writeAudio:(struct opaqueCMSampleBuffer *)arg1 audioTrackIndex:(unsigned int)arg2;
- (int)createAudioTracks:(unsigned int)arg1 chunkSize:(unsigned int)arg2 withCompressionPreset:(int)arg3;
- (int)mergeVideoWithAudio;
- (int)writeVideo:(struct opaqueCMSampleBuffer *)arg1;
- (int)createVideoTrack:(struct opaqueCMFormatDescription *)arg1 timescale:(int)arg2;
- (void)setSettings:(id)arg1 renderFormat:(id)arg2 videoFormat:(id)arg3;
- (void)makeDescMXFFilePushHeader;
- (void)dealloc;
- (id)initWithPathAndMedia:(id)arg1 media:(id)arg2 numberFrames:(long long)arg3 channelCountPerTrack:(id)arg4 renderFormat:(id)arg5 videoFormatKey:(id)arg6 error:(int *)arg7;
- (id)initWithPath:(id)arg1 error:(int *)arg2;
- (id)initWithPath:(id)arg1 fileFormat:(int)arg2 error:(int *)arg3;

@end

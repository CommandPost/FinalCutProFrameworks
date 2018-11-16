//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MIOFileReader, NSString;

__attribute__((visibility("hidden")))
@interface MIORADMediaReader : NSObject
{
    int _trackID;
    unsigned int _mediaType;
    struct OpaqueFigSampleCursorService *_sampleCursorService;
    struct OpaqueFigSampleCursor *_sampleCursor;
    CDStruct_1b6d18a9 _startTime;
    CDStruct_1b6d18a9 _flexoTime;
    CDStruct_1b6d18a9 _lastUsedFlexoTime;
    CDStruct_1b6d18a9 _nextFrameDuration;
    CDStruct_1b6d18a9 _editOffset;
    unsigned long long _gopOffset;
    CDStruct_1b6d18a9 _durationTime;
    long long _durationFramecount;
    CDStruct_1b6d18a9 _totalDuration;
    long long _frameCounter;
    struct TimecodeInfo _timecodeInfo;
    CDStruct_1b6d18a9 _frameDuration;
    long long _timescale;
    BOOL _keepMediaRate;
    unsigned long long _samplesPerPull;
    NSString *_filename;
    BOOL _endOfData;
    MIOFileReader *_fileReader;
    BOOL _isVFR;
    struct opaqueCMBufferQueue *_bufferQueue;
}

+ (id)mediaReaderWithFormatReader:(struct OpaqueFigFormatReader *)arg1 trackReader:(struct OpaqueFigTrackReader *)arg2 mediaType:(unsigned int)arg3 trackID:(int)arg4 byteStream:(struct OpaqueCMByteStream *)arg5 timecodeInfo:(struct TimecodeInfo)arg6 frameDuration:(CDStruct_1b6d18a9)arg7;
- (id)initWithFormatReader:(struct OpaqueFigFormatReader *)arg1 trackReader:(struct OpaqueFigTrackReader *)arg2 mediaType:(unsigned int)arg3 trackID:(int)arg4 byteStream:(struct OpaqueCMByteStream *)arg5 timecodeInfo:(struct TimecodeInfo)arg6 frameDuration:(CDStruct_1b6d18a9)arg7;
- (void)dealloc;
- (int)pullFrame:(struct opaqueCMSampleBuffer **)arg1;
- (void)reset;
- (int)createSampleBufferFromSampleCursor:(struct opaqueCMSampleBuffer **)arg1;
- (struct opaqueCMSampleBuffer *)scheduleBuffers;
- (struct opaqueCMSampleBuffer *)scheduleSamples:(int)arg1;
- (void)start;
- (void)stop;
- (int)getNextMedia:(void *)arg1;
- (long long)timescale;
- (void)setStartTime:(CDStruct_1b6d18a9)arg1;
- (void)setConstantTimeStart:(CDStruct_1b6d18a9)arg1;
@property(readonly, nonatomic) BOOL isVideo; // @dynamic isVideo;
- (BOOL)hasData;
- (BOOL)canSchedule;
- (void)setIsVFR:(BOOL)arg1;
- (void)setEditOffset:(CDStruct_1b6d18a9)arg1;
- (void)setGOPOffset:(unsigned long long)arg1;
@property(nonatomic) long long durationFramecount; // @synthesize durationFramecount=_durationFramecount;
@property(nonatomic) unsigned long long samplesPerPull; // @synthesize samplesPerPull=_samplesPerPull;
@property(retain) NSString *filename; // @synthesize filename=_filename;
@property(nonatomic) BOOL keepMediaRate; // @synthesize keepMediaRate=_keepMediaRate;
@property CDStruct_1b6d18a9 frameDuration; // @synthesize frameDuration=_frameDuration;
@property int trackID; // @synthesize trackID=_trackID;
@property unsigned int mediaType; // @synthesize mediaType=_mediaType;
@property struct opaqueCMBufferQueue *bufferQueue; // @synthesize bufferQueue=_bufferQueue;
@property struct OpaqueFigSampleCursorService *sampleCursorService; // @synthesize sampleCursorService=_sampleCursorService;

@end


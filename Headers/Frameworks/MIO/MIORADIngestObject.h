//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MIORADIngestObject.h"

@class MIORADBufferManager, MIORADClip, MIORADMediaReader, NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface MIORADIngestObject : NSObject <MIORADIngestObject>
{
    struct OpaqueFigFormatReader *_formatReader;
    struct OpaqueCMByteStream *_byteStream;
    MIORADMediaReader *_videoReader;
    NSMutableArray *_audioReaders;
    BOOL _videoEndOfData;
    BOOL _audioEndOfData;
    MIORADBufferManager *_bufferManager;
    BOOL _keepMediaRate;
    struct TimecodeInfo _timecodeInfo;
    CDStruct_1b6d18a9 _frameDuration;
    CDStruct_1b6d18a9 _startTime;
    CDStruct_1b6d18a9 _flexoTime;
    CDStruct_1b6d18a9 _startDecodeTime;
    BOOL _useCMTime;
    unsigned long long _timescale;
    BOOL _isVFR;
    CDStruct_1b6d18a9 _videoPulled;
    CDStruct_1b6d18a9 _audioPulled;
    MIORADClip *_clip;
    NSArray *_pathSet;
}

@property(retain) NSArray *pathSet; // @synthesize pathSet=_pathSet;
@property(retain) MIORADClip *clip; // @synthesize clip=_clip;
@property BOOL useCMTime; // @synthesize useCMTime=_useCMTime;
@property(retain) MIORADBufferManager *bufferManager; // @synthesize bufferManager=_bufferManager;
@property(retain) NSMutableArray *audioReaders; // @synthesize audioReaders=_audioReaders;
@property(retain) MIORADMediaReader *videoReader; // @synthesize videoReader=_videoReader;
- (int)getNextMedia:(struct MIORADPlugInMediaSpecifier *)arg1 inRefCon:(void *)arg2;
- (id)firstAudioReader;
- (int)getNextMedia_Deprecated:(struct MIORADPlugInMediaSpecifier_Deprecated *)arg1 inRefCon:(void *)arg2;
- (int)setKeepMediaVideoRate:(BOOL)arg1 inRefCon:(void *)arg2;
- (int)setOutPoint:(CDStruct_1b6d18a9)arg1 inRefCon:(void *)arg2;
- (int)setInPoint:(CDStruct_1b6d18a9)arg1 inRefCon:(void *)arg2;
- (int)setPathSet:(id)arg1 inRefCon:(void *)arg2;
- (int)reset:(void *)arg1;
- (int)cleanup:(void *)arg1;
- (int)stop:(void *)arg1;
- (int)start:(void *)arg1;
- (int)teardown:(void *)arg1;
- (int)initialize:(void *)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithClip:(id)arg1;

@end


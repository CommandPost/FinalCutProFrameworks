//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MIO/MIOObject.h>

#import "MIORADSampleCursorProtocol.h"

@class MIORADSpannedTrackReader;

__attribute__((visibility("hidden")))
@interface MIORADSpannedSampleCursor : MIOObject <MIORADSampleCursorProtocol>
{
    id <MIORADSampleCursorProtocol> _sampleCusor;
    MIORADSpannedTrackReader *_trackReader;
    unsigned long long _trackIdx;
}

+ (id)sampleCursorWithSampleCursor:(id)arg1 trackReader:(id)arg2 trackIdx:(unsigned long long)arg3;
- (id)initWithSampleCursor:(id)arg1 trackReader:(id)arg2 trackIdx:(unsigned long long)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (int)stepInDecodeOrder:(long long)arg1;
- (int)stepInPresentationOrder:(long long)arg1;
- (int)stepByDecodeTime:(CDStruct_1b6d18a9)arg1;
- (int)stepByPresentationTime:(CDStruct_1b6d18a9)arg1 pts:(CDStruct_1b6d18a9)arg2;
- (int)stepByPresentationTime:(CDStruct_1b6d18a9)arg1;
- (long long)compareInDecodeOrder:(id)arg1;
- (CDStruct_1b6d18a9)presentationTimeStamp;
- (struct opaqueCMFormatDescription *)formatDescription;
- (CDStruct_1b6d18a9)playableHorizon;
- (BOOL)implementsSampleDependencyAttributes;
- (id)sampleDependencyAttributes;
- (CDStruct_1b6d18a9)duration;
- (BOOL)implementsTimecodeCounter;
- (long long)timecodeCounter;
- (BOOL)implementsDecodeTimeStamp;
- (CDStruct_1b6d18a9)decodeTimeStamp;
- (BOOL)implementsDependencyInfoWithFullSync;
- (void)dependencyInfoWithFullSync:(char *)arg1 partialSync:(char *)arg2 partialSyncThreshold:(int *)arg3 droppable:(char *)arg4;
- (BOOL)implementsMpeg2FrameType;
- (BOOL)mpeg2FrameType:(char *)arg1 brokenLink:(char *)arg2;
- (BOOL)implementsTestReorderingBoundaryWithCursor;
- (BOOL)testReorderingBoundaryWithCursor:(id)arg1 boundaryType:(long long)arg2;
- (BOOL)implementsChunkDetails;
- (void)chunkDetails:(id *)arg1 chunkOffset:(long long *)arg2 chunkSize:(unsigned long long *)arg3 sampleCount:(long long *)arg4 sampleIndex:(long long *)arg5 allSameSize:(char *)arg6 allSameDuration:(char *)arg7 allSameFormatDescription:(char *)arg8;
- (BOOL)implementsSampleLocationWithArraySizes;
- (void)sampleLocationWithArraySizes:(long long)arg1 sectionCountOut:(long long *)arg2 sectionOffsetArrayInOut:(long long *)arg3 sectionLengthArrayInOut:(unsigned long long *)arg4 dataSourceOut:(id *)arg5;
- (BOOL)implementsCreateSampleBuffer;
- (struct opaqueCMSampleBuffer *)createSampleBuffer:(id)arg1;
- (BOOL)implementsPlayableThroughEndOfTrack;
- (BOOL)playableThroughEndOfTrack;
@property unsigned long long trackIdx; // @synthesize trackIdx=_trackIdx;
@property MIORADSpannedTrackReader *trackReader; // @synthesize trackReader=_trackReader;
@property(retain) id <MIORADSampleCursorProtocol> sampleCursor; // @synthesize sampleCursor=_sampleCusor;

@end


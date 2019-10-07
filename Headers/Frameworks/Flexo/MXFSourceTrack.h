//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HPMSourceTrackProtocol.h"

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface MXFSourceTrack : NSObject <HPMSourceTrackProtocol>
{
    int trackType;
    NSString *name;
    CDStruct_2689111f editRate;
    long long _firstEssenceComponent;
    NSMutableArray *components;
}

@property(retain) NSMutableArray *components; // @synthesize components;
@property(readonly) CDStruct_2689111f editRate; // @synthesize editRate;
@property(retain) NSString *name; // @synthesize name;
@property(readonly) int trackType; // @synthesize trackType;
- (list_3f44f5c8 *)copyChunkEntriesWithStartCursor:(const struct HPMEditCursor *)arg1 endCursor:(const struct HPMEditCursor *)arg2 startOffset:(unsigned long long *)arg3 dataSize:(unsigned long long *)arg4;
- (const CDStruct_37d50165 *)chunkEntryRefWithCursor:(const struct HPMEditCursor *)arg1 startOffset:(unsigned long long *)arg2;
- (CDStruct_37d50165)chunkEntryWithCursor:(const struct HPMEditCursor *)arg1 startOffset:(unsigned long long *)arg2;
- (int)codecTypeWithCursor:(const struct HPMEditCursor *)arg1;
- (BOOL)samplesWithLaterDecodeTimeStampsThanCursor:(const struct HPMEditCursor *)arg1 mayHaveEarlierPresentationTimeStampsThanCursor:(const struct HPMEditCursor *)arg2;
- (BOOL)samplesWithEarlierDecodeTimeStampsThanCursor:(const struct HPMEditCursor *)arg1 mayHaveLaterPresentationTimeStampsThanCursor:(const struct HPMEditCursor *)arg2;
- (BOOL)isIFrameOnlyMedia:(const struct HPMEditCursor *)arg1;
- (unsigned char)frameTypeWithCursor:(const struct HPMEditCursor *)arg1;
- (int)stepInPresentationOrder:(long long)arg1 stepsTaken:(long long *)arg2 cursor:(struct HPMEditCursor *)arg3;
- (int)stepInDecodeOrder:(long long)arg1 stepsTaken:(long long *)arg2 cursor:(struct HPMEditCursor *)arg3;
- (long long)decodePositionForDisplayPosition:(long long)arg1 cursor:(const struct HPMEditCursor *)arg2;
@property(readonly) long long displayPositionForLastDecodeSample;
@property(readonly) long long displayPositionForFirstDecodeSample;
- (id)mediaAtSamplePosition:(long long)arg1;
- (long long)originFromCheckWithStartPosition:(long long)arg1 duration:(long long)arg2;
- (id)mediaAtIndex:(unsigned long long)arg1;
@property(readonly) long long editDuration;
@property(readonly) CDStruct_2689111f sampleRate;
@property(readonly) BOOL hasDisplayOffsets;
@property(readonly) id <HPMMediaProtocol><HPMMediaCursorProtocol> firstEssenceMedia;
@property(readonly) BOOL hasMedia;
- (void)addComponent:(id)arg1;
- (id)componentAtIndex:(unsigned long long)arg1;
@property(readonly) unsigned long long componentCount;
@property(readonly) long long dataByteCount;
@property(readonly) float bytesPerSecond;
- (void)dealloc;
- (id)initWithMXFTrack:(const struct MXTrack *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


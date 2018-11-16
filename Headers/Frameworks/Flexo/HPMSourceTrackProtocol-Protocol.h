//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HPMTrackProtocol.h"
#import "NSObject.h"

@class NSArray;

@protocol HPMSourceTrackProtocol <NSObject, HPMTrackProtocol>
@property(readonly) int sampleRate;
@property(readonly) BOOL hasDisplayOffsets;
@property(readonly) id <HPMMediaProtocol><HPMMediaCursorProtocol> firstEssenceMedia;
@property(readonly) BOOL hasMedia;
- (NSArray *)chunkEntriesWithStartCursor:(id <HPMCursorProtocol>)arg1 endCursor:(id <HPMCursorProtocol>)arg2 startOffset:(unsigned long long *)arg3 dataSize:(unsigned long long *)arg4;
- (const CDStruct_37d50165 *)chunkEntryWithCursor:(id <HPMCursorProtocol>)arg1 startOffset:(unsigned long long *)arg2;
- (BOOL)samplesWithLaterDecodeTimeStampsThanCursor:(id <HPMCursorProtocol>)arg1 mayHaveEarlierPresentationTimeStampsThanCursor:(id <HPMCursorProtocol>)arg2;
- (BOOL)samplesWithEarlierDecodeTimeStampsThanCursor:(id <HPMCursorProtocol>)arg1 mayHaveLaterPresentationTimeStampsThanCursor:(id <HPMCursorProtocol>)arg2;
- (BOOL)isIFrameOnlyMedia:(id <HPMCursorProtocol>)arg1;
- (unsigned char)frameFlagsWithCursor:(id <HPMCursorProtocol>)arg1;
- (int)codecTypeWithCursor:(id <HPMCursorProtocol>)arg1;
- (id <HPMMediaProtocol><HPMMediaCursorProtocol>)mediaAtSamplePosition:(long long)arg1;
- (long long)originFromCheckWithStartPosition:(long long)arg1 duration:(long long)arg2;
- (id <HPMMediaProtocol><HPMMediaCursorProtocol>)mediaAtIndex:(unsigned long long)arg1;
@end

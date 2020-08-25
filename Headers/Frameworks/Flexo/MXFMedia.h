//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HPMMediaProtocol.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface MXFMedia : NSObject <HPMMediaProtocol>
{
    int _typeID;
    CDStruct_2689111f _editRate;
    long long _frameDuration;
    long long _origin;
    long long _originInSamples;
    long long _startPosition;
    int _essenceType;
    int _codecType;
    long long _commonPacketUnits;
    struct vector<HPMChunkEntry, std::__1::allocator<HPMChunkEntry>> *_index;
    struct MXUMID *_sourcePackID;
    int _wrapping;
    unsigned int _trackID;
    unsigned int _trackNumber;
    unsigned int _bodySID;
    unsigned int _essenceOffset;
    int _deltaEntryIndex;
    unsigned int _deltaOffset;
    unsigned int klvHeaderSize;
    unsigned long long klvValueSize;
    unsigned int _bytesPerSample;
    struct __CFDictionary *descriptiveMetadata;
}

@property struct __CFDictionary *descriptiveMetadata; // @synthesize descriptiveMetadata;
@property unsigned int bytesPerSample; // @synthesize bytesPerSample=_bytesPerSample;
@property unsigned long long klvValueSize; // @synthesize klvValueSize;
@property unsigned int klvHeaderSize; // @synthesize klvHeaderSize;
@property(readonly) unsigned int essenceOffset; // @synthesize essenceOffset=_essenceOffset;
@property(readonly) unsigned int bodySID; // @synthesize bodySID=_bodySID;
@property(readonly) unsigned int trackNumber; // @synthesize trackNumber=_trackNumber;
@property(readonly) unsigned int trackID; // @synthesize trackID=_trackID;
@property(readonly) int wrapping; // @synthesize wrapping=_wrapping;
@property(readonly) const struct MXUMID *sourcePackID; // @synthesize sourcePackID=_sourcePackID;
@property long long commonPacketUnits; // @synthesize commonPacketUnits=_commonPacketUnits;
@property(readonly) int codecType; // @synthesize codecType=_codecType;
@property(readonly) int essenceType; // @synthesize essenceType=_essenceType;
@property(readonly) long long startPosition; // @synthesize startPosition=_startPosition;
@property(readonly) long long originInSamples; // @synthesize originInSamples=_originInSamples;
@property(readonly) long long origin; // @synthesize origin=_origin;
@property(readonly) long long frameDuration; // @synthesize frameDuration=_frameDuration;
@property(readonly) CDStruct_2689111f editRate; // @synthesize editRate=_editRate;
@property(readonly) int type; // @synthesize type=_typeID;
- (int)unitsPerPacketWithIndexPosition:(unsigned long long)arg1;
- (void)checkMediaWithIndexDuration:(long long)arg1;
- (unsigned char)frameTypeWithIndexPosition:(unsigned long long)arg1;
- (BOOL)temporalFrameOffsetWithIndexPosition:(unsigned long long)arg1;
- (BOOL)displayFrameOffsetWithIndexPosition:(unsigned long long)arg1 mustLoadAtMediaIndexPosition:(long long *)arg2;
- (long long)indexPositionWithSamplePosition:(long long)arg1 sampleOffset:(int *)arg2 mustLoadAtMediaIndexPosition:(long long *)arg3;
- (CDStruct_37d50165 *)mutableIndexEntryWithEditPosition:(long long)arg1;
- (const CDStruct_37d50165 *)indexEntryWithEditPosition:(long long)arg1;
- (void)setIndexEntryWithIndexPosition:(unsigned long long)arg1 filePosition:(long long)arg2 size:(unsigned int)arg3 isExactSize:(BOOL)arg4 unitsPerPacket:(unsigned int)arg5 packageStartUnit:(long long)arg6;
- (void)addIndexEntryWithFilePosition:(long long)arg1 size:(unsigned int)arg2 isExactSize:(BOOL)arg3 unitsPerPacket:(unsigned int)arg4;
- (void)fixLastIndexEntryWithEndPosition:(long long)arg1 unitsSize:(unsigned int)arg2;
- (void)resizeIndexTableWithNewSize:(long long)arg1;
- (void)preserveIndexWithSize:(long long)arg1;
- (CDStruct_37d50165 *)lastIndexEntry;
@property(readonly) BOOL isValid;
- (unsigned long long)nextDeltaWithDeltaEntries:(const struct MXArray *)arg1 indexEntry:(const struct MXIndexEntry *)arg2;
- (unsigned char)sliceWithDeltaEntries:(const struct MXArray *)arg1;
- (unsigned int)deltaOffsetWithDeltaEntries:(const struct MXArray *)arg1;
@property unsigned int deltaOffset;
@property int deltaEntryIndex;
@property(readonly) BOOL isEssenceAssigned;
@property(readonly) BOOL hasDisplayOffsets;
@property(readonly) long long indexDataSize;
@property long long indexSampleCount;
@property(readonly) unsigned long long indexEntryCount;
@property(readonly) CDStruct_2689111f sampleRate;
- (void)dealloc;
- (id)initWithTrack:(const struct MXTrack *)arg1 sourcePackID:(const struct MXUMID *)arg2 bodySID:(unsigned int)arg3 trackType:(int)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


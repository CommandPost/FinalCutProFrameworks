//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Flexo/MXFPictureMediaDecode.h>

#import <Flexo/HPMMediaCursorProtocol-Protocol.h>
#import <Flexo/HPMPictureMediaProtocol-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface MXFPictureMedia : MXFPictureMediaDecode <HPMPictureMediaProtocol, HPMMediaCursorProtocol>
{
    BOOL _isIndexIFrameOnly;
    long long _indexDataSize;
    BOOL _hasDisplayOffsets;
    unsigned long long _usedIndexEntryCount;
    unsigned long long _maxOffsetsAndFlags;
    char *_temporalOffsets;
    char *_displayOffsets;
    unsigned char *_frameTypes;
}

@property(readonly) unsigned long long maxOffsetsAndFlags; // @synthesize maxOffsetsAndFlags=_maxOffsetsAndFlags;
@property(readonly) unsigned long long usedIndexEntryCount; // @synthesize usedIndexEntryCount=_usedIndexEntryCount;
@property(readonly) BOOL hasDisplayOffsets; // @synthesize hasDisplayOffsets=_hasDisplayOffsets;
@property(readonly) BOOL isIFrameOnly; // @synthesize isIFrameOnly=_isIndexIFrameOnly;
- (unsigned char)frameTypeWithFrameFlag:(unsigned char)arg1;
- (BOOL)samplesWithLaterDecodePositionX:(long long)arg1 displayPositionX:(long long)arg2 mayHaveEarlierDisplayPositionY:(long long)arg3;
- (BOOL)samplesWithEarlierDecodePositionX:(long long)arg1 displayPositionX:(long long)arg2 mayHaveLaterDisplayPositionY:(long long)arg3;
- (int)stepInPresentationOrderWithCount:(long long)arg1 displayPosition:(long long *)arg2 decodePosition:(long long *)arg3 mustLoadAtMediaIndexPosition:(long long *)arg4;
- (int)stepInDecodeOrderWithCount:(long long)arg1 displayPosition:(long long *)arg2 decodePosition:(long long *)arg3 mustLoadAtMediaIndexPosition:(long long *)arg4;
@property(readonly) long long displayPositionForLastDecodeSample;
@property(readonly) long long displayPositionForFirstDecodeSample;
- (long long)decodePositionWithDisplayPosition:(long long)arg1 mustLoadAtMediaIndexPosition:(long long *)arg2;
- (void)setIndexEntryWithIndexPosition:(unsigned long long)arg1 filePosition:(long long)arg2 size:(unsigned int)arg3 isExactSize:(BOOL)arg4 unitsPerPacket:(unsigned int)arg5 packageStartUnit:(long long)arg6 temporalOffset:(BOOL)arg7 frameFlags:(unsigned char)arg8;
- (void)addIndexEntryWithFilePosition:(long long)arg1 size:(unsigned int)arg2 isExactSize:(BOOL)arg3 unitsPerPacket:(unsigned int)arg4 temporalOffset:(BOOL)arg5 frameFlags:(unsigned char)arg6;
- (void)checkMediaWithIndexDuration:(long long)arg1;
- (void)checkDisplayOffsetsWithDecodeStartPosition:(long long)arg1;
- (unsigned char)frameTypeWithIndexPosition:(unsigned long long)arg1;
- (BOOL)temporalFrameOffsetWithIndexPosition:(unsigned long long)arg1;
- (BOOL)displayFrameOffsetWithIndexPosition:(unsigned long long)arg1 mustLoadAtMediaIndexPosition:(long long *)arg2;
- (struct __CFString *)newCustomColorSpace;
@property(readonly) BOOL isMPEG4;
@property(readonly) BOOL isMPEG2;
@property(readonly) BOOL isMPEG;
@property(readonly) long long indexDataSize;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithTrack:(const struct MXTrack *)arg1 sourcePackID:(const struct MXUMID *)arg2 bodySID:(unsigned int)arg3 descriptor:(const struct MXKLV *)arg4 subDescriptor:(const struct MXKLV *)arg5 essenceContainers:(const struct MXArray *)arg6 mxfVersion:(unsigned int)arg7;

// Remaining properties
@property(readonly) CDStruct_2689111f aspectRatio;
@property(readonly) unsigned int bytesPerSample;
@property(readonly) int codecType;
@property(readonly) struct MXFColorComponents *colorComponents;
@property(readonly) struct MXFColorSpace *colorSpace;
@property(readonly, copy) NSString *debugDescription;
@property struct __CFDictionary *descriptiveMetadata;
@property(readonly) int displayYOffset;
@property(readonly) CDStruct_2689111f editRate;
@property(readonly) int essenceType;
@property(readonly) long long frameDuration;
@property(readonly) unsigned int frameHeight;
@property(readonly) unsigned long long hash;
@property(readonly) unsigned long long indexEntryCount;
@property long long indexSampleCount;
@property(readonly) BOOL isValid;
@property(readonly) long long origin;
@property(readonly) long long originInSamples;
@property(readonly) CDStruct_2689111f sampleRate;
@property(readonly) const struct CTMScanInfo *scanInfo;
@property(readonly) long long startPosition;
@property(readonly) unsigned int storedHeight;
@property(readonly) unsigned int storedWidth;
@property(readonly) Class superclass;
@property(readonly) int type;
@property(readonly) unsigned int width;

@end


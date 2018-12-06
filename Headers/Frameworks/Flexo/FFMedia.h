//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFBinObject.h>

#import "FFAssetContainerProtocol.h"
#import "FFDataModelProtocol.h"
#import "FFMD5Protocol.h"
#import "FFMediaDisplayProtocol.h"
#import "FFSkimmableProtocol.h"
#import "NSCoding.h"
#import "NSCopying.h"

@class FFThumbnailRequest, NSMutableArray, NSRecursiveLock, NSString;

@interface FFMedia : FFBinObject <NSCoding, NSCopying, FFMediaDisplayProtocol, FFDataModelProtocol, FFSkimmableProtocol, FFAssetContainerProtocol, FFMD5Protocol>
{
    long long _audioChannelCount;
    double _audioSampleRate;
    long long _timecodeDisplayDropFrame;
    CDStruct_e83c9415 _mediaRange;
    BOOL _hasAudio;
    BOOL _hasVideo;
    CDStruct_1b6d18a9 _timecodeFrameDuration;
    NSString *_descriptionText;
    BOOL _isGood;
    unsigned long long _lastMarkerNumber;
    FFThumbnailRequest *_okIconImageRequest;
    NSMutableArray *_thumbMD5Infos;
    NSRecursiveLock *_thumbMD5Lock;
    BOOL _isThumbMD5InfoProxy;
}

+ (id)copyClassDescription;
+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
- (void)dealloc;
- (id)initWithDisplayName:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)newProvider;
- (id)newProviderWithEffectCount:(long long)arg1 showObjects:(id)arg2;
- (id)newProviderWithEffectCount:(long long)arg1;
- (id)videoProps;
- (void)setTimecodeDisplayDropFrame:(long long)arg1;
- (long long)timecodeDisplayDropFrame;
- (void)setTimecodeFrameDuration:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)timecodeFrameDuration;
- (struct opaqueCMFormatDescription *)createTimecodeFormatDescription;
- (unsigned int)timecodeCounterValue;
- (long long)audioChannelCount;
- (void)setAudioChannelCount:(long long)arg1;
- (double)audioSampleRate;
- (void)setAudioSampleRate:(double)arg1;
- (id)descriptionText;
- (void)setDescriptionText:(id)arg1;
- (BOOL)isGood;
- (void)setIsGood:(BOOL)arg1;
- (CDStruct_e83c9415)mediaRange;
- (CDStruct_e83c9415)clippedRange;
- (CDStruct_e83c9415)audioClippedRange;
- (CDStruct_e83c9415)combinedAudioVideoClippedRange;
- (CDStruct_e83c9415)mediaRangeConstrainedByInOutForType:(int)arg1;
- (CDStruct_e83c9415)mediaRangeForType:(int)arg1;
- (CDStruct_1b6d18a9)timeOffset;
- (void)setMediaRange:(CDStruct_e83c9415)arg1;
- (unsigned long long)lastMarkerNumber;
- (void)setLastMarkerNumber:(unsigned long long)arg1;
- (unsigned long long)nextMarkerNumber;
- (int)rotationDegrees;
- (void)rangeInvalidated:(id)arg1;
- (void)invalidateSourceRange:(CDStruct_e83c9415)arg1;
- (void)invalidateSampleRange:(CDStruct_e83c9415)arg1;
- (void)invalidateStreamRange:(CDStruct_e83c9415)arg1;
- (BOOL)mediaAvailable;
- (BOOL)hasVideo;
- (void)setHasVideo:(BOOL)arg1;
- (BOOL)hasAudio;
- (void)setHasAudio:(BOOL)arg1;
- (BOOL)isStill;
- (id)description;
- (CDStruct_1b6d18a9)videoSampleDuration;
- (CDStruct_1b6d18a9)videoFrameDuration;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void *)arg4;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2;
- (id)assets;
- (id)assetRefs;
- (id)fileURLs:(int)arg1;
- (id)rootChannel;
- (BOOL)validateMetadataItem:(id)arg1;
- (CDStruct_1b6d18a9)timeFromTimecode:(id)arg1 offset:(BOOL)arg2;
- (id)timecodeFromTime:(CDStruct_1b6d18a9)arg1 offset:(BOOL)arg2;
- (id)metadataMediaStart;
- (id)metadataMediaEnd;
- (id)metadataMediaDuration;
- (id)metadataVideoFrameSize;
- (id)metadataVideoFieldDominance;
- (id)metadataVideoSampleRate;
- (id)metadataVideoFrameRate;
- (id)metadataAudioChannelCount;
- (id)metadataAudioFormat;
- (long long)compareMediaForDisplayName:(id)arg1;
- (id)descriptionWithIndent:(long long)arg1;
- (CDStruct_1b6d18a9)sampleDuration;
- (int)_resolveTemporalResolution:(int)arg1;
- (CDStruct_1b6d18a9)sampleDurationForTemporalResolutionMode:(int)arg1;
- (BOOL)timeOnSampleBoundary:(CDStruct_1b6d18a9)arg1 temporalResolutionMode:(int)arg2;
- (BOOL)floorToMediaTimeToSampleBoundary:(CDStruct_1b6d18a9 *)arg1 media:(id)arg2 temporalResolutionMode:(int)arg3 error:(id *)arg4;
- (BOOL)floorToMediaTime:(CDStruct_1b6d18a9 *)arg1 media:(id)arg2 temporalResolutionMode:(int)arg3 error:(id *)arg4;
- (BOOL)ceilingToMediaTime:(CDStruct_1b6d18a9 *)arg1 media:(id)arg2 temporalResolutionMode:(int)arg3 error:(id *)arg4;
- (BOOL)floorTimeToSampleBoundary:(CDStruct_1b6d18a9 *)arg1 temporalResolutionMode:(int)arg2 error:(id *)arg3;
- (BOOL)floorTime:(CDStruct_1b6d18a9 *)arg1 temporalResolutionMode:(int)arg2 error:(id *)arg3;
- (BOOL)floorTowardsZeroTime:(CDStruct_1b6d18a9 *)arg1 temporalResolutionMode:(int)arg2 error:(id *)arg3;
- (BOOL)ceilingTime:(CDStruct_1b6d18a9 *)arg1 temporalResolutionMode:(int)arg2 error:(id *)arg3;
- (BOOL)roundOutTimeRange:(CDStruct_e83c9415 *)arg1 temporalResolutionMode:(int)arg2 error:(id *)arg3;
- (BOOL)roundInTimeRange:(CDStruct_e83c9415 *)arg1 temporalResolutionMode:(int)arg2 error:(id *)arg3;
- (CDStruct_1b6d18a9)editingFrameDuration;
- (CDStruct_60067b7e)audioMD5:(int)arg1;
- (CDStruct_e83c9415)untimedClippedRange;
- (CDStruct_e83c9415)untimedAudioClippedRange;
- (void)_validateThumbMD5InfoProxyState;
- (id)thumbMD5InfoForTime:(CDStruct_1b6d18a9)arg1;
- (void)addThumbMD5Info:(id)arg1;
- (BOOL)_invalidateThumbMD5Range:(CDStruct_e83c9415)arg1;
- (void)invalidateThumbMD5Range:(CDStruct_e83c9415)arg1;
- (id)thumbMD5Infos;
- (void)setThumbMD5Infos:(id)arg1;
@property(nonatomic) BOOL isThumbMD5InfoProxy; // @synthesize isThumbMD5InfoProxy=_isThumbMD5InfoProxy;
@property(retain, nonatomic) FFThumbnailRequest *okIconImageRequest; // @synthesize okIconImageRequest=_okIconImageRequest;

@end


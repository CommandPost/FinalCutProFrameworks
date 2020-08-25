//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFBaseDSObject.h>

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class FFVideoFormat, FFVideoProps, NSDictionary, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FFSequenceInfo : FFBaseDSObject <NSSecureCoding, NSCopying>
{
    CDStruct_e83c9415 _mediaRange;
    CDStruct_1b6d18a9 _timecodeFrameDuration;
    long long _timecodeDisplayDropFrame;
    NSDictionary *_metadata;
    NSMutableDictionary *_thumbnailMD5sKeyedByQuality;
    NSString *_mediaIdentifier;
    NSString *_videoFormatKey;
    BOOL _hasAudio;
    BOOL _hasVideo;
    BOOL _isTrailer;
    BOOL _isAppPreview;
    BOOL _requiresLegacyUpgrade;
    int _sphericalProjectionType;
    int _stereoscopicMode;
    long long _editCount;
    long long _effectCount;
    long long _transitionCount;
    NSMutableDictionary *_thumbnailRequestsKeyedByQuality;
    NSMutableDictionary *_thumbnailReadyBlocksKeyedByQuality;
    FFVideoProps *_videoProps;
    FFVideoProps *_cachedVideoProps;
    unsigned int _audioChannelCount;
    double _audioSampleRate;
}

+ (BOOL)supportsSecureCoding;
+ (id)sequenceMDKeysToCache;
+ (id)copyClassDescription;
+ (BOOL)classIsAbstract;
+ (void)initialize;
@property unsigned int audioChannelCount; // @synthesize audioChannelCount=_audioChannelCount;
@property double audioSampleRate; // @synthesize audioSampleRate=_audioSampleRate;
@property long long transitionCount; // @synthesize transitionCount=_transitionCount;
@property long long effectCount; // @synthesize effectCount=_effectCount;
@property long long editCount; // @synthesize editCount=_editCount;
@property(nonatomic) int stereoscopicMode; // @synthesize stereoscopicMode=_stereoscopicMode;
@property(nonatomic) int sphericalProjectionType; // @synthesize sphericalProjectionType=_sphericalProjectionType;
@property(nonatomic) BOOL requiresLegacyUpgrade; // @synthesize requiresLegacyUpgrade=_requiresLegacyUpgrade;
@property(nonatomic) BOOL isAppPreview; // @synthesize isAppPreview=_isAppPreview;
@property(nonatomic) BOOL isTrailer; // @synthesize isTrailer=_isTrailer;
@property(retain, nonatomic) NSMutableDictionary *thumbnailMD5sKeyedByQuality; // @synthesize thumbnailMD5sKeyedByQuality=_thumbnailMD5sKeyedByQuality;
@property long long timecodeDisplayDropFrame; // @synthesize timecodeDisplayDropFrame=_timecodeDisplayDropFrame;
@property CDStruct_1b6d18a9 timecodeFrameDuration; // @synthesize timecodeFrameDuration=_timecodeFrameDuration;
@property(copy, nonatomic) NSString *videoFormatKey; // @synthesize videoFormatKey=_videoFormatKey;
@property(copy, nonatomic) NSString *mediaIdentifier; // @synthesize mediaIdentifier=_mediaIdentifier;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setAutoEdit:(BOOL)arg1;
@property BOOL hasVideo;
@property BOOL hasAudio;
- (id)mdValueForKey:(id)arg1;
- (void)mdSetValue:(id)arg1 forKey:(id)arg2;
- (id)metadata;
- (void)setMetadata:(id)arg1;
- (BOOL)shouldCacheMDValueForKey:(id)arg1;
- (id)legacySequenceID;
@property(retain, nonatomic) FFVideoProps *videoProps; // @synthesize videoProps=_videoProps;
@property(readonly, nonatomic) FFVideoFormat *videoFormat;
@property(readonly, nonatomic) CDStruct_1b6d18a9 sampleDuration;
- (int)fieldDominance;
- (CDStruct_1b6d18a9)frameDuration;
- (struct CGSize)pixelFrameSize;
- (struct CGSize)frameSize;
- (id)loadSequence:(id *)arg1;
- (BOOL)isSequenceLoaded;
- (BOOL)autoEdit;
- (void)setThumbnailMD5:(id)arg1 forQuality:(int)arg2;
- (id)thumbnailMD5ForQuality:(int)arg1;
- (void)thumbImageReadyForRequest:(id)arg1 thumbnailImage:(id)arg2 requestCanceled:(BOOL)arg3 addThumbnailToEvent:(BOOL)arg4;
- (void)requestThumbnailImageForQuality:(int)arg1 addThumbnailToEvent:(BOOL)arg2 removeTitles:(BOOL)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)setModDate:(id)arg1;
- (id)metadataContentModDate;
- (id)modDate;
- (void)setDisplayName:(id)arg1;
- (id)displayName;
@property(nonatomic) CDStruct_e83c9415 mediaRange;
- (void)dealloc;
- (id)init;

@end


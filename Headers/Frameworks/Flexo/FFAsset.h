//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFMedia.h>

#import "NSCoding.h"
#import "NSCopying.h"

@class FFDominantMotionMediaRep, FFFlowMediaRep, FFMediaRep, FFProvider, FFVideoProps, NSDictionary, NSIndexSet, NSString;

@interface FFAsset : FFMedia <NSCoding, NSCopying>
{
    NSString *_mediaIdentifier;
    FFVideoProps *_videoProps;
    NSString *_videoFormatName;
    FFMediaRep *_originalMediaRep;
    FFMediaRep *_optimizedMediaRep;
    FFMediaRep *_proxyMediaRep;
    FFFlowMediaRep *_flowMediaRep;
    FFDominantMotionMediaRep *_dominantMotionMediaRep;
    FFMediaRep *_sidecarMediaRep;
    long long _frameExtractionMode;
    NSString *_uttype;
    float _rotationDegrees;
    long long _alphaHandling;
    NSIndexSet *_supportedAlphaHandlingModes;
    long long _fieldDominanceOverride;
    NSIndexSet *_supportedDominanceOverrides;
    long long _colorSpaceOverride;
    NSIndexSet *_supportedColorSpaceOverrides;
    long long _anamorphicType;
    int _logEncodingType;
    long long _logProcessingMode;
    NSIndexSet *_supportedLogProcessingModes;
    long long _audioSourceCount;
    NSDictionary *_audioSourceDict;
    NSDictionary *_videoSourceDict;
    FFProvider *_provider;
    int _quality;
    BOOL _isObservingQuality;
    BOOL _forceNoProxy;
    BOOL _videoCodecMissing;
}

+ (BOOL)playerQualityChanging;
+ (int)currentQuality;
+ (void)initialize;
+ (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
+ (void)playerQualityChanged;
+ (id)copyClassDescription;
+ (BOOL)classIsAbstract;
@property(readonly, nonatomic) BOOL videoCodecMissing; // @synthesize videoCodecMissing=_videoCodecMissing;
@property(readonly, nonatomic) NSDictionary *videoSourceDict; // @synthesize videoSourceDict=_videoSourceDict;
@property(nonatomic) BOOL forceNoProxy; // @synthesize forceNoProxy=_forceNoProxy;
@property(retain, nonatomic) NSString *uttype; // @synthesize uttype=_uttype;
@property(readonly, nonatomic) NSString *mediaIdentifier; // @synthesize mediaIdentifier=_mediaIdentifier;
- (CDStruct_bdcb2b0d)audioMD5:(int)arg1;
- (void)setMetadataColorSpaceOverride:(long long)arg1;
- (long long)metadataColorSpaceOverride;
- (void)setMetadataAnamorphicType:(long long)arg1;
- (long long)metadataAnamorphicType;
- (void)setMetadataFieldDominanceOverride:(long long)arg1;
- (long long)metadataFieldDominanceOverride;
- (void)setMetadataAlphaHandling:(long long)arg1;
- (long long)metadataAlphaHandling;
- (id)mdTargetForKey:(id)arg1;
- (id)analysisFileURLs;
- (id)fileURLs:(int)arg1;
- (void)addClipRefsToSet:(id)arg1;
- (id)clipRefs;
- (void)addAssetRefsToSet:(id)arg1;
- (id)assetRefs;
- (void)addAssetsToSet:(id)arg1;
- (id)assets;
- (id)debugDescriptionWithIndentLevel:(unsigned int)arg1;
- (id)newProvider;
- (id)_newFrameExtractionProviderForQuality:(int)arg1 disableFilePropertyOverrides:(BOOL)arg2;
- (id)_newMediaRepProviderForQuality:(int)arg1 fallBackToAnyQuality:(BOOL)arg2 disableFilePropertyOverrides:(BOOL)arg3;
- (id)_offlineCacheIdentifier:(int)arg1;
- (id)_frameExtractionCacheIdentifier;
- (id)assetCacheIdentifier:(int)arg1;
- (id)_appendCacheIdentifierAdditions:(id)arg1;
- (BOOL)assetHasPropertyOverrides;
- (id)_fileOverridesDict;
- (void)_playerQualityChangedObserver:(id)arg1;
- (void)sourceRangeInvalidated:(id)arg1;
- (void)_startObservingProvider:(id)arg1;
- (void)_stopObservingProvider:(id)arg1;
- (void)_providerClosing:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)canIngest;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (int)highQualityOfflineReason;
- (int)proxyOfflineReason;
- (BOOL)mediaAvailable;
- (BOOL)supportsOptimizedQuality;
- (BOOL)highQualityAvailable;
- (BOOL)originalAvailable;
- (BOOL)proxyAvailable;
- (id)currentRep;
- (BOOL)relinkMedia:(id)arg1 repType:(id)arg2 manageFileType:(int)arg3 fileContentChanged:(BOOL)arg4 error:(id *)arg5;
- (void)invalidate;
- (void)invalidateWithUnknownActionScope:(CDUnknownBlockType)arg1;
- (void)_invalidateProvider:(id)arg1;
- (void)deferredInvalidate;
- (void)_mainThreadInvalidate;
- (void)purgeTranscodedMedia;
- (void)purgeGeneratedMedia;
- (BOOL)isPSD;
- (void)setMediaIdentifierForOfflineAsset:(id)arg1;
- (id)assetFilename;
- (BOOL)supportsLogProcessing;
@property(nonatomic) long long logProcessingMode;
- (BOOL)supportsColorSpaceOverride;
@property(nonatomic) long long colorSpaceOverride; // @synthesize colorSpaceOverride=_colorSpaceOverride;
- (BOOL)supportsAnamorphicType;
@property(nonatomic) long long anamorphicType; // @synthesize anamorphicType=_anamorphicType;
- (BOOL)supportsDominanceOverride;
@property(nonatomic) long long fieldDominanceOverride; // @synthesize fieldDominanceOverride=_fieldDominanceOverride;
- (BOOL)supportsAlphaOverride;
@property(nonatomic) long long alphaHandling; // @synthesize alphaHandling=_alphaHandling;
- (void)_establishSupportedOverrideInfo:(id)arg1 beingCalledFromInit:(BOOL)arg2;
- (id)videoPropsForSourceKey:(id)arg1;
- (long long)videoSourceCount;
- (void)setAudioSourceDict:(id)arg1;
@property(readonly, nonatomic) NSDictionary *audioSourceDict;
@property(nonatomic) long long audioSourceCount;
- (void)organizeMediaRepIntoEvent:(id)arg1;
- (void)originalMediaRepChanged;
- (void)setRotationDegrees:(int)arg1;
- (int)rotationDegrees;
- (void)setFrameExtractionMode:(long long)arg1;
- (long long)frameExtractionMode;
- (int)pulldownDetection;
- (int)pulldownDetectionCompareFrames;
- (void)setSidecarMediaRep:(id)arg1;
- (id)sidecarMediaRep;
- (id)newDominantMotionMediaRep;
- (void)setDominantMotionMediaRep:(id)arg1;
- (id)dominantMotionMediaRep;
- (void)createFlowMediaRep;
- (void)setFlowVectors:(CDStruct_e83c9415)arg1;
- (void)setFlowMediaRep:(id)arg1;
- (id)flowMediaRep;
- (void)setProxyMediaRep:(id)arg1;
- (id)proxyMediaRep;
- (void)setOptimizedMediaRep:(id)arg1;
- (id)optimizedMediaRep;
- (void)setOriginalMediaRep:(id)arg1;
- (id)originalMediaRep;
- (void)forceSetVideoProps:(id)arg1;
@property(retain, nonatomic) FFVideoProps *videoProps;
- (void)setVideoFormatName:(id)arg1;
- (id)videoFormatName;
- (id)originalMediaURL;
- (BOOL)_supportsProxyMedia;
- (void)dealloc;
- (BOOL)addMediaRepForURL:(id)arg1 repType:(id)arg2 manageFileType:(int)arg3 project:(id)arg4;
- (void)_updateVideoProps:(int)arg1;
- (BOOL)update_addAudioSourceDict;
- (void)rebuildAudioSourceDictWithProvider:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 manageFileType:(int)arg2 project:(id)arg3;
- (id)init;
- (void)updateIdentity;
- (id)_fileMD5StringForURL:(id)arg1 baseFilename:(id)arg2;
- (BOOL)hasCameraTag;

@end


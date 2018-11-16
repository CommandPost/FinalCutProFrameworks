//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFBaseDSObject.h>

#import "FFAssetContainerProtocol.h"
#import "FFCHChannelDelegate.h"
#import "FFMD5Protocol.h"
#import "NSCopying.h"

@class FFCHObservableFolder, FFEffectController, FFEffectStack, FFMD5AndOffset, NSArray, NSData, NSMutableArray, NSObject, NSString;

@interface FFEffect : FFBaseDSObject <NSCopying, FFCHChannelDelegate, FFMD5Protocol, FFAssetContainerProtocol>
{
    FFEffectStack *_effectStack;
    NSString *_effectID;
    NSString *_effectType;
    NSString *_displayName;
    NSObject *_cachedChannelData;
    NSData *_cachedDynamicParams;
    FFCHObservableFolder *_channelFolder;
    NSArray *_ranges;
    _Bool _effectHasDynamicParams;
    NSMutableArray *_channelObjectRefs;
    BOOL _isOffline;
    int _cachedIsNoOp;
    int _effectBundleEncodingOptions;
    FFMD5AndOffset *_cachedAudioMD5;
    int _videoStreamsOpenOnEffect;
    int _pendingVideoStreamCloses;
    FFEffectController *_effectController;
}

+ (id)effectIDFromXMLElement:(id)arg1;
+ (id)newEffectWithXMLElement:(id)arg1;
+ (void)registerEffects;
+ (id)copyClassDescription;
+ (id)defaultVideoTransitionEffectID;
+ (BOOL)isVideoForEffectID:(id)arg1;
+ (id)descriptionForEffectID:(id)arg1;
+ (id)categoryForEffectID:(id)arg1;
+ (id)displayNameForEffectID:(id)arg1;
+ (id)displayNameForEffectType:(id)arg1;
+ (id)registeredEffectIDsForClass:(Class)arg1;
+ (Class)classForEffectID:(id)arg1;
+ (id)firstRegisteredEffectIDContainingSubstring:(id)arg1;
+ (id)registeredEffectIDsForEffectTypes:(id)arg1;
+ (id)registeredEffectIDsForEffectType:(id)arg1;
+ (id)effectTypeForEffectID:(id)arg1;
+ (id)userVisibleEffectIDs;
+ (id)allRegisteredEffectIDs;
+ (id)propertiesForEffect:(id)arg1;
+ (id)_registryEntryForEffectID:(id)arg1;
+ (BOOL)effectIDIsRegistered:(id)arg1;
+ (id)newEffectWithID:(id)arg1;
+ (void)registerEffectClass:(Class)arg1 forEffectID:(id)arg2 withProperties:(id)arg3;
+ (void)runDeferredRegistration;
+ (void)deferEffectRegistrationForClass:(Class)arg1;
+ (id)_effectRegistryForLookup;
+ (void)appFinishedLaunching:(id)arg1;
+ (void)ensureEffectsRegistered;
+ (id)_effectRegistry;
+ (void)initialize;
+ (void)_registerBuiltInEffects;
+ (void)_registerEffectsInBundle:(id)arg1 atPath:(id)arg2;
+ (id)_registeredEffectClasses;
@property(nonatomic) int effectBundleEncodingOptions; // @synthesize effectBundleEncodingOptions=_effectBundleEncodingOptions;
@property(retain, nonatomic) FFMD5AndOffset *cachedAudioMD5; // @synthesize cachedAudioMD5=_cachedAudioMD5;
- (id)exportAsXMLElementWithDeprecatedEffectData:(id)arg1;
- (id)exportAsXMLElementWithExcludedChannels:(id)arg1;
- (id)exportAsXMLElement;
- (void)loadEffectWithXMLElement:(id)arg1;
- (id)effectController;
- (CDStruct_1b6d18a9)sampleDurationOfContainer;
- (id)fileURLs:(int)arg1;
- (id)mediaRefs;
- (void)addClipRefsToSet:(id)arg1 insideClipRefs:(BOOL)arg2;
- (void)addClipRefsToSet:(id)arg1;
- (id)clipRefs;
- (void)addAssetRefsToSet:(id)arg1 insideClipRefs:(BOOL)arg2;
- (void)addAssetRefsToSet:(id)arg1;
- (id)assetRefs;
- (void)addAssetsToSet:(id)arg1;
- (id)assets;
- (void)videoStreamClosed:(id)arg1;
- (void)_installVideoStreamClosedSelectorOutsideOfLockScopes:(id)arg1;
- (void)_processEffectsNeedingVideoStreamCloseViaTimer:(id)arg1;
- (void)_processEffectsNeedingVideoStreamClose:(id)arg1;
- (void)_videoStreamClosedInternal:(id)arg1;
- (void)videoStreamOpened:(id)arg1;
- (void)lastVideoStreamClosedOnEffect;
- (void)firstVideoStreamOpenedOnEffect;
- (CDStruct_bdcb2b0d)audioMD5:(int)arg1;
- (id)newAudioMD5AndOffset:(int)arg1;
- (void)_clearCachedAudioMD5;
- (BOOL)isContextAware;
- (void)willReplace:(id)arg1;
- (id)newEffectNodeWithInput:(id)arg1 forKey:(id)arg2 withOffset:(CDStruct_1b6d18a9)arg3 identifier:(id)arg4;
- (id)newEffectNode;
- (BOOL)pointIsOverEffect:(struct CGPoint)arg1 playerVideoModule:(id)arg2 options:(id)arg3;
- (CDStruct_bdcb2b0d)getContextBasedMD5Adjustment:(id)arg1;
- (CDStruct_1b6d18a9)durationToUseForMD5Calcs;
- (BOOL)effectDurationImpactsMD5;
- (BOOL)effectStartAndDurationImpactMD5;
- (BOOL)outputIsFullyTransparentAtTime:(CDStruct_1b6d18a9)arg1;
- (BOOL)effectIntroducesAlpha;
- (BOOL)effectVariesOverTime;
- (BOOL)hasAnimatedKeyframes;
- (BOOL)isAtDefaultSettings;
- (BOOL)isNoOp;
- (BOOL)shouldChannelBeAdjustedByRetime:(id)arg1;
- (BOOL)isRateConformEffect;
- (BOOL)isRetimeEffect;
- (void)setSelected:(BOOL)arg1;
- (BOOL)selected;
- (void)setEnabled:(BOOL)arg1;
- (BOOL)enabled;
- (CDStruct_1b6d18a9)suggestedDuration;
- (unsigned int)attributeCopyingFlags;
- (void)effectStackAnchoredObjectDidChange;
- (void)setEffectStack:(id)arg1;
- (id)effectStack;
- (float)costAtTime:(CDStruct_1b6d18a9)arg1 context:(id)arg2;
- (BOOL)hasAudio;
- (BOOL)hasVideo;
- (void)setEffectType:(id)arg1;
- (id)effectType;
- (id)processingPixelFormat;
- (struct CGColorSpace *)processingColorSpace;
- (id)newUpdatedDownstreamPT:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2;
- (void)modifyImageTransform:(id)arg1 andImageSpaceBounds:(struct CGRect *)arg2 atTime:(CDStruct_1b6d18a9)arg3;
- (void)createMixChannelInFolder:(id)arg1 withID:(unsigned int)arg2;
- (id)newEffectSpecificTokensAtTime:(CDStruct_1b6d18a9)arg1 duration:(CDStruct_1b6d18a9)arg2 withInputStream:(id)arg3 context:(id)arg4 downstreamPT:(id)arg5;
- (void)setRate:(double)arg1;
- (void)prerollEnd;
- (void)prerollBegin:(CDStruct_1b6d18a9)arg1 rate:(double)arg2 sync:(id)arg3;
- (id)newMixedImageAtTime:(CDStruct_1b6d18a9)arg1 withBeforeImage:(id)arg2 andAfterImage:(id)arg3;
- (id)newImageAtTime:(CDStruct_1b6d18a9)arg1 duration:(CDStruct_1b6d18a9)arg2 withInputStream:(id)arg3 context:(id)arg4 downstreamPT:(id)arg5 channelOffset:(CDStruct_1b6d18a9)arg6 roi:(const struct CGRect *)arg7;
- (id)newImageAtTime:(CDStruct_1b6d18a9)arg1 duration:(CDStruct_1b6d18a9)arg2 withInputStream:(id)arg3 context:(id)arg4 downstreamPT:(id)arg5 channelOffset:(CDStruct_1b6d18a9)arg6;
- (CDStruct_bdcb2b0d)md5;
- (CDStruct_e83c9415)effectSubSegmentForTime:(CDStruct_1b6d18a9)arg1 channelOffset:(CDStruct_1b6d18a9)arg2 sampleDur:(CDStruct_1b6d18a9)arg3;
- (id)simplifiesToPassThruAtTime:(CDStruct_1b6d18a9)arg1 forInputSource:(id)arg2 sampleDur:(CDStruct_1b6d18a9)arg3 context:(id)arg4 channelOffset:(CDStruct_1b6d18a9)arg5;
- (id)anchoredObjectForChannelAssociateModelObject:(id)arg1;
- (void)effectWasReloadedToStack;
- (void)effectWasRemovedFromStack;
- (void)effectWasAddedToStack;
- (id)inputKeys;
- (void)markForDynamicParameterUsage;
- (id)onScreenControlsForChannelFolder:(id)arg1 effectStack:(id)arg2;
- (id)channelChangeDelegate;
- (id)mixChannel;
- (id)keyframeableChannels;
- (id)primaryAnimationChannel;
- (id)newChannelFolderWithParent:(id)arg1 name:(id)arg2;
- (void)passEffectNotificationUpChain:(id)arg1 userInfo:(id)arg2 informParents:(BOOL)arg3;
- (void)_channelParameterChanged:(id)arg1;
- (void)channelsWereReset;
- (void)channelParameterChanged:(id)arg1;
- (BOOL)_cachedIsNoOp;
- (void)_resetCachedIsNoOp;
- (id)channelFolder;
- (BOOL)channelFolderIsLoaded;
- (void)createChannelsInFolder:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (id)curveDisplayName;
- (id)displayName;
- (void)setReferencedObject:(id)arg1 forChannel:(id)arg2;
- (id)referencedObjectForChannel:(id)arg1;
- (id)observedObjectForChannel:(id)arg1;
- (void)removeObjectFromChannelObjectReferencesAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 inChannelObjectReferencesAtIndex:(unsigned long long)arg2;
- (id)channelObjectReferences;
- (void)setEffectDynamicParameters:(id)arg1;
- (void)_loadDynamicParameters:(id)arg1;
- (void)_addDynamicChannels:(id)arg1 toFolder:(id)arg2;
- (id)effectDynamicParameters;
- (BOOL)channel:(id)arg1 contextInfo:(void *)arg2;
- (void)setEffectHasDynamicParams:(_Bool)arg1;
- (_Bool)effectHasDynamicParams;
- (void)setChannelData:(id)arg1;
- (id)channelData;
- (void)setEffectRanges:(id)arg1;
- (id)effectRanges;
- (void)setEffectID:(id)arg1;
- (void)setLoadsInForeground:(BOOL)arg1;
- (void)cancelBackgroundLoad;
- (void)waitForBackgroundLoad;
- (void)increaseBackgroundLoadPriority;
- (BOOL)isLoadingInBackground;
- (BOOL)analysisAvailable;
- (BOOL)needsAnalysis;
- (BOOL)hasOfflineReferences;
- (BOOL)isOffline;
- (id)effectID;
- (id)storeForUndo;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)shouldNotificationsChannelCauseInternalStateChange:(id)arg1;
- (BOOL)_shouldEncodeChannels:(id)arg1;
- (BOOL)writeDefaultChannels;
- (BOOL)usesDefaultChannelDataEncoding;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)_decodeFromCoder:(id)arg1 into:(id)arg2;
- (void)_copyWithZone:(struct _NSZone *)arg1 into:(id)arg2;
- (void)_postInit:(id)arg1;
- (void)cleanUpChannelFolderDecendentsAsModelObjectsBackingHaveBeenDeleted;
- (void)dealloc;
- (id)initWithEffectID:(id)arg1;

@end


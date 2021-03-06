//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FFResourceLocator, NSArray, NSDictionary, NSString;

@interface FFProvider : NSObject
{
    NSString *_suiteID;
    NSString *_key;
    FFResourceLocator *_resourceLocator;
    struct FFSynchronizable _sourcesLock;
    NSDictionary *_sources;
    NSArray *_sourceKeys;
    struct _opaque_pthread_t *_threadInSetupSources;
    long long _providerClusterRefcount;
    _Atomic int _sourcesState;
    NSDictionary *_videoPropsOverrides;
    BOOL _isGoingAway;
    NSString *_libraryIdentifier;
}

+ (id)primeProviderForRemoteURL:(id)arg1;
+ (id)newOfflineVideoSourceDictForSourceCount:(long long)arg1 isStill:(BOOL)arg2 videoProps:(id)arg3;
+ (id)newProviderWithMedia:(id)arg1;
+ (id)newProviderForURL:(id)arg1;
+ (id)newProviderWithRemoteURL:(id)arg1;
+ (id)newProviderWithAssetFileID:(id)arg1;
+ (Class)providerClassForResourceLocator:(id)arg1;
+ (BOOL)supportsRemoteURLs;
+ (Class)providerClassForURL:(id)arg1 extension:(id)arg2;
+ (id)offlineAudioSourceKeysForAudioSourceCount:(long long)arg1;
+ (id)offlineVideoSourceKeysForVideoSourceCount:(long long)arg1 isStill:(BOOL)arg2;
+ (id)getUTTypeForURL:(id)arg1;
+ (id)_getUTTypeForURL:(id)arg1;
+ (id)extensionForURL:(id)arg1;
+ (id)extensions;
+ (id)utis;
+ (unsigned char)providerHasValidSourceForURL:(id)arg1 pluginMissing:(char *)arg2 missingDueToRosetta:(char *)arg3;
+ (unsigned char)providerHasValidSourceForURL:(id)arg1;
+ (Class)providerClassForUTIType:(id)arg1 extension:(id)arg2;
+ (id)registeredProviderExtensions;
+ (Class)providerClassForExtension:(id)arg1;
+ (id)_providerExtensionsDictionary;
+ (void)_registerProviderClass:(Class)arg1;
+ (void)_registerBuiltInProviders;
+ (void)_registerProvidersInBundle:(id)arg1 atPath:(id)arg2;
+ (void)initialize;
+ (BOOL)isStill;
+ (BOOL)canHaveAudio;
+ (BOOL)canHaveVideo;
+ (void)DEBUG_getCurrentInternalTokenCount:(int *)arg1 hwmInternal:(int *)arg2 externCount:(int *)arg3 externHWM:(int *)arg4;
+ (void)loadAVURLAssetPropertiesWithURL:(id)arg1 promiseOp:(id)arg2;
+ (id)primeAVURLAssetWithURL:(id)arg1;
@property(readonly, nonatomic) NSString *libraryIdentifier; // @synthesize libraryIdentifier=_libraryIdentifier;
- (id)newFirstVideoSource;
- (id)firstVideoSource;
- (BOOL)isOfflineProvider;
- (id)closedCaptionsInRange:(CDStruct_e83c9415)arg1;
- (BOOL)hasClosedCaptions;
- (BOOL)hasAudio;
- (id)displayName;
- (id)description;
- (void)applyBlockToEachSource:(CDUnknownBlockType)arg1;
- (id)newFirstSource;
- (id)firstSource;
- (id)sourceKeys;
- (id)sourceKeyForObject:(id)arg1;
- (id)newSourceForKey:(id)arg1;
- (id)sourceForKey:(id)arg1;
- (id)sources;
- (id)_sourcesMakeIfNil;
- (void)_setSource:(id)arg1 forKey:(id)arg2;
- (void)_setupSources;
- (id)contentIdentifier;
- (id)eventDocumentIDAndPath;
- (id)resourceLocator;
- (id)suiteID;
- (id)uttype;
- (id)sidecarFileURL;
- (id)url;
- (BOOL)belongsToLibrary:(id)arg1;
- (id)videoPropsOverride;
- (void)setVideoPropsOverride:(id)arg1;
- (BOOL)isPurgeable;
- (id)retain;
- (oneway void)release;
- (void)_decrementClusterRefcount;
- (void)_incrementClusterRefcount;
- (long long)_baseProviderClusterRefCount;
- (void)dealloc;
- (id)object;
- (id)initWithLibraryIdentifier:(id)arg1;
- (id)initWithMedia:(id)arg1;
- (id)initWithResourceLocator:(id)arg1;
- (id)init;
- (void)_initCommon;
- (id)key;
- (void)setKey:(id)arg1;
- (id)firstAudioSource;

@end


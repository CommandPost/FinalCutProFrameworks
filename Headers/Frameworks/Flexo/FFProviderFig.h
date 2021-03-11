//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Flexo/FFProvider.h>

#import <Flexo/FFMediaReaderBasedProvider-Protocol.h>
#import <Flexo/FFSeedProviderMD5Protocol-Protocol.h>

@class AVURLAsset, FFMIORADAsset, NSObject, NSString, NSURL;
@protocol OS_dispatch_queue;

@interface FFProviderFig : FFProvider <FFSeedProviderMD5Protocol, FFMediaReaderBasedProvider>
{
    CDStruct_bdcb2b0d _md5;
    FFMIORADAsset *_radAsset;
    CDStruct_e83c9415 _avRange;
    NSObject<OS_dispatch_queue> *_urlCacheQueue;
    NSURL *_lastKnownURL;
    NSURL *_lastKnownURLStandardized;
    NSString *_lastKnownURLPath;
    unsigned long long _estimatedBandwidth;
    AVURLAsset *_primedAVURLAsset;
    NSURL *_sidecarFileURL;
    NSString *_MD5Seed;
    struct FFSynchronizable _MD5Lock;
}

+ (BOOL)supportsRemoteURLs;
+ (id)primeProviderForRemoteURL:(id)arg1;
+ (struct opaqueCMFormatDescription *)_copyFirstVideoFormatDescriptionForURL:(id)arg1;
+ (unsigned int)videoCodecForURL:(id)arg1;
+ (BOOL)videoCodecGreaterThan8Bit:(id)arg1;
+ (id)extensions;
+ (id)utis;
+ (void)releaseSharedInstance;
+ (void)initialize;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)pluginMissing:(char *)arg1;
- (id)sidecarFileURL;
- (void)setSidecarFileURL:(id)arg1;
- (id)closedCaptionsInRange:(CDStruct_e83c9415)arg1;
- (BOOL)hasClosedCaptions;
- (void)fixSpotlightMetadata:(id)arg1;
- (void)sniffSpotlightMetadataFig:(id)arg1;
- (id)copyTimecodeBasedReelName;
- (void *)copyMediaReaderObject;
- (unsigned long long)estimatedBandwidth;
- (id)MD5Seed;
- (void)setMD5Seed:(id)arg1;
- (CDStruct_e83c9415)_avRange;
- (CDStruct_bdcb2b0d)_md5;
- (id)displayName;
- (id)contentIdentifier;
- (id)radAsset;
- (void)_setupSources;
- (id)_debugFileName;
- (void)dealloc;
- (id)initWithMedia:(id)arg1;
- (id)_initSetup;
- (id)initWithResourceLocator:(id)arg1;
- (id)initWithAssetFileID:(id)arg1;
- (struct FFMediaReader *)copyMediaReader;
- (id)initWithAVURLAsset:(id)arg1;
- (int)videoCodecBitRateInKbps;

@end


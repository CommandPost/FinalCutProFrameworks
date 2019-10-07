//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFProvider.h>

#import "FFMediaReaderBasedProvider.h"
#import "FFSeedProviderMD5Protocol.h"

@class FFMIORADAsset, NSObject<OS_dispatch_queue>, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface FFProviderFig : FFProvider <FFSeedProviderMD5Protocol, FFMediaReaderBasedProvider>
{
    CDStruct_bdcb2b0d _md5;
    FFMIORADAsset *_radAsset;
    CDStruct_e83c9415 _avRange;
    NSString *_MD5Seed;
    NSObject<OS_dispatch_queue> *_urlCacheQueue;
    NSURL *_lastKnownURL;
    NSURL *_lastKnownURLStandardized;
    NSString *_lastKnownURLPath;
    unsigned long long _estimatedBandwidth;
}

+ (struct opaqueCMFormatDescription *)_copyFirstVideoFormatDescriptionForURL:(id)arg1;
+ (unsigned int)videoCodecForURL:(id)arg1;
+ (BOOL)videoCodecGreaterThan8Bit:(id)arg1;
+ (id)extensions;
+ (id)utis;
+ (void)releaseSharedInstance;
+ (void)initialize;
- (id)subtitlesInRange:(CDStruct_e83c9415)arg1;
- (id)closedCaptionsInRange:(CDStruct_e83c9415)arg1;
- (BOOL)hasSubtitles;
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
- (id)eventDocumentIDAndPath;
- (id)radAsset;
- (void)_setupSources;
- (id)_debugFileName;
- (void)dealloc;
- (id)initWithMedia:(id)arg1;
- (id)initWithAssetFileID:(id)arg1;
-     // Error parsing type: ^{FFMediaReader=^^?^{__CFString}i{atomic<int>=Ai}df@{stat=iSSQIIi{timespec=qq}{timespec=qq}{timespec=qq}{timespec=qq}qqiIIi[2q]}{_opaque_pthread_mutex_t=q[56c]}{atomic<bool>=AB}{?=qiIq}@@{_opaque_pthread_mutex_t=q[56c]}@B[3@]}16@0:8, name: copyMediaReader
- (int)videoCodecBitRateInKbps;

@end


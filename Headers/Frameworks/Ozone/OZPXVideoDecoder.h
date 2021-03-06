//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Ozone/PXVideoReading-Protocol.h>

@class NSDictionary, NSMutableDictionary;
@protocol PROAPIAccessing;

@interface OZPXVideoDecoder : NSObject <PXVideoReading>
{
    struct HGSynchronizable *_lockSync;
    id <PROAPIAccessing> apiManager;
    CDStruct_e83c9415 videoTimeRange;
    CDStruct_1b6d18a9 endFrameTime;
    CDStruct_1b6d18a9 lastFrameRetrieved;
    CDStruct_1b6d18a9 sampleDuration;
    CDStruct_1b6d18a9 frameDuration;
    CDStruct_1b6d18a9 signedSampleDuration;
    unsigned long long totalNumSamples;
    unsigned long long nextSampleNum;
    unsigned long long analysisDirection;
    unsigned long long fieldOrder;
    NSMutableDictionary *rendererMapping;
    long long location;
    unsigned long long colorInfo;
    struct atomic<bool> processing;
    struct atomic<bool> invalidated;
    struct atomic<bool> isPaused;
    NSDictionary *_clipInfo;
}

@property(retain) NSDictionary *clipInfo; // @synthesize clipInfo=_clipInfo;
- (unsigned long long)registeryIDForRendererID:(int)arg1;
- (void)finish;
- (void)start;
- (id)dictionaryForFxMatrix44:(id)arg1;
- (id)copyNextVideoFrameAndFrameInfo:(id *)arg1;
- (void)unpause;
- (void)pause;
- (void)blockIfNeeded;
- (void)copyFxTexture:(id)arg1 toIOSurface:(id)arg2;
- (void)setVideoFormat:(struct ProAnalysisVideoFormat)arg1;
- (void)dealloc;
- (id)initWithAPIManager:(id)arg1 objectName:(id)arg2 andTimeRangeToDecode:(CDStruct_e83c9415)arg3 direction:(unsigned long long)arg4 fieldOrder:(unsigned long long)arg5;

@end


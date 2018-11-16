//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFStreamVideo.h>

@class FFPMRLogFunnel, FFPrerollSync, FFPrerollSyncFig, FFVideoProps, NSMutableArray, NSRecursiveLock, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface FFStreamVideoFig : FFStreamVideo
{
    int _isMPEG2;
    int _avchdGOPPattern;
    int _sampleContentAndFieldOrder;
    NSMutableArray *_pendingRequests;
    _Bool _isUnusableSource;
    NSString *_eventDocumentIDAndPath;
    void *_mediaReader;
    void *_videoDecoder;
    FFVideoProps *_videoProps;
    NSRecursiveLock *_lock;
    double _rate;
    FFPrerollSync *_prerollSync;
    FFPrerollSyncFig *_prerollSyncFig;
    int _prerollDepth;
    FFPMRLogFunnel *_codecPMRFunnel;
    FFPMRLogFunnel *_figProviderPMRFunnel;
    NSURL *_cachedURL;
    BOOL _workaround15320638;
}

@property(readonly) BOOL workaround15320638; // @synthesize workaround15320638=_workaround15320638;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_cachedURL;
- (int)_playbackDirection;
- (BOOL)waitForCachedImageCharacteristics:(int)arg1 forSpatialQuality:(int)arg2 beforeDate:(id)arg3;
- (void)storeCachedImageInfos:(id *)arg1 forQuality:(int)arg2 count:(int)arg3;
- (struct CGColorSpace *)lookupCachedColorSpaceForQuality:(int)arg1;
- (id)lookupCachedPTForQuality:(int)arg1 lineSel:(int)arg2;
- (id)newImageAtTimeIgnoringCache:(CDStruct_1b6d18a9)arg1 duration:(CDStruct_1b6d18a9)arg2 context:(id)arg3 schedInfo:(id)arg4 downstreamPT:(id)arg5 roi:(const struct CGRect *)arg6 graphBuildInfo:(id)arg7;
- (void)setRate:(double)arg1;
- (id)eventDocumentIDAndPath;
- (void)removeToken:(id)arg1;
- (void)_removeToken:(id)arg1 hintSearchBackwards:(_Bool)arg2;
- (id)newScheduleTokenAtTimeIgnoringCache:(CDStruct_1b6d18a9)arg1 duration:(CDStruct_1b6d18a9)arg2 context:(id)arg3 schedInfo:(id)arg4 downstreamPT:(id)arg5;
- (id)_copyOrCreateScheduleTokenAtTime:(CDStruct_1b6d18a9)arg1 duration:(CDStruct_1b6d18a9)arg2 context:(id)arg3 outputPTS:(CDStruct_1b6d18a9)arg4 tQualOut:(int *)arg5 mediaTimeOut:(CDStruct_1b6d18a9 *)arg6 isGapOut:(char *)arg7;
- (CDStruct_1b6d18a9)calculateMediaTime:(CDStruct_1b6d18a9)arg1 duration:(CDStruct_1b6d18a9)arg2 tQual:(int)arg3;
- (int)_getLineSelForTime:(CDStruct_1b6d18a9)arg1 presentationRange:(CDStruct_e83c9415)arg2 tQual:(int)arg3 sQual:(int)arg4 retIsTemporallySecond:(_Bool *)arg5;
- (_Bool)_isValidRequest:(CDStruct_1b6d18a9)arg1 retDetails:(id *)arg2;
- (void)fixColorSpaceTags:(struct __CVBuffer *)arg1;
- (id)_newTokenWithMediaTime:(CDStruct_1b6d18a9)arg1 videoCursor:(const struct FFVideoCursor *)arg2 decodedPixelFormat:(unsigned int)arg3 actualQuality:(int)arg4 priority:(int)arg5 outputPTS:(CDStruct_1b6d18a9)arg6;
- (void)prerollEnd;
- (void)prerollBegin:(CDStruct_1b6d18a9)arg1 rate:(double)arg2 sync:(id)arg3;
- (BOOL)_isPlaybackActive;
- (int)_streamPriority;
- (id)pixelTransformToField2ForQuality:(int)arg1;
- (id)_pixelTransformToField2ForQuality:(int)arg1;
- (id)pixelTransformToField1ForQuality:(int)arg1;
- (id)_pixelTransformToField1ForQuality:(int)arg1;
- (id)pixelTransformToFrameForQuality:(int)arg1;
- (id)_pixelTransformToFrameForQuality:(int)arg1;
- (int)actualQualityFromRequestedQuality:(int)arg1;
- (int)fieldDominance;
- (struct CGRect)pixelSpaceFrameBounds;
- (CDStruct_1b6d18a9)mapEditTimeIntoMediaTime:(CDStruct_1b6d18a9)arg1;
- (id)videoProps;
- (void)dealloc;
- (id)initWithSource:(id)arg1 context:(id)arg2 flags:(long long)arg3 options:(id)arg4;
- (id)_debugFileName;
- (id)description;

@end


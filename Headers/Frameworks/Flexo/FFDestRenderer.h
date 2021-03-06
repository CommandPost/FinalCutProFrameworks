//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Flexo/FFDestVideo.h>

#import <Flexo/FFDestRenderProtocol-Protocol.h>
#import <Flexo/FFPausableDestRenderProtocol-Protocol.h>

@class FFNRTFigClock, FFOnDiskRenderInfo, FFRenderer, NSArray, NSLock;

@interface FFDestRenderer : FFDestVideo <FFDestRenderProtocol, FFPausableDestRenderProtocol>
{
    FFNRTFigClock *_clock;
    NSLock *_lock;
    CDStruct_bdcb2b0d _lastUsedSegmentMD5;
    long long _lastUsedSegmentOffset;
    BOOL _isRunning;
    BOOL _needsUpdate;
    FFOnDiskRenderInfo *_renderInfo;
    NSArray *_renderFilesPaths;
    FFRenderer *_renderer;
    BOOL _isLastRenderDest;
}

+ (BOOL)supportsOSCs;
- (int)destRecommendedFFSVPriority;
- (BOOL)internal_wantsDithering:(id)arg1;
- (id)requestedImageInfo;
- (int)drawFieldsInterlaced;
- (void)setNeedsUpdate:(BOOL)arg1;
- (int)getFrameQueueStatus;
- (void)pushFrame:(id)arg1;
- (void)writeFrame:(id)arg1;
- (void)_updateSegmentStoreWhenWritesFinish;
- (void)_notifyPlayer;
- (BOOL)isRunning;
- (void)stop;
- (void)start:(id)arg1;
- (void)endRender;
- (void)beginRenderWithRenderer:(id)arg1 forLastDest:(BOOL)arg2;
- (void)finishedProcessing:(CDStruct_1b6d18a9)arg1;
- (_Bool)isPauseRequested;
- (_Bool)haveRenderCheckForPause;
- (void)startingToProcess:(CDStruct_1b6d18a9)arg1;
- (void)flush:(BOOL)arg1;
- (void)setPlayer:(id)arg1;
- (void)setSampleDuration:(CDStruct_1b6d18a9)arg1 fieldDominance:(int)arg2 sequenceBounds:(struct CGRect)arg3 sequenceCameraMode:(int)arg4;
- (void *)figClock;
- (void)dealloc;
- (id)initWithSampleDuration:(CDStruct_1b6d18a9)arg1 renderInfo:(id)arg2 renderFilesPaths:(id)arg3;

@end


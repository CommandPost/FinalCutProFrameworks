//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FFStorageLocationOutOfDiskSpaceProtocol.h"

@class FFContext, FFProvider, NSArray, NSConditionLock, NSLock;

@interface FFRenderer : NSObject <FFStorageLocationOutOfDiskSpaceProtocol>
{
    FFProvider *_provider;
    NSArray *_dests;
    FFContext *_context;
    NSArray *_destVideos;
    NSArray *_destAudios;
    CDStruct_1b6d18a9 _start;
    CDStruct_1b6d18a9 _duration;
    CDStruct_1b6d18a9 _end;
    float _progress;
    CDUnknownFunctionPointerType _progressCallback;
    CDStruct_1b6d18a9 _firstTimeToRender;
    CDStruct_1b6d18a9 _lastTimeToRender;
    double _renderDuration_seconds;
    NSLock *_lastRenderedRangeLock;
    CDStruct_e83c9415 _lastRenderedRange;
    double _hostTimeOfLastUpdate;
    NSLock *_stateUpdateLock;
    BOOL _shouldUpdateState;
    BOOL _autoCancelWhenEndTimeReached;
    BOOL _enableWorkingSpaceOverride;
    int _workingSpaceOverride;
    _Bool _stoppedDueToStorageLocFull;
    _Bool _stoppedDueToDestError;
    NSConditionLock *_renderComplete;
    NSConditionLock *_pause;
    BOOL _ackedPause;
}

@property _Bool stoppedDueToDestError; // @synthesize stoppedDueToDestError=_stoppedDueToDestError;
- (_Bool)stoppedDueToStorageLocFull;
- (id)description;
- (void)setWaitForThreadToAck:(_Bool)arg1;
- (_Bool)waitForThreadToAck;
- (BOOL)hasPaused;
- (BOOL)isPaused;
- (void)resumeRender;
- (void)pauseRender;
- (void)cancelRender;
- (void)rangeInvalidated:(id)arg1;
- (void)_conformStartAndDuration;
- (void)_rebuildPlayer;
- (void)_teardownPlayer;
- (id)player;
- (BOOL)renderRange:(CDStruct_e83c9415)arg1 cancelAtRangeEnd:(BOOL)arg2 storageLocationsToWatch:(id)arg3;
- (BOOL)renderRange:(CDStruct_e83c9415)arg1 cancelAtRangeEnd:(BOOL)arg2;
- (void)renderFrame:(CDStruct_1b6d18a9)arg1 rate:(double)arg2;
- (void)stopWritingFilesToLocation:(id)arg1;
- (void)destUnableToProcessFrame:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2 error:(id)arg3;
- (void)didRenderFrames:(CDStruct_e83c9415)arg1 forLastDest:(BOOL)arg2;
- (void)checkForPauseWhileRenderingFrames;
- (void)willRenderFrames;
- (void)_blockRenderIfPausedAndCheckForRenderError;
- (CDStruct_e83c9415)lastRenderedRange;
- (void)resetLastRenderedRange;
- (void)setLastRenderedRange:(CDStruct_e83c9415)arg1;
- (void)renderAllAndCancelAtRangeEnd:(BOOL)arg1;
- (void)renderAll;
- (void)setProgressCallback:(CDUnknownFunctionPointerType)arg1;
- (void)setProgress:(float)arg1;
- (float)progress;
- (id)getObjectToLock;
- (void)dealloc;
- (id)initWithProvider:(id)arg1 destVideos:(id)arg2 destAudios:(id)arg3 renderQuality:(int)arg4 overrideWorkingSpace:(int *)arg5;
- (id)initWithProvider:(id)arg1 destVideos:(id)arg2 destAudios:(id)arg3;

@end


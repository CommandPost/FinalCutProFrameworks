//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FFStorageLocationOutOfDiskSpaceProtocol.h"

@class FFBackgroundTask, FFFlowMediaRep, FFImageAbsoluteOutputFormat, FFOnDiskRenderInfo, FFPixelBuffer, FFPixelFormat, FFSegmentStoreRef, FFStreamVideo, NSArray, NSError, NSMutableArray, PCMatrix44Double;

__attribute__((visibility("hidden")))
@interface InfoForTracker : NSObject <FFStorageLocationOutOfDiskSpaceProtocol>
{
    FFFlowMediaRep *_mediaRep;
    struct CGRect _pixelSpaceFrameBounds;
    FFBackgroundTask *_runningTask;
    FFStreamVideo *_stream;
    int _allFrames;
    int _finishedFrames;
    int _mediaEndSampleNumber;
    FFPixelBuffer *_pixelBuffer1;
    PCMatrix44Double *_pixelTransform;
    long long _mode;
    CDStruct_bdcb2b0d _md5HQ;
    NSArray *_frameTimes;
    CDStruct_1b6d18a9 _outputStartTime;
    CDStruct_1b6d18a9 _outputFrameDuration;
    CDStruct_bdcb2b0d _md5;
    FFSegmentStoreRef *_segmentStoreRef;
    FFOnDiskRenderInfo *_renderInfo;
    FFPixelFormat *_nativeFramePF;
    FFImageAbsoluteOutputFormat *_formatToHandToAnalyzer;
    int _workingSpace;
    struct FFSynchronizable *_lockForScheduled;
    NSMutableArray *_scheduled;
    unsigned int _hasDeferredRehint;
    NSError *_cancellationError;
}

@property(readonly) struct CGRect pixelSpaceFrameBounds; // @synthesize pixelSpaceFrameBounds=_pixelSpaceFrameBounds;
@property(readonly) int workingSpace; // @synthesize workingSpace=_workingSpace;
@property(readonly, retain) FFImageAbsoluteOutputFormat *formatToHandToAnalyzer; // @synthesize formatToHandToAnalyzer=_formatToHandToAnalyzer;
@property(readonly, retain) FFOnDiskRenderInfo *renderInfo; // @synthesize renderInfo=_renderInfo;
@property(retain) FFPixelFormat *nativeFramePF; // @synthesize nativeFramePF=_nativeFramePF;
@property(retain) PCMatrix44Double *pixelTransform; // @synthesize pixelTransform=_pixelTransform;
@property(retain) FFPixelBuffer *pixelBuffer1; // @synthesize pixelBuffer1=_pixelBuffer1;
@property(readonly) int mediaEndSampleNumber; // @synthesize mediaEndSampleNumber=_mediaEndSampleNumber;
@property(readonly, retain) FFStreamVideo *stream; // @synthesize stream=_stream;
@property(readonly) FFBackgroundTask *runningTask; // @synthesize runningTask=_runningTask;
@property(readonly) FFFlowMediaRep *mediaRep; // @synthesize mediaRep=_mediaRep;
- (void)stopWritingFilesToLocation:(id)arg1;
- (void)cancelTaskWithDescription:(id)arg1 reason:(id)arg2 recoveryReason:(id)arg3 alertPanel:(BOOL)arg4;
- (void)cancelTaskWithError:(id)arg1 alertPanel:(BOOL)arg2;
- (void)_alertUserOfCancellation;
- (id)cancellationError;
- (BOOL)taskCancelled;
- (void)unschedule:(CDStruct_1b6d18a9)arg1;
- (void)hintScheduledFrames;
- (void)schedule:(const CDStruct_1b6d18a9 *)arg1 count:(unsigned long long)arg2;
- (id)segmentStoreRef;
- (CDStruct_bdcb2b0d)md5;
- (CDStruct_1b6d18a9)outputFrameDuration;
- (CDStruct_1b6d18a9)outputStartTime;
- (id)frameTimes;
- (long long)mode;
- (float)fractionComplete;
- (void)incrementFinishedFrames:(int)arg1;
- (void)dealloc;
- (id)initWithMedia:(id)arg1 task:(id)arg2 stream:(id)arg3 framesToProcessCount:(int)arg4 mediaEndSampleNumber:(int)arg5 mode:(long long)arg6 frameTimes:(id)arg7 outputStartTime:(CDStruct_1b6d18a9)arg8 outputFrameDuration:(CDStruct_1b6d18a9)arg9 md5:(CDStruct_bdcb2b0d)arg10 segmentStoreRef:(id)arg11 renderInfo:(id)arg12 pixelSpaceFrameBounds:(struct CGRect)arg13;

@end


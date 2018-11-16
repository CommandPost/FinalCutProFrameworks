//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFDestVideo.h>

#import "FFDestDisplayNameProtocol.h"
#import "FFDestVideoDeviceManaging.h"
#import "MIOCoreDelegateProtocol.h"

@class FFPrerollSync, MIODeviceConnection, MIOOutputCore, NSLock, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface FFDestVideoCMIO : FFDestVideo <FFDestDisplayNameProtocol, FFDestVideoDeviceManaging, MIOCoreDelegateProtocol>
{
    NSLock *_queueLock;
    NSMutableArray *_renderedFrames;
    NSString *_deviceUID;
    MIODeviceConnection *_deviceConnection;
    MIOOutputCore *_outputCore;
    int _destRunningState;
    BOOL _needsUpdate;
    struct OpaqueCMTimebase *_playerTimebase;
    FFPrerollSync *_startSync;
    BOOL _destStartedForPlayback;
    CDStruct_1b6d18a9 _durationPulled;
    CDStruct_1b6d18a9 _playerFrameDuration;
    struct SMPTETime _playerFrameSMPTETime;
    int _minInFlightFramesForThrottling;
    CDStruct_1b6d18a9 _playbackAnchorTime;
    CDStruct_1b6d18a9 _playbackLastHostTimestamp;
    unsigned long long _playbackLastSequenceNumber;
    unsigned long long _playbackFirstSequenceNumberPulled;
    struct FFCMIOPlaybackTimebaseStartedSignalQueue *_timebaseStartedSignalQueue;
    struct FFCMIOPlaybackTimingInfoQueue *_timingInfoQueue;
    struct FFCMIOPlaybackTimestampQueue *_timestampQueue;
    struct FFCMIOPlaybackErrorQueue *_errorQueue;
    CDStruct_1b6d18a9 _currentErrorTime;
    CDStruct_1b6d18a9 _errorAdjustedTime;
    CDStruct_1b6d18a9 _errorLastTimingInfoPTS;
    unsigned long long _errorLastTimingInfoSequenceNumber;
    struct CGColorSpace *_deviceColorSpace;
    double _pmrTotalCopyTime;
    double _pmrMinCopyTime;
    double _pmrMaxCopyTime;
    int _pmrCopyTimeCt;
}

- (void)mioOutputDroppedFrames:(id)arg1;
- (id)description;
- (struct SMPTETime)getPlayerFrameSMPTETime;
- (CDStruct_1b6d18a9)getPlayerFrameduration;
- (_Bool)inefficientFrameDurationWarning:(CDStruct_1b6d18a9)arg1 sampleDuration:(CDStruct_1b6d18a9)arg2;
- (unsigned int)outputMaxLatencyInFrames;
- (void *)figClock;
- (void)_timebaseStarted;
- (void)scheduledOutputNotification:(unsigned long long)arg1 outputHosttime:(unsigned long long)arg2;
- (struct CGSize)requestedImageSizeWithFilterQuality:(int *)arg1;
- (int)requestedBackground;
- (id)requestedImageInfo;
- (id)tun_supportedPixelFormats;
- (struct CGColorSpace *)tun_colorSpace;
- (int)fieldDominance;
- (int)drawFieldsInterlaced;
- (BOOL)needsUpdate;
- (void)setNeedsUpdate:(BOOL)arg1;
- (int)getFrameQueueStatus;
- (int)_getFrameQueueStatusInternal;
- (void)stop;
- (void)_stopInternal;
- (void)start:(id)arg1;
- (void)_startInternal:(BOOL)arg1;
- (BOOL)getFrame:(char *)arg1 andDiscontinuityFlag:(char *)arg2 forSequenceNumber:(unsigned long long)arg3;
- (BOOL)hasNextFrame;
- (void)_processTimestampQueue;
- (BOOL)hasData;
- (void)pushFrame:(id)arg1;
- (void)liveFlushWithRunout:(unsigned int)arg1 playerTime:(CDStruct_1b6d18a9)arg2 rate:(double)arg3;
- (void)flush:(BOOL)arg1;
- (void)_outputPMRReport;
- (void)_logPMRCopyTime:(double)arg1;
- (void)_resetPMRTracking;
- (void)notifyDeviceAvailableWithConnection:(id)arg1;
- (BOOL)hasConnection;
- (void)disableVideoOutOnReleaseDirect;
- (void)disableVideoOutOnRelease;
- (unsigned long long)videoOutScreenIndex;
- (BOOL)hasOutputDevice;
- (void)releaseOutputDevice;
- (void)_releaseOutputDeviceInternal;
- (void)setupOutputDevice:(id)arg1;
- (void)updateOutputDevice:(id)arg1;
- (void)unregisterFromOutputDevice;
- (void)registerForOutputDevice;
- (void)setPlayer:(id)arg1;
- (id)deviceUID;
- (id)displayName;
- (void)dealloc;
- (id)initWithDeviceUID:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MIO/MIODevice.h>

@class NSString;

@interface MIOOutputDevice : MIODevice
{
    NSString *mVideoSourcePath;
    NSString *mVideoFrameDataPath;
    NSString *mAudioSourcePath;
    BOOL mIsOutputting;
    BOOL mCMIOOutputDone;
    BOOL mCMIODroppedFrames;
    BOOL mVideoEnabled;
    BOOL mAudioEnabled;
    id mCMIOVProducer;
    id mCMIOAProducer;
    unsigned int mOutputStream;
}

@property(retain) id cmioAProducer; // @synthesize cmioAProducer=mCMIOAProducer;
@property(retain) id cmioVProducer; // @synthesize cmioVProducer=mCMIOVProducer;
- (unsigned long long)nsScreenIndex;
- (int)virtualScreenNumber;
- (int)minimumInFlightFramesForThrottledPlayback;
- (unsigned int)outputLatencyInFrames;
- (void)setDisableOnMasterRelease:(unsigned char)arg1;
- (void)setOutputBuffersRequiredForStartup:(unsigned int)arg1;
- (void)setOutputBufferQueueSize:(unsigned int)arg1;
- (BOOL)cmioReportedDroppedFrames;
- (void)setCMIODroppedFrames:(BOOL)arg1;
- (BOOL)refreshIsCMIOOutputDone;
- (BOOL)isCMIOOutputDone;
- (BOOL)isOutputting;
- (BOOL)setOutputting:(BOOL)arg1;
- (BOOL)setVideoOn:(BOOL)arg1 audioOn:(BOOL)arg2 destFPS:(unsigned int)arg3;
- (BOOL)prepareDeviceForClip:(int)arg1;
- (void)dealloc;
- (id)initWithDeviceConnection:(id)arg1;

@end


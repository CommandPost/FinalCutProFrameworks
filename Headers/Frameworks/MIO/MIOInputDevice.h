//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MIO/MIODevice.h>

@class MIOAVFInputFrameProcessor, MIODeck, MIOHALDevice, MIOInputSegment, MIOTimecode, NSConditionLock, NSMutableArray, NSMutableDictionary, NSString, NSTimer;
@protocol FFRADAnalyzerControllerDelegate;

@interface MIOInputDevice : MIODevice
{
    BOOL mGraphIsRunning;
    BOOL mStopRecordingRequested;
    NSString *mDestinationFolderPath;
    MIODeck *mDeviceControl;
    unsigned int mCurSubSegmentIndex;
    MIOInputSegment *mCurrentSegment;
    MIOTimecode *mStoppedEarlyAtTC;
    unsigned long long mLastFrameTC;
    BOOL mLastFrameTCInitialized;
    int mDroppedFramesHandling;
    int mTimecodeBreakHandling;
    int mStreamErrorsHandling;
    int mSceneChangeHandling;
    double mCurrentSMTPETimecode;
    unsigned char mCurrentSMTPEDropFrame;
    BOOL mSegmentEnded;
    NSString *mNewFilePath;
    int mPreroll;
    unsigned long long mMinFreeSpace;
    double mTimecodeOffset;
    BOOL mPrerollStarted;
    BOOL mMissedInPoint;
    NSTimer *mDelayedNoDataTimer;
    BOOL mEOTDetectionOn;
    int mNoDataDetectionMode;
    BOOL mDeviceInCameraMode;
    NSString *mDestinationFilePath;
    MIOAVFInputFrameProcessor *mFrameProcessor;
    int mInputStyle;
    struct OpaqueCMIOGraph *mRADGraph;
    NSTimer *mNoDataDetectionTimerRAD;
    BOOL mNoDataDetectionRADDataReceived;
    NSConditionLock *mFileCompletionEndLock;
    NSConditionLock *mCMIOFinishLock;
    NSMutableArray *mFileCompletionDictArray;
    NSMutableDictionary *mEndSegmentDict;
    BOOL mWillCloseDown;
    BOOL mVideoEnabled;
    BOOL mAudioEnabled;
    struct __CFDictionary *mFileWriterOptionsDict;
    BOOL mUseCMTime;
    struct ComponentInstanceRecord *mCompressorInstance;
    MIOHALDevice *mAudioDevice;
    id <FFRADAnalyzerControllerDelegate> _frameProcessingDelegate;
}

@property BOOL useCMTime; // @synthesize useCMTime=mUseCMTime;
@property(nonatomic) id <FFRADAnalyzerControllerDelegate> frameProcessingDelegate; // @synthesize frameProcessingDelegate=_frameProcessingDelegate;
@property(retain) MIOHALDevice *audioDevice; // @synthesize audioDevice=mAudioDevice;
- (void)createNewIncrementedReelWithProperties:(id)arg1;
- (void)updateSubSegmentWithProperties:(id)arg1;
- (void)addSubSegmentWithProperties:(id)arg1;
- (void)removeLastSubSegment:(id)arg1;
- (void)setFirstFrameTimeOutEnabled:(BOOL)arg1;
- (void)setNoDataDetectionRADDataReceived;
- (void)startNoDataDetectionRAD;
- (void)noDataDetectionRAD;
- (void)stopNoDataDetectionRAD;
- (void)removeDelayedNoDataDetectionTimer;
- (void)setupDelayedNoDataDetectionTimer;
- (void)startDelayedNoDataDetection;
- (void)setNoDataDetectionMode:(int)arg1;
- (void)stopDevice;
- (void)detectEndOfTape:(int)arg1;
- (void)deviceControlStatusChanged:(id)arg1;
- (id)deviceControlStatusString:(int)arg1;
- (void)abortOnCueingError:(id)arg1;
- (void)timecodeChanged:(id)arg1;
- (int)SMPTETimecode:(unsigned long long *)arg1 dropFrame:(char *)arg2 outFrameTolerance:(unsigned int *)arg3;
- (void)fileProcessingDidBegin;
- (id)deviceControl;
- (void)setDeviceControl:(id)arg1;
- (void)cleanupCaptureStateMainThread;
- (void)fileCompletionMainThread;
- (id)endSegmentDict;
- (void)setEndSegmentDict:(id)arg1;
- (void)addFileCompletionDict:(id)arg1;
- (void)stopIngestingDueToRADEndOfData:(id)arg1;
- (void)forceStopFileWritingMainThread:(id)arg1;
- (void)forceStopFileWritingFromMainThread:(id)arg1;
- (void)forceStopFileWriting:(id)arg1;
- (void)emergencyStopRecordingMainThread;
- (void)requestStopInputting;
- (void)stopRecordingWithErrorMainThread:(int)arg1 status:(int)arg2;
- (void)stopRecordingFromMainThreadWithError:(int)arg1 status:(int)arg2;
- (int)inputState;
- (void)prerollStartsMainThread:(id)arg1;
- (void)prerollStarts:(id)arg1;
- (void)recordStarts:(id)arg1;
- (void)recordSubSegmentEnd:(id)arg1;
- (BOOL)recordSubSegment;
- (void)recordSegmentEnd:(id)arg1;
- (BOOL)recordSegment:(id)arg1 usingDeviceControl:(id)arg2;
- (BOOL)recordSegment:(id)arg1;
- (id)currentSegment;
- (void)setCurrentSegment:(id)arg1;
- (BOOL)startProcessing;
- (void)relinquishDevice;
- (BOOL)prepareDeviceForClip:(int)arg1;
- (id)destinationFilePath;
- (BOOL)setDestinationFilePath:(id)arg1;
- (id)destinationFolderPath;
- (void)setDestinationFolderPath:(id)arg1;
- (void)getVideoRate:(int *)arg1 audioRate:(int *)arg2 audioChannels:(int *)arg3;
- (id)cmioMetadaDictionaryWithObject:(id)arg1 forKey:(id)arg2 inLocale:(id)arg3;
- (BOOL)setupTapeVideoAndAudio;
- (BOOL)nodeIsConnected:(int)arg1 toNode:(int)arg2;
- (long long)time64SpecificationDenominator:(double)arg1;
- (long long)time64SpecificationNumerator:(double)arg1 framecount:(long long)arg2;
- (void)setInputStyle:(int)arg1;
- (int)inputStyle;
- (unsigned long long)minFreeSpace;
- (void)setMinFreeSpace:(unsigned long long)arg1;
- (int)sceneChangeHandling;
- (void)setSceneChangeHandling:(int)arg1;
- (int)streamErrorHandling;
- (void)setStreamErrorHandling:(int)arg1;
- (int)timecodeBreakHandling;
- (void)setTimecodeBreakHandling:(int)arg1;
- (int)droppedFramesHandling;
- (void)setDroppedFramesHandling:(int)arg1;
- (BOOL)cameraMode;
- (void)setCameraMode:(BOOL)arg1;
- (void)setTimecodeOffset:(double)arg1;
- (int)preroll;
- (void)setPreroll:(int)arg1;
- (id)cmioFinishLock;
- (id)fileCompletionEndLock;
- (BOOL)willCloseDown;
- (void)setWillCloseDown;
- (BOOL)missedInPoint;
- (void)setMissedInPoint:(BOOL)arg1;
- (id)stringWithIncrementedReelNameFromString:(id)arg1;
- (struct __CFDictionary *)fileWriterOptionsDict;
- (void)dealloc;
- (id)initWithDeviceConnection:(id)arg1;
- (id)init;
- (void)initInstanceVariables;

@end


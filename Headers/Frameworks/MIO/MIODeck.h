//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MIO/MIOObject.h>

@class MIOTimecode, NSLock;

@interface MIODeck : MIOObject
{
    struct BaseDevice *mDevice;
    BOOL mIsOpen;
    int mDeckStatus;
    MIOTimecode *mCurrentTC;
    NSLock *mCurrentTCLock;
    NSLock *mDeckStatusLock;
    int mDeckType;
}

+ (id)serialDeviceList;
+ (id)keyPathsForValuesAffectingCurrentTC;
+ (id)keyPathsForValuesAffectingCanPlay;
+ (id)keyPathsForValuesAffectingCanPause;
+ (id)keyPathsForValuesAffectingCanStop;
+ (id)keyPathsForValuesAffectingCanRecord;
+ (id)keyPathsForValuesAffectingCanRecordPause;
+ (id)keyPathsForValuesAffectingCanFastForward;
+ (id)keyPathsForValuesAffectingCanRewind;
+ (id)keyPathsForValuesAffectingCanStepForward;
+ (id)keyPathsForValuesAffectingCanStepReverse;
+ (id)keyPathsForValuesAffectingCanShuttle;
+ (id)deckWithType:(int)arg1 deviceConnection:(id)arg2 framerate:(double)arg3 timecodeFormat:(int)arg4;
- (id)init;
- (id)initWithType:(int)arg1 deviceConnection:(id)arg2 framerate:(double)arg3 timecodeFormat:(int)arg4;
- (int)open;
- (BOOL)isOpen;
- (int)close;
- (BOOL)isDeviceAvailable;
- (int)play;
- (BOOL)canPlay;
- (int)playReverse;
- (BOOL)canPlayReverse;
- (int)playToggle;
- (BOOL)canPlayToggle;
- (int)pause;
- (BOOL)canPause;
- (int)stop;
- (BOOL)canStop;
- (int)record;
- (BOOL)canRecord;
- (int)recordPause;
- (BOOL)canRecordPause;
- (int)fastForward;
- (BOOL)canFastForward;
- (int)rewind;
- (BOOL)canRewind;
- (int)stepForward;
- (BOOL)canStepForward;
- (int)stepReverse;
- (BOOL)canStepReverse;
- (int)shuttle:(int)arg1;
- (BOOL)canShuttle;
- (int)cue:(id)arg1 withPreroll:(unsigned int)arg2 playOnCue:(BOOL)arg3;
- (BOOL)isCueing;
- (int)playTo:(id)arg1;
- (int)playFrom:(id)arg1 to:(id)arg2;
- (int)playAroundFrame:(id)arg1 withBuffer:(unsigned int)arg2;
- (void)setTimecodeFormat:(int)arg1;
- (int)timecodeFormat;
- (void)setFramerate:(double)arg1;
- (double)framerate;
- (int)status;
- (float *)supportedDeckSpeeds:(unsigned int *)arg1;
- (int)currentSpeed;
- (id)deviceConnection;
- (void)deckTimecodeChanged:(id)arg1;
- (void)deckStatusChanged:(id)arg1;
- (void)deckDropnessChanged:(id)arg1;
- (BOOL)validateCurrentTC:(id *)arg1 error:(id *)arg2;
- (void)setCurrentTC:(id)arg1;
- (id)currentTC;
- (void)setDeckStatus:(id)arg1;
- (int)deckStatus;
- (int)deckType;
- (void)dealloc;

@end


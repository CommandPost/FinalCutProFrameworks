//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSProPreferencesModule.h"

@class NSButton, NSMatrix, NSPopUpButton;

@interface OZTimePrefModule : NSProPreferencesModule
{
    NSPopUpButton *_pTimeDisplayPopUp;
    NSPopUpButton *_pFirstFramePopUp;
    NSPopUpButton *_pTimeViewUpdating;
    NSMatrix *_pAudioSyncModeMatrix;
    NSButton *_pLimitPlaybackButton;
    NSButton *_pAudioScrubLoopingButton;
    NSButton *_pLockKeyframesInTime;
    NSButton *_pAllowSubFrameKeyframing;
}

- (void)initializeFromDefaults;
- (BOOL)isResizable;
- (void)setTimeDisplay:(id)arg1;
- (void)setFirstFrame:(id)arg1;
- (void)setTimeViewUpdateMode:(id)arg1;
- (void)setAudioSyncMode:(id)arg1;
- (void)setLimitFrameRate:(id)arg1;
- (void)setAudioScrubLooping:(id)arg1;
- (void)toggleLockKeyframesInTime:(id)arg1;
- (void)toggleAllowSubframeKeyframing:(id)arg1;
- (void)setupDurationFormatterForTextField:(id)arg1 isDisplayingInFrames:(BOOL)arg2;

@end


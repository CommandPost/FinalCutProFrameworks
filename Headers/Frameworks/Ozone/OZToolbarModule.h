//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Ozone/OZProViewModule.h>

@class LKMenu, LKSegmentedControl, LKSegmentedScrubber, NSImage, NSView, OZMoTimecodeFormatter, OZProTCSegmentedControl, OZTimeDurationSwitchSegmentedControl;

@interface OZToolbarModule : OZProViewModule
{
    OZProTCSegmentedControl *_recordControl;
    LKSegmentedControl *_loopControl;
    LKSegmentedControl *_muteControl;
    LKSegmentedControl *_startControl;
    LKSegmentedControl *_playControl;
    LKSegmentedControl *_timelineControls;
    NSView *_transportControls;
    OZTimeDurationSwitchSegmentedControl *_currentTimeDurationSwitch;
    LKSegmentedScrubber *_timeScrubber;
    LKSegmentedControl *_timeDisplaySwitch;
    OZMoTimecodeFormatter *_durationFormatter;
    LKMenu *_timeDisplaySwitchMenu;
    BOOL _isDisplayingCurrentTime;
    struct OZLibraryPresetsMap *_effectPresetsMap;
    BOOL _oz_viewOrderedBelow;
    NSImage *_muteButtonImages[2];
    NSImage *_playButtonImages[2];
    NSImage *_recordButtonImages[2];
}

@property BOOL oz_viewOrderedBelow; // @synthesize oz_viewOrderedBelow=_oz_viewOrderedBelow;
@property(readonly, nonatomic) LKSegmentedScrubber *timeScrubber; // @synthesize timeScrubber=_timeScrubber;
- (id)timelineControls;
- (void)showTimelineControls:(BOOL)arg1;
- (void)updateTimelineControlsWithTimeline:(BOOL)arg1 audio:(BOOL)arg2 keyframes:(BOOL)arg3;
- (void)updateTimelineControlsWithControls:(id)arg1;
- (void)setupSecondScreenTimelineControls;
- (void)localUpdateRecordButton;
- (void)updateRecordButton;
- (void)localUpdateMuteButton:(id)arg1;
- (void)updateMuteButton;
- (void)localUpdatePlayButton;
- (void)updatePlayButton;
- (void)localUpdateLoopButton;
- (void)updateLoopButton;
- (void)updateProjectDurationTextField;
- (void)updateCurrentFrameTextField:(double)arg1;
- (BOOL)isDisplayingCurrentTime;
- (void)doDisplaySwitch:(id)arg1;
- (void)currentFrameAction:(id)arg1;
- (void)timelineControls:(id)arg1;
- (void)record:(id)arg1;
- (void)loop:(id)arg1;
- (void)mute:(id)arg1;
- (void)playPause:(id)arg1;
- (void)goToStartControlAction:(id)arg1;
- (void)setRecordButtonSelectState:(BOOL)arg1;
- (void)oz_paneVisibilityChanged:(id)arg1;
- (void)moduleViewWillBeRemoved:(id)arg1;
- (void)moduleViewWasInstalled:(id)arg1;
- (void)setTimeScrubberMaxAndMin;
- (void)notify:(unsigned int)arg1;
- (void)updateTimeDisplaySwitchMenu;
- (void)showDuration:(id)arg1;
- (void)showCurrentTime:(id)arg1;
- (void)showTimecode:(id)arg1;
- (void)showFrames:(id)arg1;
- (void)toggleTimeDisplay;
- (void)viewDidLoad;
- (BOOL)isViewOrderedBelow;
- (BOOL)isBackgroundGrabbable;
- (BOOL)isTimingOnSecondScreen;
- (BOOL)acceptsFirstResponder;
- (BOOL)wantsFirstResponder;
- (struct CGSize)viewMaxSize;
- (struct CGSize)viewMinSize;
- (BOOL)wantsHeaderBar;
- (id)oz_toolbarModule;
- (id)oz_secondaryToolbarModule;
- (id)oz_canvasModule;
- (void)dealloc;

@end


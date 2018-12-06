//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LKViewModule.h"

#import "NSWindowDelegate.h"

@class FFContext, FFPlayer, FFProvider, FFSourceAudio, FFSourceVideo, LKModuleLayout, NSDictionary, NSMutableArray, NSObject<FFSkimmableProtocol><FFDataModelProtocol><FFInspectableObject>;

@interface FFPlayerModule : LKViewModule <NSWindowDelegate>
{
    struct NSObject *_skimmable;
    FFProvider *_provider;
    FFContext *_context;
    long long _effectCount;
    CDStruct_1b6d18a9 _start;
    CDStruct_1b6d18a9 _duration;
    NSMutableArray *_playerItems;
    BOOL _allowsHardwareMonitor;
    BOOL _usesCMIO;
    BOOL _stopPlayingIsDown;
    BOOL _fastForwardIsDown;
    BOOL _rewindIsDown;
    float _lastJKLRate;
    int _playerRole;
    LKModuleLayout *_pendingSublayout;
    BOOL _hasVideo;
    BOOL _hasAudio;
    BOOL _isPlaying;
    CDStruct_1b6d18a9 _lastComponentIn;
    CDStruct_e83c9415 _lastAbsoluteTrackRange;
    float _reportedZoomFactor;
    FFSourceAudio *_observingAudioSource;
    FFSourceVideo *_observingVideoSource;
    NSDictionary *_fullScreenOptions;
    id _savedFirstResponder;
}

+ (id)defaultSublayoutName;
+ (Class)videoModuleClass;
- (id)init;
- (BOOL)loadView;
- (id)initWithSkimmable:(struct NSObject *)arg1 context:(id)arg2 effectCount:(long long)arg3 sublayout:(id)arg4;
- (id)initWithSkimmable:(struct NSObject *)arg1 context:(id)arg2 effectCount:(long long)arg3 sublayoutName:(id)arg4;
- (id)initWithSkimmable:(struct NSObject *)arg1 context:(id)arg2 effectCount:(long long)arg3;
- (void)dealloc;
- (void)setSkimmable:(struct NSObject *)arg1 context:(id)arg2 effectCount:(long long)arg3;
- (id)layer;
@property(nonatomic) int playerRole; // @synthesize playerRole=_playerRole;
- (void)_updateHasVideoAndAudio;
- (void)_setProvider:(id)arg1;
- (void)addPlayerItem:(id)arg1;
- (void)removePlayerItem:(id)arg1;
- (id)_playerItemModuleOfClass:(Class)arg1;
- (id)videoModule;
- (id)histogramModule;
- (id)vectorscopeModule;
- (id)waveformModule;
- (void)module:(id)arg1 didAddSubmodule:(id)arg2;
- (void)module:(id)arg1 willRemoveSubmodule:(id)arg2;
- (void)moduleViewWasInstalled:(id)arg1;
- (void)moduleViewWillBeRemoved:(id)arg1;
- (void)viewDidLoad;
- (struct CGSize)viewMinSize;
- (struct CGSize)viewMaxSize;
- (id)firstKeyView;
- (id)lastKeyView;
- (id)localModuleActions;
- (id)targetModules;
- (float)rate;
- (BOOL)isLoopMode;
- (BOOL)hasVideoContent;
- (BOOL)hasAudioContent;
- (BOOL)hasAudioAndVideoContent;
- (CDStruct_1b6d18a9)mediaStart;
- (CDStruct_1b6d18a9)_mediaUIStart;
- (CDStruct_1b6d18a9)mediaDuration;
- (CDStruct_1b6d18a9)frameDuration;
- (BOOL)usesCMIO;
- (void)setUsesCMIO:(BOOL)arg1;
- (BOOL)allowsHardwareMonitor;
- (void)setAllowsHardwareMonitor:(BOOL)arg1;
@property(nonatomic, getter=isPlaying) BOOL playing;
- (void)updatePlayerOnSampleBoundary;
@property(readonly, nonatomic) FFPlayer *player;
@property(nonatomic) float zoomFactor;
@property(nonatomic) struct CGPoint origin;
- (long long)colorChannelDisplayMode;
- (void)setColorChannelDisplayMode:(long long)arg1;
@property(nonatomic) BOOL highlightsExcessLuma;
@property(nonatomic) BOOL displayBroadcastSafeZones;
- (BOOL)showBothFields;
- (void)setShowBothFields:(BOOL)arg1;
- (void)playPause:(id)arg1;
- (void)stopPlaying:(id)arg1;
- (void)stopPlayingDown:(id)arg1;
- (void)stopPlayingUp:(id)arg1;
- (void)fastForward:(id)arg1;
- (void)fastForwardDown:(id)arg1;
- (void)fastForwardUp:(id)arg1;
- (void)rewind:(id)arg1;
- (void)rewindDown:(id)arg1;
- (void)rewindUp:(id)arg1;
- (void)gotoStart:(id)arg1;
- (void)gotoEnd:(id)arg1;
- (void)playFromStart:(id)arg1;
@property(nonatomic, getter=isLooping) BOOL looping;
- (void)loop:(id)arg1;
- (void)stepBackward:(id)arg1;
- (void)stepForward:(id)arg1;
- (void)stepBackwardField:(id)arg1;
- (void)stepForwardField:(id)arg1;
- (void)stepBackwardSubframe:(id)arg1;
- (void)stepForwardSubframe:(id)arg1;
- (void)stepBackward10Frames:(id)arg1;
- (void)stepForward10Frames:(id)arg1;
- (void)playAroundCurrentFrame:(id)arg1;
- (void)playInToOut:(id)arg1;
- (void)playFromAlternatePlayhead:(id)arg1;
- (void)playToOut:(id)arg1;
- (void)playReverse:(id)arg1;
- (void)playAtTagRate:(id)arg1;
- (void)playRate1X:(id)arg1;
- (void)playRate2X:(id)arg1;
- (void)playRate4X:(id)arg1;
- (void)playRate8X:(id)arg1;
- (void)playRate16X:(id)arg1;
- (void)playRate32X:(id)arg1;
- (void)playRateMinus1X:(id)arg1;
- (void)playRateMinus2X:(id)arg1;
- (void)playRateMinus4X:(id)arg1;
- (void)playRateMinus8X:(id)arg1;
- (void)playRateMinus16X:(id)arg1;
- (void)playRateMinus32X:(id)arg1;
- (void)playRange:(CDStruct_e83c9415)arg1;
- (void)playAtTime:(CDStruct_1b6d18a9)arg1 rate:(double)arg2;
- (void)beginScrubbing:(CDStruct_1b6d18a9)arg1;
- (void)endScrubbing:(BOOL)arg1 resumePlayback:(BOOL)arg2;
- (void)beginSkimming;
- (void)endSkimming;
- (void)up:(id)arg1;
- (void)down:(id)arg1;
- (void)playAroundCurrentFrameInViewer:(id)arg1;
- (void)playInToOutInViewer:(id)arg1;
- (void)importClips:(id)arg1;
- (id)inspectorClassName;
- (id)selectedItems;
- (void)appWillTerminate:(id)arg1;
- (void)_teardownPlayer;
- (void)_rebuildPlayer;
- (void)_rebuildPlayerWithDrawingSuspension;
- (void)timeRateChangedForContext:(id)arg1;
- (void)rangeChangedForContext:(id)arg1;
- (void)_reportDrop:(id)arg1;
- (void)stoppedDueToDroppedFrameForContext:(id)arg1 dropInfo:(id)arg2;
- (void)_conformStartAndDuration;
- (void)sequenceFormatChanged:(id)arg1;
- (void)providerRangeInvalidation:(id)arg1;
- (void)rangeInvalidated:(id)arg1;
- (void)_handlePreferencesKeyPathChange:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_updateLabel;
- (void)_playWithRate:(float)arg1;
- (void)_stepToTime:(CDStruct_1b6d18a9)arg1;
- (void)scrubToTime:(CDStruct_1b6d18a9)arg1;
- (void)_maybeEndStepPlayback;
- (void)_endStepPlayback;
- (id)undoManager;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (BOOL)enterFullScreenMode:(id)arg1 withOptions:(id)arg2;
- (void)exitFullScreenModeWithOptions:(id)arg1;
- (BOOL)isInFullScreenMode;
- (void)_exitFullScreenForEvent:(id)arg1;
@property(nonatomic) float reportedZoomFactor; // @synthesize reportedZoomFactor=_reportedZoomFactor;
@property(readonly, nonatomic) FFContext *context; // @synthesize context=_context;
@property(nonatomic) FFProvider *provider; // @synthesize provider=_provider;
@property(readonly, nonatomic) long long effectCount; // @synthesize effectCount=_effectCount;
@property(readonly, nonatomic) NSObject<FFSkimmableProtocol><FFDataModelProtocol><FFInspectableObject> *skimmable; // @synthesize skimmable=_skimmable;

@end


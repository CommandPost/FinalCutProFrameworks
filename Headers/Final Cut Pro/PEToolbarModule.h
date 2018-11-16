//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LKViewModule.h"

@class CALayer, CAShapeLayer, FFContext, LKMenu, LKSegmentedControl, LKTextField, NSImageView, NSProThemeImageView, NSProView, PELCDProgressIndicator;

@interface PEToolbarModule : LKViewModule
{
    NSProThemeImageView *_backgroundImageView;
    LKSegmentedControl *_toolPalette;
    LKSegmentedControl *_importPalette;
    LKSegmentedControl *_altModulesPalette;
    LKSegmentedControl *_rangeSelectionPalette;
    LKSegmentedControl *_keywordsButton;
    LKSegmentedControl *_editStylesPalette;
    LKSegmentedControl *_mediaBrowserPalette;
    LKSegmentedControl *_fixItPalette;
    LKTextField *_backgroundPercentage;
    LKTextField *_percentageString;
    LKTextField *_playheadString;
    LKSegmentedControl *_effectsPickerButton;
    LKSegmentedControl *_toggleAudioScrubbingButton;
    LKSegmentedControl *_voiceOverPalette;
    LKSegmentedControl *_colorControlsPalette;
    LKSegmentedControl *_retimeControlsPalette;
    LKSegmentedControl *_inspectorButton;
    LKSegmentedControl *_scopesButton;
    NSImageView *_progressFinished;
    NSImageView *_progressEmpty;
    NSImageView *_progressFilling;
    PELCDProgressIndicator *_progressSpinner;
    NSImageView *_playheadScrubberLabel;
    NSProView *_audioMeters;
    NSImageView *_numericEntryStatus;
    NSImageView *_numericEntryDirection;
    LKMenu *_retimeMenu;
    LKMenu *_avEditOptionsMenu;
    FFContext *_context;
    CDStruct_1b6d18a9 _frameDuration;
    BOOL _rendered;
    CDStruct_1b6d18a9 _timecodeFrameDuration;
    long long _timecodeDisplayDropFrame;
    unsigned long long _audioSampleRate;
    BOOL _timelineSelectionAvailable;
    BOOL _organizerSelectionAvailable;
    BOOL _progressIndeterminate;
    CALayer *_progressLayer;
    CAShapeLayer *_progressMaskLayer;
    double _currentProgress;
    long long _numericDirection;
    int _numericEntryType;
    BOOL _numericEntryInProgress;
    int _avEditMode;
    struct NSObject *_skimmable;
    struct FFProcrastinatedDispatch_t _procrastinatedContext;
}

+ (id)tools;
- (void)dealloc;
- (void)awakeFromNib;
- (BOOL)wantsHeaderBar;
- (struct CGSize)viewMinSize;
- (struct CGSize)viewMaxSize;
- (BOOL)isViewOrderedBelow;
- (BOOL)wantsFirstResponder;
- (BOOL)acceptsFirstResponder;
- (void)viewDidLoad;
- (void)viewWasInstalled;
- (void)viewWillBeRemoved;
- (id)submoduleLayoutArray;
- (BOOL)isBackgroundGrabbable;
- (void)moduleDidHide;
- (void)moduleDidUnhide;
- (void)module:(id)arg1 didAddSubmodule:(id)arg2;
- (void)module:(id)arg1 willRemoveSubmodule:(id)arg2;
- (void)appWillTerminate:(id)arg1;
- (id)toolTip:(id)arg1 withKeyEquivalent:(id)arg2;
- (SEL)realActionForToolClass:(Class)arg1;
- (void)_setupToolPalette;
- (void)selectTool:(id)arg1;
- (void)selectToolArrowOrRangeSelection:(id)arg1;
- (void)selectToolBlade:(id)arg1;
- (void)selectToolRangeSelection:(id)arg1;
- (void)selectToolPlacement:(id)arg1;
- (void)selectToolTrim:(id)arg1;
- (void)selectToolHand:(id)arg1;
- (void)selectToolZoom:(id)arg1;
- (void)activeToolChanged:(id)arg1;
- (id)_objectsFromObjectsAndRanges:(id)arg1;
- (id)_objectsAndRangesToRetimeFromItemSelection;
- (id)_objectsAndRangesToRetimeFromRangeSelection;
- (id)_objectsAndRangesToRetime;
- (id)_objectToRetimeWithRange:(CDStruct_5c5366e1 *)arg1;
- (BOOL)_canReverseClip;
- (BOOL)_canResetClip;
- (long long)_retimeFloorFrameSamplingState;
- (long long)_retimeNearestNeighborState;
- (long long)_retimeFrameBlendingState;
- (long long)_retimeOpticalFlowState;
- (BOOL)_retimeEditorAlreadyOpen;
- (BOOL)_retimeInForwardState;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)toggleAltModule:(id)arg1;
- (void)avEditModeBoth:(id)arg1;
- (void)avEditModeAudio:(id)arg1;
- (void)avEditModeVideo:(id)arg1;
- (void)toggleRangeSelectionTool:(id)arg1;
- (void)toggleKeywordEditor:(id)arg1;
- (void)setKeywordEditorVisible:(BOOL)arg1;
- (void)toggleAudioScrubbing:(id)arg1;
- (void)toggleVoiceOverModule:(id)arg1;
- (void)voiceOverModuleShowing:(BOOL)arg1;
- (void)toggleEffectsPicker:(id)arg1;
- (void)updateInspectorButtonState;
- (void)toggleInspectorModule:(id)arg1;
- (void)sendFullScreen:(id)arg1;
- (void)appendEdit:(id)arg1;
- (void)editStyles:(id)arg1;
- (void)toggleAudioMeters:(id)arg1;
- (void)toggleBackgroundTasks:(id)arg1;
- (void)toggleScopes:(id)arg1;
- (void)toggleMatchColor:(id)arg1;
- (void)toggleMatchAudio:(id)arg1;
- (void)toggleColorBoard:(id)arg1;
- (void)toggleEnhanceAudio:(id)arg1;
- (void)audioMetersControlClick:(id)arg1;
- (void)revealMediaBrowserModeFromTag:(id)arg1;
- (void)revealMediaBrowserModeFromMenuTag:(id)arg1;
- (void)hideMediaBrowser:(id)arg1;
- (void)setMediaBrowserType:(int)arg1;
- (void)setMediaBrowserButtonState:(BOOL)arg1;
- (void)toggleImportWindow:(id)arg1;
- (void)showRetimeHUD:(id)arg1;
- (void)toggleRetimeHUD:(id)arg1;
- (void)applyRetimeSetRate:(double)arg1;
- (void)retimeSlowHalf:(id)arg1;
- (void)retimeSlowQuarter:(id)arg1;
- (void)retimeSlowTenPercent:(id)arg1;
- (void)retimeFastx2:(id)arg1;
- (void)retimeFastx4:(id)arg1;
- (void)retimeFastx8:(id)arg1;
- (void)retimeFastx20:(id)arg1;
- (void)retimeNormal:(id)arg1;
- (void)retimeReverseClip:(id)arg1;
- (void)retimeHold:(id)arg1;
- (void)retimeReset:(id)arg1;
- (id)_conformRateArray:(id)arg1;
- (void)retimeConformSpeed:(id)arg1;
- (void)applySpeedRampToZero:(BOOL)arg1 fromZero:(BOOL)arg2;
- (void)retimeSpeedRampToZero:(id)arg1;
- (void)retimeSpeedRampFromZero:(id)arg1;
- (void)retimeInstantReplay:(id)arg1;
- (void)retimeRewindWithSpeed:(double)arg1;
- (void)retimeRewindx1:(id)arg1;
- (void)retimeRewindx2:(id)arg1;
- (void)retimeRewindx4:(id)arg1;
- (void)retimeScratch:(id)arg1;
- (void)retimeJumpCut:(id)arg1;
- (void)retimeTurnOnFloorFrameSampling:(id)arg1;
- (void)retimeTurnOnNearestNeighbor:(id)arg1;
- (void)retimeTurnOnFrameBlending:(id)arg1;
- (void)retimeTurnOnOpticalFlow:(id)arg1;
- (void)retimeTogglePreservesPitch:(id)arg1;
- (void)toggleRetimeEditor:(id)arg1;
- (void)updateProgressFillMaskToValue:(long long)arg1;
- (void)setBackgroundProgress:(long long)arg1;
@property(retain, nonatomic) FFContext *context; // @synthesize context=_context;
- (void)updatePlayheadTime:(id)arg1;
- (void)updateViewPlayheadTime:(CDStruct_1b6d18a9)arg1;
- (void)updateToTimelineContext;
- (void)updateViewPlayheadTimeFromContext;
- (void)rebuildColorControlsMenu;
- (void)updateTimecodeValuesFromSkimmable:(struct NSObject *)arg1;
- (void)updateTimecodeValuesFromAnchoredObject:(id)arg1;
- (void)numericEntryWillBegin;
- (BOOL)numericEntryOngoing;
- (void)delayDisableNumericEntry;
- (void)numericEntryDidEnd;
- (void)setNumericEntryValue:(id)arg1;
- (void)setNumericEntryType:(unsigned long long)arg1;
- (void)setNumericEntryDirection:(long long)arg1;
- (void)setNumericEntryShowsSubframes:(BOOL)arg1;
- (void)updateSelectionState;
- (void)timeRateChangedForContext:(id)arg1;
- (void)updatePlayheadLabel;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)playerScopesVisibilityChanged:(id)arg1;
- (void)shouldOpenColorBoard:(id)arg1;
- (void)shouldOpenAudioEnhance:(id)arg1;
- (void)toggleAudioCleanup:(id)arg1;

@end


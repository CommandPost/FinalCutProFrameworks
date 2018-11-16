//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

#import "FFVoiceOverDelegate.h"
#import "FFVoiceOverMeterObserver.h"
#import "NSMenuDelegate.h"
#import "NSWindowDelegate.h"

@class FFAnchoredCollection, FFAnchoredTimelineModule, FFMediaEventProject, FFVoiceOverController, LKBox, LKButton, LKPopUpButton, LKSlider, LKTextField, NSArray, NSMatrix, NSMenu, NSNumber, NSResponder, NSString, NSView, PERecorderMeterView, PEVoiceOverButton, PEVoiceOverSlider;

@interface PEVoiceOverWindowController : NSWindowController <FFVoiceOverMeterObserver, FFVoiceOverDelegate, NSWindowDelegate, NSMenuDelegate>
{
    FFVoiceOverController *_voiceOverController;
    FFAnchoredCollection *_timelineRootItem;
    FFAnchoredTimelineModule *_timelineModule;
    PERecorderMeterView *_meterView;
    NSView *_advancedControls;
    PEVoiceOverButton *_recordButton;
    LKButton *_countdownButton;
    LKButton *_enableMultitakeButton;
    LKButton *_advancedDisclosure;
    LKButton *_muteButton;
    LKPopUpButton *_inputDevicesPopUp;
    LKPopUpButton *_outputDevicesPopUp;
    LKPopUpButton *_eventsPopUp;
    LKSlider *_inputGain;
    PEVoiceOverSlider *_outputGain;
    LKTextField *_customNameTextField;
    LKTextField *_inputGainText;
    LKTextField *_outputGainText;
    LKBox *_seperator;
    LKTextField *_outputText;
    NSMatrix *_monitorRadio;
    NSMenu *_eventMenu;
    NSMenu *_outputMenu;
    NSMenu *_inputMenu;
    NSResponder *_savedResponder;
    BOOL _observingPlayPause;
    BOOL _observingContext;
    BOOL _observingTimelineRootItem;
    BOOL _observingAudioRecorderConfigChange;
    BOOL _observingLibrary;
    BOOL _observingEvent;
    FFMediaEventProject *_mediaEvent;
    NSString *_savedOutputUID;
    NSArray *_savedOutputChannelMap;
    NSNumber *_savedOutputGain;
}

@property(retain, nonatomic) NSNumber *savedOutputGain; // @synthesize savedOutputGain=_savedOutputGain;
@property(retain, nonatomic) NSArray *savedOutputChannelMap; // @synthesize savedOutputChannelMap=_savedOutputChannelMap;
@property(retain, nonatomic) NSString *savedOutputUID; // @synthesize savedOutputUID=_savedOutputUID;
@property(nonatomic) BOOL observingEvent; // @synthesize observingEvent=_observingEvent;
@property(nonatomic) BOOL observingLibrary; // @synthesize observingLibrary=_observingLibrary;
@property(nonatomic) BOOL observingAudioRecorderConfigChange; // @synthesize observingAudioRecorderConfigChange=_observingAudioRecorderConfigChange;
@property(nonatomic) BOOL observingTimelineRootItem; // @synthesize observingTimelineRootItem=_observingTimelineRootItem;
@property(nonatomic) BOOL observingContext; // @synthesize observingContext=_observingContext;
@property(nonatomic) BOOL observingPlayPause; // @synthesize observingPlayPause=_observingPlayPause;
@property(retain, nonatomic) FFMediaEventProject *mediaEvent; // @synthesize mediaEvent=_mediaEvent;
@property(retain, nonatomic) FFAnchoredTimelineModule *timelineModule; // @synthesize timelineModule=_timelineModule;
@property(retain, nonatomic) FFAnchoredCollection *timelineRootItem; // @synthesize timelineRootItem=_timelineRootItem;
@property(retain, nonatomic) FFVoiceOverController *voiceOverController; // @synthesize voiceOverController=_voiceOverController;
- (void)menuNeedsUpdate:(id)arg1;
- (void)windowDidBecomeKey:(id)arg1;
- (id)windowWillReturnUndoManager:(id)arg1;
- (void)controlTextDidEndEditing:(id)arg1;
- (void)controlTextDidChange:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)cancelOperation:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)_libraryChangedWithDictionary:(id)arg1 forObject:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (BOOL)_editorModuleValidForVoiceover:(id)arg1;
- (void)_handlePlayPause:(id)arg1;
- (void)_stopObservingLibrary;
- (void)_startObservingLibrary;
- (void)_stopObservingEvent;
- (void)_startObservingEvent;
- (void)_stopObservingAudioRecorderConfigurationChange;
- (void)_startObservingAudioRecorderConfigurationChange;
- (void)_stopObservingTimelineRootItem;
- (void)_startObservingTimelineRootItem;
- (void)_stopObservingContext;
- (void)_startObservingContext;
- (void)_unregisterForPlayPauseNotification;
- (void)_registerForPlayPauseNotification;
- (void)haltRecording;
- (void)canStartRecordingStateMayHaveChanged;
- (BOOL)isReadyToRecord;
- (id)videoModule;
- (void)_unregisterMeterObserver;
- (void)_registerMeterObserver;
- (void)voiceOverMeterUpdate:(float *)arg1 channels:(unsigned long long)arg2;
- (void)_showVoiceOverOSC:(BOOL)arg1;
- (void)_updateOutputGain;
- (void)setMonitoringGain:(id)arg1;
- (void)setMonitoringDevice:(id)arg1;
- (void)_updateInputGain;
- (void)_setupInputGain;
- (void)setInputGain:(id)arg1;
- (void)setInputDevice:(id)arg1;
- (void)_updateRecordingUI;
- (void)setEventFromMenuItem:(id)arg1;
- (void)setProjectMute:(id)arg1;
- (void)setCustomFilename:(id)arg1;
- (void)_setCustomFilename:(id)arg1;
- (BOOL)recording;
- (void)recordingHasStopped;
- (void)recordingHasStarted;
- (void)_toggleRecord:(BOOL)arg1;
- (void)_cancelRecord;
- (void)toggleRecord:(id)arg1;
- (void)setCountdown:(id)arg1;
- (void)removeDocument:(id)arg1;
- (void)_setDeviceUsingDictionary:(id)arg1 input:(BOOL)arg2;
- (void)awakeFromNib;
- (void)toggleAdvancedView:(id)arg1;
- (void)_setupDefaultEvent;
- (void)_setupEventsPopUp;
- (void)_updateEventsPopUp;
- (void)_updateMonitorCheckbox;
- (void)_setupOutputDevicesPopUp;
- (void)_updateOutputDevicesMenu;
- (void)_setupInputDevicesPopUp;
- (void)_updateInputDevicesMenu;
- (void)_updateDeviceMenu:(BOOL)arg1;
- (id)_stringFromChannelMap:(id)arg1 input:(BOOL)arg2;
- (void)_setupMeter;
- (void)_updateAdvancedOptions;
- (void)_updateView;
- (void)_setupTakeName;
- (void)_setupView;
- (void)_setupTimeline;
- (void)configurationChangedNotification:(id)arg1;
- (void)_configurationChanged:(id)arg1;
- (id)_systemOutputInfo;
- (BOOL)_systemSettingAllowed;
- (BOOL)_internalHardwareAllowed;
- (void)_setupVoiceOver;
- (void)_setVoiceOverContext:(id)arg1;
- (void)windowDidMove:(id)arg1;
- (void)_saveWindowFrame;
- (void)windowWillClose:(id)arg1;
- (void)showWindow:(id)arg1;
- (id)init;
- (void)enableMultitake:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


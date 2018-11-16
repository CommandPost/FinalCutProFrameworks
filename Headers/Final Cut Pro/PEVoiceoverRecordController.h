//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

#import "NSTextFieldDelegate.h"
#import "NSWindowDelegate.h"

@class FFContext, FFMedia, FFMediaEventProject, FFPlayerModule, FFVORecorder, LKButton, LKPopUpButton, LKSlider, LKTextField, NSArrayController, NSColor, NSURL, PERecorderMeterView;

@interface PEVoiceoverRecordController : NSWindowController <NSWindowDelegate, NSTextFieldDelegate>
{
    LKButton *_combinedRecordStopButton;
    PERecorderMeterView *_meterView;
    LKPopUpButton *_recordTargetPopup;
    LKPopUpButton *_recordDevicePopup;
    LKPopUpButton *_monitorDevicePopup;
    LKSlider *_recordGainSlider;
    LKSlider *_monitorGainSlider;
    LKTextField *_recordGainTextField;
    LKTextField *_monitorGainTextField;
    LKButton *_monitorEnableCheckbox;
    LKTextField *_statusText;
    FFVORecorder *_recorder;
    NSURL *_recordedFileURL;
    BOOL _stoppingRecord;
    NSArrayController *_eventArrayController;
    FFMediaEventProject *_selectedEvent;
    BOOL _shouldCreateNewEvent;
    unsigned int _uniqueNameCount;
    NSColor *_statusTextInitialColor;
    BOOL _transportWasRollingAtRecordStart;
    FFMedia *_previousSelectedSequence;
    CDStruct_1b6d18a9 _playerTimeAtRecordStart;
    FFPlayerModule *_playerModule;
    FFContext *_context;
}

- (void)_setSubmenuItemActions:(SEL)arg1 forMenu:(id)arg2;
- (void)_setUpRecordDeviceMenu;
- (void)_setUpMonitorDeviceMenu;
- (void)_setUpRecordGainSlider;
- (void)controlTextDidChange:(id)arg1;
- (void)_setUpGainTextFields;
- (void)_unregisterPlayPauseNotification;
- (void)_registerPlayPauseNotification;
- (void)_createVORecorder;
- (void)_releaseVORecorder;
- (void)_recreateVORecorder;
- (void)_setEnableRecordButtonFromRate:(double)arg1;
- (void)_setUpUIForRecordReady;
- (void)_setUpUIForRecordRolling;
- (BOOL)actionAddMediaObjects:(id)arg1 toEvent:(id)arg2 error:(id *)arg3;
- (void)_editSequenceClipFromRecordedFile:(id)arg1 displayName:(id)arg2 atTime:(CDStruct_1b6d18a9)arg3;
- (void)_playerModuleDidPlayPause:(id)arg1;
- (void)changeMediaEventTarget:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)awakeFromNib;
- (id)windowFrameAutosaveName;
- (void)windowDidLoad;
- (void)windowDidBecomeKey:(id)arg1;
- (void)windowDidExpose:(id)arg1;
- (void)windowWillClose:(id)arg1;
- (void)showWindow:(id)arg1;
- (void)startRecord;
- (void)stopRecord:(BOOL)arg1;
- (void)toggleRecord:(id)arg1;
- (void)changeInputDevice:(id)arg1;
- (void)changeMonitorDevice:(id)arg1;
- (void)changeMonitorDeviceFromSubmenuItem:(id)arg1;
- (void)changeRecordDeviceFromSubmenuItem:(id)arg1;
- (void)changeRecordingGaindB:(id)arg1;
- (void)changeMonitorGaindB:(id)arg1;
- (void)changeMonitorMute:(id)arg1;
- (void)resetMeter:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)timeRateChangedForContext:(id)arg1;
- (void)_setContext:(id)arg1;
@property BOOL shouldCreateNewEvent; // @synthesize shouldCreateNewEvent=_shouldCreateNewEvent;
@property FFMediaEventProject *selectedEvent; // @synthesize selectedEvent=_selectedEvent;

@end


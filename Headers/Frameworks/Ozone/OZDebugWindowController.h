//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

#import "NSTabViewDelegate.h"

@class LKButton, LKPopUpButton, LKSegmentedCell, LKSlider, LKTabView, LKTableView, LKTextField, LKTextView, NSArray, NSString, NSTimer, NSView;

@interface OZDebugWindowController : NSWindowController <NSTabViewDelegate>
{
    struct OZProfiler *_profiler;
    LKTabView *_tabView;
    LKTableView *_tableView;
    LKTextView *_textView;
    LKButton *_masterEnableButton;
    LKButton *_enableLoggingButton;
    NSArray *_tableColumns;
    BOOL _isPanelVisible;
    BOOL _isLogging;
    NSTimer *_threadTimer;
    LKSegmentedCell *_selectViewButtons;
    NSView *_tabParentView;
    NSView *_debugOptionsView;
    NSView *_loggingView;
    NSView *_performanceView;
    NSView *_threadView;
    LKTableView *_threadTableView;
    LKTextField *_templatePathTF;
    LKPopUpButton *_saveOptionsPopup;
    LKButton *_skipPreviewsButton;
    LKPopUpButton *_kernelType;
    LKSlider *_supersamples;
    LKTextField *_sceneHashTF;
    LKButton *_allowDropZoneAsPlaceholderButton;
    LKButton *_allowAnimatedStillsButton;
    LKButton *_doNotSaveUISettingsButton;
}

+ (id)sharedController;
- (void)doNotSaveUISettings:(id)arg1;
- (void)allowAnimatedStills:(id)arg1;
- (void)allowDropZoneAsPlaceholder:(id)arg1;
- (void)updateSceneHash:(id)arg1;
- (void)skipTemplatePreviews:(id)arg1;
- (void)generateTemplatePreviews:(id)arg1;
- (void)chooseTemplatePath:(id)arg1;
- (void)updateDebugValues;
- (void)setLoggingOptions:(id)arg1;
- (void)setRenderingOptions:(id)arg1;
- (void)startUpdatingThreadTable;
- (void)updateThreadTable;
- (void)tabView:(id)arg1 willSelectTabViewItem:(id)arg2;
- (id)boldString:(id)arg1;
- (void)tableView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 row:(int)arg4;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(int)arg3;
- (int)numberOfRowsInTableView:(id)arg1;
- (void)updateTimeStat:(struct OZProfilerTimeStat *)arg1 row:(int)arg2;
- (void)appendStatString:(id)arg1;
- (void)updateStats;
- (void)updateStatsLoop;
- (void)clearTextView:(id)arg1;
- (void)toggleLogging:(id)arg1;
- (void)toggleMasterEnable:(id)arg1;
- (void)reset:(id)arg1;
- (void)selectView:(id)arg1;
- (void)showWindow:(id)arg1;
- (void)windowDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


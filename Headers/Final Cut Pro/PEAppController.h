//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FFErrorReportingProtocol.h"
#import "FFRolesMenuDelegate.h"
#import "NSApplicationDelegate.h"
#import "NSMenuDelegate.h"
#import "NSUserInterfaceValidations.h"
#import "PEFullScreenWindowDelegate.h"

@class FFAnchoredSequence, FFProject, LKWindow, LKWindowModuleController, NSAlert, NSArray, NSMenu, NSMenuItem, NSMutableArray, PEEditorContainerModule, PEImportWindow, PEMarkerEditorContainerModule, PEMediaSourceEditorContainerModule, PEVariantsContainerModule, PEVoiceoverRecordController, Stopwatch;

@interface PEAppController : NSObject <FFErrorReportingProtocol, NSApplicationDelegate, NSUserInterfaceValidations, NSMenuDelegate, PEFullScreenWindowDelegate, FFRolesMenuDelegate>
{
    NSMenuItem *_videoResolutionMenuItem;
    NSMenuItem *_audioResolutionMenuItem;
    NSMenu *_windowsMenu;
    NSMenuItem *_screenSizeOverrideMenuItem;
    NSMenuItem *_debugToolsSeperatorMenuItem;
    NSMenuItem *_debugToolsMenuItem;
    NSMenuItem *_clipsGroupByMenuItem;
    NSMenuItem *_clipsArrangeByMenuItem;
    NSMenu *_markMenu;
    NSMenuItem *_markSplitMenuItem;
    NSMenuItem *_clearSplitMenuItem;
    NSMenuItem *_rolesMenuItem;
    NSMenuItem *_applyCustomNameMenuItem;
    NSMenuItem *_debugMenu;
    NSMenuItem *_avOutMenu;
    NSMenu *_videoFiltersMenu;
    NSMenu *_audioEffectsMenu;
    NSMenu *_videoTransitionsMenu;
    NSMenu *_audioTransitionsMenu;
    NSMenu *_videoGeneratorsMenu;
    NSMenu *_timelineRowHeightMenu;
    NSMenu *_tracksMenu;
    PEEditorContainerModule *_activeEditorContainer;
    id _projectTranslator;
    PEVoiceoverRecordController *_voiceoverRecordController;
    Stopwatch *_startupTimer;
    LKWindow *_stacksPopOverWindow;
    PEVariantsContainerModule *_stacksMod;
    PEMarkerEditorContainerModule *_markerEditorContainerModule;
    PEMediaSourceEditorContainerModule *_mediaSourceEditorContainerModule;
    PEImportWindow *_importWindow;
    NSMutableArray *_curtainWindows;
    struct _NSModalSession *_modalSession;
    NSArray *_savedSelectedItems;
    id _savedSelectionOwner;
    BOOL _observingRADVolumeDidMount;
    BOOL _openingImportWindow;
    LKWindowModuleController *_importWindowController;
    BOOL _toggleAudioScrubbingIsDown;
    BOOL _toggleSkimmingIsDown;
    BOOL _toggleSnappingIsDown;
    BOOL _cleanUpFromEventMerge;
    NSAlert *_coRunningAlert;
    int _databaseSaveErrors;
    BOOL _timerRunning;
    long long _failedSaveWarningTimeout;
    struct _flags {
        unsigned int inspectorWasVisible:1;
    } _flags;
}

+ (id)appController;
- (id)init;
- (void)dealloc;
- (void)_registerDefaults;
- (id)versionCreditsString;
- (id)copyrightYearString;
- (BOOL)applicationShouldOpenUntitledFile:(id)arg1;
- (void)_coRunningAlertDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)_checkOlderFinalCutRunning;
- (void)_appLaunched:(id)arg1;
- (void)_appTerminated:(id)arg1;
- (void)_saveErrorAlertDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)_warnUserOfSaveFailure:(id)arg1;
- (void)_warnOfDatabaseSaveProblem:(id)arg1;
- (void)applicationWillFinishLaunching:(id)arg1;
- (void)applicationDidFinishLaunching:(id)arg1;
- (void)cancelTasksAlertDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (unsigned long long)applicationShouldTerminate:(id)arg1;
- (void)applicationWillTerminate:(id)arg1;
- (BOOL)applicationShouldHandleReopen:(id)arg1 hasVisibleWindows:(BOOL)arg2;
- (void)applicationDidMiniaturizeAll:(id)arg1;
- (BOOL)disableGradationChanges;
- (void)cancelActiveNonArrowTool;
- (void)cleanupFromMergeIfNeeded;
- (void)mediaProjectsWillBeMerged:(id)arg1;
- (void)goToProjectOrganizerIfProjectIsOpenInTimeline:(id)arg1;
- (void)haveOrganizerOpenInTimeline;
- (void)stopPlayback;
- (BOOL)runningOnALionConfig;
- (BOOL)applicationSystemFontIsMedium;
- (unsigned long long)currentCompatibleLayoutVersion;
- (BOOL)shouldInstallModuleLayoutMenu;
- (id)mainWorkspaceContainer;
- (id)mainDisplayArea;
- (BOOL)isMainDisplayAreaFullscreen;
- (id)mainEditorContainer;
- (id)projectTimelineSwapModule;
- (id)mediaEventOrganizerContainer;
- (BOOL)isMediaEventBrowserFullscreen;
- (id)toolbarModule;
- (id)inspectorModule;
- (id)mediaBrowserModule;
- (id)projectOrganizerModule;
- (id)markerEditor;
- (id)variantsPicker;
- (id)backgroundTaskListModule;
- (id)audioMeterModule;
- (id)audioCleanupModule;
- (id)colorModule;
- (id)dataListModule;
- (id)editorContainerWithID:(id)arg1 createIfNeeded:(BOOL)arg2 withFrame:(struct CGRect)arg3;
- (id)activeTapeModule;
@property(readonly) NSArray *projects;
@property(readonly) FFProject *currentProject;
- (void)setCurrentProject:(id)arg1;
@property(readonly) FFAnchoredSequence *currentSequence;
- (void)setCurrentSequence:(id)arg1;
@property BOOL disableAudioScrubbing;
- (BOOL)disableSkimming;
- (void)setDisableSkimming:(BOOL)arg1;
- (BOOL)disableSnapping;
- (void)setDisableSnapping:(BOOL)arg1;
- (void)downloadAdditionalContent:(id)arg1;
- (void)importEventDirectory:(id)arg1 withProgress:(id)arg2;
- (void)eventImportAlertDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)importAlliMovieEvents:(id)arg1;
- (void)importiMovieProject:(BOOL)arg1;
- (void)alertUserToXMLImportWarnings:(id)arg1;
- (void)alertUserToXMLImportWarnings:(id)arg1 url:(id)arg2;
- (void)activateFirstSequenceProject:(id)arg1;
- (void)importFinalCutXML;
- (void)swapEventsAndTimeline:(id)arg1;
- (void)resetWindowLayout:(id)arg1;
- (void)showKeyboardShortcuts:(id)arg1;
- (void)showSupportedCameras:(id)arg1;
- (void)showFCPFeedback:(id)arg1;
- (void)showFCPServiceAndSupport:(id)arg1;
- (void)toggleFullscreenOrganizer:(id)arg1;
- (void)toggleFullscreenDisplayArea:(id)arg1;
- (void)fullscreenWindow:(id)arg1 screenNotAvailable:(long long)arg2;
- (void)toggleAudioScrubbing:(id)arg1;
- (void)toggleSkimming:(id)arg1;
- (void)toggleSnapping:(id)arg1;
- (void)toggleSnappingDown:(id)arg1;
- (void)toggleSnappingUp:(id)arg1;
- (void)toggleAudioScrubbingDown:(id)arg1;
- (void)toggleAudioScrubbingUp:(id)arg1;
- (void)toggleSkimmingDown:(id)arg1;
- (void)toggleSkimmingUp:(id)arg1;
- (void)orderFrontAboutBox:(id)arg1;
- (void)importIMovieProject:(id)arg1;
- (void)importIMovieEvent:(id)arg1;
- (void)importXML:(id)arg1;
- (void)openImportWindow;
- (void)closeImportWindow;
- (void)importWindowWillStartClosing:(id)arg1;
- (void)windowWillClose:(id)arg1;
- (void)willResignActive;
- (void)willBecomeActive;
- (void)firstVolumeDidMount:(id)arg1;
- (void)radVolumeDidMount:(id)arg1;
- (void)importPanel:(id)arg1;
- (id)currentOrganizerModule;
- (id)organizerSelection:(id)arg1;
- (BOOL)reimportFromCameraValidateOnly:(BOOL)arg1;
- (void)reimportFromCamera:(id)arg1;
- (void)moveEvent:(id)arg1;
- (void)consolidateProject:(id)arg1;
- (void)mergeEvents:(id)arg1;
- (void)purgeRenderFiles:(id)arg1;
- (void)consolidateFiles:(id)arg1;
- (void)analyzeAndFix:(id)arg1;
- (void)transcodeMedia:(id)arg1;
- (void)modifyContentCreationDate:(id)arg1;
- (void)showPreferences:(id)arg1;
- (void)_goToHelpPage:(id)arg1 anchorName:(id)arg2;
- (void)showHelp:(id)arg1;
- (void)findAndReplace:(id)arg1;
- (void)toggleInspector:(id)arg1;
- (void)retimeSlowHalf:(id)arg1;
- (void)retimeSlowQuarter:(id)arg1;
- (void)retimeSlowTenPercent:(id)arg1;
- (void)retimeFastx2:(id)arg1;
- (void)retimeFastx4:(id)arg1;
- (void)retimeFastx8:(id)arg1;
- (void)retimeFastx20:(id)arg1;
- (void)retimeReverseClip:(id)arg1;
- (void)retimeSpeedRampToZero:(id)arg1;
- (void)retimeSpeedRampFromZero:(id)arg1;
- (void)retimeInstantReplay:(id)arg1;
- (void)retimeRewindx1:(id)arg1;
- (void)retimeRewindx2:(id)arg1;
- (void)retimeRewindx4:(id)arg1;
- (void)retimeTurnOnFloorFrameSampling:(id)arg1;
- (void)retimeTurnOnFrameBlending:(id)arg1;
- (void)retimeTurnOnOpticalFlow:(id)arg1;
- (void)retimeTogglePreservesPitch:(id)arg1;
- (void)retimeReset:(id)arg1;
- (void)retimeNormal:(id)arg1;
- (void)retimeHold:(id)arg1;
- (void)retimeConformSpeed:(id)arg1;
- (void)setColorChannelDisplay:(id)arg1;
- (void)setDisplayBroadcastSafeZones:(id)arg1;
- (void)toggleAudioMeter:(id)arg1;
- (void)goToAudioCleanup:(id)arg1;
- (void)toggleEnhanceAudio:(id)arg1;
- (void)toggleVideoScopes:(id)arg1;
- (void)showHistogram:(id)arg1;
- (void)showWaveform:(id)arg1;
- (void)showVectorscope:(id)arg1;
- (BOOL)scopesVisible;
- (BOOL)histogramVisible;
- (BOOL)waveformVisible;
- (BOOL)vectorscopeVisible;
- (void)goToColorBoard:(id)arg1;
- (void)switchToInspector:(id)arg1;
- (void)toggleMediaBrowser:(id)arg1;
- (void)toggleMediaBrowserModeFromMenuTag:(id)arg1;
- (void)toggleProjectOrganizer:(id)arg1;
- (void)toggleEventsLibrary:(id)arg1;
- (void)toggleDataList:(id)arg1;
- (void)hideMarkerEditor:(id)arg1;
- (BOOL)markerEditorIsShown;
- (void)showMarkerEditorAtTime:(CDStruct_1b6d18a9)arg1 forObject:(id)arg2 forEditorModule:(id)arg3;
- (void)showMarkerEditorForMarkerLayer:(id)arg1 object:(id)arg2 editorModule:(id)arg3;
- (void)closeVariantsPicker:(id)arg1;
- (void)toggleVariantsPicker:(id)arg1;
- (void)openStack:(id)arg1 fromModule:(id)arg2;
- (void)auditionSelectedVariant:(id)arg1;
- (void)goToInspector:(id)arg1;
- (void)goToOrganizer:(id)arg1;
- (void)goToViewer:(id)arg1;
- (void)goToCanvas:(id)arg1;
- (void)goToTimeline:(id)arg1;
- (void)goToBackgroundTaskList:(id)arg1;
- (void)toggleBackgroundTasksList:(id)arg1;
- (void)toggleVoiceoverRecordView:(id)arg1;
- (void)toggleVoiceoverRecording:(id)arg1;
- (void)toggleVideoOut:(id)arg1;
- (void)selectExternalVideoScreen:(id)arg1;
- (void)switchTrimEditingMode:(id)arg1;
- (void)switchPlacementEditingMode:(id)arg1;
- (void)switchTemporalResolutionMode:(id)arg1;
- (void)showProviderSettings:(id)arg1;
- (void)layoutForCoreEditing:(id)arg1;
- (void)layoutForDefault:(id)arg1;
- (void)layoutForAudioEditing:(id)arg1;
- (void)lift:(id)arg1;
- (void)stamp:(id)arg1;
- (void)newProjectSheetClosing:(int)arg1 project:(id)arg2 sequence:(id)arg3 projectLocation:(id)arg4;
- (void)newProject:(id)arg1;
- (id)_createNewSeqProjectWithName:(id)arg1;
- (id)_createNewEvtProjectWithName:(id)arg1;
- (void)openProject:(id)arg1;
- (void)insertKeyDown:(id)arg1;
- (void)insertKeyDownAudio:(id)arg1;
- (void)insertKeyDownVideo:(id)arg1;
- (void)insertPlaceholder:(id)arg1;
- (void)insertGap:(id)arg1;
- (id)_rangesOfMedia;
- (id)_rangesOfMediaForTimelineEditing;
- (void)replaceWithSelectedMedia:(id)arg1 replaceActionType:(int)arg2;
- (BOOL)canEditWithSelectedMedia:(id)arg1 editAction:(int)arg2 backtimed:(BOOL)arg3 trackType:(id)arg4;
- (void)editWithSelectedMedia:(id)arg1 editAction:(int)arg2 backtimed:(BOOL)arg3 trackType:(id)arg4;
- (void)insertWithSelectedMedia:(id)arg1;
- (void)insertWithSelectedMediaAudio:(id)arg1;
- (void)insertWithSelectedMediaVideo:(id)arg1;
- (void)overwriteWithSelectedMedia:(id)arg1;
- (void)overwriteWithSelectedMediaAudio:(id)arg1;
- (void)overwriteWithSelectedMediaVideo:(id)arg1;
- (void)overwriteWithSelectedMediaBacktimed:(id)arg1;
- (void)overwriteWithSelectedMediaAudioBacktimed:(id)arg1;
- (void)overwriteWithSelectedMediaVideoBacktimed:(id)arg1;
- (void)replaceWithSelectedMediaWhole:(id)arg1;
- (void)replaceWithSelectedMediaAtPlayhead:(id)arg1;
- (void)replaceWithSelectedMediaFromStart:(id)arg1;
- (void)replaceWithSelectedMediaFromEnd:(id)arg1;
- (void)replaceWithSelectedMediaAndAddToAudition:(id)arg1;
- (void)addSelectedMediaToAudition:(id)arg1;
- (void)toggleFavoritesAndAllFilters:(id)arg1;
- (void)avEditModeBoth:(id)arg1;
- (void)avEditModeAudio:(id)arg1;
- (void)avEditModeVideo:(id)arg1;
- (void)toggleTimelineItemTitlesShown:(id)arg1;
- (void)toggleTimelineSelectionMovesPlayhead:(id)arg1;
- (void)_updateNamePresetMenuItems;
- (void)showNewPresetsWindow:(id)arg1;
- (void)showEditPresetsWindow:(id)arg1;
- (void)applyNamePreset:(id)arg1;
- (void)editRoles:(id)arg1;
- (id)anchoredObjectsForRolesMenuController:(id)arg1;
- (void)rolesMenuController:(id)arg1 shouldAddRole:(id)arg2 toAnchoredObjects:(id)arg3;
- (void)showFFDataViewer:(id)arg1;
- (void)summarizeObjectCacheToConsole:(id)arg1;
- (void)exportEffectBrowserThumbnails:(id)arg1;
- (void)exportShareArchive:(id)arg1;
- (void)exportMovieModal:(id)arg1;
- (void)removeFromCNNiReport:(id)arg1;
- (void)removeFromFacebook:(id)arg1;
- (void)removeFromMobileMe:(id)arg1;
- (void)removeFromVimeo:(id)arg1;
- (void)removeFromYouTube:(id)arg1;
- (id)moduleForAction:(SEL)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (BOOL)_validateUserInterfaceItem:(id)arg1 usingModule:(id)arg2;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)menuNeedsUpdate:(id)arg1;
- (BOOL)application:(id)arg1 delegateHandlesKey:(id)arg2;
- (void)reportError:(id)arg1;
- (void)moduleLayoutWillChange:(id)arg1;
- (void)moduleLayoutDidChange:(id)arg1;
- (void)mainWindowChangedScreens:(id)arg1;
- (void)_updateLastOpenedProjectPref;
- (id)_gatherMediaForInsertion;
- (id)mediaForEditingOperation:(BOOL)arg1;
- (CDStruct_1b6d18a9)_playheadForMediaSelection;
- (void)_moveWorkspaceModuleToFullscreen:(id)arg1 withLabel:(id)arg2 animate:(BOOL)arg3;
- (unsigned int)_organizerSelectedBrowser;
- (unsigned int)_organizerSelectionState;
- (BOOL)selectedEventsAreOnSameDrive;
- (void)_removeShare:(long long)arg1;
@property(retain) PEEditorContainerModule *activeEditorContainer; // @synthesize activeEditorContainer=_activeEditorContainer;

@end


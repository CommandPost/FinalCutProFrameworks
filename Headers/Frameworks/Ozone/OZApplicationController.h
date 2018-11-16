//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSApplicationDelegate.h"
#import "NSMenuDelegate.h"
#import "NSUserInterfaceValidations.h"

@class NSAlert, NSMenu, NSMenuItem;

@interface OZApplicationController : NSObject <NSApplicationDelegate, NSUserInterfaceValidations, NSMenuDelegate>
{
    NSMenu *helpMenu;
    NSMenu *blendMenu;
    NSMenu *fileMenu;
    NSMenuItem *publishMenuItem;
    BOOL _hasValidLicense;
    id _greentreeObject;
    id _myProApplication;
    NSAlert *_coRunningAlert;
}

+ (id)sharedController;
+ (id)sharedLibraryModule;
- (id)init;
- (void)dealloc;
- (BOOL)applicationShouldOpenUntitledFile:(id)arg1;
- (void)checkOlderMotionRunning;
- (void)appLaunched:(id)arg1;
- (void)appTerminated:(id)arg1;
- (void)applicationWillFinishLaunching:(id)arg1;
- (void)performStartupAction;
- (void)applicationDidFinishLaunching:(id)arg1;
- (void)application:(id)arg1 openFiles:(id)arg2;
- (void)documentControllerHandlingOpenFiles:(id)arg1 didCloseAll:(BOOL)arg2 contextInfo:(CDStruct_a70f6672 *)arg3;
- (void)applicationWillTerminate:(id)arg1;
- (void)showPreferences:(id)arg1;
- (void)documentWillOpen:(id)arg1;
- (void)toggleMainTimingModuleWhenTogglingModule:(id)arg1;
- (void)toggleVideoTimeline:(id)arg1;
- (void)toggleAudioTimeline:(id)arg1;
- (void)toggleCurveEditor:(id)arg1;
- (void)toggleTimingVisibility:(id)arg1;
- (void)toggleHUD:(id)arg1;
- (void)toggleTaskList:(id)arg1;
- (void)toggleUtilityPane:(id)arg1;
- (void)toggleProjectPane:(id)arg1;
- (void)togglePlayerMode:(id)arg1;
- (BOOL)isModuleOnSecondScreen:(id)arg1;
- (void)fullscreenWindow:(id)arg1 screenNotAvailable:(long long)arg2;
- (BOOL)_isSecondScreenAvailable;
- (void)_moveWorkspaceModuleToFullscreen:(id)arg1 withLabel:(id)arg2 animate:(BOOL)arg3;
- (void)revertToOriginalLayout:(id)arg1;
- (void)toggleCanvasOnSecondScreen:(id)arg1;
- (void)toggleTimingOnSecondScreen:(id)arg1;
- (void)_moveTimingModuleToMainWindow;
- (void)_moveCanvasModuleToMainWindow;
- (unsigned long long)currentCompatibleLayoutVersion;
- (id)mainContainerModule;
- (id)mainCanvasModule;
- (id)mainLayerListModule;
- (id)mainWindowModule;
- (id)mainTimingModule;
- (id)mainFooterModule;
- (id)secondaryFooterModule;
- (id)mainTimelineModule;
- (id)mainCurveEditorModule;
- (id)mainInspectorModule;
- (id)mainFileBrowserModule;
- (id)mainLibraryModule;
- (id)transportControllerModule;
- (id)toolbarModule;
- (id)mainTimingControlModule;
- (id)libraryInspectorWrapperModule;
- (id)layerAudioWrapperModule;
- (id)mainTimelineCurveEditorModule;
- (id)mainFootageListModule;
- (BOOL)validateMenuItem:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)menuNeedsUpdate:(id)arg1;
- (void)moduleLayoutWillChange:(id)arg1;
- (void)moduleLayoutDidChange:(id)arg1;
- (BOOL)shouldInstallModuleLayoutMenu;
- (void)checkLicensing;
- (id)copyrightYearString;
- (void)showRepresentedPath:(id)arg1;
- (void)showRepresentedURL:(id)arg1;
- (void)createSupportProfile:(id)arg1;
- (void)oz_registerCriticalDefaults;
- (BOOL)oz_buildHelpMenu;
- (BOOL)application:(id)arg1 delegateHandlesKey:(id)arg2;
- (void)insertInOrderedDocuments:(id)arg1;
- (id)orderedDocuments;
@property(nonatomic) BOOL hasValidLicense; // @synthesize hasValidLicense=_hasValidLicense;

@end

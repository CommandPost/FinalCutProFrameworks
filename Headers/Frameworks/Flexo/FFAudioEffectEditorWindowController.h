//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

@class CHChannelEnum, CHChannelFolder, FFAnchoredObject, FFAudioEffectContentView, FFAudioEffectEditorDelegate, FFAudioEffectHeaderView, FFAudioEffectWindowParameterTracker, FFAudioUnitEffect, FFChannelChangeController, FFContext, FFEffectBundle, FFEffectStack, FFSharedAudioUnit, FFUndoHandler, LKButton, LKPopUpButton, LKSegmentedControl, NSArray, NSLayoutConstraint, NSMapTable, NSMutableArray, NSMutableSet, NSString, NSTextField, NSView;

__attribute__((visibility("hidden")))
@interface FFAudioEffectEditorWindowController : NSWindowController
{
    FFAudioEffectHeaderView *_headerView;
    NSView *_footerView;
    LKButton *_bypassButton;
    LKPopUpButton *_presetPopUp;
    LKSegmentedControl *_previousNextButton;
    LKPopUpButton *_subEffectPopUp;
    LKPopUpButton *_viewScalePopUp;
    FFAudioEffectContentView *_effectContainerView;
    NSTextField *_footerEffectLabel;
    NSTextField *_footerRoleStreamLabel;
    NSLayoutConstraint *_effectContainerWidthConstraint;
    NSLayoutConstraint *_effectContainerHeightConstraint;
    NSLayoutConstraint *_effectContainerLeadingConstraint;
    NSLayoutConstraint *_effectContainerTrailingConstraint;
    BOOL _isObserving;
    struct __FSEventStream *_eventStream;
    NSArray *_paths;
    BOOL _preferGeneric;
    BOOL _isGeneric;
    FFAudioEffectEditorDelegate *_effectDelegate;
    FFEffectStack *_effectStack;
    FFAnchoredObject *_effectStackAnchoredObject;
    FFAudioUnitEffect *_effect;
    FFEffectBundle *_effectBundle;
    FFSharedAudioUnit *_effectAudioUnit;
    FFContext *_context;
    id _selectionHandler;
    BOOL _isPlaying;
    CHChannelEnum *_presetChannel;
    NSMapTable *_parameterTrackers;
    CHChannelFolder *_parametersFolder;
    CHChannelFolder *_effectChannelFolder;
    FFChannelChangeController *_channelChangeController;
    NSString *_channelChangeControllerActionName;
    id <FFChannelChangeControllerDivorcedDelegate> _delegate;
    int _channelChangesCount;
    BOOL _multipleChannelChangesFlag;
    NSMutableArray *_linkedGesturedTrackers;
    NSMutableSet *_gesturedTrackers;
    FFAudioEffectWindowParameterTracker *_masterGesturedTracker;
    FFUndoHandler *_disabledUndoWarning;
    BOOL _isKeyWindow;
    BOOL _observingAUViewFrameChanges;
    unsigned long long _auScalePercentage;
}

+ (void)prepareForShutdown;
+ (id)effectsForWindowControllers;
+ (id)windowControllerForEffect:(id)arg1;
+ (void)showWindowControllerForLastEffectAddedToObject:(id)arg1 context:(id)arg2;
+ (id)showWindowControllerForEffectDelegate:(id)arg1 context:(id)arg2 preferGeneric:(BOOL)arg3;
+ (void)_cacheRemoveWindowController:(id)arg1;
+ (void)_cacheAddWindowController:(id)arg1;
@property(readonly, nonatomic) BOOL preferGeneric; // @synthesize preferGeneric=_preferGeneric;
@property(readonly, nonatomic) FFContext *context; // @synthesize context=_context;
@property(retain, nonatomic) id <FFChannelChangeControllerDivorcedDelegate> controllerDelegate; // @synthesize controllerDelegate=_delegate;
- (void)_removeObservers;
- (void)_addObservers;
- (double)_minHeaderWidth;
- (void)_adjustHeaderViewPositions;
- (void)_updateHeader;
- (void)_updateViewScalePopUp;
- (void)_setupViewScalePopUp;
- (void)_updateSubEffectPopUp;
- (void)_setupSubEffectPopUp;
- (void)_updateNavigationButton;
- (void)_setupNavigationButton;
- (void)_updatePresetPopUp;
- (void)_setupPresetPopUp;
- (void)_updateBypassButton;
- (void)_setupBypassButton;
- (void)_configurePopUpMenuItems:(id)arg1 withAction:(SEL)arg2;
- (void)_subEffectPopUpItemSelected:(id)arg1;
- (id)_scalableAUView;
- (void)_viewScalePopUpItemSelected:(id)arg1;
- (void)_presetPopUpItemSelected:(id)arg1;
- (void)navigationControlPressed:(id)arg1;
- (void)bypassButtonPressed:(id)arg1;
- (id)_nextItemFromItem:(id)arg1 forDirection:(int)arg2;
- (id)_nextFromSubmenu:(id)arg1 direction:(int)arg2;
- (BOOL)_index:(int)arg1 isValidForItem:(id)arg2 forDirection:(int)arg3;
- (id)_findCurrentEffectBundlePresetInMenu:(id)arg1;
- (id)_findCurrentSubEffectInMenu:(id)arg1;
- (id)_findCurrentPresetInMenu:(id)arg1;
- (BOOL)_isCurrentEffectBundlePresetEqualToMenuItem:(id)arg1;
- (BOOL)_isCurrentAudioUnitPresetEqualToMenuItem:(id)arg1;
- (void)bypassChanged:(id)arg1;
- (void)anchoredObjectInvalidated:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)auViewFrameDidChangeNotification:(id)arg1;
- (void)_stopObservingAUViewFrameChanges:(id)arg1;
- (void)_startObservingAUViewFrameChanges:(id)arg1;
- (void)_adjustWindowSizeToFitAUViewSize;
- (BOOL)_canScaleEffectView;
- (void)_windowResignedKey:(id)arg1;
- (void)_windowBecameKey:(id)arg1;
- (void)windowWillClose:(id)arg1;
- (void)windowDidLoad;
- (void)unloadAudioUnit;
- (void)loadAudioUnit;
- (void)loadViewForAudioUnit:(struct ComponentInstanceRecord *)arg1;
- (void)_debugLogGeometryForView:(id)arg1 withText:(id)arg2;
- (id)_cocoaViewForAudioUnit:(struct ComponentInstanceRecord *)arg1;
- (void)timeRateChangedForContext:(id)arg1;
- (void)_handleParameterEvent:(id)arg1 event:(const struct AudioUnitEvent *)arg2 newValue:(float)arg3;
- (void)_storeEffectState:(BOOL)arg1;
- (void)_endChannelChanges;
- (void)_channelChangeEnd:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2;
- (void)_channelChangeBegin:(id)arg1 actionName:(id)arg2 atTime:(CDStruct_1b6d18a9)arg3;
- (void)_channelChangeDidSetValue:(id)arg1 toValue:(id)arg2 atTime:(CDStruct_1b6d18a9)arg3;
- (void)_channelChangeWillSetValue:(id)arg1 toValue:(id)arg2 atTime:(CDStruct_1b6d18a9)arg3;
- (id)windowWillReturnUndoManager:(id)arg1;
- (BOOL)_allowChannelChangeUpdates;
- (CDStruct_1b6d18a9)_contextTime;
- (BOOL)isGeneric;
- (id)effectDelegate;
- (struct ComponentInstanceRecord *)audioUnit;
- (void)awakeFromNib;
- (id)undoHandler;
- (void)_enableUndoWarning;
- (void)_disableUndoWarning;
- (void)_cleanupTrackersAndChannelChanges;
- (void)dealloc;
- (id)initWithEffectDelegate:(id)arg1 context:(id)arg2 preferGeneric:(BOOL)arg3;
- (void)_bundleActivePartHasChanged:(id)arg1;
- (void)_updateEffectDelegate:(id)arg1;
- (void)updateFooterLabels;
- (void)updateWindowTitleBar;
- (void)updateDisplayNames;
- (void)_removeEffectStackAnchoredObjectObservation;
- (void)_addEffectStackAnchoredObjectObservation;
- (void)_setEffectDelegate:(id)arg1;
- (id)effect;
- (void)closeWindow;
- (void)windowDidMove:(id)arg1;
- (void)_saveWindowFrame;
- (void)_rolesInLibraryChanged:(id)arg1;
- (void)_effectStackAnchoredObjectChanged:(id)arg1;
- (void)_effectsChanged:(id)arg1;
- (void)_registerPropertyChangeListener:(BOOL)arg1;
- (void)_setEffectChannelFolder:(id)arg1;
- (void)_channelChangedNotification:(id)arg1;
- (void)_syncTrackersToParametersFolder;
- (void)_deferredUpdate;
- (void)_updateFromParamChannels;

@end


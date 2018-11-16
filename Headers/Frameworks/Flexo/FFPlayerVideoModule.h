//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFPlayerItemModule.h>

#import "FFFieldDisplaySetting.h"
#import "FFSelectionHandler.h"
#import "NSAnimationDelegate.h"

@class FFDestVideo<FFDestVideoDeviceManaging>, FFDestVideoGL, FFOSC, FFPlayerView, FFSnapGrid, FFThemeFacet, FFTimecodeFormatter, LKButton, NSArray, NSDictionary, NSLock, NSMenu, NSMutableArray, NSProThemeImageView, NSRecursiveLock, NSString, NSView, NSViewAnimation, PCMatrix44Double;

@interface FFPlayerVideoModule : FFPlayerItemModule <FFSelectionHandler, FFFieldDisplaySetting, NSAnimationDelegate>
{
    FFPlayerView *_playerView;
    NSProThemeImageView *_multiangleHeaderView;
    NSView *_multiangleFooterView;
    FFDestVideoGL *_destVideoGL;
    FFDestVideo<FFDestVideoDeviceManaging> *_destVideoCMIO;
    BOOL _useDestVideoCMIO;
    BOOL _primaryDestVideoCMIO;
    unsigned int _viewDisplay;
    struct CGColorSpace *_viewColorSpace;
    struct CGRect _savedViewBounds;
    struct CGRect _sequenceBounds;
    float _zoomFactor;
    struct CGPoint _origin;
    long long _colorChannelDisplayMode;
    BOOL _displayBroadcastSafeZones;
    unsigned int _displayExcessGamutChannels;
    BOOL _showBothFields;
    BOOL _multipleSelection;
    BOOL _settingActiveOSC;
    NSRecursiveLock *_oscsLock;
    NSMutableArray *_oscs;
    FFOSC *_activeOSC;
    BOOL _selectionBasedOSCsDisabled;
    id _callbackLastTimeObj;
    SEL _callbackLastTimeSel;
    PCMatrix44Double *_filmToViewTransform;
    PCMatrix44Double *_viewToFilmTransform;
    NSLock *_filmToViewLock;
    NSMenu *_toolsContextMenu;
    long long _playerBackground;
    long long _multiangleDisplayRectCount;
    long long _multiangleDisplayRows;
    long long _multiangleDisplayColumns;
    struct CGRect *_multiangleDisplayRects;
    long long _multiAngleEditStyle;
    NSView *_multiangleBankScrollArea;
    NSView *_multiangleBankArea;
    LKButton *_multiangleEditAudioVideo;
    LKButton *_multiangleEditVideo;
    LKButton *_multiangleEditAudio;
    LKButton *_multiangleNextBankButton;
    LKButton *_multianglePrevBankButton;
    NSViewAnimation *_bankAreaAnimation;
    FFSnapGrid *_snapGrid;
    NSArray *_effectChangedObservers;
    BOOL _isActiveModule;
    BOOL _contextualMenuEnabled;
    BOOL _destAddedToPlayer;
    BOOL _nrtPlayback;
    struct FFProcrastinatedDispatch_t _OSCSelectionChangeDispatchContext;
    BOOL _ignoreSelectedStateChange;
    BOOL _hasVideo;
    BOOL _installedWindowObservers;
    BOOL _oscsEnabled;
    BOOL _transportControlsEnabled;
    NSRecursiveLock *_lastCommonDrawPropertiesLock;
    NSDictionary *_lastCommonDrawProperties;
    BOOL _bankSelectorNeedsUpdate;
    FFTimecodeFormatter *_timecodeFormatter;
    unsigned long long _suspendEffectsChangedNotification;
    BOOL _suppressToolManagerSelectionChanges;
    FFThemeFacet *_audioIcon;
}

@property BOOL suppressToolManagerSelectionChanges; // @synthesize suppressToolManagerSelectionChanges=_suppressToolManagerSelectionChanges;
@property(nonatomic) long long multiAngleEditStyle; // @synthesize multiAngleEditStyle=_multiAngleEditStyle;
@property(nonatomic) BOOL primaryDestVideoCMIO; // @synthesize primaryDestVideoCMIO=_primaryDestVideoCMIO;
@property(nonatomic) BOOL useDestVideoCMIO; // @synthesize useDestVideoCMIO=_useDestVideoCMIO;
@property(nonatomic) BOOL transportControlsEnabled; // @synthesize transportControlsEnabled=_transportControlsEnabled;
@property(nonatomic) BOOL OSCsEnabled; // @synthesize OSCsEnabled=_oscsEnabled;
@property(nonatomic) BOOL ignoreSelectedStateChange; // @synthesize ignoreSelectedStateChange=_ignoreSelectedStateChange;
@property(nonatomic) BOOL contextualMenuEnabled; // @synthesize contextualMenuEnabled=_contextualMenuEnabled;
- (void)toggleGridSnapping:(id)arg1;
- (id)snapGrid;
- (void)snapshotPlayer:(id)arg1;
- (void)convertToControlPoints:(id)arg1;
- (void)setToolNone:(id)arg1;
- (void)setToolDistort:(id)arg1;
- (void)setToolCrop:(id)arg1;
- (void)setToolMotionPath:(id)arg1;
- (void)setToolTransform:(id)arg1;
- (id)toolsContextMenu:(id)arg1;
- (void)buildToolsContextMenu;
- (void)drawAudioIcon:(struct CGRect)arg1 inContext:(struct _CGLContextObject *)arg2 backgroundColor:(id)arg3;
- (id)itemsInRect:(struct CGRect)arg1;
- (id)itemAtPoint:(struct CGPoint)arg1;
- (id)itemAtPoint:(struct CGPoint)arg1 keepSelectionIfMultipleTextObjects:(BOOL)arg2;
- (void)setSelectedItems:(id)arg1;
- (id)contextRootObject;
- (void)setDisableSkimming:(BOOL)arg1;
- (void)cancelDropZoneTool:(id)arg1;
- (void)cancelTextTool:(id)arg1;
- (void)activeToolChanged:(id)arg1;
- (id)_toolObjectsFromSelectedItems:(id)arg1;
- (void)_OSCSelectionsNeedUpdatePossibleDefer;
- (void)selectedItemEffectsSelectedStateChanged:(id)arg1;
- (void)effectsChanged:(id)arg1;
- (void)resumeEffectsChangedNotification;
- (void)suspendEffectsChangedNotification;
- (void)_addOSCsForSelectionHandlerItemsMainThread;
- (void)_addOSCsForSelectionHandlerItems;
- (void)_addOSCsForSelectionHandlerItemsWithSelection:(id)arg1;
- (void)_handledDeferredAction:(SEL)arg1;
- (void)_scheduleDeferredAction:(SEL)arg1;
- (void)addOSCsForItems:(id)arg1;
- (void)_addOSCsForItem:(id)arg1;
- (void)setOSCForActiveTool:(id)arg1;
- (BOOL)acceptPassiveOSCEvent:(id)arg1;
- (BOOL)drawOSCsAtTime:(CDStruct_1b6d18a9)arg1 inRect:(struct CGRect)arg2 drawContext:(struct _CGLContextObject *)arg3 drawProperties:(id)arg4 isDisplaying:(BOOL)arg5;
- (void)setSelectionBasedOSCsEnabled:(BOOL)arg1;
- (BOOL)selectionBasedOSCsEnabled;
- (id)OSCAtPoint:(struct CGPoint)arg1;
- (void)readUnlockSequence;
- (void)readLockSequence;
- (void)removeToolBasedOSCs;
- (void)removeSelectionBasedOSCs;
- (void)removeAllOSCs;
- (void)removeOSC:(id)arg1;
- (void)_removeOSCAtIndex:(unsigned long long)arg1;
- (id)firstOSCOfClass:(Class)arg1;
- (id)OSCAtIndex:(unsigned long long)arg1;
- (void)addOSC:(id)arg1;
- (void)_addOSC:(id)arg1 playerUpdate:(BOOL)arg2;
- (void)insertOSC:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)_insertOSC:(id)arg1 atIndex:(unsigned long long)arg2 playerUpdate:(BOOL)arg3;
- (void)_performPlayerUpdateForOSC;
- (void)_insertOSC:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)makeActiveOSC:(id)arg1;
- (void)_makeActiveOSC:(id)arg1;
- (id)OSCofClass:(Class)arg1;
- (id)rawActiveOSC;
- (id)activeOSC;
- (unsigned long long)OSCCount;
- (BOOL)multipleSelection;
- (void)setMultipleSelection:(BOOL)arg1;
- (void)switchMultiangleBank:(id)arg1;
- (void)_updateAngleModeSwitchButtons;
- (void)_updateNextPrevAngleBankButtons;
- (void)_makeActiveCropOSC:(id)arg1;
- (void)_updateAngleBankSelector;
- (BOOL)isAngleEnabledForDisplayRectAtIndex:(unsigned long long)arg1;
- (id)_makeAngleBankSelectorButton;
- (void)_updateMulticamEditModeButtons;
- (struct CGRect)multiangleDisplayRectAtRow:(long long)arg1 column:(long long)arg2;
- (void)getMultiangleDisplayRects:(struct CGRect **)arg1 count:(long long *)arg2;
- (void)_recalculateMultiangleDisplayRects;
- (void)multiAngleRowsAndColumnCount:(long long *)arg1 columns:(long long *)arg2 angleOffset:(long long *)arg3;
- (BOOL)isMultiangleViewer;
- (void)setMultiangleFooterVisible:(BOOL)arg1;
- (BOOL)isMultiangleFooterVisible;
- (void)setMultiangleHeaderVisible:(BOOL)arg1;
- (BOOL)isMultiangleHeaderVisible;
- (void)cutSwitchAngle16:(id)arg1;
- (void)cutSwitchAngle15:(id)arg1;
- (void)cutSwitchAngle14:(id)arg1;
- (void)cutSwitchAngle13:(id)arg1;
- (void)cutSwitchAngle12:(id)arg1;
- (void)cutSwitchAngle11:(id)arg1;
- (void)cutSwitchAngle10:(id)arg1;
- (void)cutSwitchAngle09:(id)arg1;
- (void)cutSwitchAngle08:(id)arg1;
- (void)cutSwitchAngle07:(id)arg1;
- (void)cutSwitchAngle06:(id)arg1;
- (void)cutSwitchAngle05:(id)arg1;
- (void)cutSwitchAngle04:(id)arg1;
- (void)cutSwitchAngle03:(id)arg1;
- (void)cutSwitchAngle02:(id)arg1;
- (void)cutSwitchAngle01:(id)arg1;
- (void)switchAngle16:(id)arg1;
- (void)switchAngle15:(id)arg1;
- (void)switchAngle14:(id)arg1;
- (void)switchAngle13:(id)arg1;
- (void)switchAngle12:(id)arg1;
- (void)switchAngle11:(id)arg1;
- (void)switchAngle10:(id)arg1;
- (void)switchAngle09:(id)arg1;
- (void)switchAngle08:(id)arg1;
- (void)switchAngle07:(id)arg1;
- (void)switchAngle06:(id)arg1;
- (void)switchAngle05:(id)arg1;
- (void)switchAngle04:(id)arg1;
- (void)switchAngle03:(id)arg1;
- (void)switchAngle02:(id)arg1;
- (void)switchAngle01:(id)arg1;
- (void)switchToAngleIndex:(long long)arg1 cut:(BOOL)arg2;
- (id)angleNameForIndex:(long long)arg1 objectUnderPlayhead:(id)arg2;
- (void)selectPreviousVideoAngle:(id)arg1;
- (void)selectPreviousAudioAngle:(id)arg1;
- (void)selectPreviousAngle:(id)arg1;
- (void)selectNextVideoAngle:(id)arg1;
- (void)selectNextAudioAngle:(id)arg1;
- (void)selectNextAngle:(id)arg1;
- (void)selectNextAngle:(BOOL)arg1 video:(BOOL)arg2 audio:(BOOL)arg3;
- (BOOL)selectionAllowsAngleCommands;
- (void)animationDidEnd:(id)arg1;
- (void)showPrevAngleBankPage:(id)arg1;
- (void)showNextAngleBankPage:(id)arg1;
- (void)showPrevAngleBank:(id)arg1;
- (void)showNextAngleBank:(id)arg1;
- (void)setMultiangleEditStyleFrom:(id)arg1;
- (void)setAngleTimecodeVisible:(id)arg1;
- (void)setAngleNameVisible:(id)arg1;
- (void)setDisplayedAngles:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)noopMenuItem:(id)arg1;
- (id)objectUnderPlayhead:(char *)arg1;
- (id)localModuleActions;
- (void)setSupermodule:(id)arg1;
- (void)removeFromSupermodule;
- (void)firstResponderChanged:(id)arg1;
- (unsigned int)displayForPlayerView;
- (void)updatePlayerAndDest:(id)arg1;
- (void)tearDownPlayerDest;
- (void)userDefaultsChanged:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)selectedItemsForContext:(id)arg1;
- (id)_orderedInspectableObjectsFromSelection:(id)arg1;
- (struct CGRect)getSourceRectAndDrawRect:(struct CGRect *)arg1 imageBounds:(struct CGRect)arg2 isFlipped:(BOOL)arg3;
- (struct CGRect)filmBoundsInViewSpace;
- (id)retainedViewToFilmTransform;
- (id)retainedFilmToViewTransform;
- (id)_retainedFilmToViewTransform:(BOOL)arg1;
- (float)_updateReportedZoomFactor;
- (void)_setPlayerModuleReportedZoomFactor:(id)arg1;
- (void)addDrawProperties:(id)arg1 forFrame:(id)arg2 atTime:(CDStruct_1b6d18a9)arg3;
- (void)addCommonDrawProperties:(id)arg1 forTime:(CDStruct_1b6d18a9)arg2 forContainer:(id)arg3;
- (id)showOnlyObjectForContext:(id)arg1;
- (BOOL)destVideoCMIOHasActiveConnection;
- (id)destVideoCMIOUID;
- (void)setLastTimeCallback:(id)arg1 callbackSel:(SEL)arg2;
- (void)notifyLastTimeDisplayed:(id)arg1;
- (BOOL)didDrawVideoAtTime:(CDStruct_1b6d18a9)arg1 drawContext:(struct _CGLContextObject *)arg2 drawProperties:(id)arg3 isDisplaying:(BOOL)arg4;
- (BOOL)isDrawingEnabled;
- (void)setDrawingEnabled:(BOOL)arg1;
- (struct CGRect)viewBoundsInPixels;
- (BOOL)shouldDrawVideoDest:(id)arg1;
- (void)deviceChangedFormat:(id)arg1;
- (void)_updateDestVideoCMIO;
- (void)_teardownDestVideoCMIO;
- (void)_setupDestVideoCMIO;
- (void)didExitFullScreenMode;
- (void)didEnterFullScreenMode;
@property(nonatomic) BOOL displayBroadcastSafeZones;
@property(nonatomic) BOOL showBothFields;
@property(nonatomic) BOOL highlightsExcessLuma;
@property(nonatomic) long long colorChannelDisplayMode;
@property(nonatomic) struct CGPoint origin;
- (void)setNextZoomFactor:(BOOL)arg1;
@property(nonatomic) float zoomFactor;
@property(nonatomic) struct CGRect sequenceBounds;
- (void)updateLabel;
- (double)backingScaleFactor;
- (id)backgroundColor;
- (id)layer;
- (id)destVideo;
- (void)_playerViewBoundsChanged:(struct CGRect)arg1;
- (id)playerView;
- (void)playerViewDidMoveToWindow:(id)arg1;
- (void)playerView:(id)arg1 willMoveToWindow:(id)arg2;
- (void)viewWillBeRemoved;
- (void)viewWasInstalled;
- (void)_stopObservingWindow:(id)arg1;
- (void)_startObservingWindow:(id)arg1;
- (void)moduleDidUnhide;
- (void)moduleDidHide;
- (void)context:(id)arg1 didRebuildPlayer:(id)arg2;
- (void)context:(id)arg1 willTeardownPlayer:(id)arg2;
- (void)didStartPlayingWithPlayer:(id)arg1;
- (void)willStopPlayingWithPlayer:(id)arg1;
- (void)_removeDestsFromPlayer:(id)arg1;
- (void)_addDestsToPlayer:(id)arg1;
- (void)setSkimmable:(struct NSObject *)arg1 context:(id)arg2 effectCount:(long long)arg3;
- (void)_setProviderCallback;
- (id)lastKeyView;
- (id)firstKeyView;
- (void)viewDidLoad;
- (struct CGSize)viewMaxSize;
- (struct CGSize)viewMinSize;
- (void)awakeFromNib;
- (void)dealloc;
- (void)moduleViewWillBeRemoved:(id)arg1;
- (id)init;
- (id)tabLabel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LKViewModule.h"

#import "FFErrorReportingProtocol.h"
#import "FFPlayerModuleDelegate.h"

@class LKPaneCapSegmentedControl, LKSegmentedControl, LKWindow, NSArray, NSImageView, NSMenu, NSMutableArray, NSMutableDictionary, NSProView, NSTextField, NSView, PEViewedClipSet;

@interface PEPlayerContainerModule : LKViewModule <FFErrorReportingProtocol, FFPlayerModuleDelegate>
{
    int _mode;
    int _previousMode;
    int _previousScopesMode;
    NSMutableArray *_playerModules;
    PEViewedClipSet *_viewedClips;
    PEViewedClipSet *_viewedClipsOutstandingRequest;
    unsigned long long _canvasIndex;
    NSProView *_accessoryView;
    NSProView *_footerView;
    NSProView *_transportControlsFooterView;
    NSProView *_colorControlsFooterView;
    NSView *_oneUpAccessoryView;
    LKPaneCapSegmentedControl *_oneUpModeControl;
    LKPaneCapSegmentedControl *_oneUpViewerControls;
    NSImageView *_oneUpViewerIcon;
    NSTextField *_oneUpViewerTitle;
    NSView *_twoUpAccessoryView;
    LKPaneCapSegmentedControl *_twoUpModeControl;
    LKPaneCapSegmentedControl *_twoUpViewerControls;
    LKPaneCapSegmentedControl *_twoUpCanvasControls;
    NSTextField *_twoUpViewerTitle;
    NSTextField *_twoUpCanvasTitle;
    NSView *_twoUpViewerPaneCap;
    NSView *_twoUpCanvasPaneCap;
    NSImageView *_twoUpViewerIcon;
    NSImageView *_twoUpCanvasIcon;
    NSMenu *_videoScaleMenu;
    NSMenu *_videoScaleMenuHiDPI;
    NSMenu *_twoUpScaleMenu;
    NSMenu *_twoUpScaleMenuHiDPI;
    NSMenu *_twoUpCanvasScaleMenu;
    NSMenu *_twoUpCanvasScaleMenuHiDPI;
    NSMenu *_onScreenControlsMenu;
    NSMenu *_colorDisplayMenu;
    NSMenu *_selectedModeMenu;
    NSMenu *_combinedOptionsMenu;
    LKSegmentedControl *_previousNextEditControl;
    LKSegmentedControl *_playControl;
    LKSegmentedControl *_previousNextFrameControl;
    LKSegmentedControl *_fullScreenButton;
    LKSegmentedControl *_loopControl;
    LKSegmentedControl *_showAdvancedButton;
    LKSegmentedControl *_toolPalette;
    LKWindow *_matchWindow;
    NSProView *_matchControlsFooterView;
    NSProView *_matchAccessoryView;
    BOOL _splitViewIsDragging;
    BOOL _showMatchControls;
    BOOL _viewerIsDominant;
    BOOL _dominanceBeforeTransientViewing;
    BOOL _showColorControls;
    BOOL _advancedWasOpen;
    id _observedActive;
    NSMutableDictionary *_splitterPositions;
    unsigned int _playerUsesLayers:1;
    unsigned int _unusedBits:31;
    NSMutableDictionary *_playersInfo;
    NSMutableDictionary *_scopesInfo;
    NSMutableArray *_cachedPlayers;
}

+ (id)makeDisplayArea;
+ (id)tools;
- (id)init;
- (void)dealloc;
- (void)awakeFromNib;
- (void)hideModule:(id)arg1;
- (void)moduleDidHide;
- (void)moduleDidUnhide;
- (id)toolTip:(id)arg1 forProCommand:(id)arg2;
- (void)moduleViewWasInstalled:(id)arg1;
- (void)moduleViewWillBeRemoved:(id)arg1;
- (struct CGSize)viewMinSize;
- (id)firstKeyView;
- (id)lastKeyView;
- (id)submoduleLayoutArray;
- (void)takeContentLayoutFromDictionary:(id)arg1;
- (id)contentLayoutDictionary;
- (void)preLayout:(id)arg1;
- (BOOL)playerUsesLayers;
- (void)module:(id)arg1 didAddSubmodule:(id)arg2;
- (void)module:(id)arg1 willRemoveSubmodule:(id)arg2;
- (id)targetModules;
- (id)moduleAccessoryView;
- (BOOL)wantsFooterBar;
- (id)moduleFooterAccessoryView;
@property(nonatomic) BOOL showColorControls; // @synthesize showColorControls=_showColorControls;
- (id)playerVideoModule;
- (id)canvasPlayerModule;
- (id)playerModuleAtLocation:(struct CGPoint)arg1;
- (id)viewerPlayerModule;
- (id)_activePlayerModule;
- (BOOL)isPlaying;
- (BOOL)isLooping;
- (id)fullscreenPlayerPresentationOptions;
- (BOOL)isSplitterAdjustableForMode:(int)arg1;
- (BOOL)splitView:(id)arg1 canCollapseSubview:(id)arg2;
- (double)splitView:(id)arg1 constrainMinCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (double)splitView:(id)arg1 constrainMaxCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (void)splitViewWillResizeSubviews:(id)arg1;
- (void)adjustTwoUpPaneCapForSplitterPosition:(double)arg1;
- (void)splitViewDidResizeSubviews:(id)arg1;
- (void)splitViewWillBeginDragging:(id)arg1;
- (void)splitViewDidEndDragging:(id)arg1;
- (BOOL)toolShouldNotShowOrAllowScopes:(Class)arg1;
@property(nonatomic) int mode; // @synthesize mode=_mode;
@property(nonatomic) BOOL viewerIsDominant; // @synthesize viewerIsDominant=_viewerIsDominant;
- (BOOL)isMainDisplayArea;
- (id)displayUnitForMedia:(id)arg1;
- (id)selectedItems;
- (id)context;
@property(nonatomic) BOOL showMatchControls; // @synthesize showMatchControls=_showMatchControls;
- (id)playerChangedNotificationKey;
- (void)reportError:(id)arg1;
- (void)selectPlayerTab:(id)arg1;
- (void)addPlayerTab:(id)arg1;
- (void)showMultiangle:(id)arg1;
- (void)showEventsAndTimeline:(id)arg1;
- (void)showHistogram:(id)arg1;
- (void)showVectorscope:(id)arg1;
- (void)showWaveform:(id)arg1;
- (void)toggleScopes:(id)arg1;
- (void)toggleVideoScopes:(id)arg1;
- (void)selectDisplayAreaMode:(id)arg1;
- (unsigned long long)_activePlayerModuleIndex;
- (id)_canvasPlayerModule;
- (BOOL)_activePlayerModuleIsCanvas;
- (id)playerModuleOrderedZoomLevels:(id)arg1;
- (void)zoomToFit:(id)arg1;
- (void)zoomIn:(id)arg1;
- (void)zoomOut:(id)arg1;
- (void)setZoomFactor:(id)arg1;
- (void)setColorChannelDisplay:(id)arg1;
- (void)setHighlightsExcessLuma:(id)arg1;
- (BOOL)displaysBroadcastSafeZones;
- (void)setDisplayBroadcastSafeZones:(id)arg1;
- (BOOL)showBothFields;
- (void)setShowBothFields:(id)arg1;
- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
- (void)paste:(id)arg1;
- (void)toggleBalance:(id)arg1;
- (void)toggleAdvancedColorControls:(id)arg1;
- (void)playSegmentedControlAction:(id)arg1;
- (void)toggleLoopPlayback:(id)arg1;
- (void)previousNextFrame:(id)arg1;
- (void)previousNextEdit:(id)arg1;
- (void)sendFullScreen:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)_setupToolPalette;
- (void)selectCropTool:(id)arg1;
- (void)selectTransformTool:(id)arg1;
- (void)selectTool:(id)arg1;
- (void)activeToolChanged:(id)arg1;
- (void)firstResponderChanged:(id)arg1;
- (void)userDefaultsChanged:(id)arg1;
- (void)displayAreaFrameChanged:(id)arg1;
- (void)displayAreaModeShouldChange:(id)arg1;
- (void)displayAreaScopesPropertyChanged:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_addPlayerTabsToModule:(id)arg1 forMenu:(id)arg2 indentLevel:(long long)arg3 target:(id)arg4;
- (id)optionsMenuForPlayerScopesModule:(id)arg1 ofIdentifier:(id)arg2;
- (void)_setViewedClips:(id)arg1;
- (int)mediaBrowserModeIcon;
- (void)_updateOneUpViewerIcon;
- (void)_updateTwoUpViewerIcon;
- (void)_setupPlayerModules;
- (void)_conformPlayersToLayoutStyle:(int)arg1;
- (void)_makePlayersForMode:(int)arg1 layoutStyle:(int)arg2;
- (void)_layoutPlayersForMode:(int)arg1;
- (void)_labelPlayersForMode:(int)arg1 layoutStyle:(int)arg2;
- (void)_layoutPlayersForNUp;
- (void)_layoutPlayersForMode:(int)arg1 layoutStyle:(int)arg2;
- (void)_updatePlayersToPlayerInfo;
- (void)_updatePlayerInfoToPlayer;
- (void)_updateScopesToScopesInfo;
- (void)_updateScopesInfoToPlayers;
- (void)importClips:(id)arg1;
- (void)goToInspectorViewer:(id)arg1;
- (void)_assignMediaToPlayers;
- (id)_createPlayerModuleForMode:(int)arg1 context:(id)arg2 layoutStyle:(int)arg3 sublayoutName:(id)arg4;
- (void)_updateZoomMenus;
- (void)_updateZoomLabel;
- (void)_updateLabel;
- (void)_statusInfoChanged:(id)arg1;
- (void)_rebuildPaneCapMenus;
- (void)_setupPaneCapControls;
- (void)_observeActivePlayer;
- (void)_ignoreObservingActivePlayer;
- (void)_displayMedia:(struct NSObject *)arg1 context:(id)arg2 effectCount:(long long)arg3 preferAudio:(BOOL)arg4;
- (void)displayMedia:(struct NSObject *)arg1 context:(id)arg2 effectCount:(long long)arg3;
- (id)localModuleActions;
- (void)playerModule:(id)arg1 didExitFullScreenForEvent:(id)arg2;
@property(readonly) int previousScopesMode; // @synthesize previousScopesMode=_previousScopesMode;
@property(readonly) NSArray *playerModules; // @synthesize playerModules=_playerModules;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFInspectorModule.h>

#import "FFRolesMenuDelegate.h"
#import "NSMenuDelegate.h"

@class FFColouredView, FFInspectorMetadataContentRow, FFInspectorMetadataContentView, FFInspectorProjectEventsController, FFMedia, FFProFlippedView, FFRolesMenuController, LKButton, LKSegmentedControl, LKTextField, NSArrayController, NSMenu, NSMutableArray, NSMutableDictionary, NSPopUpButton, NSProImageView, NSProThemeImageView, NSScrollView, NSTextField, NSView, NSWindow;

__attribute__((visibility("hidden")))
@interface FFInspectorModuleMetadata : FFInspectorModule <NSMenuDelegate, FFRolesMenuDelegate>
{
    BOOL _currentItemsContainBinObject;
    BOOL _isShowingEventRefs;
    NSView *_currentReferencedEventsView;
    NSMutableDictionary *_metadataViewState;
    NSArrayController *_contentArrayController;
    NSMutableArray *_timelineVCs;
    FFInspectorProjectEventsController *_eventsController;
    FFRolesMenuController *_rolesMenuController;
    NSPopUpButton *_activeVideoAnglePopup;
    NSPopUpButton *_activeAudioAnglePopup;
    FFMedia *_media;
    NSScrollView *_scrollView;
    NSProThemeImageView *_metadataLCDHeader;
    NSProImageView *_metadataLCDIcon;
    NSTextField *_metadataLCDClipName;
    NSTextField *_metadataLCDDuration;
    NSTextField *_metadataLCDTextDate;
    NSTextField *_metadataLCDTextFormat1;
    NSTextField *_metadataLCDTextFormat2;
    NSTextField *_metadataLCDTextFrame;
    NSTextField *_metadataLCDTextAudioChannels;
    NSProThemeImageView *_metadataLCDFormatLeftBadge;
    NSProThemeImageView *_metadataLCDFormatRightBadge;
    FFInspectorMetadataContentView *_metadataView;
    NSPopUpButton *_metadataViewSetPopUpButton;
    LKSegmentedControl *_metadataViewSetControl;
    FFInspectorMetadataContentRow *_metadataBooleanControlGroup;
    FFInspectorMetadataContentRow *_metadataStringControlGroup;
    FFInspectorMetadataContentRow *_metadataTimeControlGroup;
    FFInspectorMetadataContentRow *_metadataEnumControlGroup;
    FFInspectorMetadataContentRow *_metadataRatingControlGroup;
    FFInspectorMetadataContentRow *_metadataTintColorControlGroup;
    FFInspectorMetadataContentRow *_metadataRolesControlGroup;
    FFInspectorMetadataContentRow *_metadataMultiCamAngleControlGroup;
    LKSegmentedControl *_metadataActionControl;
    NSWindow *_addCustomMetadataWindow;
    NSTextField *_customMetadataNameTextField;
    NSTextField *_customMetadataDescriptionTextField;
    NSWindow *_saveMetadataViewWindow;
    NSMenu *_removeCustomMetadataMenu;
    NSView *_footerView;
    LKTextField *_ccEventFileLocationTitle;
    LKTextField *_ccEventFileLocation;
    LKTextField *_ccEventAMRTitle;
    LKTextField *_ccEventAMROriginal;
    LKTextField *_ccEventAMROptimized;
    LKTextField *_ccEventAMRProxy;
    LKButton *_ccEventAMROptimizedIcon;
    LKButton *_ccEventAMRProxyIcon;
    LKButton *_ccEventAMROriginalIcon;
    NSProThemeImageView *_ccEventClipView;
    NSProThemeImageView *_ccEventIcon;
    NSTextField *_ccEventName;
    NSTextField *_ccEventDriveName;
    NSTextField *_ccEventContainsClips;
    LKButton *_ccModifyButton;
    FFProFlippedView *_ccEventScrolledView;
    FFColouredView *_ccEventInfoSeparator;
    FFColouredView *_ccEventAMRSeparator;
    FFColouredView *_ccEventFileSeparator;
    FFColouredView *_ccEventButtonSeparator;
    LKTextField *_ccEventOriginTitle;
    LKButton *_ccEventGenerateProxyButton;
    FFColouredView *_missingEffectSep;
    LKTextField *_missingEffectTitle;
    struct CGRect _proxyTextFrame;
    struct CGRect _proxyIconFrame;
}

- (id)init;
- (void)dealloc;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)_createFacets;
- (void)_rangeInvalidated:(id)arg1;
- (void)moduleViewWasInstalled:(id)arg1;
- (void)moduleViewWillBeRemoved:(id)arg1;
- (void)viewDidLoad;
- (id)moduleFooterAccessoryView;
- (id)selectionOwner;
- (void)setCurrentItems:(id)arg1;
- (BOOL)isCurrentItemACompoundClip;
- (BOOL)isCurrentItemAMultiAngle;
- (BOOL)isCurrentItemASequence;
- (void)_sequenceSettingsChanged:(int)arg1 inspectedItem:(id)arg2;
- (void)showEditCompoundClipSettings:(id)arg1;
- (void)_growScrollView;
- (void)_shrinkScrollView;
- (void)_updateLCD;
- (int)_calculateOfflineClipsCountIn:(id)arg1;
- (id)_eventNameFromUrl:(id)arg1;
- (void)_updateMediaRefs:(id)arg1 remap:(BOOL)arg2 sequence:(id)arg3 selection:(id)arg4;
- (void)_removeOldSubviews;
- (void)_updateReferencedEventsForItems:(id)arg1;
- (void)_setUpAnglePopupUpButton:(id)arg1 withItems:(id)arg2 useAudio:(BOOL)arg3;
- (void)_clearAnglePopupButton:(id)arg1;
- (void)_populateAnglePopupButton:(id)arg1 withMultiCamItems:(id)arg2;
- (void)_setAnglePopupButton:(id)arg1 forMultiCamItems:(id)arg2 useAudioAngle:(BOOL)arg3;
- (BOOL)_hasSameMultiCamItems:(id)arg1;
- (void)_setAngleID:(id)arg1 onMultiCamItems:(id)arg2 popupButton:(id)arg3 useAudio:(BOOL)arg4;
- (void)videoAnglePopupAction:(id)arg1;
- (void)audioAnglePopupAction:(id)arg1;
- (void)generateProxy:(id)arg1;
- (void)reprioritiseButtonPressed:(id)arg1;
- (void)reprioritiseCCButtonPressed:(id)arg1;
- (id)metadataViewState;
- (void)_setupMetadata;
- (id)_controlGroupFromMetadataDefinition:(id)arg1;
- (id)firstKeyView;
- (void)_setMetadataViewControls;
- (void)toggleClipReferences:(id)arg1;
- (void)_setMetadataViewSetFrom:(id)arg1;
- (void)rowDidMove:(id)arg1;
- (void)_addObservingForCurrentItems;
- (void)_removeObservingForCurrentItems;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)addCustomMetadataAlertDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)addCustomMetadataSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)addCustomMetadataAction:(id)arg1;
- (void)addCustomMetadata:(id)arg1;
- (void)removeProperty:(id)arg1;
- (void)saveMetadataView:(id)arg1;
- (void)saveMetadataViewAlertDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)saveMetadataViewSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)saveMetadataViewAction:(id)arg1;
- (void)saveMetadataViewAs:(id)arg1;
- (void)editMetadataView:(id)arg1;
- (void)showNewPresetsWindow:(id)arg1;
- (void)showEditPresetsWindow:(id)arg1;
- (void)applyNamePreset:(id)arg1;
- (void)updateNamePresetMenuItems;
- (id)anchoredObjectsForRolesMenuController:(id)arg1;
- (void)rolesMenuController:(id)arg1 shouldAddRole:(id)arg2 toAnchoredObjects:(id)arg3;
- (void)shouldEditRolesForRolesMenuController:(id)arg1;
@property(retain, nonatomic) NSPopUpButton *activeAudioAnglePopup; // @synthesize activeAudioAnglePopup=_activeAudioAnglePopup;
@property(retain, nonatomic) NSPopUpButton *activeVideoAnglePopup; // @synthesize activeVideoAnglePopup=_activeVideoAnglePopup;
@property(retain, nonatomic) LKSegmentedControl *metadataActionControl; // @synthesize metadataActionControl=_metadataActionControl;
@property(retain, nonatomic) LKSegmentedControl *metadataViewSetControl; // @synthesize metadataViewSetControl=_metadataViewSetControl;

@end


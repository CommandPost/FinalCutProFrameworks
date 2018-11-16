//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFInspectorModule.h>

#import "FFCameraLUTControllerDelegate.h"
#import "FFInspectorContainerDraggingDelegate.h"
#import "FFInspectorLabelParameterAccessibilityDelegate.h"
#import "FFInspectorLabelParameterContainerDataSource.h"
#import "FFInspectorLabelParameterToolTipDelegate.h"
#import "FFRolesMenuDelegate.h"
#import "NSMenuDelegate.h"
#import "NSTokenFieldDelegate.h"

@class FFInspectorFileInfoClipController, FFInspectorLabelParameterContainerController, FFInspectorMediaHeaderController, LKScrollView, LKSegmentedControl, NSArray, NSArrayController, NSMutableArray, NSMutableDictionary, NSMutableSet, NSSet, NSString, NSTextField, NSView, NSWindow;

__attribute__((visibility("hidden")))
@interface FFInspectorModuleMetadata : FFInspectorModule <NSMenuDelegate, FFRolesMenuDelegate, NSTokenFieldDelegate, FFInspectorLabelParameterContainerDataSource, FFInspectorLabelParameterAccessibilityDelegate, FFInspectorContainerDraggingDelegate, FFInspectorLabelParameterToolTipDelegate, FFCameraLUTControllerDelegate>
{
    NSView *_footerView;
    LKSegmentedControl *_metadataViewSetControl;
    LKSegmentedControl *_metadataActionControl;
    NSWindow *_addCustomMetadataWindow;
    NSTextField *_customMetadataNameTextField;
    NSTextField *_customMetadataDescriptionTextField;
    NSWindow *_saveMetadataViewWindow;
    FFInspectorMediaHeaderController *_headerController;
    FFInspectorLabelParameterContainerController *_metadataController;
    FFInspectorFileInfoClipController *_fileInfoClipController;
    LKScrollView *_scrollView;
    NSMutableDictionary *_metadataViewState;
    NSMutableArray *_currentItemsProxies;
    NSMutableSet *_currentItemsSequences;
    NSArrayController *_contentArrayController;
    NSMutableArray *_items;
    NSMutableArray *_visibleItems;
    NSMutableSet *_multicamItems;
    NSArray *_observedItems;
    NSSet *_observedSequences;
    BOOL _cachedHasBinObjects;
    BOOL _cachedHasSetupItems;
    struct PCProcrastinatedDispatch_t _procrastinatedReload;
    struct PCProcrastinatedDispatch_t _procrastinatedMediaChanged;
    struct PCProcrastinatedDispatch_t _procrastinatedNotifyMetaDataChanged;
    NSMutableDictionary *_info;
    NSArray *_backgroundObservedObjects;
    int _backgroundObservingPendingUpdate;
    BOOL _isObservingMediaChange;
}

@property(nonatomic) BOOL isObservingMediaChange; // @synthesize isObservingMediaChange=_isObservingMediaChange;
@property(nonatomic) NSWindow *saveMetadataViewWindow; // @synthesize saveMetadataViewWindow=_saveMetadataViewWindow;
@property(nonatomic) NSTextField *customMetadataDescriptionTextField; // @synthesize customMetadataDescriptionTextField=_customMetadataDescriptionTextField;
@property(nonatomic) NSTextField *customMetadataNameTextField; // @synthesize customMetadataNameTextField=_customMetadataNameTextField;
@property(nonatomic) NSWindow *addCustomMetadataWindow; // @synthesize addCustomMetadataWindow=_addCustomMetadataWindow;
@property(nonatomic) LKSegmentedControl *metadataActionControl; // @synthesize metadataActionControl=_metadataActionControl;
@property(retain, nonatomic) LKSegmentedControl *metadataViewSetControl; // @synthesize metadataViewSetControl=_metadataViewSetControl;
@property(retain, nonatomic) NSView *footerView; // @synthesize footerView=_footerView;
- (id).cxx_construct;
- (void)textFieldBecameFirstResponder:(id)arg1;
- (BOOL)container:(id)arg1 reorderItemAtRow:(unsigned long long)arg2 withRow:(unsigned long long)arg3;
- (long long)_indexOfMetadataDefinitionInViewSet:(id)arg1 fromVisibleItemAtRow:(unsigned long long)arg2;
- (BOOL)container:(id)arg1 shouldBeginDraggingSessionAtRow:(unsigned long long)arg2;
- (id)controllerToolTip:(id)arg1;
- (id)controller:(id)arg1 accessibilityValueForAttribute:(id)arg2;
- (id)accessibilityAttributeNamesForController:(id)arg1;
- (BOOL)container:(id)arg1 bindAtRow:(unsigned long long)arg2 toParameterViewController:(id)arg3 context:(id)arg4;
- (id)container:(id)arg1 parameterObjectValueAtRow:(unsigned long long)arg2 context:(id)arg3;
- (id)container:(id)arg1 labelObjectValueAtRow:(unsigned long long)arg2 context:(id)arg3;
- (id)container:(id)arg1 parameterViewControllerAtRow:(unsigned long long)arg2 context:(id)arg3;
- (id)container:(id)arg1 labelViewControllerAtRow:(unsigned long long)arg2 context:(id)arg3;
- (unsigned long long)countOfRowsInContainer:(id)arg1;
- (void)controller:(id)arg1 itemDidChange:(id)arg2;
- (void)rolesMenuController:(id)arg1 shouldAddRole:(id)arg2 forContext:(id)arg3;
- (id)contextForRolesMenuController:(id)arg1;
- (id)contentLayoutDictionary;
- (void)showCameraLUTOfflineStatus:(id)arg1;
- (void)editSettingsButtonPressed:(id)arg1;
- (void)multiCamAngleSelected:(id)arg1;
- (void)applyNamePreset:(id)arg1;
- (void)showEditPresetsWindow:(id)arg1;
- (void)showNewPresetsWindow:(id)arg1;
- (void)_updateNamePresetMenuItems;
- (void)editMetadataView:(id)arg1;
- (void)saveMetadataViewAs:(id)arg1;
- (void)saveMetadataViewSelect:(id)arg1;
- (void)saveMetadataViewSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)saveMetadataViewAlertDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)saveMetadataView:(id)arg1;
- (void)addCustomMetadata:(id)arg1;
- (void)addCustomMetadataSelect:(id)arg1;
- (void)addCustomMetadataSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)_resyncViewSetAfterModifications;
- (void)addCustomMetadataAlertDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)changeMetadataViewSet:(id)arg1;
- (Class)_itemClassForMetadataDefinition:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)_notifySequenceEdited:(id)arg1;
- (void)_notifyMetaDataChange;
- (void)setCurrentItems:(id)arg1;
- (void)_reloadData;
- (void)_setupMetadataWithItems:(id)arg1;
- (void)_resyncMetadataViewSetControlWithItems:(id)arg1;
- (void)_setMetadataViewSet:(id)arg1 items:(id)arg2;
- (id)moduleFooterAccessoryView;
- (void)moduleDidUnhide;
- (void)moduleDidHide;
- (void)moduleViewWillBeRemoved:(id)arg1;
- (void)moduleViewWasInstalled:(id)arg1;
- (void)viewDidLoad;
- (void)awakeFromNib;
- (void)_setupCurrentItems;
- (void)_updateHeaderForItems:(id)arg1;
- (id)_menuForMetadataActionControl;
- (id)_menuForMetadataViewSetControlWithItems:(id)arg1;
- (void)rangeInvalidated:(id)arg1;
- (void)assetMediaChanged:(id)arg1;
- (void)_updateReferencedEventsForItems:(id)arg1;
- (id)_referencesForItems:(id)arg1 owner:(id)arg2;
- (id)_selectionOwner;
- (void)showEditCompoundClipSettings;
- (void)_openSettingsWithItem:(id)arg1 sequenceType:(int)arg2;
- (void)_sequenceSettingsChanged:(int)arg1 item:(id)arg2;
- (void)_currentItemSettings:(char *)arg1 isCompundClip:(char *)arg2 isReferenceClip:(char *)arg3 isMultiAngleClip:(char *)arg4 isFreezeFrameClip:(char *)arg5;
- (id)_currentViewSet;
- (void)_libraryClosed:(id)arg1;
- (void)_notifyReloadDataForBackgroundObserving;
- (void)_audioPanChanged:(id)arg1;
- (void)_audioComponentsChanged:(id)arg1;
- (void)_rolesInLibraryChanged:(id)arg1;
- (void)_endBackgroundObserving;
- (void)_beginBackgroundObserving;
- (void)dealloc;
- (id)init;
- (void)_endObservingCurrentItems;
- (void)_beginObservingCurrentItems;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


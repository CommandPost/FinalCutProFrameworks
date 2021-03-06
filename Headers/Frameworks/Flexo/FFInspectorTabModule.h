//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Flexo/FFInspectorModule.h>

@class FFInspectorTabDFRController, LKButton, NSStackView, NSTabView, NSTextField, NSView;

__attribute__((visibility("hidden")))
@interface FFInspectorTabModule : FFInspectorModule
{
    NSTabView *_tabView;
    NSView *_accessoryView;
    LKButton *_imageButtonOne;
    LKButton *_imageButtonTwo;
    LKButton *_imageButtonThree;
    LKButton *_imageButtonFour;
    LKButton *_imageButtonFive;
    NSStackView *_buttonsSackView;
    NSTextField *_inspectorTitle;
    NSTextField *_durationField;
    NSView *_accessoryFooterView;
    BOOL _needToRebuildInspector;
    BOOL _rebuildingInspector;
    FFInspectorTabDFRController *_dfrController;
    struct PCProcrastinatedDispatch_t _procrastinatedContext;
    int _pendingResyncTabs;
}

- (void)openSettingsWithModule:(id)arg1;
- (id)selectionOwner;
- (void)tabViewDidChangeNumberOfTabViewItems:(id)arg1;
- (void)tabView:(id)arg1 didSelectTabViewItem:(id)arg2;
- (void)tabView:(id)arg1 willSelectTabViewItem:(id)arg2;
- (BOOL)tabView:(id)arg1 shouldSelectTabViewItem:(id)arg2;
- (void)_rebuildIfTabsChanged;
- (void)_setupFooter;
- (void)_selectInspectorTab:(unsigned long long)arg1;
- (id)touchBarImageForIdentifier:(id)arg1;
- (id)altImageForInspectorTab:(id)arg1;
- (id)imageForInspectorTab:(id)arg1;
- (void)_setupTabSelector;
- (id)newTabSelectorButtonWithTitle:(id)arg1 tag:(long long)arg2;
- (void)_updateNameAndTimecode:(id)arg1;
- (void)_nameAndTimecodeNeedUpdate;
- (void)_finishSetCurrentItems;
- (BOOL)_identifiersAndClassesForItems:(id)arg1 outTabIdentifiers:(id *)arg2 outClassesMap:(id *)arg3;
- (id)_classNamesForItem:(id)arg1 andInspectorTabIdentifier:(id)arg2 outTabSplitIdentifiers:(id *)arg3;
- (id)_inspectorClassesForItem:(id)arg1 andTabIdentifiers:(id)arg2;
- (void)activeToolChanged:(id)arg1;
- (void)toggleModuleVisibility:(id)arg1;
- (BOOL)isSubmoduleVisible:(id)arg1;
- (id)makeSubmoduleVisible:(id)arg1;
- (BOOL)unhideSubmodule:(id)arg1;
- (BOOL)hideSubmodule:(id)arg1;
- (BOOL)isSubmoduleHidden:(id)arg1;
- (id)visibleSubmodule;
- (id)visibleSubmodules;
- (void)setInspectorModule:(id)arg1;
- (void)setCurrentModule:(id)arg1;
- (void)selectVideoTabIfColorTabSelected;
- (void)selectColorTab;
- (void)selectInfoTab;
- (void)selectTab:(id)arg1;
- (void)selectPreviousTabViewItemAction:(id)arg1;
- (void)selectNextTabViewItemAction:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)selectNextVariantInSelection:(id)arg1;
- (void)selectPreviousVariantInSelection:(id)arg1;
- (void)toggleInsideColorMask:(id)arg1;
- (id)supplementalTargetForAction:(SEL)arg1 sender:(id)arg2;
- (void)nextColorEffect:(id)arg1;
- (void)previousColorEffect:(id)arg1;
- (BOOL)goToPreviousNextColorEffect:(BOOL)arg1;
- (BOOL)canGoToPreviousNextColorEffect:(BOOL)arg1;
- (void)toggleAllColorCorrectionOff:(id)arg1;
- (void)toggleEffectViewMask:(id)arg1;
- (void)addShapeMask:(id)arg1;
- (void)toggleColorMaskModel:(id)arg1;
- (void)addColorMask:(id)arg1;
- (void)_modifySelectedMaskedEffectWithBlock:(CDUnknownBlockType)arg1;
- (BOOL)_addMaskOfClass:(Class)arg1 toEffect:(id)arg2 actionName:(id)arg3 maskHandler:(CDUnknownBlockType)arg4 error:(id *)arg5;
- (void)addHueSaturationEffect:(id)arg1;
- (void)addColorCurvesEffect:(id)arg1;
- (void)addColorWheelsEffect:(id)arg1;
- (void)addColorBoardEffect:(id)arg1;
- (void)addColorEffect:(id)arg1 effectID:(id)arg2 actionName:(id)arg3;
- (void)toggleAllColorCorrectionOff;
- (BOOL)canToggleAllColorEffects;
- (void)toggleSelectedEffectsOff:(id)arg1;
- (void)toggleEffectOnOff;
- (BOOL)canToggleSelectedVideoEffects;
- (id)localModuleActions;
- (unsigned long long)tabViewSelectedItemIndex;
- (id)tabViewItems;
- (void)selectInspectorTab:(unsigned long long)arg1;
- (id)touchBar;
- (void)_notifyResyncTabs;
- (void)_rangeInvalidation:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (long long)labelAlignment;
- (id)moduleFooterAccessoryView;
- (id)moduleAccessoryView;
- (void)effectFinishedLoading:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setCurrentItems:(id)arg1;
- (void)moduleDidUnhide;
- (id)targetModules;
- (void)module:(id)arg1 willRemoveSubmodule:(id)arg2;
- (void)module:(id)arg1 didAddSubmodule:(id)arg2;
- (void)moduleViewWillBeRemoved:(id)arg1;
- (void)moduleViewWasInstalled:(id)arg1;
- (id)lastKeyView;
- (id)firstKeyView;
- (void)viewDidLoad;
- (void)dealloc;

@end


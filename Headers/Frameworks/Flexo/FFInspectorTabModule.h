//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFInspectorModule.h>

#import "FFInspectorModuleDelegate.h"

@class NSTabView, NSView;

__attribute__((visibility("hidden")))
@interface FFInspectorTabModule : FFInspectorModule <FFInspectorModuleDelegate>
{
    NSTabView *_tabView;
    NSView *_accessoryView;
    NSView *_tabSelectionButtonGroup;
    NSView *_accessoryFooterView;
    BOOL _needToRebuildInspector;
    BOOL _rebuildingInspector;
    struct FFProcrastinatedDispatch_t _procrastinatedContext;
}

- (void)viewDidLoad;
- (id)firstKeyView;
- (id)lastKeyView;
- (void)moduleViewWillBeRemoved:(id)arg1;
- (void)module:(id)arg1 didAddSubmodule:(id)arg2;
- (void)module:(id)arg1 willRemoveSubmodule:(id)arg2;
- (id)targetModules;
- (void)moduleDidUnhide;
- (void)setCurrentItems:(id)arg1;
- (void)setContext:(id)arg1;
- (void)effectFinishedLoading:(id)arg1;
- (id)moduleAccessoryView;
- (id)moduleFooterAccessoryView;
- (unsigned long long)labelAlignment;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)localModuleActions;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)selectNextTabViewItemAction:(id)arg1;
- (void)selectPreviousTabViewItemAction:(id)arg1;
- (void)selectTab:(id)arg1;
- (void)setCurrentModule:(id)arg1;
- (void)setInspectorModule:(id)arg1;
- (id)visibleSubmodules;
- (id)visibleSubmodule;
- (BOOL)isSubmoduleHidden:(id)arg1;
- (BOOL)hideSubmodule:(id)arg1;
- (BOOL)unhideSubmodule:(id)arg1;
- (id)makeSubmoduleVisible:(id)arg1;
- (BOOL)isSubmoduleVisible:(id)arg1;
- (void)toggleModuleVisibility:(id)arg1;
- (id)_inspectorClassesForItems:(id)arg1;
- (id)_tabIdentifiersForItems:(id)arg1;
- (BOOL)_identifiersAndClassesForItems:(id)arg1 _outIds:(id *)arg2 _outClasses:(id *)arg3;
- (void)_finishSetCurrentItems;
- (id)newTabSelectorButtonWithTitle:(id)arg1 tag:(long long)arg2;
- (void)_setupTabSelector;
- (void)_selectInspectorTab:(unsigned long long)arg1;
- (void)_setupFooter;
- (BOOL)tabView:(id)arg1 shouldSelectTabViewItem:(id)arg2;
- (void)tabView:(id)arg1 willSelectTabViewItem:(id)arg2;
- (void)tabView:(id)arg1 didSelectTabViewItem:(id)arg2;
- (void)tabViewDidChangeNumberOfTabViewItems:(id)arg1;
- (id)selectionOwner;
- (void)openSettingsWithModule:(id)arg1;

@end

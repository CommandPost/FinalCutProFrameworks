//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LKInspectorModule.h"

#import "FFInspectorModuleDelegate.h"

@class NSArray, NSTextField, NSView, PEInspectorContainerBackgroundView;

@interface PEInspectorContainerModule : LKInspectorModule <FFInspectorModuleDelegate>
{
    PEInspectorContainerBackgroundView *_backgroundView;
    NSView *_accessoryView;
    NSView *_accessoryFooterView;
    NSTextField *_paneCapTitle;
    NSArray *_heldItemsWhileInspectorIsLocked;
}

+ (id)defaultModuleNibName;
- (id)init;
- (void)dealloc;
- (void)setSuspended:(BOOL)arg1;
- (struct CGSize)viewMinSize;
- (struct CGSize)viewMaxSize;
- (void)hideModule:(id)arg1;
- (unsigned long long)revealAnimationStyle;
- (void)module:(id)arg1 didAddSubmodule:(id)arg2;
- (void)module:(id)arg1 willRemoveSubmodule:(id)arg2;
- (void)viewDidLoad;
- (void)viewWasInstalled;
- (void)viewWillBeRemoved;
- (void)moduleDidUnhide;
- (void)moduleDidHide;
- (id)firstKeyView;
- (id)lastKeyView;
- (id)layoutForTornOffWindow:(id)arg1;
- (unsigned long long)labelAlignment;
- (id)moduleAccessoryView;
- (id)moduleFooterAccessoryView;
- (id)selectionOwner;
- (void)openSettingsWithModule:(id)arg1;
- (BOOL)canBeginSkimming;
- (BOOL)startSkimmingWithSkimmable:(struct NSObject *)arg1 context:(id)arg2 effectCount:(long long)arg3 allowPlayback:(BOOL)arg4 owner:(id)arg5;
- (void)stopSkimmingForOwner:(id)arg1;
- (BOOL)isSkimmingSkimmable:(struct NSObject *)arg1 owner:(id)arg2;
- (BOOL)_contentsJustMovedToAnotherContainer;
- (void)setCurrentInspector:(id)arg1;
- (void)windowDidUpdate:(id)arg1;
- (void)itemsChanged:(id)arg1;
- (void)inspectModule:(id)arg1 onlyIfNeeded:(BOOL)arg2;
- (id)inspectableObjectsfromSelection:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_firstResponderChanged:(id)arg1;
- (void)activeToolChanged:(id)arg1;
- (void)_setupAccessoryViewForCurrentInspector;
- (id)_inspectorClassForItems:(id)arg1;
- (id)_inspectorIdentifierForItems:(id)arg1;
- (id)_inspectorForCurrentItems;
- (void)_updateInspectorWithItems:(id)arg1;
- (void)_setupFooter;
- (void)setSelectionStart:(id)arg1;
- (void)setSelectionEnd:(id)arg1;
- (void)playPauseInViewer:(id)arg1;
- (void)playAroundCurrentFrameInViewer:(id)arg1;
- (void)playInToOutInViewer:(id)arg1;
- (void)importClips:(id)arg1;
- (void)goToInspectorViewer:(id)arg1;

@end


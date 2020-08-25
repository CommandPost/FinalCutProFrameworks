//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LKInspectorModule.h"

#import "FFInspectorModuleDelegate.h"

@class NSArray, NSDictionary, NSTextField, NSView, PEInspectorContainerBackgroundView;

@interface PEInspectorContainerModule : LKInspectorModule <FFInspectorModuleDelegate>
{
    PEInspectorContainerBackgroundView *_backgroundView;
    NSView *_accessoryView;
    NSView *_accessoryFooterView;
    NSTextField *_paneCapTitle;
    NSArray *_heldItemsWhileInspectorIsLocked;
    NSDictionary *_inspectorLayouts;
}

+ (id)defaultModuleNibName;
@property(retain, nonatomic) NSDictionary *inspectorLayouts; // @synthesize inspectorLayouts=_inspectorLayouts;
- (void)goToInspectorViewer:(id)arg1;
- (void)importClips:(id)arg1;
- (void)playInToOutInViewer:(id)arg1;
- (void)playAroundCurrentFrameInViewer:(id)arg1;
- (void)playPauseInViewer:(id)arg1;
- (void)addNewSelectionEnd:(id)arg1;
- (void)addNewSelectionStart:(id)arg1;
- (void)setSelectionEnd:(id)arg1;
- (void)setSelectionStart:(id)arg1;
- (void)_setupFooter;
- (void)_updateInspectorWithItems:(id)arg1;
- (id)_inspectorForCurrentItems:(id)arg1;
- (id)_inspectorIdentifierForItems:(id)arg1;
- (id)_inspectorClassForItems:(id)arg1;
- (void)_setupAccessoryViewForCurrentInspector;
- (void)playerWillEnterFullScreen:(id)arg1;
- (void)activeToolChanged:(id)arg1;
- (void)_firstResponderChanged:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)inspectableObjectsfromSelection:(id)arg1;
- (void)inspectModule:(id)arg1 onlyIfNeeded:(BOOL)arg2;
- (void)itemsChanged:(id)arg1;
- (void)windowDidUpdate:(id)arg1;
- (void)setCurrentInspector:(id)arg1;
- (BOOL)_contentsJustMovedToAnotherContainer;
- (void)takeContentLayoutFromDictionary:(id)arg1;
- (id)contentLayoutDictionary;
- (void)displayPostAutoLayout;
- (void)endSuspendSelectionChangesForInspectorModule:(id)arg1;
- (void)beginSuspendSelectionChangesForInspectorModule:(id)arg1;
- (void)inspectorModule:(id)arg1 selectObjects:(id)arg2;
- (BOOL)inspectorModule:(id)arg1 isSkimmingSkimmable:(struct NSObject *)arg2 owner:(id)arg3;
- (void)inspectorModule:(id)arg1 stopSkimmingForOwner:(id)arg2;
- (BOOL)inspectorModule:(id)arg1 startSkimmingReplacingSkimmable:(struct NSObject *)arg2 withSkimmable:(struct NSObject *)arg3 context:(id)arg4 effectCount:(long long)arg5 allowPlayback:(BOOL)arg6 owner:(id)arg7;
- (BOOL)inspectorModule:(id)arg1 startSkimmingWithSkimmable:(struct NSObject *)arg2 context:(id)arg3 effectCount:(long long)arg4 allowPlayback:(BOOL)arg5 owner:(id)arg6;
- (BOOL)_startSkimmingWithSkimmable:(struct NSObject *)arg1 context:(id)arg2 effectCount:(long long)arg3 allowPlayback:(BOOL)arg4 owner:(id)arg5 replacingSkimmable:(struct NSObject *)arg6;
- (BOOL)inspectorModule:(id)arg1 canBeginSkimmingForOwner:(id)arg2;
- (void)openSettingsWithModule:(id)arg1;
- (id)selectionOwner;
- (id)moduleFooterAccessoryView;
- (id)moduleAccessoryView;
- (long long)labelAlignment;
- (id)layoutForTornOffWindow:(id)arg1;
- (id)lastKeyView;
- (id)firstKeyView;
- (void)moduleDidHide;
- (void)moduleDidUnhide;
- (void)viewWillBeRemoved;
- (void)viewWasInstalled;
- (void)viewDidLoad;
- (void)module:(id)arg1 willRemoveSubmodule:(id)arg2;
- (void)module:(id)arg1 didAddSubmodule:(id)arg2;
- (void)unhideWithoutActivation:(id)arg1;
- (void)moduleDidFinishRevealAnimation;
- (unsigned long long)revealAnimationStyle;
- (void)hideModule:(id)arg1;
- (struct CGSize)viewMaxSize;
- (struct CGSize)viewMinSize;
- (void)dealloc;
- (id)init;

@end


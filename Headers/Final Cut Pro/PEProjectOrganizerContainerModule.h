//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LKViewModule.h"

#import "FFProjectOrganizerModuleDelegate.h"

@class LKButton, LKSegmentedControl, LKTextField, NSProView;

@interface PEProjectOrganizerContainerModule : LKViewModule <FFProjectOrganizerModuleDelegate>
{
    NSProView *_headerView;
    NSProView *_footerView;
    LKButton *_projectBrowserToggle;
    LKTextField *_projectCountString;
    LKSegmentedControl *_footerSegmentedControl;
}

@property(readonly) Class projectOrganizerModuleClass;
@property(readonly) LKViewModule *projectOrganizerModule;
- (id)identifier;
- (void)viewDidLoad;
- (void)viewWasInstalled;
- (id)firstKeyView;
- (id)lastKeyView;
- (void)selectProject:(id)arg1;
- (void)openInspectorModuleWithIdentifier:(id)arg1;
- (id)selectedProject;
- (unsigned long long)revealAnimationStyle;
- (BOOL)wantsFooterBar;
- (void)_updateCloseButtonState:(BOOL)arg1;
- (id)moduleHeaderAccessoryView;
- (id)moduleFooterAccessoryView;
- (void)showModuleFooter:(BOOL)arg1;
- (void)toggleProjectBrowser:(id)arg1;
- (void)footerSegmentedControlAction:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (id)submoduleLayoutArray;
- (void)openSequenceInEditor:(id)arg1;
- (void)displayMedia:(struct NSObject *)arg1 context:(id)arg2 effectCount:(long long)arg3 unloadingBlock:(CDUnknownBlockType)arg4;
- (void)displayMedia:(struct NSObject *)arg1 context:(id)arg2 effectCount:(long long)arg3;
- (void)newProject:(id)arg1;
- (void)sendFullScreen:(id)arg1;
- (void)showProviderSettings:(id)arg1;
- (BOOL)canBeginSkimming;
- (BOOL)canBeginPlaying;
- (void)setSelectedProject:(id)arg1;

@end


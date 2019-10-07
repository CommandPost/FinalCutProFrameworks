//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LKViewModule.h"

#import "FFOrganizerDelegate.h"
#import "FFOrganizerSkimmingDelegate.h"

@class FFEventLibraryModule, NSString;

@interface PEOrganizerBaseContainerModule : LKViewModule <FFOrganizerDelegate, FFOrganizerSkimmingDelegate>
{
}

- (void)dealloc;
- (id)firstKeyView;
- (id)targetModules;
- (id)submoduleLayoutArray;
- (void)viewDidLoad;
- (BOOL)loadView;
- (BOOL)wantsFocusIndicator;
- (BOOL)shouldUseFacetForModuleHeaderViewHeight;
- (BOOL)wantsFooterBar;
- (BOOL)wantsHeaderBar;
- (id)moduleFooterAccessoryView;
- (id)moduleHeaderAccessoryView;
- (void)stopUsingMedia:(id)arg1;
- (void)openSettingsWithModule:(id)arg1;
- (void)organizerModule:(id)arg1 didSelectItems:(id)arg2;
- (void)isSkimmingSkimmableForOwner:(id)arg1;
- (BOOL)isSkimmingSkimmable:(struct NSObject *)arg1 owner:(id)arg2;
- (void)stopSkimmingForOwner:(id)arg1;
- (BOOL)startSkimmingWithSkimmable:(struct NSObject *)arg1 context:(id)arg2 effectCount:(long long)arg3 allowPlayback:(BOOL)arg4 owner:(id)arg5;
- (BOOL)canBeginPlaying;
- (BOOL)canSkimWithAudio;
- (void)makeSequenceActive:(id)arg1;
- (BOOL)canBeginSkimming;
- (void)displayMedia:(struct NSObject *)arg1 context:(id)arg2 effectCount:(long long)arg3;
- (void)displayMedia:(struct NSObject *)arg1 context:(id)arg2 effectCount:(long long)arg3 unloadingBlock:(CDUnknownBlockType)arg4;
- (void)displayMedia:(struct NSObject *)arg1 context:(id)arg2 effectCount:(long long)arg3 loadingBlock:(CDUnknownBlockType)arg4 unloadingBlock:(CDUnknownBlockType)arg5;
- (BOOL)_editorHasFocus;
- (id)editorModule;
- (id)organizerSelection;
- (id)timelineSelection;
- (id)selectionOwner;
- (id)organizerDelegate;
- (id)markerEditorDelegate;
- (id)skimmingDelegate;
@property(readonly) Class organizerModuleClass;
@property(readonly) FFEventLibraryModule *organizerModule;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


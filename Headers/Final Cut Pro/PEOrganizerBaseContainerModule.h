//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LKViewModule.h"

#import "FFEventsLibraryDelegate.h"

@class FFEventLibraryModule;

@interface PEOrganizerBaseContainerModule : LKViewModule <FFEventsLibraryDelegate>
{
}

@property(readonly) FFEventLibraryModule *organizerModule;
@property(readonly) Class organizerModuleClass;
- (BOOL)canDisplayURL:(id)arg1;
- (void)displayURL:(id)arg1;
- (id)selectionOwner;
- (id)timelineSelection;
- (id)editorModule;
- (void)displayMedia:(struct NSObject *)arg1 context:(id)arg2 effectCount:(long long)arg3 loadingBlock:(CDUnknownBlockType)arg4 unloadingBlock:(CDUnknownBlockType)arg5;
- (void)displayMedia:(struct NSObject *)arg1 context:(id)arg2 effectCount:(long long)arg3 unloadingBlock:(CDUnknownBlockType)arg4;
- (void)displayMedia:(struct NSObject *)arg1 context:(id)arg2 effectCount:(long long)arg3;
- (BOOL)canBeginSkimming;
- (void)makeSequenceActive:(id)arg1;
- (BOOL)canSkimWithAudio;
- (BOOL)canBeginPlaying;
- (BOOL)startSkimmingWithSkimmable:(struct NSObject *)arg1 context:(id)arg2 effectCount:(long long)arg3 allowPlayback:(BOOL)arg4 owner:(id)arg5;
- (void)stopSkimmingForOwner:(id)arg1;
- (BOOL)isSkimmingSkimmable:(struct NSObject *)arg1 owner:(id)arg2;
- (void)isSkimmingSkimmableForOwner:(id)arg1;
- (void)organizerModule:(id)arg1 didSelectItems:(id)arg2;
- (void)openSettingsWithModule:(id)arg1;
- (void)stopUsingMedia:(id)arg1;
- (id)moduleHeaderAccessoryView;
- (id)moduleFooterAccessoryView;
- (BOOL)wantsHeaderBar;
- (BOOL)wantsFooterBar;
- (BOOL)loadView;
- (void)viewDidLoad;
- (id)submoduleLayoutArray;
- (id)targetModules;
- (id)firstKeyView;
- (void)dealloc;

@end


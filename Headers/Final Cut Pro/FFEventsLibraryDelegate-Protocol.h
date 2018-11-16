//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FFPersistentModuleDelegate.h"

@protocol FFEventsLibraryDelegate <FFPersistentModuleDelegate>
- (BOOL)canDisplayURL:(id)arg1;
- (void)displayURL:(id)arg1;
- (BOOL)canBeginSkimming;
- (BOOL)canSkimWithAudio;
- (BOOL)canBeginPlaying;
- (void)makeSequenceActive:(id)arg1;
- (void)displayMedia:(struct NSObject *)arg1 context:(id)arg2 effectCount:(long long)arg3;
- (void)displayMedia:(struct NSObject *)arg1 context:(id)arg2 effectCount:(long long)arg3 unloadingBlock:(CDUnknownBlockType)arg4;
- (void)displayMedia:(struct NSObject *)arg1 context:(id)arg2 effectCount:(long long)arg3 loadingBlock:(CDUnknownBlockType)arg4 unloadingBlock:(CDUnknownBlockType)arg5;
- (BOOL)startSkimmingWithSkimmable:(struct NSObject *)arg1 context:(id)arg2 effectCount:(long long)arg3 allowPlayback:(BOOL)arg4 owner:(id)arg5;
- (void)stopSkimmingForOwner:(id)arg1;
- (BOOL)isSkimmingSkimmable:(struct NSObject *)arg1 owner:(id)arg2;
- (void)organizerModule:(id)arg1 didSelectItems:(id)arg2;
- (id)editorModule;
- (void)stopUsingMedia:(id)arg1;
- (id)selectionOwner;
- (id)timelineSelection;
- (void)willBeginRelinkingForOrganizerModule:(id)arg1;
- (void)didFinishRelinkingForOrganizerModule:(id)arg1;

@optional
- (void)openStack:(id)arg1;
- (void)showMarkerEditorAtTime:(CDStruct_1b6d18a9)arg1 forObject:(id)arg2;
- (void)showMarkerEditorForMarkerLayer:(id)arg1 object:(id)arg2;
- (void)hideMarkerEditor;
- (BOOL)markerEditorIsShown;
- (void)setKeywordEditorVisible:(BOOL)arg1;
- (void)openSettingsWithModule:(id)arg1;
- (void)showProjectLibrary;
@end


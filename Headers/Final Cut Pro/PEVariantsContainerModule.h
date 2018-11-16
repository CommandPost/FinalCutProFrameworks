//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LKViewModule.h"

#import "FFAuditionerSkimDelegate.h"

@interface PEVariantsContainerModule : LKViewModule <FFAuditionerSkimDelegate>
{
    BOOL _ignoreSelectionUpdates;
}

- (struct CGSize)viewMinSize;
- (struct CGSize)viewMaxSize;
- (void)viewDidLoad;
- (void)moduleViewWasInstalled:(id)arg1;
- (void)cleanup;
- (void)moduleViewWillBeRemoved:(id)arg1;
- (id)submoduleLayoutArray;
- (id)targetModules;
- (void)module:(id)arg1 didAddSubmodule:(id)arg2;
- (void)module:(id)arg1 willRemoveSubmodule:(id)arg2;
- (void)setIgnoresSelectionUpdates:(id)arg1;
- (BOOL)updateSelectionState;
- (void)openSelectedVariant:(id)arg1 fromModule:(id)arg2;
- (void)auditionSelected:(id)arg1;
- (void)displayMedia:(struct NSObject *)arg1 context:(id)arg2 effectCount:(long long)arg3 loadingBlock:(CDUnknownBlockType)arg4 unloadingBlock:(CDUnknownBlockType)arg5;
- (void)displayMedia:(struct NSObject *)arg1 context:(id)arg2 effectCount:(long long)arg3 unloadingBlock:(CDUnknownBlockType)arg4;
- (void)displayMedia:(struct NSObject *)arg1 context:(id)arg2 effectCount:(long long)arg3;
- (BOOL)canBeginSkimming;
- (BOOL)canSkimWithAudio;
- (BOOL)canBeginPlaying;
- (BOOL)startSkimmingWithSkimmable:(struct NSObject *)arg1 context:(id)arg2 effectCount:(long long)arg3 owner:(id)arg4;
- (BOOL)startSkimmingWithSkimmable:(struct NSObject *)arg1 context:(id)arg2 effectCount:(long long)arg3 allowPlayback:(BOOL)arg4 owner:(id)arg5;
- (void)stopSkimmingForOwner:(id)arg1;
- (BOOL)isSkimmingSkimmable:(struct NSObject *)arg1 owner:(id)arg2;
- (void)isSkimmingSkimmableForOwner:(id)arg1;
@property BOOL ignoreSelectionUpdates; // @synthesize ignoreSelectionUpdates=_ignoreSelectionUpdates;

@end


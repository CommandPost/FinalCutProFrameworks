//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@protocol FFInspectorModuleDelegate
- (id)selectionOwner;
- (void)openSettingsWithModule:(id)arg1;

@optional
- (BOOL)canBeginSkimming;
- (BOOL)startSkimmingWithSkimmable:(struct NSObject *)arg1 context:(id)arg2 effectCount:(long long)arg3 allowPlayback:(BOOL)arg4 owner:(id)arg5;
- (void)stopSkimmingForOwner:(id)arg1;
- (BOOL)isSkimmingSkimmable:(struct NSObject *)arg1 owner:(id)arg2;
@end


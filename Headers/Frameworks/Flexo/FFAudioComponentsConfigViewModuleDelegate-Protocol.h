//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class FFAudioComponentsConfigViewModule, FFContext, NSArray;

@protocol FFAudioComponentsConfigViewModuleDelegate
- (void)endSuspendSelectionChangesInAudioComponentsConfigViewModule:(FFAudioComponentsConfigViewModule *)arg1;
- (void)beginSuspendSelectionChangesInAudioComponentsConfigViewModule:(FFAudioComponentsConfigViewModule *)arg1;
- (void)audioComponentsConfigViewModule:(FFAudioComponentsConfigViewModule *)arg1 selectObjects:(NSArray *)arg2;
- (BOOL)audioComponentsConfigViewModule:(FFAudioComponentsConfigViewModule *)arg1 isSkimmingInViewerWithSkimmable:(struct NSObject *)arg2;
- (void)stopSkimmingInViewerInAudioComponentsConfigViewModule:(FFAudioComponentsConfigViewModule *)arg1;
- (BOOL)audioComponentsConfigViewModule:(FFAudioComponentsConfigViewModule *)arg1 startSkimmingInViewerReplacingSkimmable:(struct NSObject *)arg2 withSkimmable:(struct NSObject *)arg3 context:(FFContext *)arg4 effectCount:(long long)arg5;
- (BOOL)audioComponentsConfigViewModule:(FFAudioComponentsConfigViewModule *)arg1 startSkimmingInViewerWithSkimmable:(struct NSObject *)arg2 context:(FFContext *)arg3 effectCount:(long long)arg4;
- (BOOL)canStartSkimmingInAudioComponentsConfigViewModule:(FFAudioComponentsConfigViewModule *)arg1;
@end


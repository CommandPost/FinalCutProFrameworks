//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@protocol FFAudioChannelsConfigViewModuleDelegate
- (BOOL)audioChannelsConfigViewModuleCanStartSkimming:(id)arg1;
- (BOOL)audioChannelsConfigViewModule:(id)arg1 startSkimmingInViewerWithSkimmable:(id)arg2 context:(id)arg3 effectCount:(long long)arg4;
- (void)audioChannelsConfigViewModuleStopSkimmingInViewer:(id)arg1;
- (BOOL)audioChannelsConfigViewModule:(id)arg1 isSkimmingInViewerWithSkimmable:(id)arg2;
- (void)audioChannelsConfigViewModuleWillSetFilmstripEnable:(id)arg1;
- (void)audioChannelsConfigViewModuleDidSetFilmstripEnable:(id)arg1;
@end

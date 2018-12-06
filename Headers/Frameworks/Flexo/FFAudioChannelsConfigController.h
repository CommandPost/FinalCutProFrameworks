//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OZFolderGroupController.h"

#import "FFAudioChannelsConfigViewModuleDelegate.h"

@class FFAudioChannelsConfigManager, FFAudioChannelsConfigViewModule, OZLabeledParamController, OZViewController, OZViewControllerGroup;

__attribute__((visibility("hidden")))
@interface FFAudioChannelsConfigController : OZFolderGroupController <FFAudioChannelsConfigViewModuleDelegate>
{
    FFAudioChannelsConfigManager *m_channelsMgr;
    FFAudioChannelsConfigViewModule *m_viewModule;
    OZLabeledParamController *m_headingController;
    OZViewControllerGroup *m_groupController;
    OZViewController *m_filmstripsController;
    struct CGSize m_filmstripsViewFrameSize;
    BOOL m_isShowingFilmstripsController;
    BOOL m_anchoredObjectObserversAdded;
    int m_suspendAnchoredObjectObserving;
    BOOL _pendingUpdate;
}

- (id)initWithChan:(struct OZChannelBase *)arg1 context:(id)arg2;
- (void)dealloc;
- (BOOL)addOrResetAssociatedChannel:(struct OZChannelBase *)arg1 isAdd:(BOOL)arg2 force:(BOOL)arg3;
- (void)_updateControllerUI;
- (void)_addObservers;
- (void)_removeObservers;
- (void)didBuildUI;
- (void)selectLayoutMenuItem:(id)arg1;
- (void)frameDidChangeNotification:(id)arg1;
- (void)_updateController:(id)arg1;
- (void)_anchoredObjectChanged:(id)arg1;
- (id)_getInspectorModuleDelegate;
- (BOOL)audioChannelsConfigViewModuleCanStartSkimming:(id)arg1;
- (BOOL)audioChannelsConfigViewModule:(id)arg1 startSkimmingInViewerWithSkimmable:(id)arg2 context:(id)arg3 effectCount:(long long)arg4;
- (void)audioChannelsConfigViewModuleStopSkimmingInViewer:(id)arg1;
- (BOOL)audioChannelsConfigViewModule:(id)arg1 isSkimmingInViewerWithSkimmable:(id)arg2;
- (void)audioChannelsConfigViewModuleWillSetFilmstripEnable:(id)arg1;
- (void)audioChannelsConfigViewModuleDidSetFilmstripEnable:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProInspector/OZFolderLabelController.h>

@class FFInspectorAudioEffectsControllerManager;

__attribute__((visibility("hidden")))
@interface FFInspectorLegacyAudioEffectsLabelController : OZFolderLabelController
{
    FFInspectorAudioEffectsControllerManager *_effectsManager;
}

- (void)setEnable:(id)arg1;
- (void)update;
- (void)didBuildUI;
- (void)dealloc;
- (id)initWithChan:(struct OZChannelBase *)arg1 context:(id)arg2;

@end


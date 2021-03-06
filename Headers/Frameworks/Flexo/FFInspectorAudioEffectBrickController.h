//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Flexo/FFInspectorEffectBrickController.h>

@class FFInspectorAudioEffectsControllerManager, FFSharedAudioUnit;

__attribute__((visibility("hidden")))
@interface FFInspectorAudioEffectBrickController : FFInspectorEffectBrickController
{
    FFInspectorAudioEffectsControllerManager *_effectsManager;
    FFSharedAudioUnit *_masterUnit;
    struct FFLock _masterUnitLock;
    unsigned long long _masterUnitState;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)updateChildControllerEnableState:(id)arg1;
- (unsigned long long)masterUnitState;
- (void)setMasterUnitState:(unsigned long long)arg1;
- (void)_masterUnitInvalidated:(id)arg1;
- (BOOL)_releaseMasterUnit;
- (id)childAtIndex:(long long)arg1;
- (long long)numberOfChildren;
- (void)_setupMasterUnit:(id)arg1;
- (void)dealloc;
- (id)initWithEffect:(id)arg1 effectsRootDelegate:(id)arg2 context:(id)arg3;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFInspectorModule.h>

#import "FFAudioComponentsConfigViewModuleDelegate.h"

@class FFAudioComponentsConfigViewModule, FFInspectorAudioComponentsHeaderViewController, FFInspectorModuleAudioComponentsRootView, NSArray, NSView;

__attribute__((visibility("hidden")))
@interface FFInspectorModuleAudioComponents : FFInspectorModule <FFAudioComponentsConfigViewModuleDelegate>
{
    FFInspectorModuleAudioComponentsRootView *_rootView;
    FFAudioComponentsConfigViewModule *_componentsViewModule;
    FFInspectorAudioComponentsHeaderViewController *_headerViewController;
    NSView *_containerView;
    NSView *_componentsView;
    BOOL _isInspectorBuilt;
    NSArray *_observedObjects;
}

- (void)endSuspendSelectionChangesInAudioComponentsConfigViewModule:(id)arg1;
- (void)beginSuspendSelectionChangesInAudioComponentsConfigViewModule:(id)arg1;
- (void)audioComponentsConfigViewModule:(id)arg1 selectObjects:(id)arg2;
- (BOOL)audioComponentsConfigViewModule:(id)arg1 isSkimmingInViewerWithSkimmable:(struct NSObject *)arg2;
- (void)stopSkimmingInViewerInAudioComponentsConfigViewModule:(id)arg1;
- (BOOL)audioComponentsConfigViewModule:(id)arg1 startSkimmingInViewerWithSkimmable:(struct NSObject *)arg2 context:(id)arg3 effectCount:(long long)arg4;
- (BOOL)canStartSkimmingInAudioComponentsConfigViewModule:(id)arg1;
- (void)_getInspectorModuleDelegate:(id *)arg1 inspectorModule:(id *)arg2;
- (void)mouseMoved:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)updateComponentsViewConstraints;
- (void)refreshComponentsViewModule;
- (void)_teardownInspector;
- (void)_setupInspector;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_teardownObserving;
- (void)_setupObserving:(id)arg1;
- (void)setCurrentItems:(id)arg1;
- (void)moduleDidUnhide;
- (id)moduleNibName;
- (void)dealloc;

@end


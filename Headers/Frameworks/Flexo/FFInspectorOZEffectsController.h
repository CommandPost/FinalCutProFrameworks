//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Flexo/FFInspectorBridgeHostOZViewController.h>

#import <Flexo/FFInspectorEffectsBuildDelegate-Protocol.h>
#import <Flexo/FFInspectorEffectsDataSource-Protocol.h>

@class FFInspectorEffectsControllerManager, FFInspectorRootViewController, FFLibraryDocument, PIBuildContext;

__attribute__((visibility("hidden")))
@interface FFInspectorOZEffectsController : FFInspectorBridgeHostOZViewController <FFInspectorEffectsDataSource, FFInspectorEffectsBuildDelegate>
{
    FFInspectorEffectsControllerManager *_effectsManager;
    PIBuildContext *_buildContext;
    FFInspectorRootViewController *_inspectorOutlineViewController;
    FFLibraryDocument *_observedLibraryDocument;
}

+ (Class)effectsManagerClass;
- (id)newEffectsBrickWithEffect:(id)arg1 effectsRootDelegate:(id)arg2 context:(id)arg3;
- (id)ozChannelDontBuildListForEffect:(id)arg1;
- (id)effectChannelsForEffect:(id)arg1;
- (id)supportedDraggedEffectTypes;
- (BOOL)replaceEffect:(id)arg1 withEffects:(id)arg2;
- (BOOL)swapEffect:(id)arg1 withEffect:(id)arg2;
- (BOOL)moveEffects:(id)arg1 toIndex:(long long)arg2 inEffectsSectionAtIndex:(unsigned long long)arg3;
- (BOOL)removeEffects:(id)arg1;
- (BOOL)addEffects:(id)arg1 toIndex:(long long)arg2 inEffectsSectionAtIndex:(unsigned long long)arg3;
- (void)resetEffects;
- (long long)effectsEnabledState;
- (void)setEffectsEnabled:(BOOL)arg1;
- (id)channelForEffect:(id)arg1 atIndex:(long long)arg2;
- (long long)numChannelsForEffect:(id)arg1;
- (id)associatedEffectsForEffect:(id)arg1;
- (id)associatedProject;
- (id)effectsForEffectsSectionAtIndex:(unsigned long long)arg1;
- (id)titleForEffectsSectionAtIndex:(unsigned long long)arg1;
- (unsigned long long)numEffectsSections;
- (BOOL)hasMismatchingEffects;
- (unsigned int)hasEffects;
- (id)newEffectsFolderHeadingControllerWithOptions:(unsigned int)arg1 context:(id)arg2;
- (id)effectsManager;
- (id)inspectorEffectsSubcontrollersDelegate;
- (id)inspectorEffectsDataSource;
- (id)effectStackForSelectedObject:(id)arg1;
- (void)_libraryClosed:(id)arg1;
- (void)_cleanupInspectorController;
- (void)willTeardownUI;
- (void)didBuildUI;
- (void)dealloc;
- (id)initWithChan:(struct OZChannelBase *)arg1 context:(id)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Flexo/FFInspectorTabSplitViewModule.h>

@class NSMutableDictionary, NSSet;

__attribute__((visibility("hidden")))
@interface FFInspectorTabSplitViewModuleColor : FFInspectorTabSplitViewModule
{
    NSMutableDictionary *_removedInspectorList;
    NSSet *_observedItems;
}

- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)switchToExposureTab:(id)arg1;
- (void)switchToSaturationTab:(id)arg1;
- (void)switchToColorTab:(id)arg1;
- (void)showInspectorWithIdentifier:(id)arg1;
- (void)hideInspectorWithIdentifier:(id)arg1;
- (void)setupTabCurrentItems;
- (id)removedInspectorList;
- (void)moduleDidUnhide;
- (BOOL)changeColorOSCKey;
- (id)_videoEffectsForItem:(id)arg1;
- (void)dealloc;
- (void)_removeObservingForCurrentItems;
- (void)_addObservingForCurrentItems;
- (void)_libraryClosed:(id)arg1;
- (void)possibleMaskChanged:(id)arg1;
- (void)_possibleMaskChangedAllmostFinal;
- (void)_possibleMaskChangedFinal;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeObservingForItems:(id)arg1;
- (double)forcedHeightForLastSplit;
- (void)addObservingForItems:(id)arg1;

@end


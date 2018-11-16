//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFInspectorModuleColorChannelsBase.h>

@class FFEffect, NSView;

__attribute__((visibility("hidden")))
@interface FFInspectorModuleColorChannels : FFInspectorModuleColorChannelsBase
{
    FFEffect *_dummyColorEffect;
    BOOL _observingUserDefaultsForColor;
    NSView *_footerView;
    NSView *_noEffectsMessage;
}

- (void)resetAllPucks:(id)arg1;
- (void)previousKeyframe:(id)arg1;
- (void)nextKeyframe:(id)arg1;
- (void)selectPreviousPuck:(id)arg1;
- (void)selectNextPuck:(id)arg1;
- (void)resetSelectedPuck:(id)arg1;
- (void)resetPucksOnCurrentBoard:(id)arg1;
- (void)switchToColorBoardTab:(int)arg1;
- (void)switchToColorTab:(id)arg1;
- (void)switchToSaturationTab:(id)arg1;
- (void)switchToExposureTab:(id)arg1;
- (void)nudgePuckRight:(id)arg1;
- (void)nudgePuckLeft:(id)arg1;
- (void)nudgePuckDown:(id)arg1;
- (void)nudgePuckUp:(id)arg1;
- (void)switchToNextTab:(id)arg1;
- (void)switchToPreviousTab:(id)arg1;
- (id)localModuleActions;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (id)_colorViewControllerForAction:(SEL)arg1 sender:(id)arg2;
- (id)_recursive_colorViewControllerForAction:(SEL)arg1 sender:(id)arg2 inView:(id)arg3;
- (id)_inlineColorBoardViewController;
- (void)updateChannelFooterForItems:(id)arg1;
- (void)controller:(id)arg1 willChangeChannel:(struct OZChannelBase *)arg2;
- (void)_filtersChanged:(id)arg1;
- (void)_rebuildInspectorWithChannelFolders:(id)arg1 currentItems:(id)arg2 buildContext:(id)arg3 shouldReadLock:(BOOL)arg4;
- (BOOL)isHiddenOrAnyDecendent:(struct OZChannelBase *)arg1;
- (BOOL)setFirstColorEffectInSelectionsIfExists:(id)arg1;
- (void)moduleDidUnhide;
- (void)setCurrentItems:(id)arg1;
- (id)moduleFooterAccessoryView;
- (Class)_inspectorDelegateClass;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (void)viewDidLoad;
- (id)init;
- (id)moduleNibName;

@end


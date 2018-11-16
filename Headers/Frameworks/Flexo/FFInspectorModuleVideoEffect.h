//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFInspectorModuleLegacyChannels2.h>

@class LKButton, NSArray, NSView;

__attribute__((visibility("hidden")))
@interface FFInspectorModuleVideoEffect : FFInspectorModuleLegacyChannels2
{
    NSArray *_dummyIntrinsics;
    NSView *_footerView;
    LKButton *_effectsPresetButton;
    BOOL _inSetCurrentItemsScope;
    NSArray *_cachedAdjustedCurrentItems;
}

- (void)updateChannelFooterForItems:(id)arg1;
- (void)controller:(id)arg1 willChangeChannel:(struct OZChannelBase *)arg2;
- (void)_rebuildInspectorWithChannelFolders:(id)arg1 currentItems:(id)arg2 buildContext:(id)arg3 shouldReadLock:(BOOL)arg4;
- (id)_videoEffectsForItem:(id)arg1;
- (void)setCurrentItems:(id)arg1;
- (id)currentItems;
- (id)moduleFooterAccessoryView;
- (Class)_inspectorDelegateClass;
- (void)dealloc;
- (id)init;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFInspectorModuleChannels.h>

@class FFEffect;

__attribute__((visibility("hidden")))
@interface FFInspectorModuleColorChannelsBase : FFInspectorModuleChannels
{
    FFEffect *_selectedEffect;
}

- (void)dealloc;
- (void)_effectSelectionStateChangedFromOSC:(id)arg1;
- (void)_effectEnabledStateChanged:(id)arg1;
- (void)_effectSelectionStateChanged:(id)arg1;
- (id)newColorEffectsForStack:(id)arg1;
- (id)firstSelectedColorEffect:(id)arg1;
- (id)firstStackCapableOfVideo:(id)arg1;
- (void)setCurrentItems:(id)arg1;
- (id)_videoEffectsForItem:(id)arg1;
- (void)_rangeInvalidation:(id)arg1;
- (void)_filtersChanged:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeObservingForItems:(id)arg1;
- (void)addObservingForItems:(id)arg1;
- (id)moduleNibName;

@end

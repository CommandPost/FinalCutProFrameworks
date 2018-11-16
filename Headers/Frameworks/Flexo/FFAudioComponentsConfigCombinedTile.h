//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFAudioComponentsConfigTile.h>

@class CALayer;

__attribute__((visibility("hidden")))
@interface FFAudioComponentsConfigCombinedTile : FFAudioComponentsConfigTile
{
    CALayer *m_componentsBoxLayer;
}

- (void)toggleTileEnableState;
- (void)viewWillLayout;
- (id)newComponentWaveformWithWaveformManager:(id)arg1 delegate:(id)arg2;
- (void)setComponentWaveformsContainer:(id)arg1;
- (void)buildRootView;
- (BOOL)hasMixdownView;
- (BOOL)hasSummaryWaveform;
- (void)micaRefSelectionLayersForComponentWaveform:(id)arg1 selectionRingLayer:(id *)arg2 componentLayer:(id *)arg3;
- (id)micaRefItemLayer:(int)arg1;
- (id)micaRefRootLayer;
- (void)dealloc;

@end


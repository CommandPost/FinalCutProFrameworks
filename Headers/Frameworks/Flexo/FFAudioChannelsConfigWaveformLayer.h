//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CALayer.h"

#import "FFFilmstripLayerDelegate.h"

@class FFAudioComponentSource, FFFilmstripLayer, NSString;

__attribute__((visibility("hidden")))
@interface FFAudioChannelsConfigWaveformLayer : CALayer <FFFilmstripLayerDelegate>
{
    CALayer *m_leftDimLayer;
    CALayer *m_rightDimLayer;
    CALayer *m_leftDimEdgeLayer;
    CALayer *m_rightDimEdgeLayer;
    FFFilmstripLayer *m_filmstripLayer;
    CALayer *m_waveformLayer;
    FFAudioComponentSource *m_componentSource;
    CDStruct_e83c9415 m_waveformTimeRange;
    int m_colorTheme;
}

@property(readonly, nonatomic) FFFilmstripLayer *filmstripLayer; // @synthesize filmstripLayer=m_filmstripLayer;
- (BOOL)useImageCache;
- (BOOL)highPriorityThumbnailGeneration:(BOOL)arg1;
- (void)layoutSublayers;
- (struct CGRect)_clippedRangeAreaFrame;
- (CDStruct_e83c9415)_filmstripClippedRange;
- (void)updateUIWithDisplayMode:(int)arg1 enable:(BOOL)arg2;
- (void)dealloc;
- (id)initWithComponentSource:(id)arg1 waveformTimeRange:(CDStruct_e83c9415)arg2 colorTheme:(int)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


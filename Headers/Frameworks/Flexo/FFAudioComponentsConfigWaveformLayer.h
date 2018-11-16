//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CALayer.h"

#import "FFFilmstripLayerDelegate.h"

@class FFFilmstripLayer, NSString;

__attribute__((visibility("hidden")))
@interface FFAudioComponentsConfigWaveformLayer : CALayer <FFFilmstripLayerDelegate>
{
    FFFilmstripLayer *m_filmstripLayer;
    CALayer *m_waveformLayer;
    CALayer *m_disableLayer;
    struct NSObject *m_skimmable;
    CDStruct_e83c9415 m_filmstripClippedRange;
    int m_thumbnailAudioOptions;
}

@property(readonly, nonatomic) FFFilmstripLayer *filmstripLayer; // @synthesize filmstripLayer=m_filmstripLayer;
- (int)thumbnailAudioOptionsForFilmstripLayer:(id)arg1;
- (BOOL)useImageCache;
- (BOOL)highPriorityThumbnailGeneration:(BOOL)arg1;
- (void)layoutSublayers;
- (void)disableFilmstripLayer;
- (void)updateUIWithRoleColorScheme:(id)arg1 enable:(BOOL)arg2;
- (void)dealloc;
- (id)initWithSkimmable:(struct NSObject *)arg1 waveformTimeRange:(CDStruct_e83c9415)arg2 thumbnailAudioOptions:(int)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

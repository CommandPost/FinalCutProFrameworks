//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFVideoScopesBodyLayer.h>

__attribute__((visibility("hidden")))
@interface FFVideoScopesWaveformBodyLayer : FFVideoScopesBodyLayer
{
    BOOL _showGuides;
    id _markerLayer;
    id _transientMarkerLayer;
}

+ (id)waveformBodyLayer;
- (void)setDelegate:(id)arg1;
- (void)animateOutTransientMarkerAssignment;
- (void)hideTransientMarker;
- (void)showTransientMarkerInGraticuleAtYPos:(double)arg1;
- (void)hideMarker;
- (void)showMarkerInGraticuleAtYPos:(double)arg1;
- (void)_hideMarker:(id)arg1;
- (void)_showMarker:(id)arg1 inGraticuleAtYPos:(double)arg2 strongStyle:(BOOL)arg3;
- (id)_waveformYUnitTextLayers;
- (double)transformYPosFromIREOrNits:(double)arg1;
- (double)transformYPosToIREOrNits:(double)arg1;
- (id)_waveformBackgroundLayers;
- (struct CGPoint)transformCoordinateInGraticule:(struct CGPoint)arg1;
- (void)hideGraticuleLabels:(BOOL)arg1;
- (void)setMonochrome:(BOOL)arg1;
- (void)setShowGuides:(BOOL)arg1;
- (void)setTraceBrightness:(float)arg1;
- (void)setTransientMarkerLayer:(id)arg1;
- (void)setMarkerLayer:(id)arg1;

@end


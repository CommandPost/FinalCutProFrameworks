//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class _PAEFTColorWheelArcLayer, _PAEFTColorWheelBackgroundLayer, _PAEFTColorWheelBorderLayer, _PAEFTColorWheelCenterLayer, _PAEFTColorWheelCrosshairsLayer, _PAEFTColorWheelIndicatorLayer, _PAEFTColorWheelLightLayer, _PAEFTColorWheelSaturationLayer, _PAEFTColorWheelVectorControlLayer;

@interface _PAEFTColorWheelLayer : CALayer
{
    _PAEFTColorWheelLightLayer *_lightLayer;
    _PAEFTColorWheelSaturationLayer *_saturationLayer;
    _PAEFTColorWheelBackgroundLayer *_backgroundLayer;
    _PAEFTColorWheelCrosshairsLayer *_crosshairsLayer;
    _PAEFTColorWheelVectorControlLayer *_vectorControlLayer;
    _PAEFTColorWheelIndicatorLayer *_indicatorLayer;
    _PAEFTColorWheelCenterLayer *_centerLayer;
    _PAEFTColorWheelBorderLayer *_borderLayer;
    long long _phase;
    double _radiusValue;
    double _thetaValue;
    double _saturationValue;
    double _lightValue;
    double _sliderMinMaxRange;
    BOOL _enabled;
    int _state;
    struct {
        double radius;
        double theta;
    } _indicator;
}

@property(readonly, nonatomic) _PAEFTColorWheelIndicatorLayer *indicatorLayer; // @synthesize indicatorLayer=_indicatorLayer;
@property(readonly, nonatomic) _PAEFTColorWheelArcLayer *saturationLayer; // @synthesize saturationLayer=_saturationLayer;
- (id)actionForKey:(id)arg1;
- (void)setNeedsDisplay;
- (void)setContentsScale:(double)arg1;
- (void)layoutSublayers;
- (void)buildSublayers;
- (void)setSliderMinMaxRange:(double)arg1;
- (void)setIndicatorRadius:(double)arg1 theta:(double)arg2;
- (void)setThumbControlLook:(long long)arg1;
- (void)setPart:(int)arg1 highlighted:(BOOL)arg2;
@property double lightValue; // @dynamic lightValue;
@property double saturationValue; // @dynamic saturationValue;
@property double thetaValue; // @dynamic thetaValue;
@property double radiusValue; // @dynamic radiusValue;
@property long long phase; // @dynamic phase;
- (void)_repositionIndicatorElement;
- (void)_repositionVectorControlElement;
- (id)init;

@end


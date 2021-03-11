//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class CAShapeLayer, CATextLayer;

@interface LKCircularProgressIndicatorLayer : CALayer
{
    BOOL _isModelLayer;
    double _value;
    double _dialGapAngle;
    double _dialLineWidth;
    CALayer *_dialLayer;
    CAShapeLayer *_dialIndicatorLayer;
    CATextLayer *_valueTextLayer;
    CATextLayer *_percentSignLayer;
}

@property(nonatomic) double dialLineWidth; // @synthesize dialLineWidth=_dialLineWidth;
@property(nonatomic) double dialGapAngle; // @synthesize dialGapAngle=_dialGapAngle;
@property(nonatomic) double value; // @synthesize value=_value;
- (void)_updateValueText:(double)arg1;
- (void)_updateDial:(double)arg1;
- (void)_configureDialLayers;
@property double fontSize;
@property void *font;
- (void)layoutSublayers;
- (void)dealloc;
- (id)init;

@end


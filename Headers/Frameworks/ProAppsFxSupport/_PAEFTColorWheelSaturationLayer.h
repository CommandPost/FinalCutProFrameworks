//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ProAppsFxSupport/_PAEFTColorWheelArcLayer.h>

@class MDPRenderingContext;

@interface _PAEFTColorWheelSaturationLayer : _PAEFTColorWheelArcLayer
{
    double _radiusValue;
    double _thetaValue;
    id <MTLRenderPipelineState> _pipeline;
    MDPRenderingContext *_mdp_ctx;
}

- (void)display;
- (void)layoutSublayers;
- (void)setThetaValue:(double)arg1;
- (void)setRadiusValue:(double)arg1;
- (void)dealloc;

@end


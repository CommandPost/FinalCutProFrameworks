//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProAppsFxSupport/_PAEFTColorWheelArcLayer.h>

@class MDPRenderingContext;
@protocol MTLRenderPipelineState;

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


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CAMetalLayer.h>

@class NSColor, _PAEFTCurveColorPickerBorderLayer, _PAEFTCurveColorPickerCenterLayer, _PAEFTCurveColorPickerIndicatorLayer;
@protocol MTLRenderPipelineState;

@interface _PAEFTCurveColorPickerLayer : CAMetalLayer
{
    NSColor *_color;
    _PAEFTCurveColorPickerBorderLayer *_borderLayer;
    _PAEFTCurveColorPickerCenterLayer *_centerLayer;
    _PAEFTCurveColorPickerIndicatorLayer *_indicatorLayer;
    id <MTLRenderPipelineState> _pipeline;
}

- (id)actionForKey:(id)arg1;
- (void)layoutSublayers;
- (double)_colorTheta;
- (void)setNeedsDisplay;
- (void)display;
- (void)setContentsScale:(double)arg1;
- (void)buildSublayers;
@property(retain, nonatomic) NSColor *color; // @dynamic color;
- (void)_repositionIndicatorElement;
- (void)dealloc;

@end


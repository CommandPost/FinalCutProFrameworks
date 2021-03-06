//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class CAGradientLayer;

__attribute__((visibility("hidden")))
@interface FFEffectLibrarySelectionLayer : CALayer
{
    CAGradientLayer *_outerGradientLayer;
    CAGradientLayer *_innerGradientLayer;
    CALayer *_outerLayerMask;
    CALayer *_innerLayerMask;
    BOOL _emphasized;
}

@property(nonatomic) BOOL emphasized; // @synthesize emphasized=_emphasized;
- (void)_updateFrameProperties;
- (void)layoutSublayers;
- (id)init;

@end


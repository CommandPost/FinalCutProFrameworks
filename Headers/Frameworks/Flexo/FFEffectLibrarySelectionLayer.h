//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CALayer.h"

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

- (id)init;
- (void)layoutSublayers;
- (void)_updateFrameProperties;
@property(nonatomic) BOOL emphasized; // @synthesize emphasized=_emphasized;

@end


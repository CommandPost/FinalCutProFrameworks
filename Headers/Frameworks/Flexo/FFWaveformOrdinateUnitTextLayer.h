//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFWaveformUnitTextLayer.h>

__attribute__((visibility("hidden")))
@interface FFWaveformOrdinateUnitTextLayer : FFWaveformUnitTextLayer
{
    float _unitPercent;
}

- (void)setupDefaultPropertiesWithOptions:(long long)arg1;
- (void)setUnitPercent:(float)arg1;
- (void)observeLayer:(id)arg1;
- (void)ignoreObservingLayer:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (struct CGRect)frameForBounds:(struct CGRect)arg1;

@end

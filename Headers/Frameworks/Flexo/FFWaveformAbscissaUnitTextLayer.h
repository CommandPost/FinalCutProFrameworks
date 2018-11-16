//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFWaveformUnitTextLayer.h>

#import "FFVideoScopesZoomFactor.h"

__attribute__((visibility("hidden")))
@interface FFWaveformAbscissaUnitTextLayer : FFWaveformUnitTextLayer <FFVideoScopesZoomFactor>
{
    float _zoomFactor;
    long long _code;
    long long _compositeVideoUnits;
}

- (struct CGRect)frameForBounds:(struct CGRect)arg1;
- (void)setCompositeVideoUnits:(long long)arg1;
- (void)setCode:(long long)arg1;
- (void)setZoomFactor:(float)arg1;
- (void)setupDefaultProperties;

@end


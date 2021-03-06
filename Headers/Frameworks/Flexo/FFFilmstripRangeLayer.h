//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class FigTimeRangeAndObject;

__attribute__((visibility("hidden")))
@interface FFFilmstripRangeLayer : CALayer
{
    FigTimeRangeAndObject *_range;
}

+ (id)positionedRangeLayerForRange:(id)arg1 placementLayer:(id)arg2 superlayer:(id)arg3 timeToXCoordFunction:(CDUnknownBlockType)arg4;
+ (struct CGRect)frameForRangeLayer:(id)arg1 placementLayer:(id)arg2 superlayer:(id)arg3 timeToXCoordFunction:(CDUnknownBlockType)arg4;
@property(retain, nonatomic) FigTimeRangeAndObject *range; // @synthesize range=_range;
- (void)_updateFacetFromRangeProperties;
- (void)dealloc;
- (id)initWithRange:(id)arg1;

@end


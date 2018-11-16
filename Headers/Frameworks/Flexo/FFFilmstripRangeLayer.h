//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TLKButtonLayer.h"

@class FigTimeRangeAndObject;

__attribute__((visibility("hidden")))
@interface FFFilmstripRangeLayer : TLKButtonLayer
{
    FigTimeRangeAndObject *_range;
}

+ (unsigned long long)_themeRef;
+ (id)_importedFacet;
+ (id)_keywordFacet;
+ (id)_rejectFacet;
+ (id)_favoriteFacet;
+ (id)_analysisFacet;
+ (struct CGRect)frameForRangeLayer:(id)arg1 placementLayer:(id)arg2 superlayer:(id)arg3 timeToXCoordFunction:(CDUnknownBlockType)arg4;
+ (id)positionedRangeLayerForRange:(id)arg1 placementLayer:(id)arg2 superlayer:(id)arg3 timeToXCoordFunction:(CDUnknownBlockType)arg4;
- (id)initWithRange:(id)arg1;
- (void)dealloc;
- (void)_updateFacetFromRangeProperties;
@property(retain, nonatomic) FigTimeRangeAndObject *range; // @synthesize range=_range;

@end

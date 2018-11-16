//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TLKThemeBackedLayer.h"

@class CALayer, CATextLayer, FFOrganizerClusteringCollection, FFResponderLayerDisclosureButton;

__attribute__((visibility("hidden")))
@interface FFOrganizerFilmstripClusterHeaderLayer : TLKThemeBackedLayer
{
    BOOL _disclosed;
    FFOrganizerClusteringCollection *_clusteringCollection;
    CATextLayer *_clusterLabelLayer;
    CATextLayer *_itemCountLayer;
    FFResponderLayerDisclosureButton *_disclosureTriangleLayer;
    CALayer *_dividerLayer;
}

+ (double)dividerLayerSideMargin;
+ (id)dividerLineLayer;
@property(readonly, nonatomic) FFOrganizerClusteringCollection *cluster; // @synthesize cluster=_clusteringCollection;
@property(nonatomic) BOOL disclosed; // @synthesize disclosed=_disclosed;
- (void)setContentsScale:(double)arg1;
- (void)dealloc;
- (void)_setupLayersForIMovie;
- (long long)_countFigTimeRangAndObjectsInCollection:(id)arg1;
- (void)_setupLayersForFCP;
- (struct CGRect)disclosureFrame;
- (id)initWithClusteringCollection:(id)arg1 inRect:(struct CGRect)arg2 isDisclosed:(BOOL)arg3 facet:(id)arg4;
- (void)_toggleDisclosed;

@end


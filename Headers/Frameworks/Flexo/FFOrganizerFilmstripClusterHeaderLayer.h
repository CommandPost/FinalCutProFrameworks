//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TLKThemeBackedLayer.h"

@class FFOrganizerClusteringCollection, FFResponderLayerDisclosureButton;

__attribute__((visibility("hidden")))
@interface FFOrganizerFilmstripClusterHeaderLayer : TLKThemeBackedLayer
{
    BOOL _disclosed;
    FFOrganizerClusteringCollection *_clusteringCollection;
    FFResponderLayerDisclosureButton *_disclosureTriangleLayer;
}

@property(nonatomic) BOOL disclosed; // @synthesize disclosed=_disclosed;
- (void)_toggleDisclosed;
- (id)initWithClusteringCollection:(id)arg1 inRect:(struct CGRect)arg2 isDisclosed:(BOOL)arg3 facet:(id)arg4;
- (void)dealloc;
@property(readonly, nonatomic) FFOrganizerClusteringCollection *cluster; // @synthesize cluster=_clusteringCollection;

@end

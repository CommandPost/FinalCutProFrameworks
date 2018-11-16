//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CALayerDelegate.h"

@class FFOrganizerClusteringCollection, FFOrganizerFilmstripClusterHeaderLayer, NSString;

__attribute__((visibility("hidden")))
@interface FFOrganizerFilmstripClusterHeader : NSObject <CALayerDelegate>
{
    BOOL _isDisclosed;
    BOOL _emphasized;
    struct CGRect _frame;
    id <FFOrganizerFilmstripClusteringDelegate> _clusteringDelegate;
    FFOrganizerFilmstripClusterHeaderLayer *_layer;
    FFOrganizerClusteringCollection *_cluster;
}

@property(retain, nonatomic) FFOrganizerClusteringCollection *cluster; // @synthesize cluster=_cluster;
@property(nonatomic) id <FFOrganizerFilmstripClusteringDelegate> clusteringDelegate; // @synthesize clusteringDelegate=_clusteringDelegate;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(nonatomic) BOOL emphasized; // @synthesize emphasized=_emphasized;
@property(readonly, nonatomic) BOOL isDisclosed; // @synthesize isDisclosed=_isDisclosed;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (void)updateAllDisclosureStates:(BOOL)arg1;
- (void)updateDisclosureState:(BOOL)arg1;
- (void)releaseLayer;
- (id)layer;
- (BOOL)hasLayer;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithCluster:(id)arg1 width:(double)arg2 yCoord:(double)arg3 isDisclosed:(BOOL)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end


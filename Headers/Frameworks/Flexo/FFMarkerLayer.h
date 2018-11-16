//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TLKThemeBackedLayer.h"

@class FFAnchoredTimeMarker;

__attribute__((visibility("hidden")))
@interface FFMarkerLayer : TLKThemeBackedLayer
{
    FFAnchoredTimeMarker *_marker;
    BOOL _tracksMarkerPropertyChanges;
    BOOL _isSelected;
}

+ (struct CGRect)frameForMarkerLayer:(id)arg1 placementLayer:(id)arg2 superlayer:(id)arg3 timeToXCoordFunction:(CDUnknownBlockType)arg4;
+ (id)positionedMarkerLayerForMarker:(id)arg1 placementLayer:(id)arg2 superlayer:(id)arg3 timeToXCoordFunction:(CDUnknownBlockType)arg4;
+ (unsigned long long)_themeRef;
+ (id)_noteUnselectedFacet;
+ (id)_noteSelectedFacet;
+ (id)_todoUnselectedNotCompletedFacet;
+ (id)_todoSelectedNotCompletedFacet;
+ (id)_todoUnselectedCompletedFacet;
+ (id)_todoSelectedCompletedFacet;
- (id)initWithMarker:(id)arg1;
- (void)dealloc;
- (struct CGSize)requiredSize;
@property(retain, nonatomic) FFAnchoredTimeMarker *marker; // @synthesize marker=_marker;
- (id)actionForKey:(id)arg1;
- (void)_updateFacetFromMarkerProperties;
- (void)_addObserverForMarkerProperties;
- (void)_removeObserverForMarkerProperties;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property BOOL tracksMarkerPropertyChanges; // @synthesize tracksMarkerPropertyChanges=_tracksMarkerPropertyChanges;

@end

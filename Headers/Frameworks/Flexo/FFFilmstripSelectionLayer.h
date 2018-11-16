//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CALayer.h"

@class FFFilmstrip, NSProThemeFacet;

__attribute__((visibility("hidden")))
@interface FFFilmstripSelectionLayer : CALayer
{
    CALayer *_maskLayer;
    CALayer *_outlineLayer;
    CALayer *_leftHandleLayer;
    CALayer *_rightHandleLayer;
    CDStruct_1b6d18a9 _leftTime;
    CDStruct_1b6d18a9 _rightTime;
    CDStruct_1b6d18a9 _leftBoundaryTime;
    CDStruct_1b6d18a9 _rightBoundaryTime;
    int _leftEdgeType;
    int _rightEdgeType;
    BOOL _focused;
    BOOL _showHandles;
    BOOL _emphasized;
    BOOL _ghosted;
    struct CGRect _leftSelectionHandleRect;
    struct CGRect _rightSelectionHandleRect;
    BOOL _forStillImage;
    BOOL _usesAutoKeywordsStyle;
    FFFilmstrip *_filmstrip;
    NSProThemeFacet *_outlineLayerFacet;
    double _lastFacetWidth;
    BOOL _lastFacetStillImage;
}

+ (id)_rightFacetHandle;
+ (id)_leftFacetHandle;
+ (unsigned long long)_themeRef;
@property(nonatomic) BOOL usesAutoKeywordsStyle; // @synthesize usesAutoKeywordsStyle=_usesAutoKeywordsStyle;
@property(nonatomic) BOOL forStillImage; // @synthesize forStillImage=_forStillImage;
@property(nonatomic) BOOL ghosted; // @synthesize ghosted=_ghosted;
@property(nonatomic) BOOL emphasized; // @synthesize emphasized=_emphasized;
@property(nonatomic) BOOL focused; // @synthesize focused=_focused;
@property(nonatomic) BOOL showHandles; // @synthesize showHandles=_showHandles;
@property(nonatomic) int rightEdgeType; // @synthesize rightEdgeType=_rightEdgeType;
@property(nonatomic) int leftEdgeType; // @synthesize leftEdgeType=_leftEdgeType;
@property(nonatomic) CDStruct_1b6d18a9 rightBoundaryTime; // @synthesize rightBoundaryTime=_rightBoundaryTime;
@property(nonatomic) CDStruct_1b6d18a9 leftBoundaryTime; // @synthesize leftBoundaryTime=_leftBoundaryTime;
@property(nonatomic) CDStruct_1b6d18a9 rightTime; // @synthesize rightTime=_rightTime;
@property(nonatomic) CDStruct_1b6d18a9 leftTime; // @synthesize leftTime=_leftTime;
@property(retain, nonatomic) FFFilmstrip *filmstrip; // @synthesize filmstrip=_filmstrip;
- (void)_updateFacetFrameForWidth:(double)arg1 forStillImage:(BOOL)arg2;
- (BOOL)_shouldHideHandles;
@property(readonly, nonatomic) struct CGRect rightSelectionHandleRect;
@property(readonly, nonatomic) struct CGRect leftSelectionHandleRect;
@property(nonatomic) CDStruct_e83c9415 timeRange;
- (long long)_themeState;
- (void)_updateFrameProperties;
- (void)layoutSublayers;
- (void)dealloc;
- (void)setContentsScale:(double)arg1;
- (id)init;

@end


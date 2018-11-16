//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CALayer.h"

@class FFFilmstrip, TLKThemeBackedLayer;

__attribute__((visibility("hidden")))
@interface FFFilmstripSelectionLayer : CALayer
{
    CALayer *_maskLayer;
    TLKThemeBackedLayer *_outlineLayer;
    TLKThemeBackedLayer *_leftHandleLayer;
    TLKThemeBackedLayer *_rightHandleLayer;
    CDStruct_1b6d18a9 _leftTime;
    CDStruct_1b6d18a9 _rightTime;
    CDStruct_1b6d18a9 _leftBoundaryTime;
    CDStruct_1b6d18a9 _rightBoundaryTime;
    int _leftEdgeType;
    int _rightEdgeType;
    BOOL _showHandles;
    BOOL _emphasized;
    struct CGRect _leftSelectionHandleRect;
    struct CGRect _rightSelectionHandleRect;
    BOOL _forStillImage;
    BOOL _usesAutoKeywordsStyle;
    FFFilmstrip *_filmstrip;
}

+ (unsigned long long)_themeRef;
+ (id)_leftFacetHandle;
+ (id)_rightFacetHandle;
+ (id)_facetFrameForWidth:(double)arg1 forStillImage:(BOOL)arg2;
- (id)init;
- (void)layoutSublayers;
- (void)_updateFrameProperties;
@property(nonatomic) CDStruct_1b6d18a9 leftTime; // @synthesize leftTime=_leftTime;
@property(nonatomic) CDStruct_1b6d18a9 rightTime; // @synthesize rightTime=_rightTime;
@property(nonatomic) int leftEdgeType; // @synthesize leftEdgeType=_leftEdgeType;
@property(nonatomic) int rightEdgeType; // @synthesize rightEdgeType=_rightEdgeType;
@property(nonatomic) BOOL showHandles; // @synthesize showHandles=_showHandles;
@property(nonatomic) BOOL usesAutoKeywordsStyle; // @synthesize usesAutoKeywordsStyle=_usesAutoKeywordsStyle;
@property(nonatomic) BOOL emphasized; // @synthesize emphasized=_emphasized;
@property(readonly, nonatomic) struct CGRect leftSelectionHandleRect; // @synthesize leftSelectionHandleRect=_leftSelectionHandleRect;
@property(readonly, nonatomic) struct CGRect rightSelectionHandleRect; // @synthesize rightSelectionHandleRect=_rightSelectionHandleRect;
@property(nonatomic) BOOL forStillImage; // @synthesize forStillImage=_forStillImage;
@property(nonatomic) CDStruct_1b6d18a9 rightBoundaryTime; // @synthesize rightBoundaryTime=_rightBoundaryTime;
@property(nonatomic) CDStruct_1b6d18a9 leftBoundaryTime; // @synthesize leftBoundaryTime=_leftBoundaryTime;
@property(nonatomic) FFFilmstrip *filmstrip; // @synthesize filmstrip=_filmstrip;

@end

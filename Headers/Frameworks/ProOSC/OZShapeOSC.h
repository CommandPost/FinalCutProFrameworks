//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ProOSC/OZShapeTransformOSC.h>

@class NSMapTable;

@interface OZShapeOSC : OZShapeTransformOSC
{
    list_2e9945f8 *_previousSelection;
    list_2e9945f8 *_currentSelection;
    list_2e9945f8 *_selection;
    struct CGPoint _snapOrigin;
    _Bool _creating;
    _Bool _isTool;
    _Bool _selecting;
    _Bool _outlineOnly;
    _Bool _drawTangents;
    _Bool _eventAlreadyHandled;
    NSMapTable *_GLNames;
    unsigned int _nextGLName;
    struct CGRect _selectionViewVolume;
    PCPtr_df275998 _normalVertexAssets[6];
    PCVector2_79efa81a *_normalVertexSize;
    PCPtr_df275998 _selectedVertexAssets[6];
    PCVector2_79efa81a *_selectedVertexSize;
    PCPtr_df275998 _tangentAsset;
    PCVector2_79efa81a *_tangentSize;
    _Bool _assetSetup;
    double _rotoshapeVertexColor[4];
    double _rotoshapeOSCColor[4];
    double _rotoshapeLockedColor[4];
    double _rotoshapeControlPolygonColor[4];
    double _rotoshapeSelectedColor[4];
    double _startX;
    double _startY;
    double _startBoundsX1;
    double _startBoundsY1;
    double _startBoundsX2;
    double _startBoundsY2;
    BOOL _shouldDrawVertices;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct OZShapeRenderState)makeShapeRenderState;
- (void)calculateSnapBounds:(id)arg1;
- (void)updateDrag:(double *)arg1 y:(double *)arg2;
- (void)initDrag:(double)arg1 y:(double)arg2;
- (struct CGRect)shapeBoundsAtTime:(CDStruct_1b6d18a9 *)arg1;
- (struct CGSize)shapeDimensionsAtTime:(CDStruct_1b6d18a9 *)arg1;
- (void)setOutlineOnly:(_Bool)arg1;
- (void)drawSelectionRect;
- (void)drawControlPolygonWithTransform:(const PCMatrix44Tmpl_e98c85ee *)arg1 mode:(unsigned int)arg2;
- (void)drawVerticesWithTransform:(const PCMatrix44Tmpl_e98c85ee *)arg1 mode:(unsigned int)arg2;
- (void)drawWithDrawProperties:(id)arg1;
- (void)draw;
- (void)addDrawProperties:(id)arg1 forTime:(CDStruct_1b6d18a9)arg2 viewBounds:(struct CGRect)arg3;
- (void)setShouldDrawVertices:(BOOL)arg1;
- (void)clearGLNamesForObjects;
- (void *)objectForGLName:(unsigned int)arg1;
- (unsigned int)createGLNameForObject:(void *)arg1;
- (BOOL)updateSelectionInOSC:(id)arg1 withRect:(PCRect_b601f9f3 *)arg2;
- (void)initSelectionInOSC:(id)arg1;
- (void)clearSelection;
- (void)clearPreviousSelection;
- (void)clearCurrentSelection;
- (list_2e9945f8 *)getSelection;
- (list_2e9945f8 *)getCurrentSelection;
- (void)cleanSelection:(list_2e9945f8 *)arg1;
- (void)select:(id)arg1;
- (int)hitCheck:(id)arg1;
- (BOOL)activeOnFullCanvas:(id)arg1;
- (BOOL)processOSCSpecificHits:(unsigned int *)arg1 selection:(struct OZShapeOnScreenSelection *)arg2;
- (unsigned int)processHits;
- (BOOL)selectNone:(id)arg1;
- (BOOL)selectAll:(id)arg1;
- (BOOL)isSelected:(struct OZVertex2D)arg1;
- (id)getDefaultCursor;
- (struct OZShape *)getRotoshape;
- (void)setRotoshape:(struct OZShape *)arg1;
- (struct OZShape *)validate:(struct OZShape *)arg1;
- (BOOL)isTool;
- (void)setIsTool:(BOOL)arg1;
- (void)dealloc;
- (id)initWithHostDelegate:(id)arg1 andViewDelegate:(id)arg2 andObjectDelegate:(id)arg3 andChannel:(struct OZChannelBase *)arg4 andShape:(struct OZShape *)arg5;
- (id)initWithHostDelegate:(id)arg1 andViewDelegate:(id)arg2 andObjectDelegate:(id)arg3 andChannel:(struct OZChannelBase *)arg4;

@end


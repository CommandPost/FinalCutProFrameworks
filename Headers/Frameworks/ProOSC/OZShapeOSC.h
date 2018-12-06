//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ProOSC/POOnScreenControl.h>

@class NSMapTable;

@interface OZShapeOSC : POOnScreenControl
{
    list_52cd6d19 *_previousSelection;
    list_52cd6d19 *_currentSelection;
    list_52cd6d19 *_selection;
    struct OZShape *_shape;
    int _numHits;
    unsigned int _buffer[8192];
    struct CGPoint _mouseOrigin;
    struct CGPoint _lastMousePos;
    struct CGPoint _snapOrigin;
    _Bool _creating;
    _Bool _isTool;
    _Bool _selecting;
    _Bool _startDrag;
    _Bool _outlineOnly;
    _Bool _mouseWasDragged;
    _Bool _drawTangents;
    _Bool _eventAlreadyHandled;
    NSMapTable *_GLNames;
    unsigned int _nextGLName;
    struct CGRect _selectionViewVolume;
    PCPtr_ca909b16 _normalVertexAssets[6];
    PCVector2_79efa81a *_normalVertexSize;
    PCPtr_ca909b16 _selectedVertexAssets[6];
    PCVector2_79efa81a *_selectedVertexSize;
    PCPtr_ca909b16 _tangentAsset;
    PCVector2_79efa81a *_tangentSize;
    _Bool _assetSetup;
    long long _assetCategory;
    long long _assetType;
    long long _assetTangentType;
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
}

- (id)initWithHostDelegate:(id)arg1 andViewDelegate:(id)arg2 andObjectDelegate:(id)arg3 andChannel:(struct OZChannelBase *)arg4;
- (id)initWithHostDelegate:(id)arg1 andViewDelegate:(id)arg2 andObjectDelegate:(id)arg3 andChannel:(struct OZChannelBase *)arg4 andShape:(struct OZShape *)arg5;
- (void)dealloc;
- (void)setIsTool:(BOOL)arg1;
- (BOOL)isTool;
- (struct OZShape *)validate:(struct OZShape *)arg1;
- (void)setRotoshape:(struct OZShape *)arg1;
- (struct OZShape *)getRotoshape;
- (id)getDefaultCursor;
- (void)setupAssets;
- (PCPtr_ca909b16)getKeypointImage:(unsigned int)arg1 state:(unsigned int)arg2;
- (PCPtr_ca909b16)getTangentImage;
- (BOOL)isSelected:(struct OZVertex2D)arg1;
- (BOOL)selectAll:(id)arg1;
- (BOOL)selectNone:(id)arg1;
- (void)processHits;
- (BOOL)processOSCSpecificHits:(unsigned int *)arg1 selection:(struct OZShapeOnScreenSelection *)arg2;
- (BOOL)activeOnFullCanvas:(id)arg1;
- (int)hitCheck:(id)arg1;
- (void)select:(id)arg1;
- (void)cleanSelection:(list_52cd6d19 *)arg1;
- (list_52cd6d19 *)getCurrentSelection;
- (list_52cd6d19 *)getSelection;
- (void)clearCurrentSelection;
- (void)clearPreviousSelection;
- (void)clearSelection;
- (void)initSelectionInOSC:(id)arg1;
- (BOOL)updateSelectionInOSC:(id)arg1 withRect:(PCRect_b601f9f3 *)arg2;
- (unsigned int)createGLNameForObject:(void *)arg1;
- (void *)objectForGLName:(unsigned int)arg1;
- (void)clearGLNamesForObjects;
- (void)addDrawProperties:(id)arg1 forTime:(CDStruct_1b6d18a9)arg2 viewBounds:(struct CGRect)arg3;
- (void)draw;
- (void)drawWithDrawProperties:(id)arg1;
- (void)drawVerticesWithTransform:(const PCMatrix44Tmpl_e98c85ee *)arg1 mode:(unsigned int)arg2;
- (void)drawOSCSpecificHandlesWithTransform:(const PCMatrix44Tmpl_e98c85ee *)arg1 mode:(unsigned int)arg2;
- (void)drawControlPolygonWithTransform:(const PCMatrix44Tmpl_e98c85ee *)arg1 mode:(unsigned int)arg2;
- (void)drawSelectionRect;
- (void)setOutlineOnly:(_Bool)arg1;
- (void)initDrag:(double)arg1 y:(double)arg2;
- (void)updateDrag:(double *)arg1 y:(double *)arg2;
- (PCMatrix44Tmpl_e98c85ee)getViewTransform:(const PCMatrix44Tmpl_e98c85ee *)arg1;
- (void)translate:(id)arg1 move:(struct CGPoint)arg2;
- (void)calculateSnapBounds:(id)arg1;
- (struct OZShapeRenderState)makeShapeRenderState;
- (id).cxx_construct;
- (void).cxx_destruct;

@end


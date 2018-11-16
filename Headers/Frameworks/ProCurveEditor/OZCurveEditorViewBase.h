//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOpenGLView.h"

@class NSMapTable, NSMutableDictionary, NSTrackingArea, OZCurveEditorCtrlBase, OZCurveSelectionList, PCEDrawableTexture, ProThemeImageSource;

@interface OZCurveEditorViewBase : NSOpenGLView
{
    OZCurveEditorCtrlBase *_controller;
    ProThemeImageSource *_pImageKp;
    ProThemeImageSource *_pImageKpSelected;
    struct CGRect _currentViewVolume;
    struct CGRect _originalViewVolume;
    struct CGRect _selectionViewVolume;
    double _maxZoomX;
    double _maxZoomY;
    double _zoomFactorX;
    double _zoomFactorY;
    double _gridZoomX;
    double _gridZoomY;
    double _gridSpacingX;
    double _gridSpacingY;
    double _gridScaleY;
    double _gridOffsetY;
    struct CGPoint _pointSize;
    double _minDeltaU;
    struct CGPoint _mouseOrigin;
    struct CGRect _lastTimeRect;
    struct CGPoint _lastMousePos;
    struct CGPoint _lastPoint;
    int _numHits;
    unsigned int _buffer[65536];
    OZCurveSelectionList *_selection;
    NSMapTable *_GLNames;
    unsigned int _nextGLName;
    OZCurveSelectionList *_currentSelection;
    OZCurveSelectionList *_previousSelection;
    BOOL _useAlternateColorScheme;
    NSTrackingArea *_trackingArea;
    BOOL _space;
    BOOL _selecting;
    BOOL _startDrag;
    BOOL _useOriginalAngle;
    BOOL _printText;
    BOOL _printScale;
    BOOL _dragTangentOut;
    unsigned int _constrainMove;
    BOOL _canPanVertically;
    BOOL _canPanHorizontally;
    BOOL _autoZoom;
    BOOL _autoPan;
    BOOL _shiftWasPressed;
    BOOL _cursorHidden;
    BOOL _capturing;
    BOOL _isInCurveEditor;
    BOOL _hasFixedScale;
    BOOL _mouseIsDown;
    BOOL _snapCursor;
    BOOL _lockInU;
    BOOL _didAddPoint;
    BOOL _shouldDrawProcessedCurve;
    BOOL _needsAutoZoom;
    NSMutableDictionary *_textAttribs;
    PCEDrawableTexture *_horizontalTextTexture;
    struct CGPoint _fourCornersTopLeft;
    struct CGPoint _fourCornersTopRight;
    struct CGPoint _fourCornersBottomLeft;
    struct CGPoint _fourCornersBottomRight;
    struct CGPoint _initialFourCornersTopLeft;
    struct CGPoint _initialFourCornersTopRight;
    struct CGPoint _initialFourCornersBottomLeft;
    struct CGPoint _initialFourCornersBottomRight;
    int _activePart;
    int _currentActivePart;
    _Bool _fourCornerBoxInitialized;
    double _topLeftXFactor;
    double _topLeftYFactor;
    double _topRightXFactor;
    double _topRightYFactor;
    double _bottomLeftXFactor;
    double _bottomLeftYFactor;
    double _bottomRightXFactor;
    double _bottomRightYFactor;
    double _boxAspect;
    double _boxCenterX;
    double _boxCenterY;
    CDStruct_e83c9415 _displayRange;
    CDStruct_e83c9415 _totalRange;
    CDStruct_1b6d18a9 _currentTime;
    CDStruct_1b6d18a9 _lastTime;
}

- (id).cxx_construct;
- (void)panWithPage:(double)arg1 y:(double)arg2;
- (void)pan:(double)arg1 y:(double)arg2;
- (void)setVerticalZoom:(double)arg1 offsetPercentage:(double)arg2;
- (void)zoomWithFactor:(double)arg1 y:(double)arg2;
- (void)zoom:(double)arg1 y:(double)arg2;
- (void)drawCurveUnits;
- (void)drawGrid;
- (void)_notifyChannelChangeDone;
- (void)setCapturing:(BOOL)arg1;
- (BOOL)getCapturing;
- (id)getController;
- (void)setEditBox:(struct CGRect)arg1;
- (struct CGRect)getEditBox;
- (void)prepareSelectedHandles;
- (void)validateSelectedHandles:(id)arg1;
- (vector_53b492d6)channelsForSelection;
- (struct CGPoint)getMouseOrigin;
- (void)updateDrag:(double)arg1 y:(double)arg2;
- (struct CGPoint)getOffsetFromOriginWorld:(double)arg1 deltaY:(double)arg2;
- (struct CGPoint)getOffsetFromLastWorld:(double)arg1 deltaY:(double)arg2;
- (struct CGPoint)adjustWorldPointToScreen:(struct CGPoint)arg1;
- (struct CGPoint)getSizeScreen:(struct CGPoint)arg1;
- (struct CGPoint)getPointScreen:(struct CGPoint)arg1;
- (struct CGPoint)getSizeWorld:(struct CGPoint)arg1;
- (struct CGPoint)getPointWorld:(struct CGPoint)arg1;
- (void)setTotalRange:(const CDStruct_1b6d18a9 *)arg1 duration:(const CDStruct_1b6d18a9 *)arg2;
- (void)setDisplayRange:(const CDStruct_1b6d18a9 *)arg1 duration:(const CDStruct_1b6d18a9 *)arg2;
- (double)minDeltaU;
- (void)setCurrentTime:(const CDStruct_1b6d18a9 *)arg1;
- (CDStruct_1b6d18a9)currentTime;
- (CDStruct_1b6d18a9)getCurveEditorCurrentTime;
- (CDStruct_e83c9415)getDisplayRange;
- (CDStruct_e83c9415)getTotalRange;
- (id)getCurrentSelection;
- (id)getSelection;
- (void)setController:(id)arg1;
- (struct CGRect)getCurrentViewport;
- (struct CGRect)getOriginalViewVolume;
- (struct CGRect)getCurrentViewVolume;
- (void)setProcessedCurveDirty:(id)arg1 enable:(BOOL)arg2;
- (void)setAllOriginalCurveScaleDirty:(BOOL)arg1;
- (void)setAllOriginalCurveDirty:(BOOL)arg1;
- (void)setVisibleOriginalCurveDirty:(BOOL)arg1;
- (void)setOriginalCurveDirty:(id)arg1 enable:(BOOL)arg2;
- (void)nudgeRightFinished:(id)arg1;
- (void)nudgeRight:(id)arg1;
- (void)nudgeLeftFinished:(id)arg1;
- (void)nudgeLeft:(id)arg1;
- (void)nudgeDownFinished:(id)arg1;
- (void)nudgeDown:(id)arg1;
- (void)nudgeUpFinished:(id)arg1;
- (void)nudgeUp:(id)arg1;
- (void)delete:(id)arg1;
- (BOOL)customKeyEquivalent:(id)arg1;
- (void)currentToolChanged;
- (void)getBoxLimits:(struct CGPoint *)arg1 boxTopRight:(struct CGPoint *)arg2 boxBottomLeft:(struct CGPoint *)arg3 boxBottomRight:(struct CGPoint *)arg4 pWidth:(double *)arg5 pHeight:(double *)arg6 pCenterX:(double *)arg7 pCenterY:(double *)arg8;
- (void)mouseDraggedBox:(id)arg1;
- (void)mouseDraggedSketch:(id)arg1;
- (void)mouseDraggedEdit:(id)arg1;
- (void)mouseDownBox:(id)arg1;
- (void)mouseDownSketch:(id)arg1;
- (void)mouseDownEdit:(id)arg1;
- (BOOL)hasFixedScale;
- (void)setHasFixedScale:(BOOL)arg1;
- (void)setIsInCurveEditor:(BOOL)arg1;
- (BOOL)isInCurveEditor;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (void)selectNone:(id)arg1;
- (void)selectAll:(id)arg1;
- (void)keyUp:(id)arg1;
- (void)keyDown:(id)arg1;
- (BOOL)acceptsFirstResponder;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (id)menuForEvent:(id)arg1;
- (void)scrollWheel:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (struct CGPoint)snapCursorTo:(struct CGPoint)arg1;
- (id)getColorForIndex:(unsigned int)arg1;
- (struct CGPoint)constrainTime:(struct CGPoint)arg1;
- (struct CGPoint)constrainMove:(struct CGPoint)arg1 origin:(struct CGPoint)arg2;
- (BOOL)canPanVertically;
- (BOOL)canPanHorizontally;
- (void)setCanPanHorizontally:(BOOL)arg1;
- (void)setCanPanVertically:(BOOL)arg1;
- (double)zoomY;
- (double)zoomX;
- (void)resetPanY;
- (void)resetPanX;
- (void)resetZoomY;
- (void)resetZoomX;
- (void)resetZoom;
- (void)resetPan;
- (void)performAutoZoom:(_Bool)arg1;
- (void)cursorUpdate:(id)arg1;
- (void)updateTrackingAreas;
- (void)setCursor:(id)arg1;
- (void)clearGLNamesForObjects;
- (void *)objectForGLName:(unsigned int)arg1;
- (unsigned int)createGLNameForObject:(void *)arg1;
- (void)processHits;
- (void)pick:(struct CGPoint)arg1;
- (void)select;
- (BOOL)lockKeyframesInU;
- (void)setLockKeyframesInU:(BOOL)arg1;
- (BOOL)snapCursor;
- (void)setSnapCursor:(BOOL)arg1;
- (void)frameAll:(BOOL)arg1;
- (BOOL)autoPan;
- (void)setAutoPan:(BOOL)arg1;
- (BOOL)autoZoom;
- (void)setAutoZoom:(BOOL)arg1;
- (id)getCoordinates:(id)arg1 time:(CDStruct_1b6d18a9)arg2 value:(double)arg3;
- (void)drawOverlays:(struct CGRect)arg1;
- (void)drawPoints:(id)arg1 mode:(unsigned int)arg2 drawTangents:(BOOL)arg3;
- (void)drawProcessedCurve:(id)arg1;
- (void)drawOriginalCurve:(id)arg1 mode:(unsigned int)arg2;
- (void)drawCurveEditor:(struct CGRect)arg1;
- (void)drawBackground;
- (void)drawFourCornerBox:(unsigned int)arg1;
- (void)drawAsset:(unsigned int)arg1 atPos:(struct CGPoint)arg2 withSize:(struct CGPoint)arg3 texSize:(struct CGPoint)arg4;
- (id)getScale:(id)arg1 value:(double)arg2;
- (void)drawProjection:(unsigned int)arg1;
- (void)drawSelectionRect;
- (void)glPrint:(id)arg1 atPos:(struct CGPoint)arg2;
- (void)computeVerticalTickMarks;
- (unsigned int)numberOfTickMarks;
- (unsigned int)linenShadowAssetAtSize:(struct CGSize)arg1;
- (unsigned int)tangentAsset:(struct CGPoint *)arg1;
- (unsigned int)keyframeAsset:(unsigned int)arg1 state:(unsigned int)arg2 index:(unsigned int)arg3 assetSize:(struct CGPoint *)arg4;
- (id)curveColor:(unsigned int)arg1;
- (id)lockedColor;
- (id)backgroundColor;
- (id)selectionColor;
- (id)textColor;
- (id)gridColor;
- (id)playheadColor;
- (BOOL)wantsBestResolutionOpenGLSurface;
- (void)reshape;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end


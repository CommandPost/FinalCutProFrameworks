//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "POOnScreenControl.h"

@class MEDropZonePanScanOSC, NSColor;

@interface OZDropZonePanScanOSC : POOnScreenControl
{
    MEDropZonePanScanOSC *_meDropZonePanScanOSC;
    double _startX;
    double _startY;
    double _mouseX;
    double _mouseY;
    double _snapStartX;
    double _snapStartY;
    double _draggingRotZ;
    double _startRoundness;
    double _startDragRoundness;
    float _pivotRadius;
    PCVector2_7e488b7d _pivotRadiusBorder;
    struct CGSize _pivotHalf;
    int _pivotWidth;
    int _pivotHeight;
    PCRect_b601f9f3 _snapStartBounds;
    PCVector3_457fd1f0 _startScale;
    PCVector3_457fd1f0 _startRot;
    PCVector3_457fd1f0 _startPivot;
    PCVector3_457fd1f0 _startOffset;
    PCVector2_79efa81a _startShear;
    PCVector2_79efa81a _priorRotHandlePos;
    PCVector2_79efa81a _corners[8];
    PCVector2_79efa81a _handle[2];
    BOOL _moving;
    BOOL _movingObject;
    int _dragConstraint;
    BOOL _mouseDown;
    BOOL _elementBeingDragged;
    BOOL _rotationSnapped;
    NSColor *_playerStatusText;
    NSColor *_playerStatusTextLocked;
    NSColor *_playerStatusTextUnit;
    NSColor *_playerStatusTextDeltaUnmodified;
    NSColor *_playerStatusTextDeltaGreater;
    NSColor *_playerStatusTextDeltaGreaterUnit;
    NSColor *_playerStatusTextDeltaLess;
    NSColor *_playerStatusTextDeltaLessUnit;
}

+ (id)allocInfoBarTextWithPosition:(const PCVector2_79efa81a *)arg1;
+ (_Bool)validate:(struct OZChannelBase *)arg1;
@property(retain, nonatomic) MEDropZonePanScanOSC *meDropZonePanScanOSC; // @synthesize meDropZonePanScanOSC=_meDropZonePanScanOSC;
- (id).cxx_construct;
- (void).cxx_destruct;
- (struct OZImageElement *)getImageElement;
- (struct OZElement *)getElement;
- (BOOL)postRedisplayOnActivePartChange;
- (BOOL)acceptPassiveEvent:(id)arg1;
- (void)drawPivotAtPos:(PCVector2_79efa81a)arg1 withMat:(PCMatrix44Tmpl_e98c85ee)arg2;
- (void)drawRotationAtPos:(PCVector2_79efa81a)arg1 withMat:(PCMatrix44Tmpl_e98c85ee)arg2;
- (void)drawPivotHandleConnectorAtPos:(PCVector2_79efa81a)arg1;
- (void)draw;
- (void)drawRoundnessHandleWithMatrix:(const PCMatrix44Tmpl_e98c85ee *)arg1 Points:(PCVector2_79efa81a *)arg2 Edges:(PCVector2_79efa81a *)arg3 RenderMode:(int)arg4 TexOffset:(const PCVector2_79efa81a *)arg5 Visibility:(const vector_69938c0b *)arg6;
- (struct CGRect)activeHandleRect;
- (BOOL)shouldSnapRotation:(double)arg1 withNewAngle:(double *)arg2;
- (BOOL)isDependentOnBounds;
- (BOOL)isActivePartScaleHandle;
- (BOOL)isBeingScaled;
- (BOOL)isBeingRotated;
- (BOOL)isBeingTranslated;
- (BOOL)isConstrained;
- (PCMatrix44Tmpl_e98c85ee)getLocalToEyeRot;
- (PCMatrix44Tmpl_e98c85ee)getViewTransformation;
- (PCMatrix44Tmpl_e98c85ee)getPivotToView;
- (PCVector2_7e488b7d)getRotHandlePos;
- (PCVector2_7e488b7d)getRotHandlePosAtDist:(float)arg1;
- (float)getRotHandleDistance;
- (PCVector2_7e488b7d)getHandleDirection;
- (BOOL)projectPoint:(PCVector3_457fd1f0 *)arg1 toSpaceOf:(int)arg2;
- (PCVector3_457fd1f0)calcDragFrom:(const PCVector3_457fd1f0 *)arg1 to:(const PCVector3_457fd1f0 *)arg2;
- (PCVector2_7e488b7d)getPivotSize;
- (PCPtr_a02aef32)getCurrentRotationTexture;
- (PCPtr_a02aef32)getCurrentPivotTexture;
- (PCPtr_a02aef32)getCurrentHandlesTexture:(int)arg1;
- (BOOL)isActiveHandle:(int)arg1;
- (double)getRoundness;
- (void)setRoundness:(double)arg1;
- (double)getRoundnessRadius;
- (BOOL)canUseRoundness;
- (void)move:(const PCVector3_457fd1f0 *)arg1;
- (void)rotate:(id)arg1 angle:(double)arg2;
- (void)updateScale:(const PCVector3_457fd1f0 *)arg1 scaleFromCentre:(_Bool)arg2 hitPart:(int)arg3;
- (void)scale:(const PCVector3_457fd1f0 *)arg1;
- (void)setScale:(const PCVector3_457fd1f0 *)arg1;
- (void)offsetPosition:(const PCVector3_457fd1f0 *)arg1;
- (void)getTransformMatrix:(PCMatrix44Tmpl_e98c85ee *)arg1 imageElement:(struct OZImageElement *)arg2 renderParams:(struct OZRenderParams *)arg3;
- (BOOL)oscFlagsChanged:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)updateInfoBarWithScale:(const PCVector3_457fd1f0 *)arg1 andRotation:(double)arg2 andRotationDelta:(double)arg3 andRoundness:(double)arg4;
- (void)updateInfoBarWithPosition;
- (id)accessibilityHandleName;
- (struct CGRect)getDropZoneBounds;
- (PCRect_b601f9f3)getBounds;
- (PCMatrix44Tmpl_e98c85ee)dropZoneTransform;
- (PCVector3_457fd1f0)getPivot;
- (PCVector3_457fd1f0)getScale;
- (PCVector3_457fd1f0)getRotation;
- (PCVector3_457fd1f0)getPosition;
- (void)snapshotState;
- (id)getCursorWithEvent:(id)arg1;
- (id)getDefaultCursor;
- (void)dealloc;
- (id)initWithHostDelegate:(id)arg1 andViewDelegate:(id)arg2 andObjectDelegate:(id)arg3 andChannel:(struct OZChannelBase *)arg4;

@end


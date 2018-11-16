//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ProOSC/POScaleControl.h>

@interface OZTransformOSC : POScaleControl
{
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
}

+ (PCPtr_df275998)getRotationTexture:(int)arg1;
+ (PCPtr_df275998)getPivotTexture:(int)arg1;
+ (PCPtr_df275998)getHandlesTexture:(int)arg1;
+ (id)allocInfoBarTextWithPosition:(const PCVector2_79efa81a *)arg1;
+ (void)maybeInitResources;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addDrawProperties:(id)arg1 forTime:(CDStruct_1b6d18a9)arg2 viewBounds:(struct CGRect)arg3;
- (BOOL)postRedisplayOnActivePartChange;
- (BOOL)acceptPassiveEvent:(id)arg1;
- (void)drawPivotAtPos:(PCVector2_79efa81a)arg1 withMat:(PCMatrix44Tmpl_e98c85ee)arg2;
- (void)drawRotationAtPos:(PCVector2_79efa81a)arg1 withMat:(PCMatrix44Tmpl_e98c85ee)arg2;
- (void)drawPivotHandleConnectorAtPos:(PCVector2_79efa81a)arg1;
- (void)draw;
- (void)drawRoundnessHandleWithMatrix:(const PCMatrix44Tmpl_e98c85ee *)arg1 Points:(PCVector2_79efa81a *)arg2 Edges:(PCVector2_79efa81a *)arg3 RenderMode:(int)arg4 TexOffset:(const PCVector2_79efa81a *)arg5 Visibility:(const vector_69938c0b *)arg6;
- (struct CGRect)activeHandleRect;
- (BOOL)shouldSnapRotation:(double)arg1 withNewAngle:(double *)arg2;
- (BOOL)toolHandlesTranslation;
- (BOOL)isDependentOnBounds;
- (BOOL)isActivePartScaleHandle;
- (BOOL)isBeingScaled;
- (BOOL)isBeingRotated;
- (BOOL)isBeingTranslated;
- (BOOL)isConstrained;
- (struct POColor)getRotateLineStrokeShadowColor;
- (struct POColor)getRotateLineStrokeColor;
- (struct POColor)getBoxStrokeColor;
- (PCMatrix44Tmpl_e98c85ee)getLocalToEyeRot;
- (PCMatrix44Tmpl_e98c85ee)getViewTransformation;
- (PCMatrix44Tmpl_e98c85ee)getPivotToView;
- (PCVector2_7e488b7d)getRotHandlePos;
- (PCVector2_7e488b7d)getRotHandlePosAtDist:(float)arg1;
- (float)getRotHandleDistance;
- (PCVector2_7e488b7d)getHandleDirection;
- (PCVector2_7e488b7d)getPivotSize;
- (PCPtr_df275998)getCurrentRotationTexture;
- (PCPtr_df275998)getCurrentPivotTexture;
- (PCPtr_df275998)getCurrentHandlesTexture:(int)arg1;
- (BOOL)isActiveHandle:(int)arg1;
- (double)getRoundness;
- (void)setRoundness:(double)arg1;
- (double)getRoundnessRadius;
- (BOOL)canUseRoundness;
- (void)move:(const PCVector3_457fd1f0 *)arg1;
- (void)rotate:(id)arg1 angle:(double)arg2;
- (void)updateScale:(const PCVector3_457fd1f0 *)arg1 scaleFromCentre:(_Bool)arg2 hitPart:(int)arg3;
- (BOOL)oscFlagsChanged:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)updateInfoBarWithScale:(const PCVector3_457fd1f0 *)arg1 andRotation:(double)arg2 andRotationDelta:(double)arg3 andRoundness:(double)arg4;
- (void)updateInfoBarWithPosition;
- (BOOL)bgIsBeingTranslated;
- (id)accessibilityHandleName;
- (struct CGRect)getBounds;
- (void)snapshotState;
- (id)getCursorWithEvent:(id)arg1;
- (id)getDefaultCursor;
- (void)dealloc;
- (id)initWithHostDelegate:(id)arg1 andViewDelegate:(id)arg2 andObjectDelegate:(id)arg3 andChannel:(struct OZChannelBase *)arg4 scaleOnly:(BOOL)arg5;
- (id)initWithHostDelegate:(id)arg1 andViewDelegate:(id)arg2 andObjectDelegate:(id)arg3 andChannel:(struct OZChannelBase *)arg4;
- (void)_init;

@end


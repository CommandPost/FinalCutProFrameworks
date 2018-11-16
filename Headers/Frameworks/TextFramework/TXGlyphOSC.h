//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "POOnScreenControl.h"

#import "OZObjCObserver.h"

@interface TXGlyphOSC : POOnScreenControl <OZObjCObserver>
{
    double _startX;
    double _startY;
    double _mouseX;
    double _mouseY;
    double _startViewX;
    double _startViewY;
    double _mouseViewX;
    double _mouseViewY;
    double _snapStartX;
    double _snapStartY;
    double _anchorX;
    double _anchorY;
    double _anchorZ;
    double _pivotAnchorX;
    double _pivotAnchorY;
    double _pivotAnchorZ;
    struct map<TXTextObject*, PCMatrix44Tmpl<double>, std::less<TXTextObject*>, std::allocator<std::pair<TXTextObject* const, PCMatrix44Tmpl<double>>>> *_textObjectStartTransformMatrix;
    struct map<TXTextObject*, PCVector3<double>, std::less<TXTextObject*>, std::allocator<std::pair<TXTextObject* const, PCVector3<double>>>> *_startAnchor;
    struct map<TXTextObject*, PCVector3<double>, std::less<TXTextObject*>, std::allocator<std::pair<TXTextObject* const, PCVector3<double>>>> *_startPivotAnchor;
    struct map<TXTextObject*, PCRect<double>, std::less<TXTextObject*>, std::allocator<std::pair<TXTextObject* const, PCRect<double>>>> *_textObjectStartBounds;
    struct map<TXTextObject*, PCVector3<double>, std::less<TXTextObject*>, std::allocator<std::pair<TXTextObject* const, PCVector3<double>>>> *_startScale;
    struct map<TXTextObject*, PCVector3<double>, std::less<TXTextObject*>, std::allocator<std::pair<TXTextObject* const, PCVector3<double>>>> *_startRotation;
    struct map<TXTextObject*, PCVector3<double>, std::less<TXTextObject*>, std::allocator<std::pair<TXTextObject* const, PCVector3<double>>>> *_startOffset;
    struct map<TXTextObject*, PCVector3<double>, std::less<TXTextObject*>, std::allocator<std::pair<TXTextObject* const, PCVector3<double>>>> *_immediateOffset;
    double _startScaleX;
    double _startScaleY;
    double _startScaleZ;
    double _startRotX;
    double _cumulativeRotX;
    double _lastRotX;
    double _startRotY;
    double _cumulativeRotY;
    double _lastRotY;
    double _startRotZ;
    double _cumulativeRotZ;
    double _lastRotZ;
    double _startTransX;
    double _startTransY;
    double _startTransZ;
    double _startPivotX;
    double _startPivotY;
    double _startPivotZ;
    double _startShearX;
    double _startShearY;
    PCRect_b601f9f3 *_startBounds;
    PCMatrix44Tmpl_e98c85ee *_thisTextObjectStartTransformMatrix;
    double _draggingScaleX;
    double _draggingScaleY;
    double _draggingScaleZ;
    double _draggingRotX;
    double _draggingRotY;
    double _draggingRotZ;
    double _draggingTransX;
    double _draggingTransY;
    double _draggingTransZ;
    double _draggingPivotX;
    double _draggingPivotY;
    double _draggingPivotZ;
    struct PCPtr<POMultiResTexture> _handlesTexture[2];
    struct PCPtr<POMultiResTexture> _warpHandlesTexture[2];
    struct PCPtr<POMultiResTexture> _shearHandlesTexture[2];
    struct PCPtr<POMultiResTexture> _rotationTexture[2];
    struct PCPtr<POMultiResTexture> _pivotTexture;
    BOOL _moving;
    BOOL _rotating;
    BOOL _3dtranslating;
    BOOL _movingObject;
    BOOL _boxSelect;
    BOOL _toggleBoxSelect;
    struct TXDiscontinuousSelection _glyphSelection;
    unsigned long long _focusedGlyphSelection;
    BOOL _cmdKeyDown;
    BOOL _shiftKeyDown;
    BOOL _altKeyDown;
    BOOL _isChanDelta;
    unsigned long long _curCharOffset;
    int _mActivePart;
    double _startCross;
    _Bool _capturingModifiedChannels;
    struct POMove3DOSC *_pos3Dtool;
    struct PORotate3DOSC *_rot3Dtool;
    PCVector3_457fd1f0 _pAxis;
    PCVector3_457fd1f0 _OSCStartRot;
    PCVector3_457fd1f0 _OSCStartTrans;
    PCVector2_79efa81a _OSCStartScale;
    BOOL _firstDrag;
}

+ (BOOL)validate:(struct OZChannelBase *)arg1;
- (id)initWithHostDelegate:(id)arg1 andViewDelegate:(id)arg2 andObjectDelegate:(id)arg3 andChannel:(struct OZChannelBase *)arg4;
- (void)dealloc;
- (void)draw;
- (void)drawBoxSelection;
- (void)updateInfoBarWithPosition:(const PCVector3_457fd1f0 *)arg1 andChange:(const PCVector3_457fd1f0 *)arg2;
- (void)updateInfoBarWithRotation:(const PCVector3_457fd1f0 *)arg1 andChange:(const PCVector3_457fd1f0 *)arg2;
- (void)updateInfoBarWithSideScale:(float)arg1 andChange:(float)arg2;
- (void)updateInfoBarWithCornerScale:(const PCVector2_79efa81a *)arg1 andChange:(const PCVector2_79efa81a *)arg2;
- (void)getCameraToWorldRotation:(PCMatrix44Tmpl_e98c85ee *)arg1;
- (void)getAxesToWorld:(struct TXTextObject *)arg1 axesToWorld:(PCMatrix44Tmpl_e98c85ee *)arg2 withState:(const struct OZRenderState *)arg3;
- (void)getLocalToAxesOrientation:(const PCMatrix44Tmpl_e98c85ee *)arg1 localToAxesOrientation:(PCMatrix44Tmpl_e98c85ee *)arg2 withState:(const struct OZRenderState *)arg3;
- (PCMatrix44Tmpl_e98c85ee)getWorldToViewMatrix;
- (PCVector3_457fd1f0)getDraggingAxis;
- (struct OZChannelPosition3D *)getOffsetChannel:(struct TXTextStyle *)arg1;
- (struct OZChannelScale *)getGlowScaleChannel:(struct TXTextStyle *)arg1;
- (struct OZChannelPosition *)getGlowOffsetChannel:(struct TXTextStyle *)arg1;
- (struct OZChannelDouble *)getDropShadowDistanceChannel:(struct TXTextStyle *)arg1;
- (struct OZChannelAngle *)getDropShadowAngleChannel:(struct TXTextStyle *)arg1;
- (struct OZChannelScale *)getDropShadowScaleChannel:(struct TXTextStyle *)arg1;
- (struct OZChannelScale *)getScaleChannel:(struct TXTextStyle *)arg1;
- (struct OZChannelRotation3D *)getRotationChannel:(struct TXTextStyle *)arg1;
- (struct OZChannelQuad *)getFourCornerChannel:(struct TXTextStyle *)arg1 forAttribute:(int)arg2;
- (void)getAnchorX:(double *)arg1 andAnchorY:(double *)arg2 forTextObject:(struct TXTextObject *)arg3 andEvent:(id)arg4 forFixedAnchor:(BOOL)arg5;
- (void)getTransformMatrix:(PCMatrix44Tmpl_e98c85ee *)arg1 textObject:(struct TXTextObject *)arg2 renderParams:(struct OZRenderParams *)arg3 withCharScale:(_Bool)arg4;
- (void)warp:(id)arg1 hitPart:(int)arg2 deltaX:(double)arg3 deltaY:(double)arg4;
- (void)scale:(id)arg1 hitPart:(int)arg2 scaleX:(double)arg3 scaleY:(double)arg4;
- (void)translate:(id)arg1 hitPart:(int)arg2 translateX:(double)arg3 translateY:(double)arg4 translateZ:(double)arg5 state:(struct OZRenderState)arg6;
- (void)rotate:(id)arg1 angle:(double)arg2;
- (void)snapshotState:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseUp:(id)arg1;
- (BOOL)keyDownOSC:(id)arg1;
- (BOOL)flagsChanged:(id)arg1;
- (void)updateRotation:(id)arg1 change:(const PCQuat_8a184614 *)arg2;
- (void)initSelectionInOSC:(id)arg1;
- (void)updateSelection:(id)arg1;
- (BOOL)updateSelectionInOSC:(id)arg1 withRect:(PCRect_b601f9f3 *)arg2;
- (BOOL)selectAll:(id)arg1;
- (BOOL)selectNone:(id)arg1;
- (int)hitCheck:(id)arg1;
- (void)setMActivePart:(int)arg1;
- (struct OZElement *)getElement;
- (BOOL)postRedisplayOnActivePartChange;
- (struct TXGlyphTransformInfo)getGlyphTransformInfo:(PCPtr_3bd68a10)arg1 forRenderState:(struct OZRenderState *)arg2;
- (id)menuForEvent:(id)arg1;
- (void)notify:(unsigned int)arg1;
- (_Bool)scaleAffectsLayout;
- (_Bool)scaleAffectsOffset;
- (unsigned int)getGlyphSelectionSize;
- (void)offsetChanged;
- (void)scaleChanged;
- (void)rotationChanged;
- (void)fourCornerChanged;
- (BOOL)drawMultipleSelectionBoxes;
- (struct OZRenderState)getRenderState:(const struct OZRenderState *)arg1 textObject:(PCPtr_3bd68a10)arg2 remapTime:(BOOL)arg3;
- (int)getTransformScope;
- (BOOL)useCurrentSequenceValues;
- (BOOL)isGlyphOSC;
- (int)getOSCMode;
- (void)clipOutline:(struct TXTextObject *)arg1 camera:(const struct LiCamera *)arg2 state:(const struct OZRenderState *)arg3 points:(const PCVector2_79efa81a *)arg4 numPts:(int)arg5 edges:(PCVector2_79efa81a *)arg6 visible:(vector_69938c0b *)arg7;
- (void)clipPoints:(struct TXTextObject *)arg1 camera:(const struct LiCamera *)arg2 state:(const struct OZRenderState *)arg3 points:(const vector_8d17e539 *)arg4 visible:(vector_69938c0b *)arg5;
- (struct PCUUID)getClassID;
- (BOOL)scalePositionByFontSize;
- (id).cxx_construct;
- (void).cxx_destruct;

@end


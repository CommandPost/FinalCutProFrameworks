//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProAppsFxSupport/PAEOSC.h>

@class PAEPointOSC;
@protocol PAEAngleDelegate;

@interface PAEAngleOSC : PAEOSC
{
    BOOL _variableRadius;
    double _angleMin;
    double _angleMax;
    BOOL _snapEnable;
    BOOL _snapped;
    double _snapAngle;
    double _snapTolerance;
    _Bool _snapOnly;
    int _controlMode;
    PAEAngleOSC *_baseOSC;
    int _partBase;
    BOOL _alwaysDrawKnobs;
    unsigned long long _currentState;
    double _origAngle;
    id <PAEAngleDelegate> _angleDelegate;
    BOOL _spinningDiscMode;
    float _angleOffset;
    double _clickAngle;
    double _discAngle;
    PCVector2_79efa81a _knobClick;
    PAEPointOSC *_associatedCenterPoint;
}

- (id).cxx_construct;
- (void)mouseDown:(const PCVector2_79efa81a *)arg1 activePart:(int)arg2 modifiers:(unsigned long long)arg3 forceUpdate:(char *)arg4 didHandle:(char *)arg5 time:(CDUnion_2516e51e)arg6;
- (void)mouseUp:(const PCVector2_79efa81a *)arg1 activePart:(int)arg2 modifiers:(unsigned long long)arg3 forceUpdate:(char *)arg4 time:(CDUnion_2516e51e)arg5;
- (void)mouseDragged:(const PCVector2_79efa81a *)arg1 activePart:(int)arg2 modifiers:(unsigned long long)arg3 forceUpdate:(char *)arg4 time:(CDUnion_2516e51e)arg5;
- (BOOL)handlesPart:(int)arg1;
- (void)setPartBase:(int)arg1;
- (int)partBase;
- (void)drawFilledOutlineAt:(PCVector2_79efa81a)arg1 withAngle:(double)arg2 withOutline:(PCPtr_e070f502)arg3 withMask:(PCPtr_e070f502)arg4 withFill:(PCPtr_e070f502)arg5;
- (void)drawForSelectionWithWidth:(int)arg1 height:(int)arg2 activePart:(int)arg3 paramAPI:(id)arg4 oscAPI:(id)arg5 atTime:(CDUnion_2516e51e)arg6;
- (void)drawAngleModeWithSegmentLength:(double)arg1 activePart:(int)arg2 inputCenter:(const PCVector2_79efa81a *)arg3 segmentKnobCenter:(const PCVector2_79efa81a *)arg4;
- (void)drawDirectionModeWithSegmentLength:(double)arg1 activePart:(int)arg2 inputCenter:(const PCVector2_79efa81a *)arg3 segmentKnobCenter:(const PCVector2_79efa81a *)arg4;
- (void)drawDiscModeWithSegmentLength:(double)arg1 activePart:(int)arg2 inputCenter:(const PCVector2_79efa81a *)arg3 segmentKnobCenter:(const PCVector2_79efa81a *)arg4;
- (void)drawForDisplayWithWidth:(int)arg1 height:(int)arg2 activePart:(int)arg3 paramAPI:(id)arg4 oscAPI:(id)arg5 atTime:(CDUnion_2516e51e)arg6;
- (void)drawFor:(int)arg1 withWidth:(int)arg2 height:(int)arg3 activePart:(int)arg4 paramAPI:(id)arg5 oscAPI:(id)arg6 atTime:(CDUnion_2516e51e)arg7;
- (PCVector2_79efa81a)objectAbsoluteKnobCenterForPoint:(const PCVector2_79efa81a *)arg1 atTime:(CDUnion_2516e51e)arg2;
- (PCVector2_79efa81a)drawingSpaceKnobClickForPoint:(const PCVector2_79efa81a *)arg1 atTime:(CDUnion_2516e51e)arg2;
- (PCVector2_79efa81a)knobClickForPoint:(const PCVector2_79efa81a *)arg1 withInputCenter:(const PCVector2_79efa81a *)arg2 segmentKnobCenter:(const PCVector2_79efa81a *)arg3;
- (PCVector2_79efa81a)objectAbsoluteKnobAtTime:(CDUnion_2516e51e)arg1;
- (PCVector2_79efa81a)objectNormalizedKnobAtTime:(CDUnion_2516e51e)arg1;
- (void)_calculateScreenSpaceInputCenter:(PCVector2_79efa81a *)arg1 segmentKnobCenter:(PCVector2_79efa81a *)arg2 segmentLength:(double *)arg3 withParamAPI:(id)arg4 andOSCAPI:(id)arg5 atTime:(CDUnion_2516e51e)arg6;
- (void)_setTextureOrigins;
- (PCRect_3a266109)objectBounds;
- (PCVector2_79efa81a)getRodDirectionAtTime:(CDUnion_2516e51e)arg1;
- (double)getRodLengthAtTime:(CDUnion_2516e51e)arg1;
- (double)getRodAngleAtTime:(CDUnion_2516e51e)arg1;
- (double)getVariableRadiusLengthAtTime:(CDUnion_2516e51e)arg1 withPosition:(const PCVector2_79efa81a *)arg2;
- (double)knobRadius;
- (void)setDiscAngle:(double)arg1;
- (void)setAngleDelegate:(id)arg1;
- (void)setAngle:(double)arg1 atTime:(CDUnion_2516e51e)arg2;
- (float)angleAtTime:(CDUnion_2516e51e)arg1;
- (PCVector2_79efa81a)objectAbsoluteCenterAtTime:(CDUnion_2516e51e)arg1;
- (PCVector2_79efa81a)objectNormalizedCenterAtTime:(CDUnion_2516e51e)arg1;
- (void)associateCenterPoint:(id)arg1;
- (void)setAngleOffset:(float)arg1;
- (void)setSpinningDiscMode:(BOOL)arg1;
- (void)setBaseOSC:(id)arg1;
- (id)baseOSC;
- (void)setControlMode:(int)arg1;
- (int)controlMode;
- (void)setSnapEnable:(BOOL)arg1;
- (void)setSnapTolerance:(double)arg1;
- (void)setSnapAngle:(double)arg1;
- (void)setAngleMin:(double)arg1 max:(double)arg2;
- (void)setVariableRadius:(BOOL)arg1;
- (void)setAlwaysDrawKnobs:(BOOL)arg1;
- (void)setSnapOnly:(BOOL)arg1;
- (id)initWithAPIManager:(id)arg1;

@end


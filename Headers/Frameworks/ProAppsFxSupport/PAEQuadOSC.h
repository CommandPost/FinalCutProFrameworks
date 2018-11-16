//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ProAppsFxSupport/PAEOSC.h>

@interface PAEQuadOSC : PAEOSC
{
    long long _currentState;
    PCVector2_79efa81a _constrainStart;
    unsigned long long _constrainDir;
}

- (id).cxx_construct;
- (void)mouseUp:(const PCVector2_79efa81a *)arg1 activePart:(int)arg2 modifiers:(unsigned long long)arg3 forceUpdate:(char *)arg4 time:(CDUnion_2516e51e)arg5;
- (void)mouseDragged:(const PCVector2_79efa81a *)arg1 activePart:(int)arg2 modifiers:(unsigned long long)arg3 forceUpdate:(char *)arg4 time:(CDUnion_2516e51e)arg5;
- (void)mouseDown:(const PCVector2_79efa81a *)arg1 activePart:(int)arg2 modifiers:(unsigned long long)arg3 forceUpdate:(char *)arg4 didHandle:(char *)arg5 time:(CDUnion_2516e51e)arg6;
- (PCVector2_79efa81a)constrainSide:(PCVector2_79efa81a)arg1 withOriginalPoint:(PCVector2_79efa81a)arg2 atTime:(CDUnion_2516e51e)arg3;
- (void)constrainCorner:(PCVector2_79efa81a *)arg1 withActivePart:(int)arg2 atTime:(CDUnion_2516e51e)arg3;
- (PCVector2_79efa81a)findPointOfIntersectionOfPoint:(PCVector2_79efa81a)arg1 andRay:(PCVector2_79efa81a)arg2 withLineFromPoint:(PCVector2_79efa81a)arg3 toPoint:(PCVector2_79efa81a)arg4;
- (PCVector2_79efa81a)constrainPoint:(PCVector2_79efa81a)arg1 toLineFromPoint:(PCVector2_79efa81a)arg2 toPoint:(PCVector2_79efa81a)arg3;
- (void)drawForSelectionWithWidth:(int)arg1 height:(int)arg2 activePart:(int)arg3 paramAPI:(id)arg4 oscAPI:(id)arg5 atTime:(CDUnion_2516e51e)arg6;
- (void)drawForDisplayWithWidth:(int)arg1 height:(int)arg2 activePart:(int)arg3 paramAPI:(id)arg4 oscAPI:(id)arg5 atTime:(CDUnion_2516e51e)arg6;
- (void)calculateUpperLeft:(PCVector2_79efa81a *)arg1 upperRight:(PCVector2_79efa81a *)arg2 lowerRight:(PCVector2_79efa81a *)arg3 lowerLeft:(PCVector2_79efa81a *)arg4 top:(PCVector2_79efa81a *)arg5 left:(PCVector2_79efa81a *)arg6 bottom:(PCVector2_79efa81a *)arg7 right:(PCVector2_79efa81a *)arg8 withParamAPI:(id)arg9 andOSCAPI:(id)arg10 atTime:(CDUnion_2516e51e)arg11;
- (id)initWithAPIManager:(id)arg1;

@end


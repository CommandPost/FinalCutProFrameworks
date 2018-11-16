//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ProAppsFxSupport/PAEOSC.h>

@interface PAEBorderOSC : PAEOSC
{
    BOOL _angleMode;
    BOOL _hideMe;
    float _margin;
    unsigned long long _currentState;
    BOOL _clicked;
}

- (void)mouseDown:(const PCVector2_79efa81a *)arg1 activePart:(int)arg2 modifiers:(unsigned long long)arg3 forceUpdate:(char *)arg4 didHandle:(char *)arg5 time:(double)arg6;
- (void)mouseUp:(const PCVector2_79efa81a *)arg1 activePart:(int)arg2 modifiers:(unsigned long long)arg3 forceUpdate:(char *)arg4 time:(double)arg5;
- (void)mouseDragged:(const PCVector2_79efa81a *)arg1 activePart:(int)arg2 modifiers:(unsigned long long)arg3 forceUpdate:(char *)arg4 time:(double)arg5;
- (void)mouseMoved:(const PCVector2_79efa81a *)arg1 activePart:(int)arg2 modifiers:(unsigned long long)arg3 forceUpdate:(char *)arg4 time:(double)arg5;
- (void)drawForSelectionWithWidth:(int)arg1 height:(int)arg2 activePart:(int)arg3 paramAPI:(id)arg4 oscAPI:(id)arg5 atTime:(double)arg6;
- (void)drawForDisplayWithWidth:(int)arg1 height:(int)arg2 activePart:(int)arg3 paramAPI:(id)arg4 oscAPI:(id)arg5 atTime:(double)arg6;
- (PCVector2_79efa81a)paramToScreenPositionwith:(id)arg1 oscAPI:(id)arg2 atTime:(double)arg3 toGetRawCenter:(PCVector2_79efa81a *)arg4;
- (void)setMargin:(float)arg1;
- (void)setAngleMode:(unsigned int)arg1;
- (id)initWithAPIManager:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@protocol FxOnScreenControl
- (unsigned long long)drawingCoordinates;
- (void)drawOSC:(long long)arg1 height:(long long)arg2 activePart:(long long)arg3 time:(double)arg4;
- (void)mouseDown:(double)arg1 positionY:(double)arg2 activePart:(long long)arg3 modifiers:(unsigned long long)arg4 forceUpdate:(char *)arg5 time:(double)arg6;
- (void)mouseDragged:(double)arg1 positionY:(double)arg2 activePart:(long long)arg3 modifiers:(unsigned long long)arg4 forceUpdate:(char *)arg5 time:(double)arg6;
- (void)mouseUp:(double)arg1 positionY:(double)arg2 activePart:(long long)arg3 modifiers:(unsigned long long)arg4 forceUpdate:(char *)arg5 time:(double)arg6;
- (void)keyDown:(double)arg1 positionY:(double)arg2 keyPressed:(unsigned short)arg3 modifiers:(unsigned long long)arg4 forceUpdate:(char *)arg5 didHandle:(char *)arg6 time:(double)arg7;
- (void)keyUp:(double)arg1 positionY:(double)arg2 keyPressed:(unsigned short)arg3 modifiers:(unsigned long long)arg4 forceUpdate:(char *)arg5 didHandle:(char *)arg6 time:(double)arg7;
@end

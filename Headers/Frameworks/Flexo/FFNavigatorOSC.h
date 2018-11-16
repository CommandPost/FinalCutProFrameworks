//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFOSC.h>

@class NSAffineTransform;

__attribute__((visibility("hidden")))
@interface FFNavigatorOSC : FFOSC
{
    NSAffineTransform *_transform;
    struct CGPoint _delta;
    float _savedRate;
}

- (void)dealloc;
- (BOOL)shouldDrawUsingDrawProperties:(id)arg1;
- (void)drawRect:(struct CGRect)arg1 toContext:(struct _CGLContextObject *)arg2 drawProperties:(id)arg3;
- (void)addDrawProperties:(id)arg1 forTime:(CDStruct_1b6d18a9)arg2 viewBounds:(struct CGRect)arg3;
- (BOOL)isAvailableDuringPlayback;
- (BOOL)hitTest:(struct CGPoint)arg1;
- (void)mouseMoved:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseUp:(id)arg1;
- (id)cursorAtPoint:(struct CGPoint)arg1;

@end


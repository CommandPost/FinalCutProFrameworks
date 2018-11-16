//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFComponentOSC.h>

@class FFMaskedEffectBase, NSMutableArray;

__attribute__((visibility("hidden")))
@interface FFMaskedEffectOSC : FFComponentOSC
{
    FFMaskedEffectBase *_maskedEffect;
    NSMutableArray *_shapeOSCs;
    id <FFMaskOSC> _keyerOSC;
    id <FFMaskOSC> _activeOSC;
}

- (void)flagsChanged:(id)arg1;
- (id)getCursor;
- (void)setPlayerVideoModule:(id)arg1;
- (void)drawRect:(struct CGRect)arg1 toContext:(struct _CGLContextObject *)arg2 drawProperties:(id)arg3;
- (void)addDrawProperties:(id)arg1 forTime:(CDStruct_1b6d18a9)arg2 forContainer:(id)arg3 viewBounds:(struct CGRect)arg4;
- (void)mouseUp:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (BOOL)hitTest:(struct CGPoint)arg1;
- (void)activeMaskChanged:(id)arg1;
- (void)syncActiveOSC;
- (void)dealloc;
- (id)initWithMaskedEffect:(id)arg1 effectStack:(id)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFComponentOSC.h>

@class FFChannelChangeController;

__attribute__((visibility("hidden")))
@interface FFAbstractPositionOSC : FFComponentOSC
{
    struct CGSize _mouseDownOffset;
    FFChannelChangeController *_changeController;
}

- (id)initWithEffectStack:(id)arg1;
- (void)dealloc;
- (struct CGPoint)_positionAtTime:(CDStruct_1b6d18a9)arg1;
- (void)_setPosition:(struct CGPoint)arg1 atTime:(CDStruct_1b6d18a9)arg2;
- (id)_viewToPositionTransformAtTime:(CDStruct_1b6d18a9)arg1;
- (struct CGPoint)_oscPositionInViewSpaceAtTime:(CDStruct_1b6d18a9)arg1;
- (struct CGPoint)_oscPositionInFilmSpaceAtTime:(CDStruct_1b6d18a9)arg1;
- (id)propertiesKey;
- (BOOL)hitTest:(struct CGPoint)arg1;
- (void)mouseDown:(id)arg1;
- (void)_moveHandleToPosition:(struct CGPoint)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseUp:(id)arg1;
- (id)positionChannel;
- (void)drawRect:(struct CGRect)arg1 toContext:(struct _CGLContextObject *)arg2 drawProperties:(id)arg3;
- (void)addDrawProperties:(id)arg1 forTime:(CDStruct_1b6d18a9)arg2 forContainer:(id)arg3 viewBounds:(struct CGRect)arg4;
- (BOOL)isAccessorized;
- (id)accessibilityAttributeValue:(id)arg1;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (void)accessibilitySetValue:(id)arg1 forAttribute:(id)arg2;

@end


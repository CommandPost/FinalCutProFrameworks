//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFProOSC.h>

__attribute__((visibility("hidden")))
@interface FFProShapeOSC : FFProOSC
{
    id <FFProShapeOSCDelegate> _shapeDelegate;
}

+ (Class)OZOSCClass;
@property(readonly, nonatomic) id <FFProShapeOSCDelegate> shapeDelegate; // @synthesize shapeDelegate=_shapeDelegate;
- (id)undoChannels;
- (void)offsetPosition:(const PCVector3_515d8d1c *)arg1;
- (BOOL)supportsTool:(Class)arg1;
- (BOOL)isSelectionBased;
- (struct FFShape *)shape;
- (void)dealloc;
- (id)initWithEffectStack:(id)arg1 shapeDelegate:(id)arg2;

@end


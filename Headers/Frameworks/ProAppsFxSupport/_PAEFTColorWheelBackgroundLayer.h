//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CAMetalLayer.h"

@interface _PAEFTColorWheelBackgroundLayer : CAMetalLayer
{
    long long _phase;
    BOOL _enabled;
    int _state;
    id <MTLRenderPipelineState> _pipeline;
}

- (void)display;
- (id)actionForKey:(id)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setPhase:(long long)arg1;
- (void)dealloc;
- (id)init;

@end

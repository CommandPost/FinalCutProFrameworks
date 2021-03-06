//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CAMetalLayer.h>

@protocol MTLRenderPipelineState;

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


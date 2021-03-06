//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@interface PAEButtonLayer : CALayer
{
    long long _state;
    BOOL _enabled;
    BOOL _pressed;
}

- (void)drawInContext:(struct CGContext *)arg1;
- (id)actionForKey:(id)arg1;
- (struct CGSize)projectedSize;
- (id)_imageForButton;
@property(getter=isPressed) BOOL pressed; // @dynamic pressed;
@property(getter=isEnabled) BOOL enabled; // @dynamic enabled;
@property long long state; // @dynamic state;
- (id)init;

@end


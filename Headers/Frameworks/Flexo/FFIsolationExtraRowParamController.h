//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OZViewController.h"

@class LKButton, OZColorWell;

__attribute__((visibility("hidden")))
@interface FFIsolationExtraRowParamController : OZViewController
{
    OZColorWell *_colorWell;
    LKButton *_activeMaskButton;
}

- (id)maskedEffect;
- (void)update;
- (void)_syncActiveOSCState;
- (void)toggleOSC:(id)arg1;
- (id)_isolationMask;
- (void)dealloc;
- (id)initWithChan:(struct OZChannelBase *)arg1 context:(id)arg2;

@end


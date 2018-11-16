//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFMaskBaseChannelController.h>

@class LKButton;

__attribute__((visibility("hidden")))
@interface FFEllipseMaskChannelController : FFMaskBaseChannelController
{
    LKButton *_activeMaskButton;
}

- (float)suggestedMinParamWidth;
- (BOOL)shouldAddDisclosureButton;
- (void)toggleOSC:(id)arg1;
- (void)_syncActiveOSCState;
- (void)update;
- (void)dealloc;
- (id)initWithChan:(struct OZChannelBase *)arg1 context:(id)arg2;
- (id)_maskedEffect;
- (id)_ellipseMask;

@end


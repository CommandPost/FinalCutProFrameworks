//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProInspector/OZViewController.h>

@class FFMaskedEffectBase, LKButton, OZColorWell;

__attribute__((visibility("hidden")))
@interface FFIsolationExtraRowParamController : OZViewController
{
    OZColorWell *_colorWell;
    LKButton *_activeMaskButton;
    FFMaskedEffectBase *_maskedEffectBase;
}

- (id)maskedEffect;
- (void)update;
- (void)_syncActiveOSCState;
- (void)toggleOSC:(id)arg1;
- (id)_isolationMask;
- (void)dealloc;
- (id)initWithChan:(struct OZChannelBase *)arg1 context:(id)arg2;

@end


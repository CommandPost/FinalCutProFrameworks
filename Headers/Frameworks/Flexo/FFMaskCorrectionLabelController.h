//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFColorBaseLabelController.h>

@class LKButton, OZLabelText;

__attribute__((visibility("hidden")))
@interface FFMaskCorrectionLabelController : FFColorBaseLabelController
{
    LKButton *_disclosureButton;
    LKButton *_toggleButton;
    OZLabelText *_labelText;
    unsigned long long _maskIndex;
}

- (id)initWithChan:(struct OZChannelBase *)arg1 context:(id)arg2;
- (void)dealloc;
- (void)didBuildUI;
- (void)update;
- (void)toggleDisclosure:(id)arg1;
- (void)toggleMask:(id)arg1;

@end


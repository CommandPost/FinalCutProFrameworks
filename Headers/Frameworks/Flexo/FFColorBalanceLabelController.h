//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFColorBaseLabelController.h>

@class LKButton, OZLabelText, OZViewCtlrRoot;

__attribute__((visibility("hidden")))
@interface FFColorBalanceLabelController : FFColorBaseLabelController
{
    LKButton *_toggleButton;
    OZLabelText *_labelText;
    OZViewCtlrRoot *_observedControllerRoot;
    BOOL _allMediaIsAvailable;
}

- (BOOL)isUserBalanceEffectEnabled;
- (id)checkMediaAvailability;
- (void)assetInvalidated:(id)arg1;
- (void)performBalanceOrToggle:(id)arg1;
- (void)update;
- (void)didBuildUI;
- (void)dealloc;
- (id)initWithChan:(struct OZChannelBase *)arg1 context:(id)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFColorBaseViewController.h>

@class LKButton, LKPopUpButton, OZViewCtlrRoot;

__attribute__((visibility("hidden")))
@interface FFColorBalanceDropDownController : FFColorBaseViewController
{
    LKPopUpButton *_chooseSourceClipButton;
    LKButton *_eyedropperButton;
    OZViewCtlrRoot *_observedControllerRoot;
    BOOL _allMediaIsAvailable;
}

- (void)activeToolChanged:(id)arg1;
- (id)getBalanceEffect;
- (void)setSelection:(id)arg1;
- (void)recalculateUsingPreviousSample:(id)arg1 withBalanceMethod:(long long)arg2;
- (void)toggleBalanceOSCOptions:(id)arg1;
- (void)performBalanceOrToggle:(id)arg1;
- (id)getAnchoredObjects;
- (id)checkMediaAvailability;
- (void)assetInvalidated:(id)arg1;
- (void)update;
- (void)didBuildUI;
- (void)getEyeDropperTool:(id)arg1;
- (void)dealloc;
- (id)initWithChan:(struct OZChannelBase *)arg1 context:(id)arg2;
- (id)_menu;
- (void)setPopUpTitle:(id)arg1;

@end

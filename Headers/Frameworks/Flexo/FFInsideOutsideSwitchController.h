//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OZViewController.h"

@class LKButton, LKSegmentedControl;

__attribute__((visibility("hidden")))
@interface FFInsideOutsideSwitchController : OZViewController
{
    LKSegmentedControl *_insideOutsideControl;
    LKButton *_viewMatteButton;
}

- (void)switchInsideOutside:(id)arg1;
- (void)toggleInsideColorMask:(id)arg1;
- (void)didBuildUI;
- (void)update;
- (void)showMatte:(id)arg1;
- (void)dealloc;
- (id)initWithChan:(struct OZChannelBase *)arg1 context:(id)arg2;

@end

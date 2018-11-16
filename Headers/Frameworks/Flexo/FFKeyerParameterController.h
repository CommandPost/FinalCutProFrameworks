//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFBaseOnscreenControlController.h>

@class CHChannelBase, FFSoftnessSlider, LKButton, OZColorWell;

__attribute__((visibility("hidden")))
@interface FFKeyerParameterController : FFBaseOnscreenControlController
{
    CHChannelBase *_representedChannel;
    LKButton *_toggleOSCButton;
    OZColorWell *_keyerWell;
    FFSoftnessSlider *_softness;
}

- (id)initWithChan:(struct OZChannelBase *)arg1 context:(id)arg2;
- (void)dealloc;
- (void)validateSoftnessState:(id)arg1;
- (void)update;
- (void)didBuildUI;
- (id)representedChannel;
- (void)maskOSCActiveChannelChanged:(id)arg1 old:(id)arg2;

@end

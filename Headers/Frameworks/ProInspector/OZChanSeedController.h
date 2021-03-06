//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProInspector/OZViewControllerGroup.h>

@class LKButton, LKTextField;

@interface OZChanSeedController : OZViewControllerGroup
{
    LKButton *_pCreateSeedButton;
    LKTextField *_pTF;
}

- (float)suggestedMinParamWidth;
- (void)generateSeed:(id)arg1;
- (void)setChannelValue:(id)arg1;
- (void)disable;
- (void)enable;
- (void)update;
- (void)endSliderAction:(id)arg1;
- (void)startSliderAction:(id)arg1;
- (id)initWithChan:(struct OZChannelBase *)arg1 context:(id)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ProInspector/OZViewControllerGroup.h>

@class LKButton, LKTextField;

@interface OZChanSeedController : OZViewControllerGroup
{
    LKButton *_pCreateSeedButton;
    LKTextField *_pTF;
}

- (void)generateSeed:(id)arg1;
- (void)setChannelValue:(id)arg1;
- (void)disable;
- (void)enable;
- (void)update;
- (void)endSliderAction:(id)arg1;
- (void)startSliderAction:(id)arg1;
- (id)initWithChan:(struct OZChannelBase *)arg1 context:(id)arg2;

@end


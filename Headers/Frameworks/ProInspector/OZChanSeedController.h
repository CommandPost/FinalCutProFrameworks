//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ProInspector/OZViewController.h>

@class LKButton, LKTextField;

@interface OZChanSeedController : OZViewController
{
    LKButton *_pCreateSeedButton;
    LKTextField *_pTF;
}

- (id)initWithChan:(struct OZChannelBase *)arg1 isHUD:(BOOL)arg2;
- (void)startSliderAction:(id)arg1;
- (void)endSliderAction:(id)arg1;
- (void)update;
- (void)enable;
- (void)disable;
- (void)setChannelValue:(id)arg1;
- (void)generateSeed:(id)arg1;

@end


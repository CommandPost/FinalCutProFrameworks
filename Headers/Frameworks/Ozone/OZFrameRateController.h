//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OZViewController.h"

@class LKPopUpButton, NSTextField;

@interface OZFrameRateController : OZViewController
{
    LKPopUpButton *_pPopUp;
    NSTextField *_pTF;
}

+ (id)presetFrameRates;
+ (int)customFrameRateIndex;
- (void)setFromFile:(id)arg1;
- (void)setCustom:(id)arg1;
- (void)setPreset:(id)arg1;
- (void)disable;
- (void)enable;
- (void)update;
- (void)updatePopUp:(double)arg1;
- (id)initWithChan:(struct OZChannelBase *)arg1 context:(id)arg2;

@end


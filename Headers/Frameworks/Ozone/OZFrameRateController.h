//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OZViewController.h"

@class NSPopUpButton, NSTextField;

@interface OZFrameRateController : OZViewController
{
    NSPopUpButton *_pPopUp;
    NSTextField *_pTF;
}

+ (void)initialize;
- (id)initWithChan:(struct OZChannelBase *)arg1 context:(id)arg2;
- (void)updatePopUp:(double)arg1;
- (void)update;
- (void)enable;
- (void)disable;
- (void)setPreset:(id)arg1;
- (void)setCustom:(id)arg1;
- (void)setFromFile:(id)arg1;

@end

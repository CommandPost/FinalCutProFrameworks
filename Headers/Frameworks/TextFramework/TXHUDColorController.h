//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OZViewController.h"

@class OZColorWell;

@interface TXHUDColorController : OZViewController
{
    OZColorWell *_colorWell;
}

- (void)update;
- (void)updateColorWell;
- (void)endColorChange:(id)arg1;
- (void)startColorChange:(id)arg1;
- (void)setColorValue:(id)arg1;
- (void)setChannelColor:(struct PCColor *)arg1;
- (void)dealloc;
- (id)initWithChan:(struct OZChannelBase *)arg1 context:(id)arg2 colorWell:(id)arg3;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OZViewControllerGroup.h"

@class OZColorWell;

@interface TXSimpleStyleController : OZViewControllerGroup
{
    OZColorWell *_colorWell;
    BOOL _setColorValueCalled;
    BOOL _startColorChangeCalled;
}

- (void)aboutToChangeChannel:(struct OZChannelBase *)arg1 isFirstController:(BOOL)arg2;
- (BOOL)addOrResetAssociatedChannel:(struct OZChannelBase *)arg1 isAdd:(BOOL)arg2 force:(BOOL)arg3;
- (void)disable;
- (void)enable;
- (void)update;
- (void)updateColorWell;
- (void)setColorValue:(id)arg1;
- (void)endColorChange:(id)arg1;
- (void)startColorChange:(id)arg1;
- (void)setChannelColor:(struct PCColor *)arg1;
- (struct OZChannelColorNoAlpha *)colorChannel:(struct OZChannelFolder *)arg1;
- (id)initWithChan:(struct OZChannelBase *)arg1 context:(id)arg2;

@end


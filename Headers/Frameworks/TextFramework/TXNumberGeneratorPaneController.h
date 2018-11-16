//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TextFramework/OZAutoTextGeneratorController.h>

@class OZViewController;

@interface TXNumberGeneratorPaneController : OZAutoTextGeneratorController
{
    OZViewController *_valueCtrl;
    OZViewController *_startCtrl;
    OZViewController *_endCtrl;
    OZViewController *_decimalCtrl;
    OZViewController *_thousandsCtrl;
    OZViewController *_capitalizeCtrl;
    OZViewController *_minimumDigitsCtrl;
    OZViewController *_randomCtrl;
    OZViewController *_randomSeedCtrl;
    OZViewController *_randomHoldCtrl;
    struct CGRect _valueFrame;
    struct CGRect _startFrame;
    struct CGRect _endFrame;
    struct CGRect _precisionFrame;
}

- (id).cxx_construct;
- (void)channelChanged:(struct OZChannelBase *)arg1 time:(CDStruct_198678f7)arg2 qualifiers:(int)arg3;
- (void)buildUI:(struct OZSceneNode *)arg1 context:(id)arg2;
- (void)_updateOnRandomChange:(struct TXNumberGenerator *)arg1;
- (void)_updateOnFormatChange:(struct TXNumberGenerator *)arg1;
- (void)_updateOnAnimateChange:(struct TXNumberGenerator *)arg1;

@end


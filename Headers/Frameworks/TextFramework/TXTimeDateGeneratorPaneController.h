//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TextFramework/OZAutoTextGeneratorController.h>

@class OZViewController;

@interface TXTimeDateGeneratorPaneController : OZAutoTextGeneratorController
{
    OZViewController *_valueCtrl;
    OZViewController *_startCtrl;
    OZViewController *_endCtrl;
    OZViewController *_setTimeCtrl;
}

- (void)channelChanged:(struct OZChannelBase *)arg1 time:(CDStruct_198678f7)arg2 qualifiers:(int)arg3;
- (void)buildUI:(struct OZSceneNode *)arg1 context:(id)arg2;
- (void)_updateOnAnimateChange:(struct TXTimeDateGenerator *)arg1;

@end


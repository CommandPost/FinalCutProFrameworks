//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Ozone/OZBehaviorInspectorController.h>

@interface TXOldSequenceBHController : OZBehaviorInspectorController
{
    struct TXTextSequenceBehavior *_sequenceBH;
}

- (void)notify:(unsigned int)arg1;
- (void)channelChanged:(struct OZChannelBase *)arg1 time:(CDStruct_198678f7)arg2 qualifiers:(int)arg3;
- (void)delayedRelease;
- (void)delayedReleaseCB:(id)arg1;
- (void)dealloc;
- (id)helperInitWithBehavior:(struct OZBehavior *)arg1 context:(id)arg2;
- (id)initWithBehaviors:(list_64b41211 *)arg1;
- (void)showHideChannels;

@end


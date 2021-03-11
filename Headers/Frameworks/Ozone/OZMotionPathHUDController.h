//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Ozone/OZAutoHUDController.h>

#import <Ozone/OZUISupervisor-Protocol.h>

@class OZViewController;

@interface OZMotionPathHUDController : OZAutoHUDController <OZUISupervisor>
{
    struct list<OZMotionPathBehavior *, std::__1::allocator<OZMotionPathBehavior *>> *_pBehaviors;
    OZViewController *_pVelocityCtrl;
    OZViewController *_pFrequencyCtrl;
    OZViewController *_pFrequencyModeCtrl;
    OZViewController *_pEndConditionCtrl;
    struct OZMotionPathBehavior *_pBH;
}

- (void)viewDidLoad;
- (void)hideAndShowForShape:(unsigned int)arg1;
- (void)notify:(unsigned int)arg1;
- (void)buildUIWithObjectList:(list_5b338eba *)arg1 viewController:(id)arg2 context:(id)arg3;
- (void)channelChanged:(struct OZChannelBase *)arg1 groupController:(id)arg2 time:(CDStruct_1b6d18a9)arg3 qualifiers:(int)arg4;
- (void)dealloc;
- (id)initWithObjectList:(list_93048c9c *)arg1;

@end


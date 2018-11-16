//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Ozone/OZAutoHUDController.h>

#import "OZUISupervisor.h"

@class OZViewController;

@interface OZMotionPathHUDController : OZAutoHUDController <OZUISupervisor>
{
    struct list<OZMotionPathBehavior *, std::allocator<OZMotionPathBehavior *>> *_pBehaviors;
    OZViewController *_pVelocityCtrl;
    OZViewController *_pFrequencyCtrl;
    OZViewController *_pFrequencyModeCtrl;
    OZViewController *_pEndConditionCtrl;
    struct OZMotionPathBehavior *_pBH;
}

- (void)viewDidLoad;
- (void)hideAndShowForShape:(unsigned int)arg1;
- (void)notify:(unsigned int)arg1;
- (void)buildUIWithObjectList:(list_37573188 *)arg1 viewController:(id)arg2 context:(id)arg3;
- (void)channelChanged:(struct OZChannelBase *)arg1 groupController:(id)arg2 time:(CDStruct_1b6d18a9)arg3 qualifiers:(int)arg4;
- (void)dealloc;
- (id)initWithObjectList:(list_0555a7a2 *)arg1;

@end


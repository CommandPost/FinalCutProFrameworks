//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Ozone/OZBehaviorInspectorController.h>

@class OZVerticesController, OZViewController;

@interface OZMotionPathBehaviorInspectorController : OZBehaviorInspectorController
{
    OZViewController *_pVelocityCtrl;
    OZVerticesController *_pVerticesController;
}

- (void)notify:(unsigned int)arg1;
- (void)channelChanged:(struct OZChannelBase *)arg1 time:(CDStruct_1b6d18a9)arg2 qualifiers:(int)arg3;
- (void)didSetShape;
- (void)buildUI:(struct OZMotionPathBehavior *)arg1;
- (void)delayedRelease;
- (void)delayedReleaseCB:(id)arg1;
- (id)initWithBehaviors:(list_64b41211 *)arg1;

@end


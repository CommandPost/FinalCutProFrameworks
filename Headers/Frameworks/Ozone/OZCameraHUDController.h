//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Ozone/OZAutoSceneNodeHUDController.h>

@class OZLabeledParamController, OZNonChanLabelController;

@interface OZCameraHUDController : OZAutoSceneNodeHUDController
{
    OZLabeledParamController *_pRowCtlr;
    OZNonChanLabelController *_pLabelCtlr;
    OZNonChanLabelController *_pValueCtlr;
    struct OZCamera *_pCamera;
}

- (void)buildUIWithObjectList:(list_2c251165 *)arg1 viewController:(id)arg2 context:(id)arg3;
- (void)addFocalLengthIndicatorWithContext:(id)arg1 viewController:(id)arg2;
- (void)update;
- (void)evalCompletion;

@end


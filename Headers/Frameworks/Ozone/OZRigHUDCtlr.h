//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Ozone/OZAutoHUDController.h>

@class PIBuildContext;

@interface OZRigHUDCtlr : OZAutoHUDController
{
    struct OZRig *_pRig;
    PIBuildContext *_pContext;
}

- (void)dealloc;
- (void)buildUIWithObjectList:(list_2c251165 *)arg1 viewController:(id)arg2 context:(id)arg3;
- (void)notify:(unsigned int)arg1;

@end

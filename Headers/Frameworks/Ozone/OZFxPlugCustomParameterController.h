//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OZViewController.h"

@class OZAnimIndicator, PIParameterPulldown;

@interface OZFxPlugCustomParameterController : OZViewController
{
    OZAnimIndicator *_pAnim;
    PIParameterPulldown *_pParamPulldown;
}

- (id)initWithChan:(struct OZChannelBase *)arg1 context:(id)arg2 andView:(id)arg3;
- (void)dealloc;
- (void)update;
- (void)enable;
- (void)disable;

@end


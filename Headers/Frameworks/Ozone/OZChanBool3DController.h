//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OZViewController.h"

@class LKSegmentedControl;

@interface OZChanBool3DController : OZViewController
{
    LKSegmentedControl *_pSegmented;
}

- (id)initWithChan:(struct OZChannelBase *)arg1 isHUD:(BOOL)arg2;
- (void)update;
- (void)enable;
- (void)disable;
- (void)setChannelValue:(id)arg1;
- (void)didTwiddle:(BOOL)arg1;
- (_Bool)areAllChannelsEqual;

@end

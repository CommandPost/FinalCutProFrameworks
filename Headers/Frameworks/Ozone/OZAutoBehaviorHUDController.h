//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Ozone/OZAutoHUDController.h>

@interface OZAutoBehaviorHUDController : OZAutoHUDController
{
    list_06b59fe9 *_pBehaviorList;
}

- (id)initWithObjectList:(list_34700237 *)arg1;
- (void)dealloc;
- (BOOL)loadView;
- (void)notify:(unsigned int)arg1;
- (struct OZChannelFolder *)getRootChan:(struct OZObjectManipulator *)arg1;
- (list_06b59fe9 *)getBehaviorList;
- (void)didUpdateHiddenFlags;

@end

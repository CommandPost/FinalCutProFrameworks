//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Flexo/NSUserNotificationCenterDelegate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface FFUserNotificationDelegate : NSObject <NSUserNotificationCenterDelegate>
{
}

+ (id)defaultUserNotificationDelegate;
- (id)bestMatchForPartialFileName:(id)arg1;
- (id)bestMatchesForPartialFileNames:(id)arg1;
- (void)userNotificationCenter:(id)arg1 didActivateNotification:(id)arg2;
- (BOOL)userNotificationCenter:(id)arg1 shouldPresentNotification:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


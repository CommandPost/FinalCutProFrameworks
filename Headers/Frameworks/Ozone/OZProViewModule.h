//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LKViewModule.h"

#import "OZObjCObserver.h"

@interface OZProViewModule : LKViewModule <OZObjCObserver>
{
    BOOL _isObserving;
    BOOL _queueNotifications;
    unsigned int _queuedNotificationFlags;
}

- (unsigned long long)revealAnimationStyle;
- (void)moduleViewWasInstalled:(id)arg1;
- (void)moduleViewWillBeRemoved:(id)arg1;
- (void)notify:(unsigned int)arg1;
- (BOOL)moduleShouldObserveWhenViewRemoved:(id)arg1;
@property BOOL isObserving; // @synthesize isObserving=_isObserving;

@end

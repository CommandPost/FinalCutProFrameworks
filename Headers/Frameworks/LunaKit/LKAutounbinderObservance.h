//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface LKAutounbinderObservance : NSObject
{
    NSObject *_observer;
    NSString *_keyPath;
    void *_context;
}

- (id)initWithObserver:(id)arg1 keyPath:(id)arg2 context:(void *)arg3;
- (void)dealloc;
- (id)description;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock;

__attribute__((visibility("hidden")))
@interface FFWindowTransitioner : NSObject
{
    NSLock *_lock;
}

- (int)applyTransition:(unsigned int)arg1 toWindow:(id)arg2 direction:(unsigned int)arg3 callbackTarget:(id)arg4 callbackSelector:(SEL)arg5 callbackParameter:(id)arg6;
- (void)dealloc;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Flexo/FFNotification.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface FFNotificationImpl : FFNotification
{
    struct ID _name;
    id _object;
    NSDictionary *_userInfo;
    int _refCount;
}

+ (id)newFromName:(struct ID)arg1 object:(id)arg2 userInfo:(id)arg3;
- (id).cxx_construct;
- (id)description;
- (id)userInfo;
- (id)object;
- (id)name;
- (oneway void)release;
- (id)retain;
- (void)dealloc;

@end


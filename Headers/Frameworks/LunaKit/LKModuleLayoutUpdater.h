//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@interface LKModuleLayoutUpdater : NSObject
{
    NSDictionary *_updates;
    unsigned long long _currentVersion;
    unsigned long long _oldestReadableVersion;
}

- (BOOL)update:(id)arg1 error:(id *)arg2;
- (void)dealloc;
- (id)initWithCurrentVersion:(unsigned long long)arg1 oldestReadableVersion:(unsigned long long)arg2 updates:(id)arg3;
- (id)init;

@end

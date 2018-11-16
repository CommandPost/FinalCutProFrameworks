//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FFMetadataProtocol.h"

@class FFAnchoredSequence;

__attribute__((visibility("hidden")))
@interface FFShareKeyConverter : NSObject <FFMetadataProtocol>
{
    FFAnchoredSequence *_target;
}

+ (id)defaultValueForKey:(id)arg1;
- (void)_writeUnlock:(const char *)arg1;
- (void)_writeLock:(const char *)arg1 file:(const char *)arg2 line:(unsigned int)arg3;
- (void)_readUnlock:(const char *)arg1;
- (void)_readLock:(const char *)arg1 file:(const char *)arg2 line:(unsigned int)arg3;
- (BOOL)_hasWriteLock;
- (void)_writeUnlock;
- (void)_writeLock;
- (void)_readUnlock;
- (void)_readLock;
- (id)mdTargetForKey:(id)arg1;
- (id)mdLocalValueForKey:(id)arg1;
- (id)mdValueForKey:(id)arg1;
- (void)mdSetLocalValue:(id)arg1 forKey:(id)arg2;
- (void)mdSetValue:(id)arg1 forKey:(id)arg2;
- (id)initWithTarget:(id)arg1;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface FFObjectCacheEntry : NSObject
{
    CDStruct_bdcb2b0d _cacheKey;
    unsigned int _hashValue;
    id _item;
    unsigned long long _size;
    unsigned long long _lastAccess;
    float _freq;
    float _value;
    double _cost;
    NSString *_cacheGroup;
}

- (id)initWithKey:(CDStruct_60067b7e)arg1 cacheItem:(id)arg2 size:(unsigned long long)arg3 cost:(double)arg4 forCache:(id)arg5 group:(id)arg6;
- (void)dealloc;
- (CDStruct_60067b7e)cacheKey;
- (void)setCacheKey:(CDStruct_60067b7e)arg1;
- (unsigned int)hashValue;
- (id)getItem;
- (unsigned long long)lastAccess;
- (void)setLastAccess:(unsigned long long)arg1;
- (unsigned long long)getSize;
- (double)cost;
- (float)getValue:(unsigned long long)arg1 decayRate:(float)arg2;
- (void)setValue:(unsigned long long)arg1 cost:(double)arg2 maxCacheSize:(unsigned long long)arg3;
- (void)resetValue:(unsigned long long)arg1 responseRate:(float)arg2 penalty:(float)arg3;
- (BOOL)canBePurgedFromCache;
- (id)cacheGroup;

@end


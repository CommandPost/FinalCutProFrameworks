//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FFModelLocking.h"

@class FFAnchoredObject, FFBalanceColorBaseEffect, NSDictionary;

__attribute__((visibility("hidden")))
@interface _Analysis : NSObject <FFModelLocking>
{
    FFAnchoredObject *_anchoredObject;
    FFBalanceColorBaseEffect *_effect;
    struct ColorBalanceOptions _balanceOptions;
    CDStruct_1b6d18a9 _time;
    vector_37556099 *_adjustment;
    NSDictionary *_faceInfo;
    float _shadowsDetail;
    float _highlightsDetail;
}

- (BOOL)writerIsWaiting;
- (void)_writeUnlock;
- (void)_writeLock;
- (void)_readUnlock;
- (void)_readLock;
- (void)writeAdjustment;
- (void)analyseAdjustment;
- (void)dealloc;
- (id)initWithAnchoredObject:(id)arg1 effect:(id)arg2 options:(struct ColorBalanceOptions)arg3 time:(CDStruct_1b6d18a9)arg4;

@end


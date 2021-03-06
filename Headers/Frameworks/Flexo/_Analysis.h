//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Flexo/FFModelLocking-Protocol.h>

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

- (id)modelLockingObject;
- (void)writeAdjustment;
- (void)analyseAdjustment;
- (void)dealloc;
- (id)initWithAnchoredObject:(id)arg1 effect:(id)arg2 options:(struct ColorBalanceOptions)arg3 time:(CDStruct_1b6d18a9)arg4;

@end


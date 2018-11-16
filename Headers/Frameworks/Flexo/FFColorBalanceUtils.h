//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FFColorBalanceUtils : NSObject
{
}

+ (void)operationRemoveOnAnchoredObjects:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
+ (void)operationEnableOrInsertForAnchoredObjects:(id)arg1;
+ (void)analyseAnchoredObjects:(id)arg1 time:(CDStruct_1b6d18a9)arg2 options:(struct ColorBalanceOptions)arg3 progressBlock:(CDUnknownBlockType)arg4;
+ (void)_queueEnableEffectForAnchoredObjects:(id)arg1 time:(CDStruct_1b6d18a9)arg2 options:(struct ColorBalanceOptions)arg3 progressBlock:(CDUnknownBlockType)arg4;
+ (id)_newAnalysesForAnchoredObjects:(id)arg1 time:(CDStruct_1b6d18a9)arg2 options:(struct ColorBalanceOptions)arg3;
+ (BOOL)shouldEnableOrInsertForAnchoredObjects:(id)arg1;
+ (long long)consumerBalanceWhiteBalanceState:(id)arg1;
+ (long long)consumerBalanceFacesState:(id)arg1;
+ (long long)consumerBalanceAutomaticState:(id)arg1;
+ (long long)_consumerBalanceStateMatchingOption:(int)arg1 effects:(id)arg2;
+ (long long)balanceEffectsState:(id)arg1;
+ (long long)_effectsState:(id)arg1 testBlock:(CDUnknownBlockType)arg2;
+ (id)arrayOfColorBalanceEffectsFromAnchoredObjects:(id)arg1;
+ (id)colorBalanceEffectFromAnchoredObject:(id)arg1;

@end

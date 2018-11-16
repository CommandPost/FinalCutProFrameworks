//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFBalanceColorBaseEffect.h>

#import "FFColorSubEffect.h"

@class FFHeColorEffect;

__attribute__((visibility("hidden")))
@interface FFBalanceColorEffect : FFBalanceColorBaseEffect <FFColorSubEffect>
{
    FFHeColorEffect *_colorEffect;
}

+ (BOOL)isNoOpForSoleOpEffect:(id)arg1;
+ (unsigned long long)numberOfAllowedInstances;
+ (id)effectID;
+ (id)copyClassDescription;
+ (void)registerEffects;
- (id)colorEffect;
- (void)setColorEffect:(id)arg1;
- (BOOL)isNoOp;

@end


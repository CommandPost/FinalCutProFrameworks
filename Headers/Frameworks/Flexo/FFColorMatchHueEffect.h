//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFHeliumEffect.h>

#import "FFColorSubEffect.h"

@class FFHeColorEffect, NSArray;

__attribute__((visibility("hidden")))
@interface FFColorMatchHueEffect : FFHeliumEffect <FFColorSubEffect>
{
    NSArray *_lumaBumps;
    FFHeColorEffect *_colorEffect;
}

+ (BOOL)isNoOpForSoleOpEffect:(id)arg1;
+ (unsigned long long)numberOfAllowedInstances;
+ (id)effectID;
+ (id)copyClassDescription;
+ (void)registerEffects;
- (id)colorEffect;
- (void)setColorEffect:(id)arg1;
- (id)processingPixelFormat;
- (struct CGColorSpace *)processingColorSpace;
- (void)setParameterValuesForNode:(struct HGNode *)arg1 atTime:(CDStruct_1b6d18a9)arg2 withInputStream:(id)arg3 context:(id)arg4 pixelTransform:(id)arg5;
- (void)setAdjustment:(id)arg1 isEncompassingTransaction:(BOOL)arg2;
- (struct HGNode *)newNodeForContext:(id)arg1;
- (BOOL)isAtDefaultSettings;
- (BOOL)writeDefaultChannels;
- (BOOL)isNoOp;
- (id)inputKeys;
- (void)createChannelsInFolder:(id)arg1;
- (void)dealloc;
- (id)initWithEffectID:(id)arg1;

@end


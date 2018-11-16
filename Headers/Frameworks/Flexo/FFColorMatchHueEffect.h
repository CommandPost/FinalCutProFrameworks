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

+ (void)registerEffects;
+ (id)effectID;
+ (unsigned long long)numberOfAllowedInstances;
+ (BOOL)isNoOpForSoleOpEffect:(id)arg1;
- (id)initWithEffectID:(id)arg1;
- (void)dealloc;
- (void)createChannelsInFolder:(id)arg1;
- (id)inputKeys;
- (BOOL)isNoOp;
- (BOOL)writeDefaultChannels;
- (BOOL)isAtDefaultSettings;
- (struct HGNode *)newNodeForContext:(id)arg1;
- (void)set:(id)arg1;
- (void)setParameterValuesForNode:(struct HGNode *)arg1 atTime:(CDStruct_1b6d18a9)arg2 withInputStream:(id)arg3 context:(id)arg4 pixelTransform:(id)arg5;
- (struct CGColorSpace *)processingColorSpace;
- (id)processingPixelFormat;
- (void)setColorEffect:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFHeliumEffect.h>

#import "FFColorSubEffect.h"

@class FFHeColorEffect, NSString;

__attribute__((visibility("hidden")))
@interface FFIMovieColorEffect : FFHeliumEffect <FFColorSubEffect>
{
    FFHeColorEffect *_colorEffect;
}

+ (BOOL)isNoOpForSoleOpEffect:(id)arg1;
+ (unsigned long long)numberOfAllowedInstances;
+ (id)effectID;
+ (void)registerEffects;
- (id)colorEffect;
- (void)setColorEffect:(id)arg1;
- (void)setParameterValuesForNode:(struct HGNode *)arg1 atTime:(CDStruct_1b6d18a9)arg2 withInputStream:(id)arg3 context:(id)arg4 pixelTransform:(id)arg5 inputData:(id)arg6 inputBounds:(struct CGRect)arg7;
- (struct HGNode *)newNodeForContext:(id)arg1;
- (void)channelParameterChanged:(id)arg1;
- (id)processingFormat:(int)arg1;
- (BOOL)isNoOp;
- (id)inputKeys;
- (void)createChannelsInFolder:(id)arg1;
- (id)initWithEffectID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


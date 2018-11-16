//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFAnchoredObject.h>

@interface FFAnchoredObject (FFRetimeCommand)
- (BOOL)editSetConstantRetiming:(double)arg1 currentRate:(double)arg2 scaleToRight:(BOOL)arg3 error:(id *)arg4;
- (BOOL)editResetRetiming;
- (BOOL)editEffectStack:(id)arg1 setVariableRetiming:(double)arg2 aroundTime:(CDStruct_1b6d18a9)arg3 segmentIndex:(int)arg4 scaleToRight:(BOOL)arg5 error:(id *)arg6;
- (BOOL)retimeAndTrimToRate:(double)arg1 error:(id *)arg2;
- (BOOL)applyConstantRetiming:(double)arg1 error:(id *)arg2;
- (BOOL)applyVariableSpeedRetiming:(CDStruct_e83c9415)arg1 rate:(double)arg2 newRange:(CDStruct_e83c9415 *)arg3 error:(id *)arg4;
- (BOOL)applySpeedRampPresetStartAt:(CDStruct_1b6d18a9)arg1 endAt:(CDStruct_1b6d18a9)arg2 toZero:(BOOL)arg3 fromZero:(BOOL)arg4 error:(id *)arg5;
- (BOOL)applyInstantReplayPresetStartAt:(CDStruct_1b6d18a9)arg1 endAt:(CDStruct_1b6d18a9)arg2 error:(id *)arg3;
- (BOOL)applyRewindPresetStartAt:(CDStruct_1b6d18a9)arg1 endAt:(CDStruct_1b6d18a9)arg2 rewindSpeed:(double)arg3 error:(id *)arg4;
- (BOOL)applyHoldPresetAtComponentTime:(CDStruct_1b6d18a9)arg1 duration:(CDStruct_1b6d18a9)arg2 newHoldComponentTime:(CDStruct_1b6d18a9 *)arg3 error:(id *)arg4;
- (BOOL)applySweetSpotPreset:(id *)arg1 startMediaTime:(CDStruct_1b6d18a9)arg2 endMediaTime:(CDStruct_1b6d18a9)arg3 sweetFrameMediaTime:(CDStruct_1b6d18a9)arg4 startComponentTime:(CDStruct_1b6d18a9)arg5 endComponentTime:(CDStruct_1b6d18a9)arg6 beforeSpeed:(double)arg7 afterSpeed:(double)arg8 sweetFrameDuration:(double)arg9;
- (BOOL)moveMediaKey:(unsigned int)arg1 toMediaTime:(double)arg2 error:(id *)arg3;
- (BOOL)moveComponentKey:(unsigned int)arg1 deltaTime:(CDStruct_1b6d18a9)arg2 error:(id *)arg3;
- (void)resetConstantRetimingRateFromFreeze;
- (void)addArtisticRetime;
@end


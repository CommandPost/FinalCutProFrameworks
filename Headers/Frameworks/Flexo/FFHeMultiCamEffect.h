//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFHeliumEffect.h>

__attribute__((visibility("hidden")))
@interface FFHeMultiCamEffect : FFHeliumEffect
{
    long long _angle;
    long long _numberOfRows;
    long long _numberOfCols;
}

+ (long long)adjustedAngleOffsetUsingCount:(long long)arg1 angleOffset:(long long)arg2 angleCount:(long long)arg3;
+ (void)multiAngleRowsAndColumnCountFromNumberOfAngles:(long long)arg1 rows:(long long *)arg2 columns:(long long *)arg3;
+ (long long)getAngleNumberForMulticamInputString:(id)arg1;
+ (id)getInputKeyForMultiCamAngle:(long long)arg1;
+ (id)getMultiCamNumberedInputKeysArray;
+ (void)registerEffects;
- (id)newImageAtTime:(CDStruct_1b6d18a9)arg1 duration:(CDStruct_1b6d18a9)arg2 withInputStream:(id)arg3 context:(id)arg4 downstreamPT:(id)arg5 channelOffset:(CDStruct_1b6d18a9)arg6 roi:(const struct CGRect *)arg7;
- (CDStruct_bdcb2b0d)md5;
- (void)setParameterValuesForNode:(struct HGNode *)arg1 atTime:(CDStruct_1b6d18a9)arg2 withInputStream:(id)arg3 context:(id)arg4 pixelTransform:(id)arg5;
- (int)_row;
- (int)_column;
- (long long)_workingScale;
- (void)setNumberOfCols:(unsigned long long)arg1;
- (void)setNumberOfRows:(unsigned long long)arg1;
- (void)setAngle:(unsigned long long)arg1;
- (id)inputKeys;
- (struct HGNode *)newNodeForContext:(id)arg1;
- (id)initWithEffectID:(id)arg1;

@end


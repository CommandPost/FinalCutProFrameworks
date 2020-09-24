//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSError;

@protocol FxKeyframeAPI_v3
- (NSError *)keyframe:(struct FxKeyframe *)arg1 atOrAfterTime:(CDStruct_1b6d18a9)arg2 fromParameter:(unsigned long long)arg3 andChannel:(unsigned long long)arg4;
- (NSError *)keyframe:(struct FxKeyframe *)arg1 atOrBeforeTime:(CDStruct_1b6d18a9)arg2 fromParameter:(unsigned long long)arg3 andChannel:(unsigned long long)arg4;
- (NSError *)parameter:(unsigned long long)arg1 channel:(unsigned long long)arg2 hasKeyframe:(char *)arg3 atTime:(CDStruct_1b6d18a9)arg4;
- (NSError *)removeAllKeyframesForParameter:(unsigned long long)arg1 andChannel:(unsigned long long)arg2;
- (NSError *)removeKeyframeAtIndex:(unsigned long long)arg1 fromParameter:(unsigned long long)arg2 andChannel:(unsigned long long)arg3;
- (NSError *)addKeyframe:(const struct FxKeyframe *)arg1 toParameter:(unsigned long long)arg2 andChannel:(unsigned long long)arg3;
- (NSError *)setKeyframeIndex:(unsigned long long)arg1 withKeyframe:(const struct FxKeyframe *)arg2 forParameter:(unsigned long long)arg3 andChannel:(unsigned long long)arg4;
- (NSError *)keyframe:(struct FxKeyframe *)arg1 forParameter:(unsigned long long)arg2 channel:(unsigned long long)arg3 andIndex:(unsigned long long)arg4;
- (NSError *)keyframeCount:(unsigned long long *)arg1 forParameter:(unsigned long long)arg2 andChannel:(unsigned long long)arg3;
- (NSError *)channelCount:(unsigned long long *)arg1 forParameter:(unsigned long long)arg2;
@end

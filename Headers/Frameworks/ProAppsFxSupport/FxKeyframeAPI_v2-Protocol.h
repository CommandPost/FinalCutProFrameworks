//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FxKeyframeAPI.h"

@class NSError;

@protocol FxKeyframeAPI_v2 <FxKeyframeAPI>
- (NSError *)keyframeInfo:(struct FxKeyframeInfo *)arg1 atOrAfterFxTime:(CDUnion_2516e51e)arg2 fromParam:(unsigned long long)arg3 andChannel:(unsigned long long)arg4;
- (NSError *)keyframeInfo:(struct FxKeyframeInfo *)arg1 atOrBeforeFxTime:(CDUnion_2516e51e)arg2 fromParam:(unsigned long long)arg3 andChannel:(unsigned long long)arg4;
- (NSError *)param:(unsigned long long)arg1 channel:(unsigned long long)arg2 hasKeyframe:(char *)arg3 atFxTime:(CDUnion_2516e51e)arg4;
@end

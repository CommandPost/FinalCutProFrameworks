//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFSourceVideo.h>

__attribute__((visibility("hidden")))
@interface FFSourceVideoDPX : FFSourceVideo
{
}

+ (Class)streamClass;
+ (id)type;
- (BOOL)segmentMD5:(CDStruct_bdcb2b0d *)arg1 sampleOffset:(long long *)arg2 forSampleDuration:(CDStruct_1b6d18a9)arg3 atTime:(CDStruct_1b6d18a9)arg4 context:(id)arg5 range:(CDStruct_e83c9415 *)arg6;
- (id)nativeVideoProps;
- (CDStruct_1b6d18a9)duration;
- (id)newSubRangeMD5InfoForSampleDuration:(CDStruct_1b6d18a9)arg1 atTime:(CDStruct_1b6d18a9)arg2 context:(id)arg3;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Flexo/FFSourceVideo.h>

__attribute__((visibility("hidden")))
@interface FFSourceVideoPDF : FFSourceVideo
{
}

+ (Class)streamClass;
+ (id)type;
- (id)_newImageAtTime:(CDStruct_1b6d18a9)arg1 context:(id)arg2 createIfNotCached:(BOOL)arg3;
- (id)newSubRangeMD5InfoForSampleDuration:(CDStruct_1b6d18a9)arg1 atTime:(CDStruct_1b6d18a9)arg2 context:(id)arg3;
- (id)nativeVideoProps;
- (CDStruct_e83c9415)timeRange;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFSourceDelegatingVideo.h>

__attribute__((visibility("hidden")))
@interface FFSourceLongGOPAnalysis : FFSourceDelegatingVideo
{
    unsigned int _exportCodecType;
}

+ (Class)streamClass;
- (id)newSubRangeMD5InfoForSampleDuration:(CDStruct_1b6d18a9)arg1 atTime:(CDStruct_1b6d18a9)arg2 context:(id)arg3;
- (unsigned int)exportCodecType;
- (void)setExportCodecType:(unsigned int)arg1;

@end


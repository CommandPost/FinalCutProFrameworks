//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFSourceVideo.h>

@class FFVideoProps;

__attribute__((visibility("hidden")))
@interface FFSourceVideoSimpleSourceRotate : FFSourceVideo
{
    FFVideoProps *_nativeVideoProps;
}

+ (Class)streamClass;
- (double)preferredScaleFactorForQuality:(int)arg1;
- (id)newSubRangeMD5InfoForSampleDuration:(CDStruct_1b6d18a9)arg1 atTime:(CDStruct_1b6d18a9)arg2 context:(id)arg3;
- (CDStruct_e83c9415)timeRange;
- (id)nativeVideoProps;
- (double)rotateAngle;
- (void)dealloc;
- (id)initWithProvider:(id)arg1;

@end


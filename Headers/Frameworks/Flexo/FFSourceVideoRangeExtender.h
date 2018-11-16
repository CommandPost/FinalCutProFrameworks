//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFSourceVideo.h>

@class FFSource, NSString;

__attribute__((visibility("hidden")))
@interface FFSourceVideoRangeExtender : FFSourceVideo
{
    FFSource *_input;
    NSString *_inputIdentifier;
    CDStruct_e83c9415 _range;
    CDStruct_e83c9415 _definedRangeToUseFromInput;
}

+ (Class)streamClass;
- (_Bool)infiniteSource;
- (id)initWithProvider:(id)arg1 input:(id)arg2 range:(CDStruct_e83c9415)arg3 definedRangeToUseFromInput:(CDStruct_e83c9415)arg4 identifier:(id)arg5;
- (void)dealloc;
- (id)inputIdentifier;
- (id)inputSource;
- (CDStruct_e83c9415)timeRange;
- (CDStruct_e83c9415)getInputRange;
- (CDStruct_1b6d18a9)_mapRequestedTimeToInputTime:(CDStruct_1b6d18a9)arg1 caller:(id)arg2;
- (id)newSubRangeMD5InfoForSampleDuration:(CDStruct_1b6d18a9)arg1 atTime:(CDStruct_1b6d18a9)arg2 context:(id)arg3;
- (id)nativeVideoProps;

@end

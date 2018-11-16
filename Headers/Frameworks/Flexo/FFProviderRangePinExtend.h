//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFProvider.h>

@class FFSource, NSString;

__attribute__((visibility("hidden")))
@interface FFProviderRangePinExtend : FFProvider
{
    FFSource *_inputSource;
    NSString *_inputIdentifier;
    CDStruct_e83c9415 _unmodifiedRange;
    CDStruct_e83c9415 _holdBeforeRange;
    CDStruct_e83c9415 _holdAfterRange;
    CDStruct_e83c9415 _maximumRange;
}

@property(readonly, nonatomic) CDStruct_e83c9415 maximumRange; // @synthesize maximumRange=_maximumRange;
@property(readonly, nonatomic) CDStruct_e83c9415 holdAfterRange; // @synthesize holdAfterRange=_holdAfterRange;
@property(readonly, nonatomic) CDStruct_e83c9415 holdBeforeRange; // @synthesize holdBeforeRange=_holdBeforeRange;
@property(readonly, nonatomic) CDStruct_e83c9415 unmodifiedRange; // @synthesize unmodifiedRange=_unmodifiedRange;
@property(readonly, nonatomic) NSString *inputIdentifier; // @synthesize inputIdentifier=_inputIdentifier;
@property(readonly, nonatomic) FFSource *inputSource; // @synthesize inputSource=_inputSource;
- (CDStruct_1b6d18a9)_mapRequestedTimeToInputTime:(CDStruct_1b6d18a9)arg1 adjustedDuration:(CDStruct_1b6d18a9 *)arg2;
- (void)_setupSources;
- (void)dealloc;
- (id)initWithRange:(CDStruct_e83c9415)arg1 definedRangeToUseFromInput:(CDStruct_e83c9415)arg2 input:(id)arg3 identifier:(id)arg4;
- (id)initWithSource:(id)arg1 unmodifiedRange:(CDStruct_e83c9415)arg2 holdBefore:(CDStruct_1b6d18a9)arg3 holdAfter:(CDStruct_1b6d18a9)arg4 identifier:(id)arg5;
- (id)initWithSource:(id)arg1 unmodifiedRange:(CDStruct_e83c9415)arg2 holdBefore:(CDStruct_1b6d18a9)arg3 holdAfter:(CDStruct_1b6d18a9)arg4 gapBefore:(CDStruct_1b6d18a9)arg5 gapAfter:(CDStruct_1b6d18a9)arg6 identifier:(id)arg7;

@end


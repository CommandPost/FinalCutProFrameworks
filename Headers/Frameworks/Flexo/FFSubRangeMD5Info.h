//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FigTimeRangeObj.h"

@class FFMD5AndOffset;

@interface FFSubRangeMD5Info : FigTimeRangeObj
{
    CDStruct_bdcb2b0d _actualMD5;
    CDStruct_bdcb2b0d _idealMD5;
    _Bool _actualIdealMismatch;
    CDStruct_e83c9415 _fullRange;
    CDStruct_1b6d18a9 _timeOffsetForSampleOffset;
    CDStruct_1b6d18a9 _sampleDurForOffsetCalc;
    _Bool _isConstantOffset;
    long long _constantOffset;
    FFMD5AndOffset *_constantMD5AndOffsetObj;
    double _segCost;
    struct CGRect _opaqueBounds;
    unsigned int _andedMd5Flags;
    unsigned int _oredMd5Flags;
}

- (id)initWithSubRange:(CDStruct_e83c9415)arg1 fullRange:(CDStruct_e83c9415)arg2 actualMD5:(CDStruct_60067b7e)arg3 idealMD5:(CDStruct_60067b7e)arg4 timeOffsetForSampleOffset:(CDStruct_1b6d18a9)arg5 sampleDurForOffsetCalc:(CDStruct_1b6d18a9)arg6 isConstantOffset:(_Bool)arg7 constantOffset:(long long)arg8 segmentCost:(double)arg9 opaqueBounds:(struct CGRect)arg10 flagsForAnding:(unsigned int)arg11 flagsForOring:(unsigned int)arg12;
- (id)initWithSubRange:(CDStruct_e83c9415)arg1 fullRange:(CDStruct_e83c9415)arg2 actualMD5:(CDStruct_60067b7e)arg3 idealMD5:(CDStruct_60067b7e)arg4 timeOffsetForSampleOffset:(CDStruct_1b6d18a9)arg5 sampleDurForOffsetCalc:(CDStruct_1b6d18a9)arg6 segmentCost:(double)arg7 opaqueBounds:(struct CGRect)arg8 flagsForAnding:(unsigned int)arg9 flagsForOring:(unsigned int)arg10;
- (id)initWithSubRange:(CDStruct_e83c9415)arg1 fullRange:(CDStruct_e83c9415)arg2 actualMD5:(CDStruct_60067b7e)arg3 idealMD5:(CDStruct_60067b7e)arg4 constantOffset:(long long)arg5 segmentCost:(double)arg6 opaqueBounds:(struct CGRect)arg7 flagsForAnding:(unsigned int)arg8 flagsForOring:(unsigned int)arg9;
- (id)initWithPList:(id)arg1;
- (id)newPList;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)newSubRangeByAddingOffset:(CDStruct_1b6d18a9)arg1;
- (id)newSubRangeByIntersectingWith:(CDStruct_e83c9415)arg1;
- (id)newSubRangeByAddingOffset:(CDStruct_1b6d18a9)arg1 thenIntersectingWith:(CDStruct_e83c9415)arg2;
- (id)newSubRangeByReplacingActualMD5:(CDStruct_60067b7e)arg1 idealMD5:(CDStruct_60067b7e)arg2;
- (long long)_offsetForTime:(CDStruct_1b6d18a9)arg1 silent:(_Bool)arg2;
- (long long)offsetForTime:(CDStruct_1b6d18a9)arg1;
- (long long)lastOffsetIncludedInSubRange;
- (id)newMD5AndOffsetForTime:(CDStruct_1b6d18a9)arg1;
- (CDStruct_e83c9415)timeRangeForSampleOffset:(long long)arg1 constrain:(_Bool)arg2;
- (CDStruct_e83c9415)timeRangeForSampleOffsetRange:(long long)arg1 lastIncludedOffset:(long long)arg2 constrain:(_Bool)arg3;
- (_Bool)validForTime:(CDStruct_1b6d18a9)arg1;
- (id)description;
- (BOOL)isEqualToFFSubRangeMD5Info:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)setStart:(CDStruct_1b6d18a9)arg1;
- (void)setDuration:(CDStruct_1b6d18a9)arg1;
- (void)setRange:(CDStruct_e83c9415)arg1;
- (CDStruct_60067b7e)md5OfSubRangeInfoParameters;
- (void)limitMaximumSubRange:(CDStruct_e83c9415 *)arg1 myOffset:(CDStruct_1b6d18a9)arg2;
@property(readonly) unsigned int md5FlagsForOring; // @synthesize md5FlagsForOring=_oredMd5Flags;
@property(readonly) unsigned int md5FlagsForAnding; // @synthesize md5FlagsForAnding=_andedMd5Flags;
@property(readonly) _Bool actualIdealMismatch; // @synthesize actualIdealMismatch=_actualIdealMismatch;
@property(readonly) struct CGRect opaqueBounds; // @synthesize opaqueBounds=_opaqueBounds;
@property(readonly) double segCost; // @synthesize segCost=_segCost;
@property(readonly) _Bool isConstantOffset; // @synthesize isConstantOffset=_isConstantOffset;
@property(readonly) CDStruct_1b6d18a9 timeOffsetForSampleOffset; // @synthesize timeOffsetForSampleOffset=_timeOffsetForSampleOffset;
@property(readonly) CDStruct_e83c9415 fullRange; // @synthesize fullRange=_fullRange;
@property(readonly) CDStruct_bdcb2b0d idealMD5; // @synthesize idealMD5=_idealMD5;
@property(readonly) CDStruct_bdcb2b0d actualMD5; // @synthesize actualMD5=_actualMD5;

@end


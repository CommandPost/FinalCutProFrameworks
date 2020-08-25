//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FigTimeRangeObj.h"

@class FFMD5AndOffsetWithInfo, NSDictionary;

@interface FFSubRangeMD5Info : FigTimeRangeObj
{
    CDStruct_bdcb2b0d _actualMD5;
    CDStruct_bdcb2b0d _idealMD5;
    _Bool _actualIdealMismatch;
    CDStruct_1b6d18a9 _rangeEnd;
    CDStruct_e83c9415 _fullRange;
    CDStruct_1b6d18a9 _timeOffsetForSampleOffset;
    CDStruct_1b6d18a9 _sampleDurForOffsetCalc;
    _Bool _isConstantOffset;
    _Bool _hasZeroTimeOffset;
    long long _constantOffset;
    FFMD5AndOffsetWithInfo *_constantMD5AndOffsetObj;
    double _segCost;
    struct CGRect _opaqueBounds;
    unsigned int _andedMd5Flags;
    unsigned int _oredMd5Flags;
    unsigned long long _estimatedBandwidth;
    NSDictionary *_flagDetails;
}

+ (_Bool)plistIsSubjectTo25854435:(id)arg1;
+ (void)mergeFlagDetails:(id)arg1 into:(id *)arg2;
+ (CDStruct_bdcb2b0d)adjustedMD5ForTemporalInaccuracy:(CDStruct_1b6d18a9)arg1 fromBaseMD5:(CDStruct_bdcb2b0d)arg2 isConstantOffset:(_Bool)arg3;
@property(readonly, retain, nonatomic) NSDictionary *flagDetails; // @synthesize flagDetails=_flagDetails;
@property(readonly, nonatomic) unsigned long long estimatedBandwidth; // @synthesize estimatedBandwidth=_estimatedBandwidth;
@property(readonly, nonatomic) unsigned int md5FlagsForOring; // @synthesize md5FlagsForOring=_oredMd5Flags;
@property(readonly, nonatomic) unsigned int md5FlagsForAnding; // @synthesize md5FlagsForAnding=_andedMd5Flags;
@property(readonly, nonatomic) _Bool actualIdealMismatch; // @synthesize actualIdealMismatch=_actualIdealMismatch;
@property(readonly, nonatomic) struct CGRect opaqueBounds; // @synthesize opaqueBounds=_opaqueBounds;
@property(readonly, nonatomic) double segCost; // @synthesize segCost=_segCost;
@property(readonly, nonatomic) _Bool isConstantOffset; // @synthesize isConstantOffset=_isConstantOffset;
@property(readonly, nonatomic) CDStruct_1b6d18a9 timeOffsetForSampleOffset; // @synthesize timeOffsetForSampleOffset=_timeOffsetForSampleOffset;
@property(readonly, nonatomic) CDStruct_e83c9415 fullRange; // @synthesize fullRange=_fullRange;
@property(readonly, nonatomic) CDStruct_bdcb2b0d idealMD5; // @synthesize idealMD5=_idealMD5;
@property(readonly, nonatomic) CDStruct_bdcb2b0d actualMD5; // @synthesize actualMD5=_actualMD5;
- (id)newDictForScheduleTokenAtTime:(CDStruct_1b6d18a9)arg1 useActualMD5:(_Bool)arg2 temporalInaccuracy:(CDStruct_1b6d18a9)arg3 fromSegmentStore:(BOOL)arg4;
- (void)limitMaximumSubRange:(CDStruct_e83c9415 *)arg1 myOffset:(CDStruct_1b6d18a9)arg2;
- (void)setRange:(CDStruct_e83c9415)arg1;
- (void)setDuration:(CDStruct_1b6d18a9)arg1;
- (void)setStart:(CDStruct_1b6d18a9)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToFFSubRangeMD5Info:(id)arg1;
- (id)description;
- (_Bool)validForTime:(CDStruct_1b6d18a9)arg1;
- (CDStruct_e83c9415)timeRangeForSampleOffsetRange:(long long)arg1 lastIncludedOffset:(long long)arg2 constrain:(_Bool)arg3;
- (CDStruct_e83c9415)timeRangeForSampleOffset:(long long)arg1 constrain:(_Bool)arg2;
- (id)newMD5AndOffsetForTime:(CDStruct_1b6d18a9)arg1;
- (id)newMD5AndOffsetForTime:(CDStruct_1b6d18a9)arg1 useActual:(BOOL)arg2;
- (long long)lastOffsetIncludedInSubRange;
- (long long)offsetForTime:(CDStruct_1b6d18a9)arg1;
- (long long)_offsetForTime:(CDStruct_1b6d18a9)arg1 silent:(_Bool)arg2;
- (id)copyWithAdditionalOrFlags:(int)arg1;
- (id)newSubRangeByReplacingActualMD5:(CDStruct_bdcb2b0d)arg1 idealMD5:(CDStruct_bdcb2b0d)arg2 replacementOpaqueBounds:(struct CGRect)arg3 replacementCost:(double)arg4;
- (id)newSubRangeByReplacingActualMD5:(CDStruct_bdcb2b0d)arg1 idealMD5:(CDStruct_bdcb2b0d)arg2;
- (id)newSubRangeByArbitaryData:(void *)arg1 length:(unsigned long long)arg2;
- (id)newSubRangeByMergingMD5:(CDStruct_bdcb2b0d)arg1;
- (id)newSubRangeByAddingOffset:(CDStruct_1b6d18a9)arg1 thenIntersectingWith:(CDStruct_e83c9415)arg2;
- (id)newSubRangeByIntersectingWith:(CDStruct_e83c9415)arg1;
- (id)newSubRangeByAddingOffset:(CDStruct_1b6d18a9)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)newPList;
- (id)initWithPList:(id)arg1;
- (id)initWithSubRange:(CDStruct_e83c9415)arg1 fullRange:(CDStruct_e83c9415)arg2 actualMD5:(CDStruct_bdcb2b0d)arg3 idealMD5:(CDStruct_bdcb2b0d)arg4 constantOffset:(long long)arg5 segmentCost:(double)arg6 opaqueBounds:(struct CGRect)arg7 flagsForAnding:(unsigned int)arg8 flagsForOring:(unsigned int)arg9 flagDetails:(id)arg10;
- (id)initWithSubRange:(CDStruct_e83c9415)arg1 fullRange:(CDStruct_e83c9415)arg2 actualMD5:(CDStruct_bdcb2b0d)arg3 idealMD5:(CDStruct_bdcb2b0d)arg4 constantOffset:(long long)arg5 segmentCost:(double)arg6 opaqueBounds:(struct CGRect)arg7 flagsForAnding:(unsigned int)arg8 flagsForOring:(unsigned int)arg9 flagDetails:(id)arg10 dataRatePerSecond:(unsigned long long)arg11;
- (id)initWithSubRange:(CDStruct_e83c9415)arg1 fullRange:(CDStruct_e83c9415)arg2 actualMD5:(CDStruct_bdcb2b0d)arg3 idealMD5:(CDStruct_bdcb2b0d)arg4 timeOffsetForSampleOffset:(CDStruct_1b6d18a9)arg5 sampleDurForOffsetCalc:(CDStruct_1b6d18a9)arg6 segmentCost:(double)arg7 opaqueBounds:(struct CGRect)arg8 flagsForAnding:(unsigned int)arg9 flagsForOring:(unsigned int)arg10 flagDetails:(id)arg11 dataRatePerSecond:(unsigned long long)arg12;
- (id)initWithSubRange:(CDStruct_e83c9415)arg1 fullRange:(CDStruct_e83c9415)arg2 actualMD5:(CDStruct_bdcb2b0d)arg3 idealMD5:(CDStruct_bdcb2b0d)arg4 timeOffsetForSampleOffset:(CDStruct_1b6d18a9)arg5 sampleDurForOffsetCalc:(CDStruct_1b6d18a9)arg6 segmentCostNSN:(id)arg7 opaqueBounds:(struct CGRect)arg8 flagsForAnding:(unsigned int)arg9 flagsForOring:(unsigned int)arg10 flagDetails:(id)arg11;
- (id)initWithSubRange:(CDStruct_e83c9415)arg1 fullRange:(CDStruct_e83c9415)arg2 actualMD5:(CDStruct_bdcb2b0d)arg3 idealMD5:(CDStruct_bdcb2b0d)arg4 timeOffsetForSampleOffset:(CDStruct_1b6d18a9)arg5 sampleDurForOffsetCalc:(CDStruct_1b6d18a9)arg6 segmentCost:(double)arg7 opaqueBounds:(struct CGRect)arg8 flagsForAnding:(unsigned int)arg9 flagsForOring:(unsigned int)arg10 flagDetails:(id)arg11;
- (id)initWithSubRange:(CDStruct_e83c9415)arg1 fullRange:(CDStruct_e83c9415)arg2 actualMD5:(CDStruct_bdcb2b0d)arg3 idealMD5:(CDStruct_bdcb2b0d)arg4 timeOffsetForSampleOffset:(CDStruct_1b6d18a9)arg5 sampleDurForOffsetCalc:(CDStruct_1b6d18a9)arg6 isConstantOffset:(_Bool)arg7 constantOffset:(long long)arg8 segmentCost:(double)arg9 opaqueBounds:(struct CGRect)arg10 flagsForAnding:(unsigned int)arg11 flagsForOring:(unsigned int)arg12 flagDetails:(id)arg13 dataRatePerSecond:(unsigned long long)arg14;
- (void)_setupCachedValues;

@end


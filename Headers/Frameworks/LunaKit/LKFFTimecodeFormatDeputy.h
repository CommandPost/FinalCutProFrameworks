//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <LunaKit/LKFormatDeputy.h>

#import "NSCoding.h"
#import "NSCopying.h"

@interface LKFFTimecodeFormatDeputy : LKFormatDeputy <NSCoding, NSCopying>
{
    long long pFtf_separator;
    BOOL pFtf_displaysQuarterFrames;
}

+ (long long)version;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)formatterForSegmentTag:(long long)arg1 inObjectValue:(id)arg2;
- (BOOL)getObjectValue:(id *)arg1 forString:(id)arg2 forSegmentWithTag:(long long)arg3 inObjectValue:(id)arg4 errorDescription:(id *)arg5;
- (void)getObjectValue:(id *)arg1 incrementingSegmentWithTag:(long long)arg2 byIncrement:(long long)arg3 inObjectValue:(id)arg4;
- (struct _NSRange)substringRangeForSegmentWithTag:(long long)arg1 inObjectValue:(id)arg2;
- (void)segmentWithTag:(long long)arg1 hasPaddingAtLeft:(char *)arg2 atRight:(char *)arg3 inObjectValue:(id)arg4;
- (long long)defaultSelectedSegmentTagInObjectValue:(id)arg1;
- (long long)segmentFieldWidthForTag:(long long)arg1 inObjectValue:(id)arg2;
- (long long)segmentIndexForTag:(long long)arg1 inObjectValue:(id)arg2;
- (long long)segmentTagForIndex:(long long)arg1 inObjectValue:(id)arg2;
- (long long)segmentCountInObjectValue:(id)arg1;
- (id)requiredProtocol;
- (id)legalCharacterSet;
- (BOOL)getObjectValue:(id *)arg1 forString:(id)arg2 formatter:(id)arg3 errorDescription:(id *)arg4;
- (id)stringForObjectValue:(id)arg1 formatter:(id)arg2;
- (void)setDisplaysQuarterFrames:(BOOL)arg1;
- (void)setSeparator:(long long)arg1;
- (BOOL)displaysQuarterFrames;
- (long long)separator;
- (id)defaultNilSymbol;
- (id)privateNumberStringWithNormalizedSeparatorCount:(id)arg1;
- (id)privateSeparators;
- (long long)privateMaximumCurrentFields;
- (id)privateSeparatorString;
- (BOOL)privateScanFFNumberString:(id)arg1 intoFieldArray:(long long *)arg2 length:(long long)arg3 indexAtEnd:(long long *)arg4 currentQuarterFrames:(long long)arg5;
- (id)init;

@end

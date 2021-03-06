//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSFormatter, NSString;

@protocol LKScrubbableFormatter
- (BOOL)allowsSegmentEditing;
- (NSFormatter *)formatterForSegmentTag:(long long)arg1 inObjectValue:(id)arg2;
- (BOOL)getObjectValue:(id *)arg1 forString:(NSString *)arg2 forSegmentWithTag:(long long)arg3 inObjectValue:(id)arg4 errorDescription:(id *)arg5;
- (void)getObjectValue:(id *)arg1 incrementingSegmentWithTag:(long long)arg2 byIncrement:(long long)arg3 inObjectValue:(id)arg4;
- (struct _NSRange)substringRangeForSegmentWithTag:(long long)arg1 inObjectValue:(id)arg2;
- (void)segmentWithTag:(long long)arg1 hasPaddingAtLeft:(char *)arg2 atRight:(char *)arg3 inObjectValue:(id)arg4;
- (long long)defaultSelectedSegmentTagInObjectValue:(id)arg1;
- (long long)segmentFieldWidthForTag:(long long)arg1 inObjectValue:(id)arg2;
- (long long)segmentIndexForTag:(long long)arg1 inObjectValue:(id)arg2;
- (long long)segmentTagForIndex:(long long)arg1 inObjectValue:(id)arg2;
- (long long)segmentCountInObjectValue:(id)arg1;
@end


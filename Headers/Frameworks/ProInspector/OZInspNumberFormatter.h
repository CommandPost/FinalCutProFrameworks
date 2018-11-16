//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSProScrubbableNumberFormatter.h"

@class NSString;

@interface OZInspNumberFormatter : NSProScrubbableNumberFormatter
{
    NSString *_pNormalFormatStr;
    NSString *_pOffsetFormatStr;
    BOOL _isOffsetting;
    double _backupMinValue;
    BOOL _isBackupSet;
}

+ (id)formatterWithSuffix:(id)arg1 min:(double)arg2 max:(double)arg3 decimalDigits:(unsigned int)arg4;
+ (void)updateScrubber:(id)arg1 areAllChannelsEqual:(BOOL)arg2;
+ (void)updateTextField:(id)arg1 areAllChannelsEqual:(BOOL)arg2;
- (id)init;
- (id)initWithSuffix:(id)arg1;
- (id)initWithSuffix:(id)arg1 min:(double)arg2 max:(double)arg3 decimalDigits:(unsigned int)arg4;
- (void)dealloc;
- (void)updateControl:(id)arg1 areAllChannelsEqual:(BOOL)arg2;
- (void)setFormat:(id)arg1;
- (void)setNormalFormat:(id)arg1 andOffsetFormat:(id)arg2;
- (void)setIsOffsetting:(BOOL)arg1;
- (BOOL)isOffsetting;
- (void)setMinValue:(double)arg1;
- (double)minValue;
- (void)setMaxValue:(double)arg1;
- (double)maxValue;
- (void)backupMinValue;
- (void)restoreMinValue;
- (id)editingStringForObjectValue:(id)arg1;
- (BOOL)isPartialStringValid:(id *)arg1 proposedSelectedRange:(struct _NSRange *)arg2 originalString:(id)arg3 originalSelectedRange:(struct _NSRange)arg4 errorDescription:(id *)arg5;

@end

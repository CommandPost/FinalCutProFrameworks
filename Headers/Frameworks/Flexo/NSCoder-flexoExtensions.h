//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCoder.h"

@interface NSCoder (flexoExtensions)
- (id)_copyEncodedStringForFigTime:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)_decodedFigTimeForString:(id)arg1;
- (void)encodeFigTime:(CDStruct_1b6d18a9)arg1 forKey:(id)arg2;
- (CDStruct_1b6d18a9)decodeFigTimeForKey:(id)arg1;
- (void)encodeFigTimeRange:(CDStruct_e83c9415)arg1 forKey:(id)arg2;
- (CDStruct_e83c9415)decodeFigTimeRangeForKey:(id)arg1;
- (void)encodeFigTimePair:(struct FigTimePair)arg1 forKey:(id)arg2;
- (struct FigTimePair)decodeFigTimePairForKey:(id)arg1;
- (void)encodeSearchType:(int)arg1 forKey:(id)arg2;
- (int)decodeSearchTypeForKey:(id)arg1;
- (void)encodeFrameExtractionMode:(int)arg1 forKey:(id)arg2;
- (int)decodeFrameExtractionModeForKey:(id)arg1;
- (void)encodeDisplayDropType:(long long)arg1 forKey:(id)arg2;
- (long long)decodeDisplayDropTypeForKey:(id)arg1;
- (void)encodeProFilmType:(long long)arg1 forKey:(id)arg2;
- (long long)decodeProFilmTypeForKey:(id)arg1;
- (void)encodeFieldOrder:(int)arg1 forKey:(id)arg2;
- (int)decodeFieldOrderForKey:(id)arg1;
- (void)encodePCMatrix44Double:(id)arg1 forKey:(id)arg2;
- (id)decodePCMatrix44DoubleForKey:(id)arg1;
- (void)encodeFFVideoProps:(id)arg1 forKey:(id)arg2;
- (id)decodeFFVideoPropsForKey:(id)arg1;
@end


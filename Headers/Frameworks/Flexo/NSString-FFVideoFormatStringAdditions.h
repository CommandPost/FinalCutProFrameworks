//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (FFVideoFormatStringAdditions)
+ (id)stringFromOSType:(unsigned int)arg1;
+ (id)decomposeAttributedStringToMultipleLines:(id)arg1 withCharactersPerLine:(unsigned long long)arg2 andMonospacedFontFamilyName:(id)arg3;
+ (id)humanReadableSize:(long long)arg1 useCompactedStr:(BOOL)arg2;
+ (id)humanReadableSeconds:(float)arg1 useCompactedStr:(BOOL)arg2 singleUnit:(BOOL)arg3;
+ (id)universalUniqueID;
+ (id)pseudoUniversallyUniqueAlphaNumericString;
+ (id)universallyUniqueStringForFileNames;
+ (unsigned int)universallyUniqueStringLength;
+ (id)universallyUniqueString;
+ (id)stringWithBytes:(const void *)arg1 length:(unsigned int)arg2 encoding:(unsigned long long)arg3;
+ (id)displayStringFromText:(id)arg1 formatting:(id)arg2;
+ (id)reconstructStringFromText:(id)arg1 formatting:(id)arg2;
+ (id)formattedTrailerStringFromUnformattedString:(id)arg1 originalText:(id)arg2 formatting:(id)arg3;
+ (id)divideString:(id)arg1 proportinallyByWordsIn:(id)arg2;
+ (id)stringDescribingNumberOfBytes:(long long)arg1;
+ (id)stringByConcatenatingStringA:(id)arg1 stringB:(id)arg2 addSpaceBetween:(BOOL)arg3;
+ (BOOL)isString:(id)arg1 equalToString:(id)arg2;
+ (id)stringWithInt:(int)arg1;
- (struct CGRect)rectValue;
- (id)rangesOfString:(id)arg1;
- (id)rangesOfStringsSurroundedBy:(id)arg1;
- (struct _NSRange)rangeOfStringSurroundedBy:(id)arg1;
- (struct _NSRange)rangeOfStringSurroundedBy:(id)arg1 range:(struct _NSRange)arg2;
- (struct _NSRange)rangeFromLocation:(int)arg1;
- (struct _NSRange)range;
- (long long)caseInsensitiveLocalizedNumericCompare:(id)arg1;
- (long long)compareLiteral:(id)arg1;
- (id)stringWithAttributes:(id)arg1;
- (id)displayablePathString;
- (id)stringByReplacingOccurancesOfString:(id)arg1 withString:(id)arg2;
- (id)stringByDeletingPathExtensionInExtensions:(id)arg1;
- (id)stringByResolvingSymlinksAndAliasesInPath;
- (id)stringByReplacingRedundantWhiteSpaceWithSingleSpace;
- (id)stringByChangingWhiteSpaceToSpace;
- (id)stringByRemovingRedundantWhiteSpace;
- (id)stringByRemovingSingleCharacterWords;
- (id)stringByRemovingSuffix:(id)arg1;
- (id)stringByRemovingPrefix:(id)arg1;
- (id)stringByRemovingPathPrefix:(id)arg1;
- (id)stringByPrefixingPathComponent:(id)arg1;
- (id)stringByRemovingLeadingOccurrencesOfCharactersInSet:(id)arg1;
- (id)stringByRemovingTrailingOccurrencesOfCharactersInSet:(id)arg1;
- (BOOL)isCaseInsensitiveEqualToString:(id)arg1;
- (long long)numericalCaseInsensitiveCompare:(id)arg1;
- (id)stringByIncrementingTrailingCountWithDelimiter:(id)arg1;
- (unsigned int)getTrailingCountWithDelimiter:(id)arg1 range:(struct _NSRange *)arg2;
- (id)uniqueNameWithSet:(id)arg1;
- (id)uniqueDuplicateNameWithSet:(id)arg1 suffix:(id)arg2;
- (id)volumeName;
- (long long)_longestPathCompare:(id)arg1;
- (long long)userFriendlyCompare:(id)arg1;
- (id)FFObjectDictKey;
- (id)stringByBlankingFirstLine;
- (id)stringByRemovingFirstLine;
- (void)deconstructIntoText:(id *)arg1 andFormatting:(id *)arg2;
- (unsigned long long)lengthWithComposedCharacters;
- (int)lengthOfFormatPrefix;
- (int)shotType;
- (id)localizedTrailerString;
- (id)localizedTeamString;
- (long long)numberOfBytes;
- (id)lsStringByDeletingPathExtension;
- (id)lsPathExtension;
- (BOOL)hasExtension:(id)arg1;
- (BOOL)isFilePath:(char *)arg1 isFolder:(char *)arg2 isVisible:(char *)arg3;
- (BOOL)createItemInfoRecord:(struct LSItemInfoRecord *)arg1;
- (id)uniquePathWithExtension:(id)arg1;
- (id)uniquePath;
- (long long)iTunesStyleCompare:(id)arg1;
- (id)arrayOfWordRanges;
- (id)arrayOfWords;
- (BOOL)isRTL;
- (BOOL)containsHebrewCharacters;
- (BOOL)containsArabicCharacters;
- (BOOL)containsRTLScript;
- (BOOL)containsJoinedGlyphs;
- (BOOL)containsString:(id)arg1 caseSensitive:(BOOL)arg2;
- (BOOL)containsString:(id)arg1;
@end


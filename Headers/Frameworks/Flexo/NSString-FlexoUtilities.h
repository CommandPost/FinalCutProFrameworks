//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSString.h"

@interface NSString (FlexoUtilities)
+ (id)stringFromOSType:(unsigned int)arg1;
+ (id)humanReadableSize:(long long)arg1 useCompactedStr:(BOOL)arg2;
+ (id)humanReadableSeconds:(float)arg1 useCompactedStr:(BOOL)arg2 singleUnit:(BOOL)arg3;
+ (id)universalUniqueID;
+ (id)pseudoUniversallyUniqueAlphaNumericString;
+ (id)universallyUniqueStringForFileNames;
+ (unsigned int)universallyUniqueStringLength;
+ (id)universallyUniqueString;
+ (id)stringWithBytes:(const void *)arg1 length:(unsigned int)arg2 encoding:(unsigned long long)arg3;
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
- (unsigned int)getTrailingCountWithDelimiter:(id)arg1 range:(struct _NSRange *)arg2;
- (id)uniqueNameWithSet:(id)arg1;
- (id)uniqueDuplicateNameWithSet:(id)arg1 suffix:(id)arg2;
- (id)volumeName;
- (long long)_longestPathCompare:(id)arg1;
- (long long)userFriendlyCompare:(id)arg1;
@end


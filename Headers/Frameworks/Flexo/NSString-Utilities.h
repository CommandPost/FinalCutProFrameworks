//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSString.h"

@interface NSString (Utilities)
+ (id)stringFromOSType:(unsigned int)arg1;
+ (id)pseudoUniversallyUniqueAlphaNumericString;
+ (id)universallyUniqueStringForFileNames;
+ (unsigned int)universallyUniqueStringLength;
+ (id)universallyUniqueString;
+ (id)stringWithBytes:(const void *)arg1 length:(unsigned int)arg2 encoding:(unsigned long long)arg3;
- (id)uniqueNameWithSet:(id)arg1;
- (id)uniqueDuplicateNameWithSet:(id)arg1 suffix:(id)arg2;
- (id)volumeName;
- (long long)_longestPathCompare:(id)arg1;
- (long long)userFriendlyCompare:(id)arg1;
@end


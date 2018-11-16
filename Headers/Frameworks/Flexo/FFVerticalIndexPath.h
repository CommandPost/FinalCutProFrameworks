//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@interface FFVerticalIndexPath : NSObject <NSCopying, NSCoding>
{
    long long *_indexes;
    unsigned long long _length;
}

+ (id)indexPathWithIndexes:(long long *)arg1 length:(long long)arg2;
+ (id)indexPathWithIndex:(long long)arg1;
+ (id)indexPathWithString:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)debugDescription;
- (id)description;
- (id)_indexesDescription;
- (BOOL)isAncestorOfIndexPath:(id)arg1;
- (long long)compare:(id)arg1;
- (long long)lastIndex;
- (void)getIndexes:(long long *)arg1;
- (unsigned long long)length;
- (long long)indexAtPosition:(long long)arg1;
- (id)indexPathByReversingIndexPath;
- (id)indexPathByRemovingFirstIndex;
- (id)indexPathByRemovingLastIndex;
- (id)indexPathByAddingIndex:(long long)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithIndex:(long long)arg1;
- (id)initWithIndexes:(long long *)arg1 length:(long long)arg2;
- (id)_initWithIndexesPtr:(long long *)arg1 length:(long long)arg2;
- (id)stringValue;

@end

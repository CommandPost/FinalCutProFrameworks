//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@interface PAEMD5Value : NSObject <NSCoding, NSCopying>
{
    struct PCHash128State _state;
}

+ (id)MD5WithArray:(id)arg1;
+ (id)MD5WithMD5s:(id)arg1;
+ (id)MD5WithMD5s:(id *)arg1 count:(unsigned long long)arg2;
+ (id)MD5FromString:(id)arg1;
+ (id)MD5WithObject:(id)arg1;
+ (id)MD5WithBytes:(const void *)arg1 length:(unsigned long long)arg2;
+ (id)MD5WithState:(struct PCHash128State)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)compareState:(struct PCHash128State)arg1;
- (long long)compare:(id)arg1;
- (BOOL)isNull;
- (id)stringValue;
- (struct PCHash128State)state;
- (void)rehashBytes:(const void *)arg1 length:(unsigned long long)arg2;
- (id)MD5ByAddingArray:(id)arg1;
- (id)MD5ByAddingMD5:(id)arg1;
- (id)initWithArray:(id)arg1;
- (id)initWithMD5s:(id)arg1;
- (id)initWithMD5s:(id *)arg1 count:(unsigned long long)arg2;
- (id)initFromString:(id)arg1;
- (id)initWithObject:(id)arg1;
- (id)initWithBytes:(const void *)arg1 length:(unsigned long long)arg2;
- (id)initWithState:(struct PCHash128State)arg1;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@interface FigTimePairObj : NSObject <NSCopying, NSCoding>
{
    struct PC_CMTimePair _pair;
}

+ (id)pairWithPair:(struct PC_CMTimePair)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)getValue:(struct PC_CMTimePair *)arg1;
- (void)setPair:(struct PC_CMTimePair)arg1;
- (void)setSecond:(CDStruct_1b6d18a9)arg1;
- (void)setFirst:(CDStruct_1b6d18a9)arg1;
- (struct PC_CMTimePair)pair;
- (CDStruct_1b6d18a9)second;
- (CDStruct_1b6d18a9)first;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFigTimePair:(struct PC_CMTimePair)arg1;
- (id)initWithFirst:(CDStruct_1b6d18a9)arg1 Second:(CDStruct_1b6d18a9)arg2;

@end


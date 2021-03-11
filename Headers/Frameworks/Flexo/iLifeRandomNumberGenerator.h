//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface iLifeRandomNumberGenerator : NSObject
{
    unsigned long long _seed;
    unsigned long long _index;
}

+ (id)randomNumberGeneratorWithSeed:(unsigned long long)arg1;
@property(nonatomic) unsigned long long index; // @synthesize index=_index;
@property unsigned long long seed; // @synthesize seed=_seed;
- (double)randomNumberWithinRangeStart:(double)arg1 rangeEnd:(double)arg2;
- (double)randomNumberBetweenZeroAndOne;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TLKit/NSCopying-Protocol.h>

@interface TLKTimeSegment : NSObject <NSCopying>
{
    struct _TLKRange _locationRange;
    CDStruct_e83c9415 _timeRange;
    CDStruct_1b6d18a9 _timePerPoint;
}

@property(nonatomic) CDStruct_1b6d18a9 timePerPoint; // @synthesize timePerPoint=_timePerPoint;
@property(nonatomic) CDStruct_e83c9415 timeRange; // @synthesize timeRange=_timeRange;
@property(nonatomic) struct _TLKRange locationRange; // @synthesize locationRange=_locationRange;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToTimeSegment:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, NSString;

@interface PMRStopwatch : NSObject
{
    unsigned long long _startTime;
    NSMutableArray *_splitTimes;
    NSString *_domain;
}

- (id)init;
- (void)dealloc;
- (void)reset;
- (void)captureSplitTimeWithKey:(id)arg1 comment:(id)arg2;
- (id)descriptionWithFormat:(int)arg1 key:(id)arg2 comment:(id)arg3;
- (void)logWithFormat:(int)arg1;
- (void)writeToFile:(id)arg1 key:(id)arg2 comment:(id)arg3 fileFormat:(int)arg4;
@property(copy, nonatomic) NSString *domain; // @synthesize domain=_domain;
@property(copy, nonatomic) NSArray *splitTimes; // @synthesize splitTimes=_splitTimes;
@property(nonatomic) unsigned long long startTime; // @synthesize startTime=_startTime;

@end

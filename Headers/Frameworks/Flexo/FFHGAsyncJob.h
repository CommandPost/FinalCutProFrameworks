//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface FFHGAsyncJob : NSObject
{
    double _executionTime;
    NSString *_userLabel;
}

@property(retain) NSString *userLabel; // @synthesize userLabel=_userLabel;
- (_Bool)dequeueJobIfNotStarted;
- (double)executionTime;
- (void)setExecutionTime:(double)arg1;
- (void)dealloc;

@end


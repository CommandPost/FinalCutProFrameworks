//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface FFThrottleFile : NSObject
{
    NSString *_throttleFileName;
}

- (id)init;
- (id)initWithProjectFileName:(id)arg1;
- (void)dealloc;
@property long long throttleValue;
@property(copy) NSString *throttleFileName; // @synthesize throttleFileName=_throttleFileName;

@end

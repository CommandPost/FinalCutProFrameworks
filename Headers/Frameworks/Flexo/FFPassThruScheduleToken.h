//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFWrapperScheduleToken.h>

@class NSSet;

__attribute__((visibility("hidden")))
@interface FFPassThruScheduleToken : FFWrapperScheduleToken
{
    NSSet *_additionalStreams;
}

- (id)initWithStream:(id)arg1 andSubToken:(id)arg2 additionalStreams:(id)arg3;
- (id)initWithStream:(id)arg1 andSubToken:(id)arg2;
- (void)dealloc;
- (id)newTokenForPassThruStream:(id)arg1;
- (id)description;

@end


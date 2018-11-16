//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFScheduleToken.h>

@class NSSet;

@interface FFScheduleTokenGroup : FFScheduleToken
{
    NSSet *_childTokens;
    NSSet *_retainOnlyObjects;
    _Bool _receivedNSNullChild;
    _Bool _assignedToCodec;
}

- (id)initWithStream:(id)arg1 subTokens:(id)arg2 retainOnlyObjects:(id)arg3;
- (id)initWithStream:(id)arg1 andSubToken:(id)arg2;
- (id)initWithStream:(id)arg1 andRetainOnlyObject:(id)arg2;
- (void)dealloc;
- (void)hintWillImageSoon;
- (void)hintCacheData:(unsigned int)arg1;
- (unsigned int)scheduleStatusInformation;
- (_Bool)waitForStatusFlagsToClear:(unsigned int)arg1 beforeDate:(id)arg2;
- (id)description;

@end

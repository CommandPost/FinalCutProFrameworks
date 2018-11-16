//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFScheduleToken.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface FFPassThruScheduleToken : FFScheduleToken
{
    FFScheduleToken *_subToken;
    unsigned int _knownClearFlags;
    NSArray *_additionalStreams;
    NSArray *_retainOnlyObjs;
}

- (id)description;
- (id)copyErrorInfoStoppingAfterFirstError:(BOOL)arg1;
- (id)newTokenForPassThruStream:(id)arg1 retainOnlyObject:(id)arg2;
- (void)hintCacheData:(unsigned int)arg1;
- (_Bool)hintWillImageSoon;
- (_Bool)waitForStatusFlagsToClear:(unsigned int)arg1 beforeDate:(id)arg2;
- (_Bool)areStatusFlagsClear:(unsigned int)arg1;
- (unsigned int)scheduleStatusInformation;
- (id)_underlyingToken;
- (void)dealloc;
- (id)initWithStream:(id)arg1 andSubToken:(id)arg2 additionalStreams:(id)arg3 retainOnlyObjects:(id)arg4;

@end


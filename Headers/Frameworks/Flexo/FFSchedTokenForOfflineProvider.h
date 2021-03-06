//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Flexo/FFScheduleToken.h>

@class FFProviderOffline, FFVideoProps, NSArray, NSCondition, NSOperation;

__attribute__((visibility("hidden")))
@interface FFSchedTokenForOfflineProvider : FFScheduleToken
{
    FFProviderOffline *_provider;
    FFVideoProps *_videoProps;
    NSArray *_errorInfo;
    BOOL _forThumb;
    NSCondition *_cond;
    NSOperation *_op;
}

- (id)copyErrorInfoStoppingAfterFirstError:(BOOL)arg1;
- (_Bool)waitForStatusFlagsToClear:(unsigned int)arg1 beforeDate:(id)arg2;
- (unsigned int)scheduleStatusInformation;
- (unsigned int)_internal_scheduleStatusInformationNotHoldingLock;
- (unsigned int)_internal_scheduleStatusInformationAlreadyHoldingLock;
- (void)dealloc;
- (id)initWithStream:(id)arg1 forThumb:(BOOL)arg2 videoProps:(id)arg3;

@end


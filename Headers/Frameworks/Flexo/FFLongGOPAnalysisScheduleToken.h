//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Flexo/FFScheduleToken.h>

__attribute__((visibility("hidden")))
@interface FFLongGOPAnalysisScheduleToken : FFScheduleToken
{
    FFScheduleToken *_heliumGraphToken;
}

- (id)copyErrorInfoStoppingAfterFirstError:(BOOL)arg1;
- (_Bool)waitForStatusFlagsToClear:(unsigned int)arg1 beforeDate:(id)arg2;
- (_Bool)areStatusFlagsClear:(unsigned int)arg1;
- (unsigned int)scheduleStatusInformation;
- (void)dealloc;
- (id)initWithStream:(id)arg1 subToken:(id)arg2;

@end


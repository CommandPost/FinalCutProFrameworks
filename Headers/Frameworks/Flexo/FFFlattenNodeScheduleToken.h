//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFScheduleToken.h>

@class FFImageRepFlattenNode;

__attribute__((visibility("hidden")))
@interface FFFlattenNodeScheduleToken : FFScheduleToken
{
    FFImageRepFlattenNode *_flattenNode;
}

- (id)copyErrorInfoStoppingAfterFirstError:(BOOL)arg1;
- (_Bool)waitForStatusFlagsToClear:(unsigned int)arg1 beforeDate:(id)arg2;
- (unsigned int)scheduleStatusInformation;
- (void)dealloc;
- (id)initWithStream:(id)arg1 imageRep:(id)arg2;

@end


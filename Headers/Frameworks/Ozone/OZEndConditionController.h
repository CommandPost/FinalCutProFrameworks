//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OZChanEnumController.h"

@interface OZEndConditionController : OZChanEnumController
{
    struct OZChannelEnum *_endConditionChannel;
}

- (id)initWithChan:(struct OZChannelObjectRoot *)arg1 context:(id)arg2;
- (void)setChannelValue:(id)arg1;
- (void)setValue:(int)arg1 forChannel:(struct OZChannelEnum *)arg2 atTime:(CDStruct_1b6d18a9)arg3;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OZLabeledParamController.h"

@interface OZMixedLabeledParamController : OZLabeledParamController
{
}

- (void)channelChanged:(struct OZChannelBase *)arg1 time:(CDStruct_198678f7)arg2 qualifiers:(int)arg3;
- (void)reset;
- (_Bool)isChannelMaterialAssignmentModeChan:(struct OZChannelBase *)arg1;
- (struct OZChannelEnum *)getMaterialAssignmentModeChanFromMaterialAssignmentFolder:(struct OZChannelFolder *)arg1;
- (void)update;
- (BOOL)addOrResetAssociatedChannel:(struct OZChannelBase *)arg1 isAdd:(BOOL)arg2 force:(BOOL)arg3 recursive:(BOOL)arg4;

@end


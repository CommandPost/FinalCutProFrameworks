//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProCurveEditor/OZCurveSet.h>

@interface OZCurveSetModified : OZCurveSet
{
}

- (void)addObjectsAffectedByBehavior:(struct OZChannelObjectRootBase *)arg1 toCurveSet:(id)arg2 numberOfSamples:(unsigned int)arg3;
- (void)refresh:(unsigned int)arg1 snapshot:(BOOL)arg2;
- (void)filterList;
- (id)initWithName:(id)arg1 appDelegate:(id)arg2;

@end


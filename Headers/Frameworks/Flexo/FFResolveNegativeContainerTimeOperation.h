//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@protocol FFItemContainerTemporaryProtocol;

@interface FFResolveNegativeContainerTimeOperation : NSOperation
{
    id <FFItemContainerTemporaryProtocol> _container;
}

@property(retain, nonatomic) id <FFItemContainerTemporaryProtocol> container; // @synthesize container=_container;
- (id)createGapWithDuration:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)containerAudioStartTime;
- (CDStruct_1b6d18a9)containerStartTime;
- (void)main;
- (void)dealloc;
- (id)initWithContainer:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProOSC/POOnScreenControl.h>

@interface TXOldSequenceOSC : POOnScreenControl
{
    struct TXTextSequenceBehavior *_sequenceBH;
}

- (void)draw;
- (struct TXTextSequenceBehavior *)getSequenceBehavior;
- (void)dealloc;
- (id)initWithHostDelegate:(id)arg1 andViewDelegate:(id)arg2 andObjectDelegate:(id)arg3 andChannel:(struct OZChannelBase *)arg4;

@end


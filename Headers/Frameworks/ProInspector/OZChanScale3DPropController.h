//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProInspector/OZChan3DPropController.h>

@interface OZChanScale3DPropController : OZChan3DPropController
{
}

- (void)setChanValues:(struct OZChannelBase *)arg1 x:(double)arg2 y:(double)arg3 z:(double)arg4;
- (void)getChanValues:(struct OZChannelBase *)arg1 x:(double *)arg2 y:(double *)arg3 z:(double *)arg4;
- (struct OZChannelDouble *)getChannelZ:(struct OZChannelBase *)arg1;
- (struct OZChannelDouble *)getChannelY:(struct OZChannelBase *)arg1;
- (struct OZChannelDouble *)getChannelX:(struct OZChannelBase *)arg1;
- (id)initWithChan:(struct OZChannelBase *)arg1 context:(id)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OZChanDoubleController.h"

@interface OZLoopDurationController : OZChanDoubleController
{
    struct OZChannelDouble *_loopDurationChannel;
    map_9704587f *_pRoots;
}

- (void)setChannelValue:(id)arg1;
- (void)endScrubberAction:(id)arg1;
- (void)startScrubberAction:(id)arg1;
- (void)endSliderAction:(id)arg1;
- (void)startSliderAction:(id)arg1;
- (void)dealloc;
- (id)initWithChan:(struct OZChannelObjectRoot *)arg1 context:(id)arg2;

@end


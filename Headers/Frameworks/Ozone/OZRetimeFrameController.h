//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OZViewControllerGroup.h"

@class LKScrubber;

@interface OZRetimeFrameController : OZViewControllerGroup
{
    LKScrubber *_pRetimeFrameScrubber;
}

- (void)resetChannel:(id)arg1;
- (void)setRetimeFrame:(id)arg1;
- (void)setRetimeFrameForChannel:(double)arg1 forChannel:(struct OZChannelBase *)arg2;
- (void)disable;
- (void)enable;
- (void)notify:(unsigned int)arg1;
- (struct OZChannelBase *)associatedChannel;
- (BOOL)addAssociatedChannel:(struct OZChannelBase *)arg1;
- (void)update;
- (double)getMaxValue;
- (double)getMinValue;
- (double)getMaxValueFromChannel:(struct OZChannelBase *)arg1;
- (double)getMinValueFromChannel:(struct OZChannelBase *)arg1;
- (double)getValueFromChannel:(struct OZChannelBase *)arg1;
- (BOOL)areAllValuesEqual;
- (id)connectKeyViewsRec:(id)arg1;
- (id)lastKeyView;
- (id)firstKeyView;
- (void)dealloc;
- (id)initWithChan:(struct OZChannelBase *)arg1 context:(id)arg2;

@end


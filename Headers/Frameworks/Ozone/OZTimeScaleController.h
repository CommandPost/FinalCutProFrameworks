//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OZViewController.h"

@class LKSegmentedScrubber;

@interface OZTimeScaleController : OZViewController
{
    LKSegmentedScrubber *_pScale;
    BOOL _relativeValues;
    map_9704587f *_pRoots;
}

- (struct OZDocument *)document;
- (void)setTimeScaleValue:(id)arg1;
- (void)disable;
- (void)enable;
- (void)notify:(unsigned int)arg1;
- (BOOL)addAssociatedChannel:(struct OZChannelBase *)arg1;
- (void)update;
- (void)endSegmentedScrubberAction:(id)arg1;
- (void)startSegmentedScrubberAction:(id)arg1;
- (id)getMaxValue;
- (id)getMinValue;
- (double)getMaxValueFromChannel:(struct OZChannelBase *)arg1;
- (double)getMinValueFromChannel:(struct OZChannelBase *)arg1;
- (BOOL)areAllScalesEqual;
- (id)lastKeyView;
- (id)firstKeyView;
- (void)dealloc;
- (id)initWithChan:(struct OZChannelBase *)arg1 context:(id)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProInspector/OZCommonScrubberController.h>

@class PISegmentedScrubber;

@interface OZChan3DController : OZCommonScrubberController
{
    PISegmentedScrubber *_pXTF;
    PISegmentedScrubber *_pYTF;
    PISegmentedScrubber *_pZTF;
    BOOL _isOffsetting;
    struct list<PCVector3<double>, std::__1::allocator<PCVector3<double>>> *_pMouseDownValues;
    double _xScale;
    double _yScale;
    double _zScale;
}

- (void)set:(struct OZChannelBase *)arg1 X:(double)arg2 Y:(double)arg3 Z:(double)arg4;
- (void)get:(struct OZChannelBase *)arg1 x:(double *)arg2 y:(double *)arg3 z:(double *)arg4;
- (void)set:(struct OZChannelBase *)arg1 Z:(double)arg2;
- (double)getZ:(struct OZChannelBase *)arg1;
- (double)coarseIncrement;
- (double)fineIncrement;
- (double)chanMax;
- (double)chanMin;
- (double)sliderMax;
- (double)sliderMin;
- (id)suffixString;
- (double)zOffset;
- (double)yOffset;
- (double)xOffset;
- (double)valueOffset;
- (double)zScale;
- (double)yScale;
- (double)xScale;
- (double)valueScale;
- (void)set:(struct OZChannelBase *)arg1 X:(double)arg2 Y:(double)arg3;
- (void)get:(struct OZChannelBase *)arg1 x:(double *)arg2 y:(double *)arg3;
- (void)set:(struct OZChannelBase *)arg1 Y:(double)arg2;
- (double)getY:(struct OZChannelBase *)arg1;
- (void)set:(struct OZChannelBase *)arg1 X:(double)arg2;
- (double)getX:(struct OZChannelBase *)arg1;
- (void)didTwiddle:(BOOL)arg1;
- (void)setChannelValue:(id)arg1;
- (void)disable;
- (void)enable;
- (void)update;
- (void)notify:(unsigned int)arg1;
- (BOOL)areAllChannelsEqualForComponent:(int)arg1;
- (void)endSegmentedScrubberAction:(id)arg1;
- (void)startSegmentedScrubberAction:(id)arg1;
- (id)connectKeyViewsRec:(id)arg1;
- (id)lastKeyView;
- (id)firstKeyView;
- (id)initWithChan:(struct OZChannelBase *)arg1 context:(id)arg2;

@end


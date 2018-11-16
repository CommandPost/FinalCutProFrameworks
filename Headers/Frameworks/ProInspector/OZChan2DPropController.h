//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ProInspector/OZViewControllerGroup.h>

@class LKTextField, OZInspNumberFormatter, OZMixedSlider, PISegmentedScrubber;

@interface OZChan2DPropController : OZViewControllerGroup
{
    OZMixedSlider *_pSlider;
    PISegmentedScrubber *_pTF;
    LKTextField *_pSuffixTF;
    double _ratio;
    BOOL _isXMax;
    BOOL _isSliding;
    BOOL _isMultiplying;
    OZInspNumberFormatter *_pEqualFormatter;
    OZInspNumberFormatter *_pUnequalFormatter;
    struct list<PCVector2<double>, std::allocator<PCVector2<double>>> *_pMouseDownValues;
    int _decimalDigits;
}

- (id)initWithChan:(struct OZChannelBase *)arg1 context:(id)arg2;
- (id)firstKeyView;
- (id)lastKeyView;
- (id)connectKeyViewsRec:(id)arg1;
- (void)dealloc;
- (struct OZChannel2D *)compoundChan;
- (void)calcRatio;
- (void)startSliderAction:(id)arg1;
- (void)endSliderAction:(id)arg1;
- (void)startSegmentedScrubberAction:(id)arg1;
- (void)endSegmentedScrubberAction:(id)arg1;
- (BOOL)areAllChannelsEqual;
- (void)notify:(unsigned int)arg1;
- (void)update;
- (void)enable;
- (void)disable;
- (BOOL)hasControls;
- (void)setChannelValue:(id)arg1;

@end

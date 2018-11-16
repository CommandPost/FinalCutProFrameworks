//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TextFramework/TXSimpleStyleController.h>

@class LKImageView, OZScrubberController, PISegmentedScrubber;

@interface TXGlowController : TXSimpleStyleController
{
    PISegmentedScrubber *_opacityScrubber;
    LKImageView *_opacityIcon;
    OZScrubberController *_opacityCtlr;
    PISegmentedScrubber *_blurScrubber;
    LKImageView *_blurIcon;
    OZScrubberController *_blurCtlr;
    PISegmentedScrubber *_radiusScrubber;
    LKImageView *_radiusIcon;
    OZScrubberController *_radiusCtlr;
}

- (BOOL)addOrResetAssociatedChannel:(struct OZChannelBase *)arg1 isAdd:(BOOL)arg2 force:(BOOL)arg3;
- (struct OZChannelColorNoAlpha *)colorChannel:(struct OZChannelFolder *)arg1;
- (struct OZChannelDouble *)radiusChannel;
- (struct OZChannel2D *)blurChannel;
- (struct OZChannelPercent *)opacityChannel;
- (void)dealloc;
- (id)initWithChan:(struct OZChannelBase *)arg1 context:(id)arg2;

@end


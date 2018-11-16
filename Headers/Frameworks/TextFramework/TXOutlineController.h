//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TextFramework/TXSimpleStyleController.h>

@class LKImageView, OZScrubberController, PISegmentedScrubber;

@interface TXOutlineController : TXSimpleStyleController
{
    PISegmentedScrubber *_widthScrubber;
    PISegmentedScrubber *_blurScrubber;
    LKImageView *_widthIcon;
    LKImageView *_blurIcon;
    OZScrubberController *_widthCtlr;
    OZScrubberController *_blurCtlr;
}

- (void)didTwiddle:(BOOL)arg1;
- (BOOL)addOrResetAssociatedChannel:(struct OZChannelBase *)arg1 isAdd:(BOOL)arg2 force:(BOOL)arg3;
- (struct OZChannelColorNoAlpha *)colorChannel:(struct OZChannelFolder *)arg1;
- (struct OZChannel2D *)blurChannel;
- (struct OZChannelDouble *)widthChannel;
- (void)dealloc;
- (id)initWithChan:(struct OZChannelBase *)arg1 context:(id)arg2;

@end


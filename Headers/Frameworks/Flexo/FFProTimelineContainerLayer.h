//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TLKit/TLKContainerLayer.h>

@class CALayer, FFCaptionLanesBackgroundLayer, FFProStoryTimelinePresentation, FFRoleColorScheme;

__attribute__((visibility("hidden")))
@interface FFProTimelineContainerLayer : TLKContainerLayer
{
    FFProStoryTimelinePresentation *_storyPresentation;
    CALayer *_offscreenItemIndicatorLayer;
    FFRoleColorScheme *_colorScheme;
    FFCaptionLanesBackgroundLayer *_captionsBackgroundLayer;
}

@property(retain, nonatomic) FFCaptionLanesBackgroundLayer *captionsBackgroundLayer; // @synthesize captionsBackgroundLayer=_captionsBackgroundLayer;
@property(retain, nonatomic) FFRoleColorScheme *colorScheme; // @synthesize colorScheme=_colorScheme;
@property(retain, nonatomic) CALayer *offscreenItemIndicatorLayer; // @synthesize offscreenItemIndicatorLayer=_offscreenItemIndicatorLayer;
@property(retain, nonatomic) FFProStoryTimelinePresentation *storyPresentation; // @synthesize storyPresentation=_storyPresentation;
- (void)_discardCaptionsBackgroundLayer;
- (void)_makeCaptionLanesBackgroundLayerIfNeeded;
- (void)updateCaptionLanesBackground;
- (id)newAnchorLayer;
- (void)invalidate;
- (void)dealloc;

@end


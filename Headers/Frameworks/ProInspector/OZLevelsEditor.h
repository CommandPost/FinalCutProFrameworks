//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

@class OZHistogramGradientView, OZHistogramGutterIn;

@interface OZLevelsEditor : NSView
{
    id _delegate;
    struct OZChannelLevels *_levelsChannel;
    NSView *_masterView;
    OZHistogramGradientView *_gradientView;
    OZHistogramGutterIn *_gutterIn;
}

- (void)update;
- (void)awakeFromNib;
- (void)setViewController:(id)arg1;
- (void)setLevelsChannel:(struct OZChannelLevels *)arg1;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end


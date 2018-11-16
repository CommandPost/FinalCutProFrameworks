//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSProView.h"

@class NSPopUpButton, OZHistogramGradientView, OZHistogramGutterIn, OZHistogramGutterOut, OZHistogramView;

@interface OZHistogramEditor : NSProView
{
    id _delegate;
    struct OZChannelHistogram *_histogramChannel;
    NSPopUpButton *_popUp;
    NSProView *_masterView;
    OZHistogramView *_histogramView;
    OZHistogramGradientView *_gradientView;
    OZHistogramGutterIn *_gutterIn;
    OZHistogramGutterOut *_gutterOut;
}

- (void)setChannelValue:(id)arg1;
- (void)update;
- (void)awakeFromNib;
- (void)setViewController:(id)arg1;
- (void)setHistogramChannel:(struct OZChannelHistogram *)arg1;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSProView.h"

@class LKButton, OZGradientGutter, OZGradientView, OZViewController;

@interface OZGradientEditor : NSProView
{
    id _delegate;
    struct OZScene *_pScene;
    struct OZChannelRef *_pGradientRef;
    struct OZChannelFolder *_pRootChan;
    struct OZChannelRef *_selectedSampleRef;
    OZViewController *_viewCtlr;
    BOOL _middleSelected;
    NSProView *_masterView;
    OZGradientView *_gradientView;
    OZGradientGutter *_gradientGutterRGB;
    OZGradientGutter *_gradientGutterAlpha;
    LKButton *_rgbSpread;
    LKButton *_rgbFlop;
    LKButton *_alphaSpread;
    LKButton *_alphaFlop;
}

- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (void)setGradientChannel:(struct OZChannelGradient *)arg1 andController:(id)arg2;
- (struct OZChannelGradient *)getGradientChannel;
- (void)setSelectedSample:(struct OZChannelGradientSample *)arg1 middleSelected:(BOOL)arg2 doubleClick:(BOOL)arg3;
- (struct OZChannelGradientSample *)getSelectedSample;
- (BOOL)getMiddleSelected;
- (void)aboutToChangeSelectedSampleRGB;
- (void)didChangeSelectedSampleRGB;
- (void)updateSelectedSampleRGBFrom:(id)arg1;
- (void)aboutToChangeSelectedSampleAlpha;
- (void)didChangeSelectedSampleAlpha;
- (void)updateSelectedSampleAlphaFrom:(id)arg1;
- (void)awakeFromNib;
- (BOOL)manageSubview:(id)arg1 on:(BOOL)arg2;
- (void)update;
- (void)_addKeyframeToChannel:(struct OZChannelBase *)arg1 atTime:(CDStruct_1b6d18a9)arg2;
- (void)_aboutToChangeGradientAtTime:(CDStruct_1b6d18a9)arg1;
- (void)rgbSpread:(id)arg1;
- (void)rgbFlop:(id)arg1;
- (void)alphaSpread:(id)arg1;
- (void)alphaFlop:(id)arg1;
- (void)setEnabled:(BOOL)arg1;

@end

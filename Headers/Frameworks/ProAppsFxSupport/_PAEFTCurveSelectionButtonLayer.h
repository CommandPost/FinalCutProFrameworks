//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class PAEChevronButtonLayer, _PAEFTCurveColorWellLayer, _PAEFTCurveSelectionButtonRevealLayer;

@interface _PAEFTCurveSelectionButtonLayer : CALayer
{
    _PAEFTCurveColorWellLayer *_colorWellLayer;
    _PAEFTCurveSelectionButtonRevealLayer *_revealLayer;
    PAEChevronButtonLayer *_chevronLayer;
}

@property(readonly, nonatomic) _PAEFTCurveSelectionButtonRevealLayer *revealLayer; // @synthesize revealLayer=_revealLayer;
- (id)actionForKey:(id)arg1;
- (void)layoutSublayers;
- (void)setNeedsDisplay;
- (void)setContentsScale:(double)arg1;
- (void)buildSublayers;
- (void)setHighlighted:(BOOL)arg1;
- (void)setColor:(id)arg1;

@end


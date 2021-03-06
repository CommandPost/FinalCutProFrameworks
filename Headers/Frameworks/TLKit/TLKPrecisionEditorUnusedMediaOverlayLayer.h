//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class TLKRoundedSideLayer;

@interface TLKPrecisionEditorUnusedMediaOverlayLayer : CALayer
{
    TLKRoundedSideLayer *_rootLayer;
    CALayer *_edgeLayer;
    unsigned int _showLeadingEdge:1;
    unsigned int _showTrailingEdge:1;
}

- (void)layoutSublayers;
@property(nonatomic) int roundedVerticalSide;
- (void)setCornerRadius:(double)arg1;
@property(nonatomic) BOOL modifiedAudio;
@property(nonatomic) BOOL showTrailingEdge;
@property(nonatomic) BOOL showLeadingEdge;
- (void)_updateEdge;
@property(nonatomic) BOOL hideOverlay;
- (void)setDelegate:(id)arg1;
- (id)init;

@end


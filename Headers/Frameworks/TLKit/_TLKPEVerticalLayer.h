//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CALayer.h"

@interface _TLKPEVerticalLayer : CALayer
{
    double _audioWaveFormHeight;
    CALayer *_endCap;
    int _edgeType;
    unsigned int _topPiece:1;
    unsigned int _edgeTypeChanged:1;
}

- (void)layoutSublayers;
- (void)_updateConstraints;
- (double)_audioWaveFormHeight;
- (void)setDelegate:(id)arg1;
- (void)setEdgeType:(int)arg1;
- (void)setTopPiece:(BOOL)arg1;
- (void)_updateNames;
- (id)hitTest:(struct CGPoint)arg1;
- (id)init;

@end

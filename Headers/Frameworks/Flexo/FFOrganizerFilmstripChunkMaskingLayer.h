//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CALayer.h"

__attribute__((visibility("hidden")))
@interface FFOrganizerFilmstripChunkMaskingLayer : CALayer
{
    int _leftEdgeType;
    int _rightEdgeType;
    BOOL _isStill;
    double _cornerRadius;
    double _frameHeight;
    CALayer *_topLayer;
    CALayer *_bottomLayer;
    CALayer *_leftImageLayer;
    CALayer *_leftInsetLayer;
    CALayer *_rightImageLayer;
    CALayer *_rightInsetLayer;
    double _filmstripHeight;
    double _leftInset;
    double _rightInset;
    BOOL _maskFramesAreValid;
}

+ (id)makeNewLayerAsMaskLayerOf:(id)arg1 leftinset:(double)arg2 rightinset:(double)arg3;
@property double rightInset; // @synthesize rightInset=_rightInset;
@property double leftInset; // @synthesize leftInset=_leftInset;
@property double filmstripHeight; // @synthesize filmstripHeight=_filmstripHeight;
@property double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property BOOL isStill; // @synthesize isStill=_isStill;
- (void)setContentsScale:(double)arg1;
@property int leftEdgeType;
@property int rightEdgeType;
- (void)_resetImages;
- (void)_resetCapImages;
- (void)_resetTopAndBottomImages;
- (void)layoutSublayers;
- (id)init;

@end


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
}

+ (id)makeNewLayerAsMaskLayerOf:(id)arg1 leftinset:(double)arg2 rightinset:(double)arg3;
@property BOOL isStill; // @synthesize isStill=_isStill;
- (void)drawInContext:(struct CGContext *)arg1;
@property int leftEdgeType;
@property int rightEdgeType;
- (id)init;

@end


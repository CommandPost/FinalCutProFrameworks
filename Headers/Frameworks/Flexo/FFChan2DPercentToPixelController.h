//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OZChan2DController.h"

@class FFEffectStack;

__attribute__((visibility("hidden")))
@interface FFChan2DPercentToPixelController : OZChan2DController
{
    FFEffectStack *_pEffectStack;
    BOOL _showOffsetsInPercentage;
}

- (double)yScale;
- (double)xScale;
- (id)initWithChan:(struct OZChannelBase *)arg1 context:(id)arg2;

@end


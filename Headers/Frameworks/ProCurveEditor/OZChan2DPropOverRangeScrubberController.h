//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OZChan2DPropController.h"

@class OZMiniCurveEditor;

@interface OZChan2DPropOverRangeScrubberController : OZChan2DPropController
{
    OZMiniCurveEditor *_pMiniCurveEditor;
}

- (id)initWithChan:(struct OZChannelBase *)arg1 withMiniCurveEditor:(id)arg2 context:(id)arg3;
- (CDStruct_1b6d18a9)currentTime;
- (void)calcRatio;
- (void)startScrubberAction:(id)arg1;
- (void)update;
- (void)setChannelValue:(id)arg1;
- (BOOL)isEnabled;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Ozone/OZTimebarViewBase.h>

#import <Ozone/OZTimingView-Protocol.h>

@class OZTimingCoordinator;

@interface OZPlaylineView : OZTimebarViewBase <OZTimingView>
{
    OZTimingCoordinator *_timingCoordinator;
    BOOL _isObserving;
    struct CGRect _lastViewFrame;
    struct CGRect _inLineRect;
    struct CGRect _outLineRect;
}

- (struct CGRect)controlBounds;
- (struct CGRect)playHeadRect;
- (void)setCurrentTime:(const CDStruct_1b6d18a9 *)arg1;
- (CDStruct_1b6d18a9)getCurrentTime;
- (const struct PCTimeRange *)getActiveRange;
- (const struct PCTimeRange *)getDisplayRange;
- (double)getPixelsPerSecond;
- (CDStruct_1b6d18a9)getSecondsPerPixel;
- (void)setViewPositionAndSize;
- (void)renewGState;
- (void)timeDisplayRangeModified;
- (id)timingCoordinator;
- (void)setTimingCoordinator:(id)arg1;
- (void)notify:(unsigned int)arg1;
- (struct CGRect)private_playLineRect;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGRect)playLineRect;
- (struct PCTimeRange)getPlayRange;
- (id)outPointImage;
- (id)inPointImage;
- (void)drawPlayhead:(struct CGRect)arg1;
- (id)playheadImage;
- (BOOL)isOpaque;
- (void)timelineViewDidResize:(id)arg1;
- (void)timelineViewDidResize;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end


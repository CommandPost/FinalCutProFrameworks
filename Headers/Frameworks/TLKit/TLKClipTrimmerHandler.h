//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TLKit/TLKTimelineHandler.h>

@interface TLKClipTrimmerHandler : TLKTimelineHandler
{
    unsigned int _skimmingItem:1;
}

- (void)cancel:(id)arg1;
- (BOOL)showItemSkimmerFrameIndicator;
- (void)clickedOnItem:(id)arg1;
- (void)clickedOnBackgroundOfTimeline:(id)arg1;
- (struct CGRect)adjustItemSkimmerFrame:(struct CGRect)arg1 atLocation:(double)arg2;
- (BOOL)shouldSkimItem:(id)arg1;
- (struct _TLKRange)locationRangeForTime:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)timeForPoint:(struct CGPoint)arg1;
- (void)stopHandling:(id)arg1;
- (void)_closeClipTrimmer;

@end

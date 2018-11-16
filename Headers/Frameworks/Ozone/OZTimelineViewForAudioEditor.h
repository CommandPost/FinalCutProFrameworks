//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Ozone/OZTimelineView.h>

@class OZTimingCoordinator;

@interface OZTimelineViewForAudioEditor : OZTimelineView
{
    OZTimingCoordinator *_timingCoordinator;
    struct PCTimeRange *_displayRange;
    CDStruct_1b6d18a9 *_currentTime;
}

- (void)dragRoots:(struct CGPoint)arg1 flags:(unsigned int)arg2;
- (void)notifyOthersOfSelectionChange;
- (void)clearSelection;
- (id)allocRow:(int)arg1;
- (struct OZChannelFolder *)folderFilter:(struct OZChannelBase *)arg1;
- (struct OZChannelObjectRoot *)rootFilter:(struct OZChannelBase *)arg1;
- (struct OZChannelObjectRoot *)rootAtRow:(int)arg1;
- (struct _NSRange)rowsInRect:(struct CGRect)arg1;
- (int)numberOfRows;
- (unsigned int)getFrameChangedDone;
- (void)setCurrentTime:(const CDStruct_1b6d18a9 *)arg1;
- (CDStruct_1b6d18a9)getCurrentTime;
- (double)getPixelsPerSecond;
- (CDStruct_1b6d18a9)getSecondsPerPixel;
- (const struct PCTimeRange *)getDisplayRange;
- (const struct PCTimeRange *)getSceneRange;
- (void)setTimingCoordinator:(id)arg1;
- (void)drawBackground:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end


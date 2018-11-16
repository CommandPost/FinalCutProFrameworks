//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LKScrollView.h"

@class NSScroller, OZTimelineLayerCoordinator;

@interface OZTimelineLayerScroll : LKScrollView
{
    OZTimelineLayerCoordinator *_timelineLayerCoordinator;
    NSScroller *_externalVScroller;
    BOOL _vScrollerStatus;
}

- (id)initWithFrame:(struct CGRect)arg1;
- (void)setTimelineLayerCoordinator:(id)arg1;
- (void)setExternalVerticalScroller:(id)arg1;
- (void)reflectScrolledClipView:(id)arg1;
- (void)_doScroller:(id)arg1 hitPart:(int)arg2 multiplier:(float)arg3;
- (void)scrollWheel:(id)arg1;

@end

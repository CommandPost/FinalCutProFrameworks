//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LKTableView.h"

@class LKScrollView, NSTrackingArea;

@interface FFRolloverTableView : LKTableView
{
    NSTrackingArea *_track;
    BOOL _mouseOverView;
    long long _mouseOverRow;
    LKScrollView *parentScrollView;
}

+ (id)activeHighlightGradient;
- (void)viewDidEndLiveResize;
- (void)mouseExited:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (void)updateTrackingAreas;
- (void)removeTracking;
- (void)addTracking;
- (void)highlightSelectionInClipRect:(struct CGRect)arg1;
- (void)dealloc;
- (void)awakeFromNib;

@end


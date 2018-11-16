//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LKTableView.h"

@class NSTrackingArea;

__attribute__((visibility("hidden")))
@interface FFTheaterMenuRolloverTableView : LKTableView
{
    NSTrackingArea *_selectionTrackingArea;
    long long _mouseOverRow;
}

@property(retain, nonatomic) NSTrackingArea *selectionTrackingArea; // @synthesize selectionTrackingArea=_selectionTrackingArea;
- (void)mouseExited:(id)arg1;
- (void)_updateSelectionForEvent:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (void)removeTracking;
- (void)addTracking;
- (void)keyDown:(id)arg1;
- (void)highlightSelectionInClipRect:(struct CGRect)arg1;
- (void)dealloc;
- (void)awakeFromNib;

@end


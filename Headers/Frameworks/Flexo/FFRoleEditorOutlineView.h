//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOutlineView.h"

@class FFRole, NSTrackingArea;

__attribute__((visibility("hidden")))
@interface FFRoleEditorOutlineView : NSOutlineView
{
    FFRole *_hoverRole;
    FFRole *_dragSrcRole;
    FFRole *_dropDstRole;
    NSTrackingArea *_tracker;
}

+ (id)bezierPathWithRoundedBottomCornersForRect:(struct CGRect)arg1 andRadius:(double)arg2;
+ (id)bezierPathWithRoundedTopCornersForRect:(struct CGRect)arg1 andRadius:(double)arg2;
@property(retain, nonatomic) NSTrackingArea *tracker; // @synthesize tracker=_tracker;
@property(retain, nonatomic) FFRole *dropDstRole; // @synthesize dropDstRole=_dropDstRole;
@property(retain, nonatomic) FFRole *dragSrcRole; // @synthesize dragSrcRole=_dragSrcRole;
@property(retain, nonatomic) FFRole *hoverRole; // @synthesize hoverRole=_hoverRole;
- (void)drawRect:(struct CGRect)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)_updateHoverRoleFromCurrentMousePositionInWindow:(struct CGPoint)arg1;
- (void)_setHoverRole:(id)arg1;
- (void)updateTrackingAreas;
- (void)awakeFromNib;
- (void)addTracker;
- (void)removeTracker;
- (void)drawBackgroundInClipRect:(struct CGRect)arg1;
- (struct CGRect)frameOfOutlineCellAtRow:(long long)arg1;
- (void)dealloc;

@end


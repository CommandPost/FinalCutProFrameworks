//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LKOutlineView.h"

@interface VHOutlineView : LKOutlineView
{
    struct CGRect lastCachedRect;
    long long lastCachedRectRow;
    long long resizingRow;
    double resizingRowHeight;
    double startingHeight;
    struct CGPoint startingLocation;
    struct CGPoint oldClipOrigin;
    struct _VHOutlineFlags myOutlineFlags;
    BOOL drawDividers;
    BOOL acceptFirstMouse;
}

+ (unsigned long long)defaultFocusRingType;
- (unsigned long long)draggingSourceOperationMaskForLocal:(BOOL)arg1;
- (void)_variableHeightInit;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (void)setDataSource:(id)arg1;
- (void)getCachedRow:(long long *)arg1 origin:(double *)arg2 forSeekingToOrigin:(double)arg3;
- (void)getCachedRow:(long long *)arg1 origin:(double *)arg2 forSeekingToRow:(long long)arg3;
- (BOOL)getCachedRect:(struct CGRect *)arg1 forRow:(long long)arg2;
- (void)cacheRow:(long long)arg1 withRect:(struct CGRect)arg2;
- (void)beginLayoutChange;
- (void)endLayoutChange;
- (long long)rowAtPoint:(struct CGPoint)arg1;
- (struct _NSRange)rowsInRect:(struct CGRect)arg1;
- (double)verticalOriginForRow:(long long)arg1;
- (struct CGRect)rectOfRow:(long long)arg1;
- (struct CGRect)frameOfCellAtColumn:(long long)arg1 row:(long long)arg2;
- (struct CGRect)_frameOfOutlineCellAtRow:(long long)arg1;
- (void)tile;
- (void)sizeToFit;
- (void)setDrawDividers:(BOOL)arg1;
- (BOOL)drawDividers;
- (void)drawRect:(struct CGRect)arg1;
- (double)rowHeight:(long long)arg1;
- (struct CGRect)_dividerRectOfRow:(long long)arg1;
- (void)mouseDown:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)resetCursorRects;
- (void)appWillBecomeActive:(id)arg1;
- (void)reenableAcceptFirstMouse;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (BOOL)needsPanelToBecomeKey;
- (id)menuForEvent:(id)arg1;

@end

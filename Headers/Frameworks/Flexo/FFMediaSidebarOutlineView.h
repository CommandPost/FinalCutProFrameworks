//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LKOutlineView.h"

__attribute__((visibility("hidden")))
@interface FFMediaSidebarOutlineView : LKOutlineView
{
}

- (id)menuForEvent:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)highlightSelectionInClipRect:(struct CGRect)arg1;
- (id)_selectionGradient;
- (struct CGRect)frameOfCellAtColumn:(long long)arg1 row:(long long)arg2;
- (struct CGRect)frameOfOutlineCellAtRow:(long long)arg1;
- (BOOL)_hasSections;
- (id)preparedCellAtColumn:(long long)arg1 row:(long long)arg2;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)_handleFocusChanged:(id)arg1;
- (BOOL)isOpaque;
- (void)dealloc;
- (void)awakeFromNib;

@end

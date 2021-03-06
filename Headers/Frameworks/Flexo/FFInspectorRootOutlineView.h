//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSOutlineView.h>

@protocol FFInspectorOutlineViewDragging;

__attribute__((visibility("hidden")))
@interface FFInspectorRootOutlineView : NSOutlineView
{
    id <FFInspectorOutlineViewDragging> _inspectorOutlineViewDraggingDelegate;
}

@property(nonatomic) id <FFInspectorOutlineViewDragging> inspectorOutlineViewDraggingDelegate; // @synthesize inspectorOutlineViewDraggingDelegate=_inspectorOutlineViewDraggingDelegate;
- (BOOL)validateProposedFirstResponder:(id)arg1 forEvent:(id)arg2;
- (void)draggingEnded:(id)arg1;
- (void)draggingExited:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)init;

@end


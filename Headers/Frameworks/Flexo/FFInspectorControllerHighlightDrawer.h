//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Flexo/FFInspectorControllerUpdateDrawer.h>

@class FFInspectorControllerBaseHighlightDrawer;
@protocol FFInspectorControllerSegmentedDrawing, FFInspectorControllerSegmentedInsertionDrawing;

__attribute__((visibility("hidden")))
@interface FFInspectorControllerHighlightDrawer : FFInspectorControllerUpdateDrawer
{
    FFInspectorControllerBaseHighlightDrawer *_baseHighlightDrawer;
    long long _updateCount;
    BOOL _useInactiveSelectionState;
    unsigned long long _draggingDropInsertionIndex;
}

@property(nonatomic) unsigned long long draggingDropInsertionIndex; // @synthesize draggingDropInsertionIndex=_draggingDropInsertionIndex;
@property(nonatomic) BOOL useInactiveSelectionState; // @synthesize useInactiveSelectionState=_useInactiveSelectionState;
- (void)endUpdates;
- (void)beginUpdates;
@property(nonatomic) BOOL draggingDropInsertionEnabled;
@property(nonatomic) BOOL draggingDropOnEnabled;
@property(nonatomic) BOOL selectionEnabled;
@property(retain, nonatomic) id <FFInspectorControllerSegmentedInsertionDrawing> draggingDropInsertionDrawer;
@property(retain, nonatomic) id <FFInspectorControllerSegmentedDrawing> draggingDropOnDrawer;
@property(retain, nonatomic) id <FFInspectorControllerSegmentedDrawing> inactiveSelectionDrawer;
@property(retain, nonatomic) id <FFInspectorControllerSegmentedDrawing> selectionDrawer;
- (void)dealloc;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import <Flexo/FFInspectorControllerDataSource-Protocol.h>

@class NSMapTable, PCWeakPointerValue, PIBuildContext;
@protocol FFInspectorControllerRootDelegate, FFInspectorControllerSegmentedDrawing;

__attribute__((visibility("hidden")))
@interface FFInspectorController : NSViewController <FFInspectorControllerDataSource>
{
    PIBuildContext *_context;
    PCWeakPointerValue *_rootDelegate;
    id <FFInspectorControllerSegmentedDrawing> _backgroundDrawer;
    id <FFInspectorControllerSegmentedDrawing> _highlightDrawer;
    BOOL _childCacheEnabled;
    NSMapTable *_childCacheMap;
}

@property(nonatomic) BOOL childCacheEnabled; // @synthesize childCacheEnabled=_childCacheEnabled;
@property(retain, nonatomic) id <FFInspectorControllerSegmentedDrawing> highlightDrawer; // @synthesize highlightDrawer=_highlightDrawer;
@property(retain, nonatomic) id <FFInspectorControllerSegmentedDrawing> backgroundDrawer; // @synthesize backgroundDrawer=_backgroundDrawer;
@property(readonly, nonatomic) PIBuildContext *context; // @synthesize context=_context;
- (void)updateControllerEnableState;
- (void)updateController;
- (id)accessibilityControlName;
- (BOOL)supportsDraggingOwner:(id)arg1;
- (id)draggingOwner;
- (id)selectionOwner;
- (void)setEnableState:(unsigned int)arg1;
- (unsigned int)defaultExpandState;
- (BOOL)isExpandable;
- (id)childAtIndex:(long long)arg1;
- (long long)numberOfChildren;
- (BOOL)supportsChildren;
- (id)segmentPaddingForDrawSegment:(id)arg1;
- (BOOL)hasSegmentPadding;
- (void)recalculateNumberOfDrawSegments;
- (unsigned long long)numberOfDrawSegments;
- (id)newSegmentDrawerForSegmentIndex:(unsigned long long)arg1 drawer:(id)arg2;
- (void)setAccessibilityHelpStringUsingTag:(const char *)arg1 forObject:(id)arg2;
- (void)setAccessibilityHelpString:(id)arg1 forObject:(id)arg2;
- (void)clearChildCache;
- (id)cachedChildAtIndex:(long long)arg1;
- (void)setCachedChild:(id)arg1 atIndex:(long long)arg2;
- (BOOL)validateProposedFirstResponder:(id)arg1 forEvent:(id)arg2;
- (double)viewHeight;
- (void)viewDidLoad;
@property(nonatomic) id <FFInspectorControllerRootDelegate> rootDelegate;
- (void)dealloc;
- (id)initWithContext:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)init;

@end


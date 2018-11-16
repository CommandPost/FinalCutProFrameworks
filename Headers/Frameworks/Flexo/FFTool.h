//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSResponder.h"

@interface FFTool : NSResponder
{
    id _currentTarget;
}

+ (id)toolbarFacet;
+ (id)cursor;
+ (id)toolTip;
+ (id)groups;
+ (id)displayName;
+ (BOOL)isToolForTLKEventHandler:(id)arg1;
+ (id)TLKEventHandlerID;
- (id)matchWindow;
- (id)playerAccessoryView;
- (id)playerFooterView;
- (BOOL)allowsEffectOSCs;
- (BOOL)allowInspectorToTrackSelection;
- (void)selectedItemsChanged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (BOOL)editsItem:(id)arg1 target:(id)arg2 event:(id)arg3;
- (BOOL)handlesItem:(id)arg1 target:(id)arg2 event:(id)arg3;
- (BOOL)supportsMultipleSelection;
- (BOOL)skims;
- (void)didMouseDownOnCanvas:(id)arg1 target:(id)arg2;
- (BOOL)hitTest:(id)arg1;
- (BOOL)handlesSelection;
- (void)resignActiveTool;
- (void)becomeActiveTool;
- (void)setCurrentTarget:(id)arg1;
- (id)currentTarget;
- (void)cursorUpdate:(id)arg1;
- (void)didRemoveAsHandlerForTimeline:(id)arg1;
- (void)willRemoveAsHandlerForTimeline:(id)arg1;
- (void)willSetAsHandlerForTimeline:(id)arg1;
- (id)TLKEventHandlerForTimeline:(id)arg1;

@end


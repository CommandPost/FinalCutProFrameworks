//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Ozone/OZProViewModule.h>

@class NSView, NSWindow, OZPlaylineView, OZTimelineCurveEditorModule, OZTimingControlModule;

@interface OZMainTimingModule : OZProViewModule
{
    NSView *_timingControlView;
    NSView *_timingMainView;
    OZTimingControlModule *_timingControlModule;
    OZTimelineCurveEditorModule *_timelineCurveEditorModule;
    OZPlaylineView *_playlineView;
    NSWindow *_playlineWindow;
    char _viewStateOnHide[3];
}

@property(readonly) OZPlaylineView *playlineView; // @synthesize playlineView=_playlineView;
@property(readonly) OZTimelineCurveEditorModule *timelineCurveEditorModule; // @synthesize timelineCurveEditorModule=_timelineCurveEditorModule;
@property(readonly) OZTimingControlModule *timingControlModule; // @synthesize timingControlModule=_timingControlModule;
- (BOOL)canBeCollapsed:(id)arg1;
- (void)togglePaneWithAnimation:(long long)arg1;
- (void)fitInWindow:(id)arg1;
- (void)zoomTimelineOut:(id)arg1;
- (void)zoomTimelineIn:(id)arg1;
- (void)resetDisplayRangeToProjectDuration:(id)arg1;
- (void)resetDisplayRangeToPlayRange:(id)arg1;
- (double)getSplitViewDividerPosition;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)setSplitViewDividerPositions:(double)arg1;
- (id)timelineModule;
- (BOOL)wantsFooterBar;
- (void)module:(id)arg1 willRemoveSubmodule:(id)arg2;
- (void)module:(id)arg1 didAddSubmodule:(id)arg2;
- (void)moduleViewWillBeRemoved:(id)arg1;
- (void)moduleViewWasInstalled:(id)arg1;
- (void)viewDidLoad;
- (void)willHide;
- (void)willShow;
- (void)saveViewVisibilityState;
- (BOOL)shouldToggleTimelineInstead;
- (void)moduleDidUnhide;
- (void)moduleDidHide;
- (struct CGSize)viewMaxSize;
- (struct CGSize)viewMinSize;
- (BOOL)wantsHeaderBar;
- (void)dealloc;
- (id)init;

@end


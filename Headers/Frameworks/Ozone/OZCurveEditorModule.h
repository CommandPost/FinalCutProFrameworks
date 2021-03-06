//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Ozone/OZProViewModule.h>

@class NSBox, NSMenuItem, OZMoCurveEditorCtrl, OZTimelineModule, OZTimingVerticalSplitView;

@interface OZCurveEditorModule : OZProViewModule
{
    OZMoCurveEditorCtrl *_pCurveEditor;
    OZTimingVerticalSplitView *_pSplitView;
    NSBox *_pLeftHeaderView;
    NSBox *_pRightHeaderView;
    NSMenuItem *_keyEquivalentMenuItem;
    OZTimelineModule *_pTimelineModule;
    BOOL _togglingCurveEditor;
}

@property(readonly) OZTimingVerticalSplitView *pSplitView; // @synthesize pSplitView=_pSplitView;
@property(readonly) BOOL togglingCurveEditor; // @synthesize togglingCurveEditor=_togglingCurveEditor;
@property(nonatomic) OZTimelineModule *timelineModule; // @synthesize timelineModule=_pTimelineModule;
@property(readonly) OZMoCurveEditorCtrl *curveEditor; // @synthesize curveEditor=_pCurveEditor;
- (void)setDividerPosition:(double)arg1;
- (void)magnifyWithEvent:(id)arg1;
- (void)rotateWithEvent:(id)arg1;
- (id)timeAxis;
- (void)didToggleTimeline:(BOOL)arg1;
- (void)didToggleCurveEditor;
- (void)willToggleCurveEditor;
- (void)showChannelInCurveEditor:(struct OZChannelBase *)arg1;
- (void)moduleViewWillBeRemoved:(id)arg1;
- (void)moduleViewWasInstalled:(id)arg1;
- (void)viewDidResize;
- (void)windowWillClose:(id)arg1;
- (BOOL)windowShouldClose:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)paste:(id)arg1;
- (void)cut:(id)arg1;
- (void)copy:(id)arg1;
- (void)viewDidLoad;
- (struct CGSize)viewMaxSize;
- (struct CGSize)viewMinSize;
- (BOOL)wantsHeaderBar;
- (_Bool)scrubbing;
- (unsigned int)keyEquivalentModifierMask;
- (id)keyEquivalent;
- (void)notify:(unsigned int)arg1;
- (void)moduleDidUnhide;
- (void)moduleDidHide;
- (id)label;
- (BOOL)isViewOrderedBelow;
- (id)init;

@end


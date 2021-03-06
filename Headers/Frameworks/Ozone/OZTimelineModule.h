//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Ozone/OZProViewModule.h>

#import <Ozone/OZTimeAxisFrameChangedTarget-Protocol.h>
#import <Ozone/OZTimeAxisRangeSelect-Protocol.h>
#import <Ozone/OZTimelineLayerControllerIF-Protocol.h>

@class LKSegmentedControl, LKSplitView, NSMenu, NSMenuItem, NSString, NSView, OZBorderedView, OZTimeAxis, OZTimelineLayerCoordinator, OZTimelinePasteSpecialPanel, OZTimingControlModule, OZTimingCoordinator, OZTimingMarkers, OZTimingVerticalSplitView;

@interface OZTimelineModule : OZProViewModule <OZTimeAxisRangeSelect, OZTimeAxisFrameChangedTarget, OZTimelineLayerControllerIF>
{
    OZTimingMarkers *_timingMarkers;
    OZTimeAxis *_timeAxis;
    OZTimingVerticalSplitView *_verticalSplit;
    LKSplitView *_leftSplit;
    LKSplitView *_rightSplit;
    LKSegmentedControl *_resetRangeButton;
    LKSegmentedControl *_snappingControl;
    LKSegmentedControl *_showKeyframes;
    id _currentFrameField;
    NSMenu *_menu;
    NSMenu *_objectMenu;
    NSMenu *_objectBlendMenu;
    NSMenu *_audioMenu;
    NSMenu *_audioObjectMenu;
    NSMenuItem *_keyEquivalentMenuItem;
    LKSegmentedControl *_layerListTools;
    struct OZTimelineState *_timelineState;
    struct PCTimeRange *_totalRange;
    struct PCTimeRange *_rangeSelect;
    struct PCTimeRange *_loadedDisplayRange;
    OZTimingCoordinator *_timingCoordinator;
    OZTimelineLayerCoordinator *_layerCoordinators[2];
    NSView *_leftViews[2];
    NSView *_rightViews[2];
    OZTimelinePasteSpecialPanel *_pasteSpecialPanel;
    struct OZAudioMixer *_audioMixer;
    CDStruct_1b6d18a9 _snappedTime;
    BOOL _firstLoad;
    BOOL _isSnapped;
    OZTimingControlModule *_timingControlModule;
    BOOL _externalModuleIsSettingDividerPosition;
    OZBorderedView *_timelineButtonView;
    OZBorderedView *_rightSplitHeader;
}

@property(readonly, nonatomic) OZTimeAxis *timeAxis; // @synthesize timeAxis=_timeAxis;
@property(readonly, nonatomic) OZTimingCoordinator *timingCoordinator; // @synthesize timingCoordinator=_timingCoordinator;
@property(nonatomic) OZTimingControlModule *timingControlModule; // @synthesize timingControlModule=_timingControlModule;
@property(nonatomic) BOOL externalModuleIsSettingDividerPosition; // @synthesize externalModuleIsSettingDividerPosition=_externalModuleIsSettingDividerPosition;
- (BOOL)audioTimelineVisible;
- (BOOL)imageTimelineVisible;
- (void)didToggleTimeline:(BOOL)arg1;
- (id)getTimelineView;
- (void)magnifyWithEvent:(id)arg1;
- (void)keyDown:(id)arg1;
- (CDStruct_1b6d18a9)getCurrentTime;
- (void)currentFrameChanged;
- (void)nudgeRightBig:(id)arg1;
- (void)nudgeLeftBig:(id)arg1;
- (void)nudgeDownBig:(id)arg1;
- (void)nudgeUpBig:(id)arg1;
- (void)nudgeRight:(id)arg1;
- (void)nudgeLeft:(id)arg1;
- (void)nudgeDown:(id)arg1;
- (void)nudgeUp:(id)arg1;
- (BOOL)scrubbing;
- (void)timeDisplayRangeModified;
- (void)setTimingCoordinator:(id)arg1;
- (void)toggleSnapping:(id)arg1;
- (BOOL)isSnappedAtTime:(CDStruct_1b6d18a9 *)arg1;
- (BOOL)isSnapping;
- (void)setSnapped:(BOOL)arg1 atTime:(CDStruct_1b6d18a9)arg2;
- (void)findSnaps:(vector_f7e3fd5f *)arg1 forceAllVisible:(BOOL)arg2;
- (void)resetDisplayRangeToProjectDuration:(id)arg1;
- (void)resetDisplayRangeToPlayRange:(id)arg1;
- (void)resetDisplayRangeToggle:(id)arg1;
- (void)toggleShowKeyframes:(id)arg1;
- (void)renderSelectedRange:(id)arg1;
- (void)splitLayers:(id)arg1;
- (void)insertTime:(id)arg1;
- (void)selectAll:(id)arg1;
- (void)rippleDelete:(id)arg1;
- (void)delete:(id)arg1;
- (void)pasteSpecialOverwrite;
- (void)pasteSpecialInsert;
- (void)restoreSelection:(list_0ac58641 *)arg1 forScene:(struct OZScene *)arg2;
- (void)saveSelection:(list_0ac58641 *)arg1 forScene:(struct OZScene *)arg2;
- (void)pasteSpecialReplace;
- (void)pasteSpecial:(id)arg1;
- (void)paste:(id)arg1;
- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
- (void)validatePasteSpecialCanInsert:(char *)arg1 canOverwrite:(char *)arg2 canReplace:(char *)arg3;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (const struct PCTimeRange *)getTimeRangeSelection;
- (void)setTimeRangeSelection:(const struct PCTimeRange *)arg1;
- (void)clearGlobalTimeRangeSelection;
- (void)timeRangeSelection:(const struct PCTimeRange *)arg1 done:(BOOL)arg2;
- (void)notify:(unsigned int)arg1;
- (void)moduleDidUnhide;
- (void)moduleDidHide;
- (void)postAudioPrefetchInstruction:(CDStruct_1b6d18a9)arg1;
- (double)splitView:(id)arg1 constrainMaxCoordinate:(double)arg2 ofSubviewAt:(int)arg3;
- (double)splitView:(id)arg1 constrainMinCoordinate:(double)arg2 ofSubviewAt:(int)arg3;
- (void)splitView:(id)arg1 resizeSubviewsWithOldSize:(struct CGSize)arg2;
- (id)splitView;
- (void)splitViewDidResizeSubviews:(id)arg1;
- (void)splitViewWillResizeSubviews:(id)arg1;
- (double)dividerThickness;
- (double)dividerPosition;
- (void)setDividerPosition:(double)arg1;
- (void)setDirtyEntireLayerListView:(BOOL)arg1;
- (void)copyVerticalLayoutFrom:(id *)arg1 to:(id *)arg2;
- (void)updateVerticalZoomPopUp;
- (void)updateVerticalZoomButton;
- (void)updateVerticalZoom:(double)arg1;
- (double)verticalZoom;
- (void)modifierTypesTargetAction:(id)arg1;
- (void)setVisibilityOfImageTimeline:(BOOL)arg1 audioTimeline:(BOOL)arg2 curveEditor:(BOOL)arg3;
- (void)timelineContentsTargetAction:(id)arg1;
- (void)setShowKeyframes:(BOOL)arg1;
- (BOOL)isShowingKeyframes;
- (void)updateLayerListTools_;
- (void)removeTimeline:(int)arg1;
- (void)addTimeline:(int)arg1;
- (void)setTimeline:(int)arg1 displayed:(BOOL)arg2;
- (const struct PCTimeRange *)getTotalRange;
- (unsigned int)keyEquivalentModifierMask;
- (id)keyEquivalent;
- (id)label;
- (void)updateMinusButton;
- (struct CGSize)viewMaxSize;
- (struct CGSize)viewMinSize;
- (void)update;
- (void)module:(id)arg1 willRemoveSubmodule:(id)arg2;
- (void)module:(id)arg1 didAddSubmodule:(id)arg2;
- (void)moduleViewWillBeRemoved:(id)arg1;
- (void)moduleViewWasInstalled:(id)arg1;
- (void)viewDidLoad;
- (void)setHorizontalZoomScroller:(id)arg1;
- (BOOL)wantsHeaderBar;
- (BOOL)isViewOrderedBelow;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


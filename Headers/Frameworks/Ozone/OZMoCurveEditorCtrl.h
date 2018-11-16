//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OZCurveEditorCtrl.h"

#import "NSMenuDelegate.h"
#import "NSSplitViewDelegate.h"

@class NSString, NSView, OZCurveEditorModule, OZMoCurveEditorAudioDelegate, OZTimeAxis, OZTimelineModule, OZTimingControlModule, OZTimingCoordinator, OZTimingMarkers;

@interface OZMoCurveEditorCtrl : OZCurveEditorCtrl <NSSplitViewDelegate, NSMenuDelegate>
{
    OZCurveEditorModule *_pOwner;
    OZTimingMarkers *_timingMarkers;
    OZTimeAxis *_timeAxis;
    NSView *_curveEditorScrollbarView;
    OZTimingCoordinator *_timingCoordinator;
    id _currentFrameField;
    _Bool _isLoading;
    struct CGRect _loadedViewVolume;
    struct OZCurveEditorState *_curveEditorState;
    OZMoCurveEditorAudioDelegate *_pAudioDelegate;
    OZTimelineModule *_timelineModule;
    OZTimingControlModule *_timingControlModule;
    BOOL _externalModuleIsSettingDividerPosition;
}

@property(nonatomic) OZTimeAxis *timeAxis; // @synthesize timeAxis=_timeAxis;
@property(nonatomic) OZTimingMarkers *timingMarkers; // @synthesize timingMarkers=_timingMarkers;
@property(nonatomic) OZTimingControlModule *timingControlModule; // @synthesize timingControlModule=_timingControlModule;
@property(nonatomic) OZTimelineModule *timelineModule; // @synthesize timelineModule=_timelineModule;
@property(readonly) NSView *curveEditorScrollbarView; // @synthesize curveEditorScrollbarView=_curveEditorScrollbarView;
@property(nonatomic) BOOL externalModuleIsSettingDividerPosition; // @synthesize externalModuleIsSettingDividerPosition=_externalModuleIsSettingDividerPosition;
@property(readonly) struct OZCurveEditorState *curveEditorState; // @synthesize curveEditorState=_curveEditorState;
@property(readonly) OZMoCurveEditorAudioDelegate *audioDelegate; // @synthesize audioDelegate=_pAudioDelegate;
- (BOOL)shouldConstrainToFrames;
- (void)showHideTimeAxis:(BOOL)arg1;
- (void)prepareForDraggingTab;
- (void)findSnaps:(vector_f7e3fd5f *)arg1 forceAllVisible:(BOOL)arg2;
- (double)splitView:(id)arg1 constrainMaxCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (double)splitView:(id)arg1 constrainMinCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (void)splitView:(id)arg1 resizeSubviewsWithOldSize:(struct CGSize)arg2;
- (void)splitViewDidResizeSubviews:(id)arg1;
- (double)dividerPosition;
- (void)magnifyGestureWithEvent:(id)arg1 andFactor:(double)arg2;
- (void)keyDown:(id)arg1;
- (void)currentViewVolumeChangedTo:(const struct CGRect *)arg1;
- (void)displayRangeChangedTo:(CDStruct_e83c9415)arg1;
- (void)notify:(unsigned int)arg1;
- (void)updateIfModifiedByBehaviors;
- (void)setAutoZoom:(id)arg1;
- (void)removeCurveSet:(id)arg1;
- (void)setTimeWindowOffset:(CDStruct_1b6d18a9)arg1;
- (void)setTimeWindowOrigin:(CDStruct_1b6d18a9)arg1 andDuration:(CDStruct_1b6d18a9)arg2;
- (void)resetDisplayRangeToProjectDuration:(id)arg1;
- (void)resetDisplayRangeToPlayRange:(id)arg1;
- (void)setDisplayRange:(CDStruct_e83c9415)arg1;
- (void)setPCDisplayRange:(struct PCTimeRange)arg1;
- (void)clearCustomCurveSet:(id)arg1;
- (void)setSnapToTime:(id)arg1;
- (void)setAutoPan:(id)arg1;
- (void)frameAll:(id)arg1;
- (void)setTrackID:(unsigned int)arg1;
- (void)menuSetTrackID:(id)arg1;
- (void)setShowAudio:(id)arg1;
- (void)paste:(id)arg1;
- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
- (_Bool)scrubbing;
- (void)update;
- (void)refreshClearListButton;
- (void)refreshFitButton;
- (void)updateUI;
- (void)animMenuResetChannel:(id)arg1;
- (BOOL)validateDefaultMenuItem:(id)arg1;
- (BOOL)validateKeyframeMenuItem:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (id)getOwnerModule;
- (id)currentFrameField;
- (struct OZDocument *)getOZDocument;
- (id)getMoCurveEditorView;
- (const struct OZTimeMarkerSet *)getTimeMarkersForScene;
- (void)setSelectedCurveSet:(id)arg1;
- (void)viewDidResize;
- (const struct PCTimeRange *)getTotalRange;
- (void)refreshAudioPopUp;
- (void)curveControl:(id)arg1;
- (void)snapshotChannels:(id)arg1;
- (void)refreshAudio;
- (void)viewDidLoad;
- (void)moduleViewWillBeRemoved;
- (void)moduleViewWasInstalled;
- (void)showHideAudio:(BOOL)arg1;
- (void)setupController;
- (void)createAutomaticCurveSets;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


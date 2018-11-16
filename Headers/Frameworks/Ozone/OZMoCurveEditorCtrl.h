//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OZCurveEditorCtrl.h"

#import "NSSplitViewDelegate.h"

@class NSView, OZCurveEditorModule, OZMoCurveEditorAudioDelegate, OZTimeAxis, OZTimelineModule, OZTimingControlModule, OZTimingCoordinator, OZTimingMarkers;

@interface OZMoCurveEditorCtrl : OZCurveEditorCtrl <NSSplitViewDelegate>
{
    OZCurveEditorModule *_pOwner;
    OZTimingMarkers *_timingMarkers;
    OZTimeAxis *_timeAxis;
    NSView *_curveEditorScrollbarView;
    OZTimingCoordinator *_timingCoordinator;
    id _currentFrameField;
    _Bool _isLoading;
    struct CGRect _loadedViewVolume;
    CDStruct_e83c9415 _loadedDisplayRange;
    struct OZCurveEditorState *_curveEditorState;
    OZMoCurveEditorAudioDelegate *_pAudioDelegate;
    OZTimelineModule *_timelineModule;
    OZTimingControlModule *_timingControlModule;
    BOOL _externalModuleIsSettingDividerPosition;
}

- (struct OZDocument *)currentOZDocument;
- (id)init;
- (id)retain;
- (void)release;
- (void)dealloc;
- (void)createAutomaticCurveSets;
- (void)setupController;
- (void)showHideAudio:(BOOL)arg1;
- (void)awakeFromNib;
- (void)refreshAudio;
- (void)snapshotChannels:(id)arg1;
- (void)curveControl:(id)arg1;
- (void)refreshAudioPopUp;
- (const struct PCTimeRange *)getTotalRange;
- (void)viewDidLoad;
- (void)viewDidResize;
- (void)setSelectedCurveSet:(id)arg1;
- (id)createAppDelegate;
- (struct OZScene *)getScene;
- (const struct OZTimeMarkerSet *)getTimeMarkersForScene;
- (id)getMoCurveEditorView;
- (struct OZDocument *)getOZDocument;
- (id)currentFrameField;
- (id)getOwnerModule;
- (BOOL)validateMenuItem:(id)arg1;
- (BOOL)validateKeyframeMenuItem:(id)arg1;
- (BOOL)validateDefaultMenuItem:(id)arg1;
- (void)animMenuResetChannel:(id)arg1;
- (void)updateUI;
- (void)refreshFitButton;
- (void)refreshClearListButton;
- (void)update;
- (_Bool)scrubbing;
- (void)cut:(id)arg1;
- (void)copy:(id)arg1;
- (void)paste:(id)arg1;
- (void)setShowAudio:(id)arg1;
- (void)menuSetTrackID:(id)arg1;
- (void)frameAll:(id)arg1;
- (void)setAutoPan:(id)arg1;
- (void)setSnapToTime:(id)arg1;
- (void)clearCustomCurveSet:(id)arg1;
- (void)setPCDisplayRange:(struct PCTimeRange)arg1;
- (void)setDisplayRange:(CDStruct_e83c9415)arg1;
- (void)resetDisplayRangeToPlayRange:(id)arg1;
- (void)resetDisplayRangeToProjectDuration:(id)arg1;
- (void)setTimeWindowOrigin:(CDStruct_1b6d18a9)arg1 andDuration:(CDStruct_1b6d18a9)arg2;
- (void)setTimeWindowOffset:(CDStruct_1b6d18a9)arg1;
- (void)removeCurveSet:(id)arg1;
- (void)setAutoZoom:(id)arg1;
- (void)updateIfModifiedByBehaviors;
- (void)notify:(unsigned int)arg1;
- (void)displayRangeChangedTo:(CDStruct_e83c9415)arg1;
- (void)currentViewVolumeChangedTo:(const struct CGRect *)arg1;
- (void)keyDown:(id)arg1;
- (void)magnifyGestureWithEvent:(id)arg1 andFactor:(double)arg2;
- (void)splitViewDidResizeSubviews:(id)arg1;
- (void)splitView:(id)arg1 resizeSubviewsWithOldSize:(struct CGSize)arg2;
- (double)splitView:(id)arg1 constrainMinCoordinate:(double)arg2 ofSubviewAt:(int)arg3;
- (double)splitView:(id)arg1 constrainMaxCoordinate:(double)arg2 ofSubviewAt:(int)arg3;
- (void)findSnaps:(vector_3e79211d *)arg1 forceAllVisible:(BOOL)arg2;
- (void)prepareForDraggingTab;
- (void)setDrawTimeMarkers:(BOOL)arg1;
- (void)showHideTimeAxis:(BOOL)arg1;
- (BOOL)shouldConstrainToFrames;
@property(nonatomic) OZTimeAxis *timeAxis; // @synthesize timeAxis=_timeAxis;
@property(nonatomic) OZTimingMarkers *timingMarkers; // @synthesize timingMarkers=_timingMarkers;
@property(nonatomic) OZTimingControlModule *timingControlModule; // @synthesize timingControlModule=_timingControlModule;
@property(nonatomic) OZTimelineModule *timelineModule; // @synthesize timelineModule=_timelineModule;
@property(readonly) NSView *curveEditorScrollbarView; // @synthesize curveEditorScrollbarView=_curveEditorScrollbarView;
@property(nonatomic) BOOL externalModuleIsSettingDividerPosition; // @synthesize externalModuleIsSettingDividerPosition=_externalModuleIsSettingDividerPosition;
@property(readonly) struct OZCurveEditorState *curveEditorState; // @synthesize curveEditorState=_curveEditorState;
@property(readonly) OZMoCurveEditorAudioDelegate *audioDelegate; // @synthesize audioDelegate=_pAudioDelegate;

@end


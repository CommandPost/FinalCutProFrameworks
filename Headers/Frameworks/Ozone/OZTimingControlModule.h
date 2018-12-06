//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Ozone/OZProViewModule.h>

@class LKPopUpButton, LKSplitView, LKZoomScroller, OZCurveEditorModule, OZMiniFooterView, OZMoCurveEditorAudioDelegate, OZMoCurveEditorView, OZTimelineModule;

@interface OZTimingControlModule : OZProViewModule
{
    LKZoomScroller *_horizontalZoomScroller;
    LKSplitView *_verticalSplit;
    OZMiniFooterView *_leftView;
    LKPopUpButton *_layerListSizePopUp;
    OZCurveEditorModule *_curveEditorModule;
    OZTimelineModule *_timelineModule;
    OZMoCurveEditorView *_curveEditorView;
    OZMoCurveEditorAudioDelegate *_curveEditorAudioDelegate;
    BOOL _externalModuleIsSettingDividerPosition;
    double _savedDividerPosition;
}

- (id)init;
- (void)dealloc;
- (BOOL)wantsHeaderBar;
- (void)_setupButtonGlyphs;
- (void)curveEditorDidSetDelegate;
- (void)awakeFromNib;
- (void)update;
- (struct CGSize)viewMinSize;
- (struct CGSize)viewMaxSize;
- (BOOL)isBackgroundGrabbable;
- (BOOL)isViewOrderedBelow;
- (void)refreshFitButton;
- (void)refreshClearListButton;
- (void)notify:(unsigned int)arg1;
- (void)updateVerticalZoomPopUp:(double)arg1;
- (void)layerListSize:(id)arg1;
- (void)frameAll:(id)arg1;
- (void)setAutoPan:(id)arg1;
- (void)setSnapToTime:(id)arg1;
- (void)clearCustomCurveSet:(id)arg1;
- (void)showHideAudio:(BOOL)arg1;
- (void)setShowAudio:(id)arg1;
- (void)menuSetTrackID:(id)arg1;
- (void)snapshotChannels:(id)arg1;
- (double)dividerThickness;
- (double)dividerPosition;
- (void)setDividerPosition:(double)arg1;
- (void)splitViewDidResizeSubviews:(id)arg1;
- (void)splitView:(id)arg1 resizeSubviewsWithOldSize:(struct CGSize)arg2;
- (double)splitView:(id)arg1 constrainMinCoordinate:(double)arg2 ofSubviewAt:(int)arg3;
- (double)splitView:(id)arg1 constrainMaxCoordinate:(double)arg2 ofSubviewAt:(int)arg3;
@property(nonatomic) OZTimelineModule *timelineModule; // @synthesize timelineModule=_timelineModule;
@property(nonatomic) OZCurveEditorModule *curveEditorModule; // @synthesize curveEditorModule=_curveEditorModule;
@property(nonatomic) BOOL externalModuleIsSettingDividerPosition; // @synthesize externalModuleIsSettingDividerPosition=_externalModuleIsSettingDividerPosition;
@property(readonly) LKZoomScroller *horizontalZoomScroller; // @synthesize horizontalZoomScroller=_horizontalZoomScroller;

@end


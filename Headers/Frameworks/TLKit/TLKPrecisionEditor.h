//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TLKit/TLKVisibleRectObserving-Protocol.h>

@class CALayer, TLKAbstractPrecisionEditorTrimBar, TLKEditorCloseView, TLKTimelineView;

@interface TLKPrecisionEditor : NSObject <TLKVisibleRectObserving>
{
    TLKEditorCloseView *_closeView;
    BOOL _wantsCloseButton;
    BOOL _trimBarNeedsUpdate;
    TLKTimelineView *_timelineView;
    CALayer *_dividerBar;
    TLKAbstractPrecisionEditorTrimBar *_trimBar;
    TLKTimelineView *_observedTimelineView;
}

@property(nonatomic) TLKTimelineView *observedTimelineView; // @synthesize observedTimelineView=_observedTimelineView;
@property(nonatomic) BOOL trimBarNeedsUpdate; // @synthesize trimBarNeedsUpdate=_trimBarNeedsUpdate;
@property(retain, nonatomic) TLKAbstractPrecisionEditorTrimBar *trimBar; // @synthesize trimBar=_trimBar;
@property(retain, nonatomic) CALayer *dividerBar; // @synthesize dividerBar=_dividerBar;
@property(nonatomic) BOOL wantsCloseButton; // @synthesize wantsCloseButton=_wantsCloseButton;
@property(readonly, nonatomic) TLKTimelineView *timelineView; // @synthesize timelineView=_timelineView;
- (id)newPrecisionEditorDataSyncOperation;
- (void)schedulePrecisionEditorDataSyncOperationForReloadOperation:(id)arg1;
- (void)_reloadOperationWillBegin:(id)arg1;
- (void)reloadTransitionItemIfNeeded;
- (void)_closePrecisionEditorIfNeededAfterReload;
- (void)_timelineViewDidReload:(id)arg1;
- (void)updatePrecisionEditorTrimBar;
- (int)editorState;
- (void)timelineView:(id)arg1 didChangeVisibleRect:(struct CGRect)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)stopObservingTimelineView:(id)arg1;
- (void)startObservingTimelineView:(id)arg1;
- (void)closePrecisionEditor;
- (id)itemInfoAfterEditPoint;
- (id)itemInfoBeforeEditPoint;
- (id)containerInfo;
- (int)precisionEditorState;
- (void)discardCloseButton;
- (void)positionCloseButtonInTopLeftOfVisibleRect;
- (void)addCloseButtonToTimelineViewSubviewsIfNeeded;
- (void)createCloseButton;
- (void)createCloseButtonIfNeeded;
- (void)updateCloseButton;
- (void)updateCloseButtonIfNeeded;
- (void)_finishPrecisionEditorLayoutWithFinalState:(int)arg1 savedVisibleRectState:(id)arg2;
- (void)exitPrecisionEditor;
- (void)_getPrecisionEditorLayoutContext:(id *)arg1 referenceTime:(CDStruct_1b6d18a9 *)arg2 forContainer:(id)arg3 leftItem:(id)arg4 rightItem:(id)arg5;
- (void)enterPrecisionEditorWithLeftItem:(id)arg1 rightItem:(id)arg2 transition:(id)arg3;
- (void)dealloc;
- (id)initWithTimelineView:(id)arg1;

@end


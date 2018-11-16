//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CALayer, TLKAbstractPrecisionEditorTrimBar, TLKTimelineView;

@interface TLKPrecisionEditor : NSObject
{
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
@property(readonly, nonatomic) TLKTimelineView *timelineView; // @synthesize timelineView=_timelineView;
- (void)_timelineDatabaseDidReload:(id)arg1;
- (void)_reloadTransitionItemIfNeeded;
- (void)_closePrecisionEditorIfNeededAfterReload;
- (void)_timelineViewDidReload:(id)arg1;
- (void)updatePrecisionEditorTrimBar;
- (int)editorState;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)stopObservingTimelineView:(id)arg1;
- (void)startObservingTimelineView:(id)arg1;
- (void)closePrecisionEditor;
- (id)itemInfoAfterEditPoint;
- (id)itemInfoBeforeEditPoint;
- (id)containerInfo;
- (int)precisionEditorState;
- (void)dealloc;
- (id)initWithTimelineView:(id)arg1;

@end


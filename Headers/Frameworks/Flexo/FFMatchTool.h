//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFTool.h>

@class FFEventFilter, LKButton, LKTextField, NSView;

@interface FFMatchTool : FFTool
{
    FFEventFilter *_matchEventFilter;
    id _delegate;
    float _canvasZoomFactor;
    struct CGPoint _canvasOrigin;
    BOOL _viewerWasDominant;
    int _displayAreaMode;
    NSView *_matchFooterView;
    LKTextField *_matchFooterText;
    NSView *_matchAccessoryView;
    LKTextField *_matchAccessoryTitle;
    LKButton *_matchOkButton;
    struct {
        unsigned int isTrackingUndoRedoChanges:1;
        unsigned int isSelectionInitialized:1;
        unsigned int isReferenceChanged:1;
        unsigned int wantsToResignToolUponTransaction:1;
    } _state;
    long long _matchState;
}

+ (BOOL)terminatesModalModeAsCompletion;
+ (BOOL)globalTransactionResignsTool;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
@property BOOL viewerWasDominant; // @synthesize viewerWasDominant=_viewerWasDominant;
@property(nonatomic) int displayAreaMode; // @synthesize displayAreaMode=_displayAreaMode;
@property(nonatomic) struct CGPoint canvasOrigin; // @synthesize canvasOrigin=_canvasOrigin;
@property(nonatomic) float canvasZoomFactor; // @synthesize canvasZoomFactor=_canvasZoomFactor;
@property(retain, nonatomic) id delegate; // @synthesize delegate=_delegate;
- (BOOL)_shouldCloseOnUndo;
- (void)matchCancel:(id)arg1;
- (void)matchDone:(id)arg1;
- (void)_enableApplyButton:(BOOL)arg1;
- (id)playerAccessoryView;
- (void)footerNeedsUpdate:(id)arg1;
- (id)playerFooterView;
- (BOOL)isMatchTool;
- (BOOL)isModalTool;
- (id)checkForMatchEvents:(id)arg1;
- (void)setSelectedItems:(id)arg1 contextTime:(CDStruct_1b6d18a9)arg2;
- (void)referenceChanged:(id)arg1;
- (void)_stopObservingUndoRedoChangeNotifications;
- (void)_startObservingUndoRedoChangeNotifications;
- (void)handleNotification:(id)arg1;
- (void)handleFFNotification:(id)arg1;
- (void)cancelledMatchOnSelection;
- (void)completedMatchOnSelection;
- (void)terminateModalMode;
- (BOOL)skims;
- (BOOL)allowsEffectOSCs;
- (BOOL)allowInspectorToTrackSelection;
- (void)selectedItemsChanged:(id)arg1;
- (void)resignActiveTool;
- (void)becomeActiveTool;
@property(getter=isReferenceChanged) BOOL referenceChanged; // @dynamic referenceChanged;

@end


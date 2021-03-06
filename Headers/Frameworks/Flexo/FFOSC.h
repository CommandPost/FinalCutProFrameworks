//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSResponder.h>

@class FFPlayerVideoModule, NSView, NSWindow;

@interface FFOSC : NSResponder
{
    FFPlayerVideoModule *_playerVideoModule;
    BOOL _selectionBased;
    BOOL _observingPlayer;
    NSView *_overlayView;
    NSWindow *_overlayWindow;
    NSWindow *_observingPlayerWindow;
    NSView *_observingPlayerView;
    BOOL _orderOut;
    struct PCProcrastinatedDispatch_t _updateViewVisibilityProcrastDisp;
}

+ (void)renderSpecificOSC:(id)arg1 renderController:(id)arg2 drawProperties:(id)arg3 shouldClearBackground:(BOOL)arg4;
+ (BOOL)enableMetalOSCs;
- (void)updateUIForItemSelections:(id)arg1;
- (BOOL)oscIsFirstOSC;
- (BOOL)oscDrawsAboveOtherOSCs;
- (BOOL)oscNeedsBottomLaneOrdering;
- (BOOL)oscNeedsLaneOrdering;
- (void)OSCSafelyHideView:(id)arg1 shouldHide:(BOOL)arg2;
- (BOOL)isCropOSC;
- (void)enableOverlayWindowForNoRangeOverlap;
- (void)removeOverlayWindowForNoRangeOverlap;
- (id)getCursor;
- (BOOL)acceptPassiveEvent:(id)arg1;
- (void)setPlayerNeedsOSCRedisplay;
- (id)accessibilityFocusedUIElement;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (BOOL)accessibilityIsIgnored;
- (void)accessibilityPerformAction:(id)arg1;
- (id)accessibilityActionDescription:(id)arg1;
- (id)accessibilityActionNames;
- (void)accessibilitySetValue:(id)arg1 forAttribute:(id)arg2;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (BOOL)isAccessorized;
- (void)_playerViewFrameChanged:(id)arg1;
- (void)_playerWindowDidEndSheet:(id)arg1;
- (void)_playerWindowWillBeginSheet:(id)arg1;
- (BOOL)overlayViewIsSet;
- (void)setOverlayView:(id)arg1;
- (void)removeObserversForPlayer;
- (void)addObserversForPlayer;
- (void)_setupOverlayWindow;
- (void)setKeyframeAddFromKeyframeAtCurrentPosition;
- (void)orderOutWindow:(id)arg1;
- (void)nudgeLeftMany:(id)arg1;
- (void)nudgeRightMany:(id)arg1;
- (void)nudgeDownMany:(id)arg1;
- (void)nudgeUpMany:(id)arg1;
- (void)nudgeLeft:(id)arg1;
- (void)nudgeRight:(id)arg1;
- (void)nudgeDown:(id)arg1;
- (void)nudgeUp:(id)arg1;
- (void)selectNone:(id)arg1;
- (void)selectAll:(id)arg1;
- (void)pasteAsPlainText:(id)arg1;
- (void)paste:(id)arg1;
- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
- (id)targetForAction:(SEL)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (id)menuForEvent:(id)arg1;
- (void)keyDown:(id)arg1;
- (BOOL)containsTime:(CDStruct_1b6d18a9)arg1 forContainer:(id)arg2 useEntireTransitionRange:(BOOL)arg3;
- (void)channelChanged:(id)arg1;
- (id)playerView;
- (struct CGPoint)mousePointInView:(struct CGPoint)arg1;
- (BOOL)shouldDrawUsingDrawProperties:(id)arg1;
- (BOOL)isAvailableForDestVideo:(id)arg1;
- (BOOL)isAvailableForMultiAngleState:(BOOL)arg1;
- (BOOL)isAvailableDuringPlayback;
- (BOOL)supportsTool:(Class)arg1;
- (void)renderOSC:(id)arg1 drawProperties:(id)arg2 shouldClearBackground:(BOOL)arg3;
- (id)newPrimitivesForContext:(id)arg1 userInfo:(id)arg2;
- (BOOL)supportsMetalRendering;
- (void)setSelectionBased:(BOOL)arg1;
- (BOOL)isToolBased;
- (BOOL)isSelectionBased;
- (void)drawRect:(struct CGRect)arg1 toContext:(struct _CGLContextObject *)arg2 drawProperties:(id)arg3;
- (BOOL)displayingMessage;
- (BOOL)needsOtherOSCs;
- (void)addDrawProperties:(id)arg1 forTime:(CDStruct_1b6d18a9)arg2 forContainer:(id)arg3 viewBounds:(struct CGRect)arg4;
- (BOOL)passCommonOSCDrawProperties;
- (BOOL)oscHandlesScroll;
- (BOOL)removesOverlayViewWhenNotActive;
- (BOOL)needsCustomFieldEditor;
- (BOOL)vendsAnOverlayWindow;
- (BOOL)overlayCanBecomeKey;
- (void)resignActiveOSC;
- (void)becomeActiveOSC;
- (BOOL)hitTest:(struct CGPoint)arg1;
- (struct CGSize)maxSize;
- (struct CGSize)minSize;
- (void)setPlayerVideoModule:(id)arg1;
- (id)playerVideoModule;
- (void)dealloc;
- (void)removeOverlayWindowForDealloc;
- (id)overlayWindowCreateIfNeeded:(BOOL)arg1;
- (id)overlayWindow;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFResponderLayer.h>

#import "FFCurveEditorEffectDelegate.h"

@class CHChannelBase, FFAnchoredTimelineModule, FFCurveEditorLayer, FFEffect, NSMutableArray;

__attribute__((visibility("hidden")))
@interface FFCurvesLayer : FFResponderLayer <FFCurveEditorEffectDelegate>
{
    id _item;
    NSMutableArray *_curveEditorLayers;
    NSMutableArray *_backgroundLayers;
    BOOL _isModelLayer;
    BOOL _isMouseDown;
    BOOL _topToBottom;
    BOOL _splitEdit;
    BOOL _isObserving;
    BOOL _updateLayers;
    BOOL _reordering;
    BOOL _didReorder;
    struct CGPoint _lastReorderedPos;
    struct CGPoint _lastMousePos;
    FFCurveEditorLayer *_lastReorderedLayer;
    NSMutableArray *_reorderedEffectList;
    FFEffect *_defaultEffect;
    CHChannelBase *_defaultChannel;
    BOOL _isOverlay;
    FFAnchoredTimelineModule *_timeline;
}

- (id)initWithObject:(id)arg1 topToBottom:(BOOL)arg2 timeline:(id)arg3;
- (id)initWithItem:(id)arg1 timeline:(id)arg2;
- (void)dealloc;
- (void)addBackgroundLayer;
- (void)removeBackgroundLayer;
- (double)requiredHeight;
- (void)updateHeight;
- (void)expandLayer:(id)arg1;
- (void)collapseLayer:(id)arg1;
- (void)layerDidBecomeVisible:(BOOL)arg1;
- (void)updateCurvesLayout:(id)arg1;
- (void)layoutSublayers;
- (id)selectedLayer;
- (id)selectedLayers;
- (void)becomeFocusOwner;
- (void)resignFocusOwner;
- (id)layerAtPoint:(struct CGPoint)arg1 ignoreLayer:(id)arg2;
- (id)contextMenuForPart:(id)arg1;
- (void)displayMenuForPart:(id)arg1 atPoint:(struct CGPoint)arg2;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)deselectAll:(id)arg1;
- (void)delete:(id)arg1;
- (void)addKeyframe:(id)arg1;
- (void)nextKeyframe:(id)arg1;
- (void)previousKeyframe:(id)arg1;
- (void)nudgeUp:(id)arg1;
- (void)nudgeDown:(id)arg1;
- (void)nudgeLeft:(id)arg1;
- (void)nudgeRight:(id)arg1;
- (void)_effectStackChanged;
- (void)_effectsChanged;
- (id)subpartAtPoint:(struct CGPoint)arg1;
- (BOOL)mouseDown:(id)arg1;
- (BOOL)mouseDragged:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDragCanceled:(id)arg1;
- (BOOL)mouseEntered:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (id)cursorAtPoint:(struct CGPoint)arg1 event:(id)arg2;
- (id)effectsToDisplay;
- (id)effectStack;
- (id)currentItem;

@end

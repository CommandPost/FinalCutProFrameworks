//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Flexo/FFResponderLayer.h>

#import <Flexo/FFCurveEditorEffectDelegate-Protocol.h>

@class CHChannelBase, FFAnchoredTimelineModule, FFCurveEditorLayer, FFEffect, FFEffectStack, NSMutableArray, NSString;

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
    BOOL _soloAnimation;
    BOOL _updateLayers;
    BOOL _reordering;
    BOOL _didReorder;
    struct CGPoint _lastReorderedPos;
    struct CGPoint _lastMousePos;
    FFCurveEditorLayer *_lastReorderedLayer;
    NSMutableArray *_reorderedEffectList;
    FFEffect *_defaultEffect;
    CHChannelBase *_defaultChannel;
    FFEffectStack *_currentEffectStack;
    BOOL _isOverlay;
    FFAnchoredTimelineModule *_timeline;
    struct CGRect _visibleRect;
}

@property(nonatomic) struct CGRect visibleRect; // @synthesize visibleRect=_visibleRect;
- (BOOL)accessibilityIsIgnored;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (id)accessibilityChildren;
- (id)currentItem;
- (id)effectStack;
- (id)effectsToDisplay;
- (BOOL)shouldAutoscroll:(id)arg1;
- (id)cursorAtPoint:(struct CGPoint)arg1 event:(id)arg2;
- (void)mouseMoved:(id)arg1;
- (void)mouseExited:(id)arg1;
- (BOOL)mouseEntered:(id)arg1;
- (void)mouseDragCanceled:(id)arg1;
- (void)mouseUp:(id)arg1;
- (BOOL)mouseDragged:(id)arg1;
- (BOOL)mouseDown:(id)arg1;
- (id)subpartAtPoint:(struct CGPoint)arg1;
- (void)_effectsChanged;
- (void)_effectStackChanged;
- (void)_rebuildCurveEditor;
- (void)pasteKeyframes:(id)arg1;
- (void)cutKeyframes:(id)arg1;
- (void)copyKeyframes:(id)arg1;
- (void)nudgeRight:(id)arg1;
- (void)nudgeLeft:(id)arg1;
- (void)nudgeDown:(id)arg1;
- (void)nudgeUp:(id)arg1;
- (void)previousKeyframe:(id)arg1;
- (void)nextKeyframe:(id)arg1;
- (void)addKeyframe:(id)arg1;
- (void)deleteKeyframes:(id)arg1;
- (void)delete:(id)arg1;
- (void)deselectAll:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)displayMenuForPart:(id)arg1 atPoint:(struct CGPoint)arg2;
- (id)contextMenuForPart:(id)arg1;
- (BOOL)wantsToHandlePredominantDrag;
- (id)layerForEffect:(id)arg1;
- (id)layerForEffectID:(id)arg1;
- (id)layerAtPoint:(struct CGPoint)arg1 ignoreLayer:(id)arg2;
- (void)resignFocusOwner;
- (void)becomeFocusOwner;
- (id)selectedLayers;
- (id)selectedLayer;
- (void)selectLayer:(id)arg1 select:(BOOL)arg2;
- (void)setDefaultEffect:(id)arg1 andChannel:(id)arg2;
- (void)setDefaultEffect:(id)arg1;
- (void)setCurrentEffect:(id)arg1 andChannel:(id)arg2;
- (void)layoutSublayers;
- (void)updateCurvesLayout:(id)arg1;
- (void)layerDidBecomeVisible:(BOOL)arg1;
- (void)collapseLayer:(id)arg1;
- (void)colorSchemeHasChanged;
- (void)expandLayer:(id)arg1;
- (void)updateHeight;
- (double)requiredHeight;
- (void)removeBackgroundLayer;
- (void)addBackgroundLayer;
- (void)removeObservers;
- (void)addObservers;
- (void)dealloc;
- (id)initAsOverlayWithObject:(id)arg1 timeline:(id)arg2;
- (id)initWithObject:(id)arg1 topToBottom:(BOOL)arg2 timeline:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

#import "NSAnimationDelegate.h"

@class LKCommandsUIController, LKKeyboardButtonCell, LKKeyboardManager, NSAnimation, NSImage, NSMutableArray, NSMutableDictionary, NSStepper, NSString;

@interface LKKeyboardView : NSView <NSAnimationDelegate>
{
    LKCommandsUIController *_controller;
    LKKeyboardManager *_keyboardManager;
    NSStepper *_keyboardIDStepper;
    int _currentKeyboardID;
    unsigned long long _modifierMask;
    NSMutableArray *_buttonCells;
    struct CGRect _keyboardRect;
    BOOL _shouldDrawSearchOverlay;
    BOOL _validSearch;
    NSMutableArray *_highlightedKeys;
    NSMutableDictionary *_keyAnimationDict;
    NSAnimation *_fadeAnimation;
    double _overlayAlpha;
    NSMutableDictionary *_keyImages;
    NSMutableDictionary *_keyHighlightImages;
    NSMutableDictionary *_keyMaskImages;
    struct CGSize _overlaySize;
    NSImage *_overlayImage;
    struct CGPoint _dragOffset;
    struct CGPoint _dragOrigin;
    BOOL _dragCancel;
    LKKeyboardButtonCell *_dropTarget;
    LKKeyboardButtonCell *_selectedKey;
    LKKeyboardButtonCell *_pressedKey;
    BOOL _useRSRC;
}

- (void)_endLiveResize;
- (void)_clearImageCache;
- (id)_keyCapImageForDrawingLayer:(long long)arg1 size:(struct CGSize)arg2;
- (struct CGSize)_borderSize;
- (void)_resetToolTips;
- (void)_scaleKeyboardButtons;
- (void)_adjustButtonRects;
- (void)_reconfigureKeyboard;
- (void)reloadCommands;
- (void)_commandSetChanged;
- (void)_selectKey:(id)arg1;
- (void)_pressKey:(id)arg1;
- (void)_deselectAllKeys;
- (id)_keyWithKeyCode:(unsigned short)arg1;
- (id)_keyAtLocation:(struct CGPoint)arg1;
- (void)draggedImage:(id)arg1 endedAt:(struct CGPoint)arg2 operation:(unsigned long long)arg3;
- (void)draggedImage:(id)arg1 movedTo:(struct CGPoint)arg2;
- (BOOL)_validDropLocation:(struct CGPoint)arg1;
- (void)draggedImage:(id)arg1 beganAt:(struct CGPoint)arg2;
- (void)concludeDragOperation:(id)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (BOOL)prepareForDragOperation:(id)arg1;
- (void)draggingExited:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (void)_setDropTarget:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (unsigned long long)draggingSourceOperationMaskForLocal:(BOOL)arg1;
- (BOOL)_dragShouldBeginFromMouseDown:(id)arg1 withExpiration:(id)arg2 xHysteresis:(double)arg3 yHysteresis:(double)arg4;
- (void)mouseUp:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)animationDidEnd:(id)arg1;
- (void)animation:(id)arg1 didReachProgressMark:(float)arg2;
- (void)highlightCommands:(id)arg1;
- (id)detailKey;
- (BOOL)validateKeyboardID:(id *)arg1 error:(id *)arg2;
- (void)setKeyboardIDDEBUG:(int)arg1;
- (int)keyboardIDDEBUG;
- (void)setKeyboardID:(int)arg1;
- (int)keyboardID;
- (void)setModifierMask:(unsigned long long)arg1;
- (unsigned long long)modifierMask;
- (struct CGSize)keyboardSizeForWidth:(double)arg1;
- (id)view:(id)arg1 stringForToolTip:(long long)arg2 point:(struct CGPoint)arg3 userData:(void *)arg4;
- (void)drawRect:(struct CGRect)arg1;
- (void)_drawSelection:(struct CGRect)arg1;
- (void)_drawSearchOverlay:(struct CGRect)arg1;
- (id)_searchOverlayImage;
- (void)_drawKeys:(struct CGRect)arg1;
- (void)awakeFromNib;
- (void)finalize;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Flexo/FFVideoView.h>

#import <Flexo/NSTextInputClient-Protocol.h>

@class FFHitTestContextObject, FFPlayerVideoModule, MDPRenderController;

__attribute__((visibility("hidden")))
@interface FFPlayerView : FFVideoView <NSTextInputClient>
{
    BOOL _drawingEnabled;
    BOOL _playerVideoModuleActive;
    BOOL _mouseEntered;
    float _windowBackingScaleFactor;
    unsigned int _windowDisplayID;
    FFPlayerVideoModule *_playerVideoModule;
    struct __CFRunLoopObserver *_draggingIdleObserver;
    unsigned long long _pixelFormat;
    FFHitTestContextObject *_hitTestObj;
}

@property(retain, nonatomic) FFHitTestContextObject *hitTestObj; // @synthesize hitTestObj=_hitTestObj;
@property(nonatomic) unsigned long long pixelFormat; // @synthesize pixelFormat=_pixelFormat;
@property(nonatomic) unsigned int windowDisplayID; // @synthesize windowDisplayID=_windowDisplayID;
@property(nonatomic) struct __CFRunLoopObserver *draggingIdleObserver; // @synthesize draggingIdleObserver=_draggingIdleObserver;
@property(nonatomic, getter=hasMouseEntered) BOOL mouseEntered; // @synthesize mouseEntered=_mouseEntered;
@property(nonatomic) float windowBackingScaleFactor; // @synthesize windowBackingScaleFactor=_windowBackingScaleFactor;
@property(nonatomic, getter=isPlayerVideoModuleActive) BOOL playerVideoModuleActive; // @synthesize playerVideoModuleActive=_playerVideoModuleActive;
@property(getter=isDrawingEnabled) BOOL drawingEnabled; // @synthesize drawingEnabled=_drawingEnabled;
@property(nonatomic) FFPlayerVideoModule *playerVideoModule; // @synthesize playerVideoModule=_playerVideoModule;
- (void)updateCAView;
- (id)menuForEvent:(id)arg1;
- (void)flagsChanged:(id)arg1;
- (void)keyUp:(id)arg1;
- (void)keyDown:(id)arg1;
- (BOOL)_wantsKeyDownForEvent:(id)arg1;
- (void)scrollWheel:(id)arg1;
- (void)rightMouseUp:(id)arg1;
- (void)rightMouseDragged:(id)arg1;
- (void)rightMouseDown:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (void)oscDragStopping;
- (void)oscDragStarting;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)_fullscreenHideCursor:(id)arg1;
- (void)dragWentIdle;
- (BOOL)multipleSelection;
- (void)doCommandBySelector:(SEL)arg1;
- (void)insertText:(id)arg1 replacementRange:(struct _NSRange)arg2;
- (id)validAttributesForMarkedText;
- (unsigned long long)characterIndexForPoint:(struct CGPoint)arg1;
- (struct CGRect)firstRectForCharacterRange:(struct _NSRange)arg1 actualRange:(struct _NSRange *)arg2;
- (struct _NSRange)selectedRange;
- (struct _NSRange)markedRange;
- (id)attributedSubstringForProposedRange:(struct _NSRange)arg1 actualRange:(struct _NSRange *)arg2;
- (long long)conversationIdentifier;
- (BOOL)hasMarkedText;
- (void)unmarkText;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2 replacementRange:(struct _NSRange)arg3;
- (void)nudgeLeftMany:(id)arg1;
- (void)nudgeRightMany:(id)arg1;
- (void)nudgeUpMany:(id)arg1;
- (void)nudgeDownMany:(id)arg1;
- (void)nudgeLeft:(id)arg1;
- (void)nudgeRight:(id)arg1;
- (void)nudgeUp:(id)arg1;
- (void)nudgeDown:(id)arg1;
- (void)deselectAll:(id)arg1;
- (void)selectNone:(id)arg1;
- (void)selectAll:(id)arg1;
- (void)pasteAsPlainText:(id)arg1;
- (void)paste:(id)arg1;
- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
- (void)redo:(id)arg1;
- (void)undo:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (struct CGColor *)backgroundColor;
- (void)cursorUpdate:(id)arg1;
- (void)oscCursorDidChange:(id)arg1;
- (void)activeToolDidChange:(id)arg1;
- (void)viewDidChangeBackingProperties;
- (void)reshape:(id)arg1;
@property(readonly, nonatomic) MDPRenderController *hitTestMDPContext;
@property(readonly, nonatomic) struct _CGLContextObject *hitTestContext;
- (pair_2a2d2e3d)_internalHitTestContext;
- (void)_updateMetalLayerDestVideo;
- (int)virtualScreen;
- (void)renewGState;
- (void)viewDidMoveToWindow;
- (BOOL)windowBackingScaleFactorIsZero;
- (void)viewWillMoveToWindow:(id)arg1;
- (BOOL)resignFirstResponder;
- (BOOL)acceptsFirstResponder;
- (void)dealloc;
- (void)_resizeDrawableTo:(struct CGSize)arg1 draw:(BOOL)arg2;
- (void)awakeFromNib;
@property(readonly, nonatomic) BOOL isSuperEllipseOSCActive;
@property(readonly, nonatomic) BOOL isTextOSCActive;
- (BOOL)isOpaque;
- (void)draw;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (id)accessibilityAttributeValue:(id)arg1;

@end


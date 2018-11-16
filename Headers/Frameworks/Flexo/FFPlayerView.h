//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOpenGLView.h"

#import "NSTextInput.h"

@class FFPlayerVideoModule, NSLock;

__attribute__((visibility("hidden")))
@interface FFPlayerView : NSOpenGLView <NSTextInput>
{
    FFPlayerVideoModule *_playerVideoModule;
    BOOL _mouseEntered;
    struct _CGLContextObject *_viewContext;
    BOOL _hasLayer;
    BOOL _drawingEnabled;
    BOOL _playerVideoModuleActive;
    NSLock *_playerVideoModuleActiveLock;
    struct __CFRunLoopObserver *_draggingIdleObserver;
}

+ (id)defaultPixelFormat;
- (BOOL)isOpaque;
- (BOOL)isTextOSCActive;
- (void)_setPlayerVideoModule:(id)arg1;
- (void)awakeFromNib;
- (void)dealloc;
- (BOOL)acceptsFirstResponder;
- (BOOL)resignFirstResponder;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)viewDidMoveToWindow;
- (void)renewGState;
- (int)virtualScreen;
- (void)viewWillDraw;
- (void)setNeedsUpdate:(BOOL)arg1;
- (BOOL)hasLayer;
- (BOOL)playerVideoModuleActive;
- (void)setPlayerVideoModuleActive:(BOOL)arg1;
- (id)playerVideoModuleActiveLock;
- (void)usingCGLContext:(struct _CGLContextObject *)arg1;
- (struct _CGLContextObject *)viewContext;
- (BOOL)checkDisplayCallback:(CDStruct_1b6d18a9)arg1;
- (BOOL)callDisplayCallback:(CDStruct_1b6d18a9)arg1 lastTimeDisplayed:(id)arg2 initialDraw:(BOOL)arg3;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)clearViewToBackgroundColor;
- (void)notifyLastTimeDisplayed:(id)arg1;
- (void)reshape;
- (void)prepareOpenGL;
- (struct CGRect)bounds;
- (void)setDrawingEnabled:(BOOL)arg1;
- (BOOL)isDrawingEnabled;
- (void)drawRect:(struct CGRect)arg1;
- (void)activeToolDidChange:(id)arg1;
- (void)oscCursorDidChange:(id)arg1;
- (void)cursorUpdate:(id)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)undo:(id)arg1;
- (void)redo:(id)arg1;
- (void)cut:(id)arg1;
- (void)copy:(id)arg1;
- (void)paste:(id)arg1;
- (void)pasteAsPlainText:(id)arg1;
- (void)selectAll:(id)arg1;
- (void)selectNone:(id)arg1;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (void)unmarkText;
- (BOOL)hasMarkedText;
- (long long)conversationIdentifier;
- (id)attributedSubstringFromRange:(struct _NSRange)arg1;
- (struct _NSRange)markedRange;
- (struct _NSRange)selectedRange;
- (struct CGRect)firstRectForCharacterRange:(struct _NSRange)arg1;
- (unsigned long long)characterIndexForPoint:(struct CGPoint)arg1;
- (id)validAttributesForMarkedText;
- (void)insertText:(id)arg1;
- (void)doCommandBySelector:(SEL)arg1;
- (BOOL)multipleSelection;
- (void)dragWentIdle;
- (void)mouseMoved:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)oscDragStarting;
- (void)oscDragStopping;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)rightMouseDown:(id)arg1;
- (void)rightMouseDragged:(id)arg1;
- (void)rightMouseUp:(id)arg1;
- (void)scrollWheel:(id)arg1;
- (BOOL)_wantsKeyDownForEvent:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)keyUp:(id)arg1;
- (void)flagsChanged:(id)arg1;
- (id)menuForEvent:(id)arg1;
- (void)updateVirtualScreenForDisplayID:(unsigned int)arg1 force:(BOOL)arg2;
- (void)updateCAView;

@end

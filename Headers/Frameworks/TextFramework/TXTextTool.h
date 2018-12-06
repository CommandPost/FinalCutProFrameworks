//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OZTool.h"

#import "NSTextInput.h"

@class NSMenu, NSResponder, NSView, TXParagraphOSC, TXRulersOverlay, TXScrollBarsOverlay, TXTextResponder;

@interface TXTextTool : OZTool <NSTextInput>
{
    unsigned int _textID;
    _Bool _showCursor;
    unsigned int _time;
    unsigned int _refreshInterval;
    unsigned int _mouseDownOffset;
    TXTextResponder *_responder;
    NSResponder *_prevResponder;
    PCVector2_79a470e1 *_start;
    CDStruct_1b6d18a9 *_startTime;
    double _yOffset;
    TXParagraphOSC *_paragraphOSC;
    TXRulersOverlay *_rulersOverlay;
    TXScrollBarsOverlay *_scrollBarsOverlay;
    struct _NSRange _markedSelectRange;
    int *_pMarkedUnderlineTypes;
    struct TXSelectionRange *_pMarkedUnderlineRanges;
    NSMenu *_pMenu;
    NSView *_view;
    double _startObjX;
    double _startObjY;
    double _startObjZ;
    float _alpha;
}

- (id)initWithHostDelegate:(id)arg1 andViewDelegate:(id)arg2 andObjectDelegate:(id)arg3 andChannel:(struct OZChannelBase *)arg4;
- (void)dealloc;
- (id)getName;
- (id)getTooltip;
- (struct PCUUID)getClassID;
- (void)initTextID;
- (BOOL)textPathSelected;
- (void)clearTextPathSelection;
- (void)clearMarkedData;
- (void)markedTextAbandoned;
- (BOOL)handlesMousingInOnScreenControls;
- (void)updateOnScreenControls:(id)arg1;
- (void)_drawBaseline:(struct TXTextLayout *)arg1;
- (void)draw;
- (void)forceCursorVisible;
- (void)setText:(struct TXTextLayout *)arg1;
- (void)doubleClick:(struct OZSceneNode *)arg1;
- (void)postTextChangedNotificationAndNotifyFlexo:(BOOL)arg1;
- (void)postTextEditedNotification;
- (void)postTextChangedNotification:(id)arg1 andNotifyFlexo:(BOOL)arg2;
- (void)mouseDown:(id)arg1;
- (void)setNewObjectDelegateForSceneNode:(struct OZSceneNode *)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (id)menuForEvent:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (BOOL)keyDownOSC:(id)arg1;
- (float)getRefreshInterval;
- (void)beginWithDocument:(struct OZDocument *)arg1;
- (void)endWithDocument:(struct OZDocument *)arg1;
- (void)endWithDocumentFromFlexo:(struct OZDocument *)arg1;
- (id)getDefaultCursor;
- (struct TXTextInput *)text;
- (struct TXTextGenerator *)textGenerator;
- (void)notify:(unsigned int)arg1;
- (void)layoutMethodChanged:(id)arg1;
- (BOOL)cut:(id)arg1;
- (BOOL)copy:(id)arg1;
- (BOOL)pasteAsPlainText:(id)arg1;
- (BOOL)paste:(id)arg1;
- (BOOL)selectAll:(id)arg1;
- (BOOL)selectNone:(id)arg1;
- (BOOL)hasMarkedText;
- (struct _NSRange)markedRange;
- (struct _NSRange)selectedRange;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (void)unmarkText;
- (id)validAttributesForMarkedText;
- (id)attributedSubstringFromRange:(struct _NSRange)arg1;
- (void)insertText:(id)arg1;
- (unsigned long long)characterIndexForPoint:(struct CGPoint)arg1;
- (struct CGRect)firstRectForCharacterRange:(struct _NSRange)arg1;
- (void)doCommandBySelector:(SEL)arg1;
- (long long)conversationIdentifier;
- (void)cancelOperation:(id)arg1;
- (void)cancel:(id)arg1;
- (void)capitalizeWord:(id)arg1;
- (void)centerSelectionInVisibleArea:(id)arg1;
- (void)changeCaseOfLetter:(id)arg1;
- (void)complete:(id)arg1;
- (void)deleteBackward:(id)arg1;
- (void)deleteBackwardByDecomposingPreviousCharacter:(id)arg1;
- (void)deleteForward:(id)arg1;
- (void)deleteToBeginningOfLine:(id)arg1;
- (void)deleteToBeginningOfParagraph:(id)arg1;
- (void)deleteToEndOfLine:(id)arg1;
- (void)deleteToEndOfParagraph:(id)arg1;
- (void)deleteToMark:(id)arg1;
- (void)deleteWordBackward:(id)arg1;
- (void)deleteWordForward:(id)arg1;
- (void)indent:(id)arg1;
- (void)insertBacktab:(id)arg1;
- (void)insertNewline:(id)arg1;
- (void)insertNewlineIgnoringFieldEditor:(id)arg1;
- (void)insertParagraphSeparator:(id)arg1;
- (void)insertTab:(id)arg1;
- (void)insertTabIgnoringFieldEditor:(id)arg1;
- (void)lowercaseWord:(id)arg1;
- (void)moveBackward:(id)arg1;
- (void)moveBackwardAndModifySelection:(id)arg1;
- (void)moveDown:(id)arg1;
- (void)moveDownAndModifySelection:(id)arg1;
- (void)moveForward:(id)arg1;
- (void)moveForwardAndModifySelection:(id)arg1;
- (void)moveLeft:(id)arg1;
- (void)moveLeftAndModifySelection:(id)arg1;
- (void)moveRight:(id)arg1;
- (void)moveRightAndModifySelection:(id)arg1;
- (void)moveToBeginningOfDocument:(id)arg1;
- (void)moveToBeginningOfLine:(id)arg1;
- (void)moveToBeginningOfParagraph:(id)arg1;
- (void)moveToEndOfDocument:(id)arg1;
- (void)moveToEndOfLine:(id)arg1;
- (void)moveToEndOfParagraph:(id)arg1;
- (void)moveUp:(id)arg1;
- (void)moveUpAndModifySelection:(id)arg1;
- (void)moveWordBackward:(id)arg1;
- (void)moveWordBackwardAndModifySelection:(id)arg1;
- (void)moveWordForward:(id)arg1;
- (void)moveWordForwardAndModifySelection:(id)arg1;
- (void)moveWordLeft:(id)arg1;
- (void)moveWordRight:(id)arg1;
- (void)moveWordRightAndModifySelection:(id)arg1;
- (void)moveWordLeftAndModifySelection:(id)arg1;
- (void)pageDown:(id)arg1;
- (void)pageUp:(id)arg1;
- (void)scrollLineDown:(id)arg1;
- (void)scrollLineUp:(id)arg1;
- (void)scrollPageDown:(id)arg1;
- (void)scrollPageUp:(id)arg1;
- (void)selectLine:(id)arg1;
- (void)selectParagraph:(id)arg1;
- (void)selectToMark:(id)arg1;
- (void)selectWord:(id)arg1;
- (void)setMark:(id)arg1;
- (void)showContextHelp:(id)arg1;
- (void)swapWithMark:(id)arg1;
- (void)transpose:(id)arg1;
- (void)transposeWords:(id)arg1;
- (void)uppercaseWord:(id)arg1;
- (void)yank:(id)arg1;
- (void)incrementKerning:(id)arg1;
- (void)decrementKerning:(id)arg1;
- (void)setView:(id)arg1;
- (id)view;
@property float alpha; // @synthesize alpha=_alpha;

@end


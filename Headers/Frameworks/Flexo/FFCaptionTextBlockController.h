//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Flexo/FFCaptionSelectionControllerProtocol-Protocol.h>

@class FFAnchoredCaption, FFCaptionEditorTextView, FFCaptionTextBlock, LKSegmentedControl, NSString, NSUndoManager;
@protocol FFCaptionTextBlockControllerDelegate;

__attribute__((visibility("hidden")))
@interface FFCaptionTextBlockController : NSObject <FFCaptionSelectionControllerProtocol>
{
    BOOL _updatingTextView;
    long long _suppressTextUpdates;
    NSUndoManager *_undoManager;
    BOOL _textChanged;
    BOOL _isObserving;
    FFAnchoredCaption *_caption;
    FFCaptionTextBlock *_textBlock;
    FFCaptionEditorTextView *_textView;
    LKSegmentedControl *_alignmentControl;
    NSObject<FFCaptionTextBlockControllerDelegate> *_delegate;
}

@property(retain, nonatomic) NSUndoManager *undoManager; // @synthesize undoManager=_undoManager;
@property(nonatomic) NSObject<FFCaptionTextBlockControllerDelegate> *delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) LKSegmentedControl *alignmentControl; // @synthesize alignmentControl=_alignmentControl;
@property(retain, nonatomic) FFCaptionEditorTextView *textView; // @synthesize textView=_textView;
@property(readonly, retain, nonatomic) FFCaptionTextBlock *textBlock; // @synthesize textBlock=_textBlock;
@property(readonly, retain, nonatomic) FFAnchoredCaption *caption; // @synthesize caption=_caption;
- (void)setSelectedRange:(struct _NSRange)arg1;
- (void)teardownObservationAndDelegation;
- (void)setCaptionTextBlockFromUI;
- (long long)cellY;
- (long long)cellX;
- (void)setCellY:(long long)arg1;
- (void)setCellX:(long long)arg1;
- (void)dealloc;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)insertSpecialCharacterFromSender:(id)arg1;
- (void)removeTextBlock:(id)arg1;
- (void)addTextBlock:(id)arg1;
- (long long)position;
- (void)setPosition:(long long)arg1;
- (void)setPositionFromSender:(id)arg1;
- (void)_setNewPositionX:(long long)arg1 andY:(long long)arg2;
- (void)moveRight:(id)arg1;
- (void)moveLeft:(id)arg1;
- (void)moveDown:(id)arg1;
- (void)moveUp:(id)arg1;
- (long long)justification;
- (unsigned long long)animationHeight;
- (void)setAnimationHeight:(unsigned long long)arg1;
- (void)setAnimationHeightFromSender:(id)arg1;
- (long long)animationStyle;
- (void)setAnimationStyle:(long long)arg1;
- (long long)textAlignment;
- (void)setTextAlignment:(long long)arg1;
- (void)setTextAlignmentFromSender:(id)arg1;
- (id)backgroundTextColors;
- (void)setBackgroundTextColor:(id)arg1;
- (id)textColors;
- (void)setTextColor:(id)arg1;
- (void)endColorChange:(id)arg1;
- (void)startColorChange:(id)arg1;
- (id)isUnderlined;
- (id)isItalic;
- (id)isBold;
- (id)containsFontTrait:(unsigned int)arg1;
- (void)setUnderlined:(BOOL)arg1;
- (void)setItalic:(BOOL)arg1;
- (void)setBold:(BOOL)arg1;
- (void)textStorage:(id)arg1 didProcessEditing:(unsigned long long)arg2 range:(struct _NSRange)arg3 changeInLength:(long long)arg4;
- (void)textViewDidChangeSelection:(id)arg1;
- (id)undoManagerForTextView:(id)arg1;
- (void)textDidEndEditing:(id)arg1;
- (void)textDidBeginEditing:(id)arg1;
- (void)handleUndoRedoForTextEditing:(id)arg1 withLocalizedActionName:(id)arg2;
- (void)_updateTextView;
- (void)_firstResponderChanged:(id)arg1;
- (void)rangeInvalidated:(id)arg1;
- (id)initWithCaption:(id)arg1 textBlockIndex:(unsigned long long)arg2 delegate:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


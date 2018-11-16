//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFComponentOSC.h>

#import "NSControlTextEditingDelegate.h"
#import "NSTextFieldDelegate.h"
#import "NSWindowDelegate.h"

@class FFEffect<FFTitleDelegate>, FFTitleDocumentView, NSMutableArray, NSView;

@interface FFTitleOSC : FFComponentOSC <NSTextFieldDelegate, NSControlTextEditingDelegate, NSWindowDelegate>
{
    FFEffect<FFTitleDelegate> *_title;
    NSView *_titleOverlayView;
    FFTitleDocumentView *_documentView;
    NSMutableArray *_titleTextFields;
    BOOL _textChanged;
}

+ (id)shrinkToFit:(id)arg1 inRect:(struct CGRect)arg2 originalFontSize:(double)arg3 wrap:(BOOL)arg4;
+ (double)lineHeightForFont:(id)arg1 string:(id)arg2;
+ (struct CGRect)boundingBoxForAttributedString:(id)arg1 lineWidth:(float)arg2;
@property(readonly) FFEffect<FFTitleDelegate> *title; // @synthesize title=_title;
- (BOOL)hitTest:(struct CGPoint)arg1;
- (BOOL)needsCustomFieldEditor;
- (BOOL)overlayCanBecomeKey;
- (void)becomeActiveOSC;
- (BOOL)supportsTool:(Class)arg1;
- (BOOL)isSelectionBased;
- (BOOL)isActiveOSC;
- (void)configureTextField:(id)arg1;
- (id)shrinkToFit:(id)arg1 inRect:(struct CGRect)arg2 originalFontSize:(double)arg3;
- (id)shrinkToFit:(id)arg1 inTextField:(unsigned long long)arg2;
- (void)applyTextFieldsToTitle;
- (void)initTitleOverlay;
- (unsigned long long)_textFieldCount;
- (struct CGRect)_configureTextFieldBounds:(id)arg1;
- (void)setAttributedString:(id)arg1 forTextField:(unsigned long long)arg2;
- (id)attributedStringForTextField:(unsigned long long)arg1;
- (unsigned long long)selectedTextFieldIndexAndRange:(struct _NSRange *)arg1;
- (unsigned long long)activeTextField;
- (void)updateSizeForTextField:(unsigned long long)arg1;
- (void)updateViewNotification:(id)arg1;
- (void)controlTextDidChange:(id)arg1;
- (BOOL)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3;
- (id)windowWillReturnFieldEditor:(id)arg1 toObject:(id)arg2;
- (void)makeTextFieldFirstResponder;
- (void)dealloc;
- (id)initWithTitle:(id)arg1;

@end

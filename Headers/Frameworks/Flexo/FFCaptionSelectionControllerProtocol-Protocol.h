//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Flexo/NSLayoutManagerDelegate-Protocol.h>
#import <Flexo/NSMenuDelegate-Protocol.h>
#import <Flexo/NSTextStorageDelegate-Protocol.h>
#import <Flexo/NSTextViewDelegate-Protocol.h>

@class FFAnchoredCaption, FFCaptionEditorTextView, FFCaptionTextBlock, LKSegmentedControl, NSArray, NSColor, NSObject;
@protocol FFCaptionTextBlockControllerDelegate;

@protocol FFCaptionSelectionControllerProtocol <NSTextViewDelegate, NSTextStorageDelegate, NSMenuDelegate, NSLayoutManagerDelegate>
@property(nonatomic) NSObject<FFCaptionTextBlockControllerDelegate> *delegate;
@property(retain, nonatomic) LKSegmentedControl *alignmentControl;
@property(retain, nonatomic) FFCaptionEditorTextView *textView;
@property(readonly, retain, nonatomic) FFCaptionTextBlock *textBlock;
@property(readonly, retain, nonatomic) FFAnchoredCaption *caption;
- (void)setSelectedRange:(struct _NSRange)arg1;
- (void)teardownObservationAndDelegation;
- (void)setCaptionTextBlockFromUI;
- (long long)justification;
- (long long)position;
- (void)setPosition:(long long)arg1;
- (void)setPositionFromSender:(id)arg1;
- (void)moveRight:(id)arg1;
- (void)moveLeft:(id)arg1;
- (void)moveDown:(id)arg1;
- (void)moveUp:(id)arg1;
- (unsigned long long)animationHeight;
- (void)setAnimationHeight:(unsigned long long)arg1;
- (void)setAnimationHeightFromSender:(id)arg1;
- (long long)animationStyle;
- (void)setAnimationStyle:(long long)arg1;
- (long long)textAlignment;
- (void)setTextAlignment:(long long)arg1;
- (void)setTextAlignmentFromSender:(id)arg1;
- (NSArray *)backgroundTextColors;
- (NSArray *)textColors;
- (void)setBackgroundTextColor:(NSColor *)arg1;
- (void)setTextColor:(NSColor *)arg1;
- (NSArray *)isUnderlined;
- (NSArray *)isItalic;
- (NSArray *)isBold;
- (void)setUnderlined:(BOOL)arg1;
- (void)setItalic:(BOOL)arg1;
- (void)setBold:(BOOL)arg1;
@end


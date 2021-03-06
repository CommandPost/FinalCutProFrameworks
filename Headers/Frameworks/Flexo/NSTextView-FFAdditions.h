//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSTextView.h>

@class NSColor;

@interface NSTextView (FFAdditions)
- (void)FFAddToTypingAttributes:(id)arg1 value:(id)arg2;
- (void)FFAddToSelectionAttributes:(id)arg1 value:(id)arg2;
- (void)FFAddToSelectionFontTraits:(unsigned long long)arg1;
- (id)_FFSelectedTextColorBackground:(BOOL)arg1;
- (BOOL)FFSelectedTextHasFontTraits:(unsigned int)arg1;
- (void)FFSetSelectionBackgroundColor:(id)arg1;
- (void)FFSetSelectionForegroundColor:(id)arg1;
- (void)FFChangeBackgroundColor:(id)arg1;
- (void)FFChangeForegroundColor:(id)arg1;
- (void)FFAddUnderlineTrait:(id)arg1;
- (void)FFAddItalicTrait:(id)arg1;
- (void)FFAddBoldTrait:(id)arg1;
@property(readonly, nonatomic) NSColor *FFSelectedTextBackgroundColor;
@property(readonly, nonatomic) NSColor *FFSelectedTextForegroundColor;
@property(readonly, nonatomic) BOOL FFIsSelectedTextUnderlined;
@property(readonly, nonatomic) BOOL FFIsSelectedTextItalic;
@property(readonly, nonatomic) BOOL FFIsSelectedTextBold;
@end


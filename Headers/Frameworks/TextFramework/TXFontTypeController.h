//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OZViewController.h"

@class NSButton, NSPopUpButton;

@interface TXFontTypeController : OZViewController
{
    NSPopUpButton *_pFontType;
    NSButton *_pBrowse;
    struct TXTextLayout *_text;
}

- (id)initWithChan:(struct OZChannelBase *)arg1 textLayout:(struct TXTextLayout *)arg2 context:(id)arg3;
- (void)awakeFromNib;
- (void)openFontPanel:(id)arg1;
- (void)update;
- (void)enable;
- (void)disable;
- (void)setChannelValue:(id)arg1;

@end

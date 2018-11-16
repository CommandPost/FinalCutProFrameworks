//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

@class NSButton, NSImageView, NSTextField, NSTextView;

__attribute__((visibility("hidden")))
@interface FFAudioEffectWarningWindowController : NSWindowController
{
    NSImageView *_iconView;
    NSTextField *_title;
    NSTextField *_message;
    NSTextView *_invalidEffects;
    NSButton *_doNotWarnCheckbox;
}

@property(nonatomic) NSButton *doNotWarnCheckbox; // @synthesize doNotWarnCheckbox=_doNotWarnCheckbox;
@property(nonatomic) NSTextView *invalidEffects; // @synthesize invalidEffects=_invalidEffects;
@property(nonatomic) NSTextField *message; // @synthesize message=_message;
@property(nonatomic) NSTextField *title; // @synthesize title=_title;
@property(nonatomic) NSImageView *iconView; // @synthesize iconView=_iconView;
- (void)showWarningWithEffectNames:(id)arg1;
- (BOOL)doNotWarnMeAgainIsChecked;
- (void)okPressed:(id)arg1;
- (id)_warningMessageForEffectnames:(id)arg1;
- (void)windowDidLoad;
- (id)init;

@end

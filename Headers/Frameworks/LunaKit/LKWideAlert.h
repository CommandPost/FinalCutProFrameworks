//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSButton, NSImage, NSImageView, NSLayoutConstraint, NSMutableArray, NSStackView, NSString, NSTextField, NSView, NSWindow;

@interface LKWideAlert : NSObject
{
    NSString *_messageText;
    NSString *_informativeText;
    NSView *_accessoryView;
    NSImage *_icon;
    NSMutableArray *_buttons;
    NSStackView *_buttonsStackView;
    NSStackView *_contentStackView;
    NSView *_accessoryViewContainerView;
    NSArray *_accessoryViewHoldingConstraints;
    NSLayoutConstraint *_minimizingConstraint;
    long long _buttonCount;
    NSImageView *_iconImageView;
    NSImageView *_badgeImageView;
    BOOL _showsSuppressionButton;
    NSWindow *_hostingPanel;
    unsigned long long _alertStyle;
    NSTextField *_messageTextField;
    NSTextField *_informativeTextField;
    NSButton *_firstButton;
    NSButton *_secondButton;
    NSButton *_otherButton;
    NSButton *_suppressCheckBox;
}

+ (id)alertWithError:(id)arg1;
@property NSButton *suppressCheckBox; // @synthesize suppressCheckBox=_suppressCheckBox;
@property NSButton *otherButton; // @synthesize otherButton=_otherButton;
@property NSButton *secondButton; // @synthesize secondButton=_secondButton;
@property NSButton *firstButton; // @synthesize firstButton=_firstButton;
@property NSTextField *informativeTextField; // @synthesize informativeTextField=_informativeTextField;
@property NSTextField *messageTextField; // @synthesize messageTextField=_messageTextField;
@property NSImageView *badgeImageView; // @synthesize badgeImageView=_badgeImageView;
@property NSImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property unsigned long long alertStyle; // @synthesize alertStyle=_alertStyle;
@property NSView *accessoryViewContainerView; // @synthesize accessoryViewContainerView=_accessoryViewContainerView;
@property NSStackView *buttonsStackView; // @synthesize buttonsStackView=_buttonsStackView;
@property NSStackView *contentStackView; // @synthesize contentStackView=_contentStackView;
@property(retain) NSWindow *hostingPanel; // @synthesize hostingPanel=_hostingPanel;
- (void)dealloc;
- (void)buttonPressed:(id)arg1;
- (void)beginSheetModalForWindow:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (long long)runModal;
- (void)layout;
- (id)addButtonWithTitle:(id)arg1;
@property(readonly) NSButton *suppressionButton;
@property BOOL showsSuppressionButton; // @synthesize showsSuppressionButton=_showsSuppressionButton;
@property(retain) NSView *accessoryView; // @synthesize accessoryView=_accessoryView;
@property(copy) NSString *informativeText; // @synthesize informativeText=_informativeText;
@property(copy) NSString *messageText; // @synthesize messageText=_messageText;
@property(readonly, copy) NSArray *buttons;
@property(retain) NSImage *icon;
- (void)awakeFromNib;
- (id)init;

@end


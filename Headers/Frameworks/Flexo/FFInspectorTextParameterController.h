//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Flexo/FFInspectorParameterController.h>

#import <Flexo/FFInspectorContainerSubControllerViewDelegate-Protocol.h>

@class LKTextField, NSAttributedString, NSColor, NSFont, NSString, NSTrackingArea, NSView;
@protocol NSTextFieldDelegate;

__attribute__((visibility("hidden")))
@interface FFInspectorTextParameterController : FFInspectorParameterController <FFInspectorContainerSubControllerViewDelegate>
{
    NSView *_view;
    NSString *_stringValue;
    NSAttributedString *_attributedStringValue;
    long long _alignment;
    NSFont *_font;
    unsigned long long _lineBreakMode;
    NSString *_placeholderString;
    NSAttributedString *_placeholderAttributedString;
    NSColor *_backgroundColor;
    NSColor *_textColor;
    id <NSTextFieldDelegate> _delegate;
    unsigned long long _bezelStyle;
    double _preferredMaxLayoutWidth;
    long long _maximumNumberOfLines;
    id _target;
    SEL _action;
    LKTextField *_textField;
    NSTrackingArea *_trackingArea;
    struct {
        unsigned int drawsBackground:1;
        unsigned int bordered:1;
        unsigned int bezeled:1;
        unsigned int editable:1;
        unsigned int selectable:1;
        unsigned int usesSingleLineMode:1;
        unsigned int usingDefaultFont:1;
    } _itpc_flags;
}

+ (double)trailingSpacingForTextField;
+ (double)bottomSpacingForTextField;
+ (double)topSpacingForTextField;
+ (Class)classForTextField;
+ (id)defaultProperties;
- (void)viewWillBeRemoved;
- (void)viewWasInstalled;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)view;
- (BOOL)resyncFontForControl:(id)arg1;
- (void)setPropertiesForControl:(id)arg1;
- (void)unbindControl:(id)arg1;
- (void)bindControl:(id)arg1 toObject:(id)arg2 withKeyPath:(id)arg3 options:(id)arg4;
- (id)controlValueForKey:(id)arg1;
- (void)setControlValue:(id)arg1 forKey:(id)arg2;
- (void)setControlFormatter:(id)arg1;
- (void)setObjectValue:(id)arg1;
- (void)setControlSize:(unsigned long long)arg1;
- (SEL)action;
- (void)setAction:(SEL)arg1;
- (id)target;
- (void)setTarget:(id)arg1;
- (void)setWantsNotificationForMarkedText:(BOOL)arg1;
@property long long maximumNumberOfLines; // @dynamic maximumNumberOfLines;
@property double preferredMaxLayoutWidth; // @dynamic preferredMaxLayoutWidth;
@property unsigned long long bezelStyle; // @dynamic bezelStyle;
@property(nonatomic) id <NSTextFieldDelegate> delegate; // @dynamic delegate;
@property(getter=isSelectable) BOOL selectable; // @dynamic selectable;
@property(getter=isEditable) BOOL editable; // @dynamic editable;
@property(getter=isBezeled) BOOL bezeled; // @dynamic bezeled;
@property(getter=isBordered) BOOL bordered; // @dynamic bordered;
@property(copy, nonatomic) NSColor *textColor;
@property BOOL drawsBackground; // @dynamic drawsBackground;
@property(copy, nonatomic) NSColor *backgroundColor; // @dynamic backgroundColor;
@property(copy, nonatomic) NSAttributedString *placeholderAttributedString; // @dynamic placeholderAttributedString;
@property(copy, nonatomic) NSString *placeholderString; // @dynamic placeholderString;
@property BOOL usesSingleLineMode;
@property unsigned long long lineBreakMode;
@property(copy, nonatomic) NSFont *font; // @dynamic font;
@property long long alignment; // @dynamic alignment;
@property(copy, nonatomic) NSAttributedString *attributedStringValue; // @dynamic attributedStringValue;
@property(copy, nonatomic) NSString *stringValue; // @dynamic stringValue;
- (void)_invalidateTrackingArea;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


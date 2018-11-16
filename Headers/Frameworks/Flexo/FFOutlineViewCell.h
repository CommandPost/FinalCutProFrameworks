//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

#import "FFOutlineViewCellContentLayerDelegate.h"
#import "NSTextFieldDelegate.h"

@class CALayer, CATextLayer, FFOutlineView, FFOutlineViewCellContentLayer, FFOutlineViewRow, LKSyntheticUIElement, NSButton, NSColor, NSDictionary, NSString, NSTextField, NSTimer;

@interface FFOutlineViewCell : NSView <FFOutlineViewCellContentLayerDelegate, NSTextFieldDelegate>
{
    NSString *_reuseIdentifier;
    NSView *_selectedBackgroundView;
    NSView *_ruleView;
    NSView *_dropHighlightsBackgroundView;
    NSButton *_disclosureButton;
    NSView *_contentView;
    NSTextField *_editField;
    FFOutlineViewRow *_row;
    double _indentationWidth;
    NSColor *_selectedTextColor;
    NSColor *_textColor;
    NSColor *_placeHolderTextColor;
    double _textSize;
    NSString *_textFont;
    NSString *_selectedTextFont;
    double _indentationOffset;
    double _textOffset;
    BOOL _needsLayout;
    BOOL _indented;
    BOOL _ignoreTextNotifications;
    BOOL _hidesDisclosureButton;
    BOOL _drawRule;
    NSColor *_ruleViewColor;
    NSString *_accessibilityDescription;
    NSDictionary *_cameraNames;
    NSTimer *_showCompletionTimer;
    NSString *_lastText;
}

@property(copy, nonatomic) NSString *accessibilityDescription; // @synthesize accessibilityDescription=_accessibilityDescription;
@property(nonatomic) BOOL drawRule; // @synthesize drawRule=_drawRule;
@property(nonatomic) BOOL hidesDisclosureButton; // @synthesize hidesDisclosureButton=_hidesDisclosureButton;
@property(nonatomic) double textOffset; // @synthesize textOffset=_textOffset;
@property(nonatomic) double indentationOffset; // @synthesize indentationOffset=_indentationOffset;
@property(nonatomic) double indentationWidth; // @synthesize indentationWidth=_indentationWidth;
@property(retain, nonatomic) FFOutlineViewRow *row; // @synthesize row=_row;
@property(readonly, nonatomic) NSString *reuseIdentifier; // @synthesize reuseIdentifier=_reuseIdentifier;
- (void)dealloc;
@property(readonly, copy) NSString *description;
- (id)menuForEvent:(id)arg1;
- (void)mouseUp:(id)arg1;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (id)control:(id)arg1 textView:(id)arg2 completions:(id)arg3 forPartialWordRange:(struct _NSRange)arg4 indexOfSelectedItem:(long long *)arg5;
- (void)controlTextDidChange:(id)arg1;
- (void)showCompletion:(id)arg1;
- (void)updateEditingAnimated:(BOOL)arg1;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
@property(nonatomic, getter=isEditing) BOOL editing;
- (void)cancelEditing;
- (void)commitEditing;
- (BOOL)canStartEditingWithEvent:(id)arg1;
- (void)startEditing;
- (void)removeEditorAnimated:(BOOL)arg1;
- (void)installEditorAnimated:(BOOL)arg1;
@property(readonly, nonatomic) NSTextField *editField;
- (void)noOpSelector:(id)arg1;
- (struct CGRect)editFieldFrame;
- (void)controlTextDidEndEditing:(id)arg1;
- (void)commitAndEndEditing;
- (void)setLabelText:(id)arg1 animated:(BOOL)arg2;
@property(copy, nonatomic) NSString *labelText;
- (void)renderDraggingImageInContext:(struct CGContext *)arg1;
- (BOOL)containsDraggableContentsAtPoint:(struct CGPoint)arg1;
@property(readonly, nonatomic) struct CGRect draggingImageFrame;
@property(readonly, nonatomic) struct CGRect textFrame;
@property(readonly, nonatomic) struct CGRect imageFrame;
@property(nonatomic, getter=isHighlightedForDrop) BOOL highlightedForDrop;
- (void)setHighlightedForDrop:(BOOL)arg1 animated:(BOOL)arg2;
@property(nonatomic, getter=isSelected) BOOL selected;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)updateSelectedAnimated:(BOOL)arg1;
- (void)updateHiglightedTextColor:(BOOL)arg1;
- (void)updateDropHighlightsAnimated:(BOOL)arg1;
- (void)updateExpandedAnimated:(BOOL)arg1;
@property(readonly, nonatomic) NSButton *disclosureButton;
- (void)disclosureButtonAction:(id)arg1;
@property(readonly, nonatomic) FFOutlineView *outlineView;
@property(readonly, nonatomic) NSView *dropHighlightsBackgroundView;
- (id)dropHighlightsLayerWithFrame:(struct CGRect)arg1;
@property(readonly, nonatomic) NSView *selectedBackgroundView;
- (id)selectionLayerWithFrame:(struct CGRect)arg1;
- (void)updateForActiveState;
- (void)setupSelectionColorsForBackingLayer:(id)arg1 gradientLayer:(id)arg2;
@property(readonly, nonatomic) CALayer *imageLayer;
@property(nonatomic) NSColor *drawRuleColor;
@property(retain, nonatomic) NSString *selectedTextFont;
@property(retain, nonatomic) NSString *textFont;
@property(nonatomic) double textSize;
@property(retain, nonatomic) NSColor *placeHolderTextColor;
@property(retain, nonatomic) NSColor *textColor;
@property(retain, nonatomic) NSColor *selectedTextColor;
@property(readonly, nonatomic) CATextLayer *textLabelLayer;
@property(retain, nonatomic) NSView *contentView;
- (void)loadDefaultContentView;
- (void)uninstallContentView;
- (void)installContentView;
@property(readonly, nonatomic) FFOutlineViewCellContentLayer *contentLayer;
@property(retain, nonatomic) CALayer *contentViewLayer;
- (id)existingContentLayer;
- (id)outlineViewCell;
- (void)contentLayerTextFrameDidChange:(id)arg1;
- (void)layoutCellSubviews;
@property(readonly, nonatomic) struct CGRect disclosureButtonFrame;
@property(readonly, nonatomic) struct CGSize disclosureButtonFrameSize;
- (void)viewDidMoveToSuperview;
- (void)setNeedsLayoutCellSubviews;
- (void)willGoToReuseQueue;
- (void)prepareForReuse;
- (BOOL)layer:(id)arg1 shouldInheritContentsScale:(double)arg2 fromWindow:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithReuseIdentifier:(id)arg1;
- (id)syntheticUIElement:(id)arg1 attributeValue:(id)arg2;
- (id)syntheticUIElementAttributeNames:(id)arg1;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (BOOL)accessibilityIsIgnored;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (id)ownAttributeNames;
- (id)filteredChildrenElements:(id)arg1;
@property(readonly, nonatomic) id disclosureButtonElement;
@property(readonly, nonatomic) LKSyntheticUIElement *staticTextElement;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


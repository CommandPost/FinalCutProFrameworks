//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Ozone/OZDFRAbstractBaseTextViewController.h>

@class NSButton, NSSegmentedControl, NSStackView, NSString;

@interface OZDFRTextAppearanceViewController : OZDFRAbstractBaseTextViewController
{
    NSString *_localizedUndoStringAlignment;
    NSString *_localizedUndoStringBold;
    NSString *_localizedUndoStringItalic;
    NSString *_localizedUndoStringFace;
    NSString *_localizedUndoStringOutline;
    NSString *_localizedUndoStringGlow;
    NSString *_localizedUndoStringDropShadow;
    long long _lastAppearance;
    NSStackView *_appearanceStackView;
    NSSegmentedControl *_alignmentSegmentedControl;
    NSStackView *_boldItalicStackView;
    NSButton *_boldButton;
    NSButton *_italicButton;
    NSStackView *_faceOutlineGlowDropStackView;
    NSButton *_faceButton;
    NSButton *_outlineButton;
    NSButton *_glowButton;
    NSButton *_dropShadowButton;
}

@property(nonatomic) NSButton *dropShadowButton; // @synthesize dropShadowButton=_dropShadowButton;
@property(nonatomic) NSButton *glowButton; // @synthesize glowButton=_glowButton;
@property(nonatomic) NSButton *outlineButton; // @synthesize outlineButton=_outlineButton;
@property(nonatomic) NSButton *faceButton; // @synthesize faceButton=_faceButton;
@property(nonatomic) NSStackView *faceOutlineGlowDropStackView; // @synthesize faceOutlineGlowDropStackView=_faceOutlineGlowDropStackView;
@property(nonatomic) NSButton *italicButton; // @synthesize italicButton=_italicButton;
@property(nonatomic) NSButton *boldButton; // @synthesize boldButton=_boldButton;
@property(nonatomic) NSStackView *boldItalicStackView; // @synthesize boldItalicStackView=_boldItalicStackView;
@property(nonatomic) NSSegmentedControl *alignmentSegmentedControl; // @synthesize alignmentSegmentedControl=_alignmentSegmentedControl;
@property(nonatomic) NSStackView *appearanceStackView; // @synthesize appearanceStackView=_appearanceStackView;
- (id)localizedUndoString;
- (unsigned int)didChangeChannelAdditionalNotificationFlags;
- (void)onAlignmentSegmentChanged:(id)arg1;
- (void)onItalicsToggle:(id)arg1;
- (void)onBoldfaceToggle:(id)arg1;
- (void)onDropShadow:(id)arg1;
- (void)onGlow:(id)arg1;
- (void)onOutline:(id)arg1;
- (void)onFace:(id)arg1;
- (void)updateToCurrentDocumentState;
- (void)updateWithNotificationFlags:(unsigned int)arg1;
- (void)viewWillAppear;
- (void)viewDidLoad;
- (void)dealloc;

@end


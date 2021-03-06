//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <LunaKit/LKViewModule.h>

#import <Flexo/FFCaptionEditorTextViewDelegate-Protocol.h>
#import <Flexo/FFCaptionHeaderDelegate-Protocol.h>
#import <Flexo/FFCaptionTextBlockControllerDelegate-Protocol.h>
#import <Flexo/NSTextViewDelegate-Protocol.h>

@class FFAnchoredCaption, FFAnchoredSequence, FFAnchoredTimelineModule, FFCaptionSharedHeader, FFRolesFormatter, FFRolesMenuController, FFStoryTimelinePresentation, NSMutableArray, NSStackView, NSString, NSView;
@protocol FFCaptionEditorDelegate;

@interface FFCaptionEditorViewModule : LKViewModule <NSTextViewDelegate, FFCaptionTextBlockControllerDelegate, FFCaptionHeaderDelegate, FFCaptionEditorTextViewDelegate>
{
    BOOL _newCaption;
    NSView *_firstKeyView;
    FFCaptionSharedHeader *_header;
    NSStackView *_stackView;
    FFAnchoredCaption *_caption;
    id <FFCaptionEditorDelegate> _captionEditorDelegate;
    FFAnchoredTimelineModule *_timeline;
    FFRolesMenuController *_rolesMenuController;
    FFRolesFormatter *_rolesFormatter;
    FFStoryTimelinePresentation *_storyPresentation;
    NSString *_captionMainRoleUID;
    NSString *_captionLanguageIdentifier;
    FFAnchoredSequence *_sequence;
    NSMutableArray *_textBlockControllers;
}

@property(retain, nonatomic) NSMutableArray *textBlockControllers; // @synthesize textBlockControllers=_textBlockControllers;
@property(retain, nonatomic) FFAnchoredSequence *sequence; // @synthesize sequence=_sequence;
@property(retain, nonatomic) NSString *captionLanguageIdentifier; // @synthesize captionLanguageIdentifier=_captionLanguageIdentifier;
@property(retain, nonatomic) NSString *captionMainRoleUID; // @synthesize captionMainRoleUID=_captionMainRoleUID;
@property(retain, nonatomic) FFStoryTimelinePresentation *storyPresentation; // @synthesize storyPresentation=_storyPresentation;
@property(retain, nonatomic) FFRolesFormatter *rolesFormatter; // @synthesize rolesFormatter=_rolesFormatter;
@property(retain, nonatomic) FFRolesMenuController *rolesMenuController; // @synthesize rolesMenuController=_rolesMenuController;
@property(nonatomic) FFAnchoredTimelineModule *timeline; // @synthesize timeline=_timeline;
@property(nonatomic) id <FFCaptionEditorDelegate> captionEditorDelegate; // @synthesize captionEditorDelegate=_captionEditorDelegate;
@property(retain, nonatomic) FFAnchoredCaption *caption; // @synthesize caption=_caption;
@property(nonatomic) BOOL newCaption; // @synthesize newCaption=_newCaption;
@property(nonatomic) NSStackView *stackView; // @synthesize stackView=_stackView;
@property(retain, nonatomic) FFCaptionSharedHeader *header; // @synthesize header=_header;
@property(retain, nonatomic) NSView *firstKeyView; // @synthesize firstKeyView=_firstKeyView;
- (void)selectPreviousTextView:(id)arg1;
- (void)selectNextTextView:(id)arg1;
- (void)handleEnterOrFunctionReturnKeysPressed;
- (void)roleWillChange;
- (void)roleDidChange;
- (void)dealloc;
- (id)identifier;
- (void)textChangedInBlockController:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)viewWasInstalled;
- (void)_reloadDataWithCaption:(id)arg1;
- (void)_rebuildTextBlockControllers;
- (void)_setupTextBlockViews;
- (id)initWithNewCaption:(id)arg1 delegate:(id)arg2 mainRoleUID:(id)arg3 languageIdentifier:(id)arg4;
- (id)initWithCaption:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


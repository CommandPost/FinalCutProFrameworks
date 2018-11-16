//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFBaseSharePanel.h>

@class FFAutoexpandingTextField, FFConsumerShareInfoController, LKButton, LKScrollView, LKTextField, NSImageView, NSTrackingArea, NSView;

__attribute__((visibility("hidden")))
@interface FFConsumerSharePanel : FFBaseSharePanel
{
    LKScrollView *_scrollView;
    LKButton *_signInButton;
    FFAutoexpandingTextField *_titleField;
    FFAutoexpandingTextField *_descriptionField;
    FFAutoexpandingTextField *_tagsField;
    FFConsumerShareInfoController *_shareInfoController;
    NSImageView *_errorImage;
    LKTextField *_errorField;
    FFAutoexpandingTextField *_descriptionTitle;
    FFAutoexpandingTextField *_tagsTitle;
    NSView *_settingsView;
    NSTrackingArea *_compatibilityTrackingArea;
    NSTrackingArea *_errorTrackingArea;
}

@property(nonatomic) FFAutoexpandingTextField *tagsTitle; // @synthesize tagsTitle=_tagsTitle;
@property(nonatomic) FFAutoexpandingTextField *descriptionTitle; // @synthesize descriptionTitle=_descriptionTitle;
@property(nonatomic) NSView *settingsView; // @synthesize settingsView=_settingsView;
@property(nonatomic) FFConsumerShareInfoController *shareInfoController; // @synthesize shareInfoController=_shareInfoController;
@property(nonatomic) FFAutoexpandingTextField *tagsField; // @synthesize tagsField=_tagsField;
@property(nonatomic) FFAutoexpandingTextField *descriptionField; // @synthesize descriptionField=_descriptionField;
@property(nonatomic) FFAutoexpandingTextField *titleField; // @synthesize titleField=_titleField;
@property(nonatomic) LKTextField *errorField; // @synthesize errorField=_errorField;
@property(nonatomic) NSImageView *errorImage; // @synthesize errorImage=_errorImage;
@property(nonatomic) LKButton *signInButton; // @synthesize signInButton=_signInButton;
@property(nonatomic) LKScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (id)batchNameWithBatch:(id)arg1 andDestination:(id)arg2;
- (void)showSignInPanel:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)windowDidLoad;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)dealloc;
- (void)layoutMetadataFields;
- (void)updateSignInButton;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFShareDestinationWebController.h>

@class LKButton, LKPopUpButton, NSArray, NSArrayController, NSButton, NSDictionary, NSSecureTextField, NSString, NSTextField, NSWindow;

@interface FFShareDestinationYouTubeController : FFShareDestinationWebController
{
    LKButton *_signInBtn;
    LKButton *_privateBtn;
    LKPopUpButton *_compressionPopup;
    LKPopUpButton *_categoryPopup;
    NSArrayController *_categoriesController;
    NSWindow *_signInPanel;
    NSTextField *_username;
    NSSecureTextField *_password;
    NSButton *_storeInKeychain;
    NSTextField *_messageStr;
    NSString *_nameWithUserInfo;
    BOOL _observing;
}

+ (id)unknownCategories;
+ (id)keyPathsForValuesAffectingCategory;
+ (id)keyPathsForValuesAffectingCategories;
@property(retain, nonatomic) NSString *nameWithUserInfo; // @synthesize nameWithUserInfo=_nameWithUserInfo;
@property(nonatomic) NSTextField *messageStr; // @synthesize messageStr=_messageStr;
@property(nonatomic) NSSecureTextField *password; // @synthesize password=_password;
@property(nonatomic) NSTextField *username; // @synthesize username=_username;
@property(nonatomic) NSWindow *signInPanel; // @synthesize signInPanel=_signInPanel;
@property(nonatomic) NSArrayController *categoriesController; // @synthesize categoriesController=_categoriesController;
@property(nonatomic) LKPopUpButton *categoryPopup; // @synthesize categoryPopup=_categoryPopup;
@property(nonatomic) LKPopUpButton *compressionPopup; // @synthesize compressionPopup=_compressionPopup;
@property(nonatomic) LKButton *privateBtn; // @synthesize privateBtn=_privateBtn;
@property(nonatomic) LKButton *signInBtn; // @synthesize signInBtn=_signInBtn;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)signInModalForWindow:(id)arg1;
- (void)signIn:(id)arg1;
- (void)signInSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)okcancelClicked:(id)arg1;
@property(copy, nonatomic) NSDictionary *category;
@property(readonly, nonatomic) NSArray *categories;
- (long long)showModalPanelIfNeeded;
- (void)showPanelIfNeededModalForWindow:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)showPanelIfNeeded:(CDUnknownBlockType)arg1;
- (BOOL)validateUsernamePassword:(id *)arg1;
- (void)dealloc;
- (void)awakeFromNib;
- (id)initWithDestination:(id)arg1 withSource:(id)arg2;
- (void)updateTitle;

@end

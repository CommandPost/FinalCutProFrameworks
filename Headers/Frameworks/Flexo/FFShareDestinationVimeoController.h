//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFShareDestinationWebController.h>

@class LKButton, LKPopUpButton, NSArray, NSButton, NSDictionary, NSMapTable, NSSecureTextField, NSString, NSTextField, NSWindow;

@interface FFShareDestinationVimeoController : FFShareDestinationWebController
{
    LKButton *_signInBtn;
    LKPopUpButton *_viewableByPopup;
    LKPopUpButton *_compressionPopup;
    NSWindow *_signInPanel;
    NSTextField *_username;
    NSSecureTextField *_password;
    NSButton *_storeInKeychain;
    NSTextField *_messageStr;
    NSMapTable *_mapDestinationToNameWithUserInfo;
}

+ (id)keyPathsForValuesAffectingIsPasswordBasedPrivacy;
@property(copy, nonatomic) NSMapTable *mapDestinationToNameWithUserInfo; // @synthesize mapDestinationToNameWithUserInfo=_mapDestinationToNameWithUserInfo;
@property(nonatomic) NSTextField *messageStr; // @synthesize messageStr=_messageStr;
@property(nonatomic) NSSecureTextField *password; // @synthesize password=_password;
@property(nonatomic) NSTextField *username; // @synthesize username=_username;
@property(nonatomic) NSWindow *signInPanel; // @synthesize signInPanel=_signInPanel;
@property(nonatomic) LKPopUpButton *compressionPopup; // @synthesize compressionPopup=_compressionPopup;
@property(nonatomic) LKPopUpButton *viewableByPopup; // @synthesize viewableByPopup=_viewableByPopup;
@property(nonatomic) LKButton *signInBtn; // @synthesize signInBtn=_signInBtn;
- (void)signInModalForWindow:(id)arg1;
- (void)signIn:(id)arg1;
- (void)signInSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)okcancelClicked:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(nonatomic) BOOL isPasswordBasedPrivacy;
@property(copy, nonatomic) NSDictionary *privacy;
@property(readonly, nonatomic) NSArray *privacyList;
@property(nonatomic) BOOL rememberPrivacyPassword;
@property(copy, nonatomic) NSString *privacyPassword;
- (void)showPanel:(BOOL)arg1 modalForWindow:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)validateUsernamePassword:(id *)arg1 withDestination:(id)arg2;
- (BOOL)validateUsernamePassword:(id *)arg1;
- (void)dealloc;
- (id)initWithDestination:(id)arg1 withSources:(id)arg2;
- (void)awakeFromNib;
- (id)buttonTitle;
- (void)updateTitleWithDestination:(id)arg1;
@property(readonly, nonatomic) NSString *nameWithUserInfo;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSWindowController.h>

@class FFRole, FFSelectClosedCaptionsRoleInfoView, NSArray, NSImage, NSMapTable, NSMutableArray, NSPopUpButton, NSSet, NSStackView, NSView, NSWindow;

__attribute__((visibility("hidden")))
@interface FFSendPackageToCompressorPanel : NSWindowController
{
    NSArray *_SCCRoles;
    NSArray *_iTTRoles;
    NSArray *_SRTRoles;
    NSSet *_disabledRoles;
    NSArray *_iTTMetadata;
    NSMutableArray *_iTTMetadataControllers;
    NSWindow *_parentWindow;
    CDUnknownBlockType _completionHandler;
    NSView *_SCCView;
    NSPopUpButton *_SCCRolesPopUpButton;
    NSView *_iTTView;
    NSStackView *_iTTMetadataStackView;
    NSView *_SRTView;
    FFSelectClosedCaptionsRoleInfoView *_roleInfoView;
}

@property FFSelectClosedCaptionsRoleInfoView *roleInfoView; // @synthesize roleInfoView=_roleInfoView;
@property NSView *SRTView; // @synthesize SRTView=_SRTView;
@property NSStackView *iTTMetadataStackView; // @synthesize iTTMetadataStackView=_iTTMetadataStackView;
@property NSView *iTTView; // @synthesize iTTView=_iTTView;
@property NSPopUpButton *SCCRolesPopUpButton; // @synthesize SCCRolesPopUpButton=_SCCRolesPopUpButton;
@property NSView *SCCView; // @synthesize SCCView=_SCCView;
@property(copy) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain) NSWindow *parentWindow; // @synthesize parentWindow=_parentWindow;
@property(retain) NSMutableArray *iTTMetadataControllers; // @synthesize iTTMetadataControllers=_iTTMetadataControllers;
@property(retain) NSArray *iTTMetadata; // @synthesize iTTMetadata=_iTTMetadata;
@property(copy) NSSet *disabledRoles; // @synthesize disabledRoles=_disabledRoles;
@property(retain) NSArray *SRTRoles; // @synthesize SRTRoles=_SRTRoles;
@property(retain) NSArray *iTTRoles; // @synthesize iTTRoles=_iTTRoles;
@property(retain) NSArray *SCCRoles; // @synthesize SCCRoles=_SCCRoles;
- (void)closeWithCode:(long long)arg1;
- (void)beginSheetModalForWindow:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (long long)runModal;
- (void)cancel:(id)arg1;
- (void)ok:(id)arg1;
@property(readonly, nonatomic) NSMapTable *iTTPurposeMapTable;
@property(readonly, nonatomic) FFRole *SCCRole;
@property(readonly, nonatomic) NSImage *icon;
- (void)dealloc;
- (void)windowDidLoad;
- (id)initWithRoles:(id)arg1 disabledRoles:(id)arg2;

@end


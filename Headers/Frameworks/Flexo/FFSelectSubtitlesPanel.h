//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

#import "NSTableViewDataSource.h"
#import "NSTableViewDelegate.h"

@class FFSelectClosedCaptionsRoleInfoView, NSArray, NSImageView, NSMapTable, NSMutableArray, NSSet, NSString, NSTableView, NSWindow;

__attribute__((visibility("hidden")))
@interface FFSelectSubtitlesPanel : NSWindowController <NSTableViewDataSource, NSTableViewDelegate>
{
    NSArray *_iTTRoles;
    NSWindow *_parentWindow;
    CDUnknownBlockType _completionHandler;
    NSImageView *_iconView;
    NSTableView *_iTTOptionTableView;
    NSMapTable *_iTTPurposeMapTable;
    FFSelectClosedCaptionsRoleInfoView *_roleInfoView;
    NSMutableArray *_iTTSettingArray;
    NSSet *_disabledRoles;
}

@property(retain) NSSet *disabledRoles; // @synthesize disabledRoles=_disabledRoles;
@property(retain) NSMutableArray *iTTSettingArray; // @synthesize iTTSettingArray=_iTTSettingArray;
@property(nonatomic) FFSelectClosedCaptionsRoleInfoView *roleInfoView; // @synthesize roleInfoView=_roleInfoView;
@property(retain) NSMapTable *iTTPurposeMapTable; // @synthesize iTTPurposeMapTable=_iTTPurposeMapTable;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)iTTPurposeRadioButtonClicked:(id)arg1;
- (void)closeWithCode:(long long)arg1;
- (void)beginSheetModalForWindow:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (long long)runModal;
- (void)cancel:(id)arg1;
- (void)ok:(id)arg1;
- (void)windowDidLoad;
- (void)awakeFromNib;
- (void)_prepareITTMapTable;
- (void)_prepareITTSettingArray;
- (void)dealloc;
- (id)initWithITTRoles:(id)arg1 disabledRoles:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCollectionViewItem.h"

@class FFShareDestinationExportMediaController, NSArray, NSArrayController, NSButton, NSPopUpButton;

__attribute__((visibility("hidden")))
@interface FFRoleOutputViewItem : NSCollectionViewItem
{
    FFShareDestinationExportMediaController *_exportMediaController;
    NSArrayController *_roleOutputsController;
    NSPopUpButton *_rolesPopUpButton;
    NSPopUpButton *_audioChannelLayoutPopUpButton;
    NSButton *_removeButton;
}

+ (id)keyPathsForValuesAffectingIsAudioOutput;
+ (id)keyPathsForValuesAffectingRoles;
+ (id)keyPathsForValuesAffectingLabel;
+ (id)keyPathsForValuesAffectingCanRemove;
+ (id)keyPathsForValuesAffectingCanAdd;
@property(nonatomic) NSButton *removeButton; // @synthesize removeButton=_removeButton;
@property(nonatomic) NSPopUpButton *audioChannelLayoutPopUpButton; // @synthesize audioChannelLayoutPopUpButton=_audioChannelLayoutPopUpButton;
@property(nonatomic) NSPopUpButton *rolesPopUpButton; // @synthesize rolesPopUpButton=_rolesPopUpButton;
@property(nonatomic) NSArrayController *roleOutputsController; // @synthesize roleOutputsController=_roleOutputsController;
@property(nonatomic) FFShareDestinationExportMediaController *exportMediaController; // @synthesize exportMediaController=_exportMediaController;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)updateAudioChannelLayoutMenu;
- (void)updateRolesMenu;
@property(readonly, nonatomic) BOOL isAudioOutput;
@property(readonly, nonatomic) NSArray *allRoles;
- (BOOL)canRemove;
- (BOOL)canAdd;
- (void)selectAudioChannelLayout:(id)arg1;
- (void)toggleSubrole:(id)arg1;
- (void)toggleRole:(id)arg1;
- (void)remove:(id)arg1;
- (void)add:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)awakeFromNib;

@end

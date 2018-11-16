//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LKTile.h"

@class FFOrganizerFilterHUDTileModule, LKButton, LKImageView, NSView;

__attribute__((visibility("hidden")))
@interface FFOrganizerFilterHUDTile : LKTile
{
    LKButton *_enabledCheckBox;
    LKButton *_removeTileButton;
    LKImageView *_tileTypeGlyph;
    NSView *_customView;
    FFOrganizerFilterHUDTileModule *_subModule;
    id <FFOrganizerFilterHUDTileDelegate> _delegate;
}

@property(nonatomic) id <FFOrganizerFilterHUDTileDelegate> delegate; // @synthesize delegate=_delegate;
- (id)subModule;
- (void)setCustomViewFromNib:(id)arg1 filterDict:(id)arg2;
- (id)library;
- (void)tileModuleUpdated:(id)arg1;
- (id)filterDict;
- (id)metadataKey;
- (void)updateWithSelectedRoleUIDs:(id)arg1;
- (void)setKeywords:(id)arg1 selectedKeywords:(id)arg2;
- (BOOL)active;
- (void)setActive:(BOOL)arg1;
- (BOOL)closeButtonHidden;
- (void)setCloseButtonHidden:(BOOL)arg1;
- (void)removeTileButtonAction:(id)arg1;
- (void)enableCheckBoxAction:(id)arg1;
- (void)dealloc;
- (void)awakeFromNib;

@end


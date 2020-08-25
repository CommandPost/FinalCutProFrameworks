//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFOrganizerFilterHUDTileModule.h>

@class LKMenu, LKPopUpButton, LKTextField;

__attribute__((visibility("hidden")))
@interface FFOrganizerFilterHUDFormatInfoTileModule : FFOrganizerFilterHUDTileModule
{
    LKPopUpButton *_formatInfoPopup;
    LKPopUpButton *_comparisonPopup;
    LKTextField *_textField;
    LKPopUpButton *_enumValuePopup;
    LKMenu *_sphericalModesMenu;
    LKMenu *_stereoModesMenu;
}

@property(retain, nonatomic) LKMenu *stereoModesMenu; // @synthesize stereoModesMenu=_stereoModesMenu;
@property(retain, nonatomic) LKMenu *sphericalModesMenu; // @synthesize sphericalModesMenu=_sphericalModesMenu;
- (id)tileNameString;
- (id)tileGlyphString;
- (void)formatInfoPopupUpdated:(id)arg1;
- (void)comparisonTypePopupUpdated:(id)arg1;
- (void)formatChanged:(id)arg1;
- (void)_showControlsForFormatInfo;
- (void)controlTextDidChange:(id)arg1;
- (id)filterDict;
- (void)setFilterDict:(id)arg1;
- (void)dealloc;
- (void)awakeFromNib;
- (void)setup360Menus;
- (id)stringForEnumChoice;
- (BOOL)formatSelectedIs360;

@end


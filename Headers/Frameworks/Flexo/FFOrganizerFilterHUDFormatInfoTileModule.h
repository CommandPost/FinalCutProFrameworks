//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFOrganizerFilterHUDTileModule.h>

@class LKPopUpButton, LKTextField;

__attribute__((visibility("hidden")))
@interface FFOrganizerFilterHUDFormatInfoTileModule : FFOrganizerFilterHUDTileModule
{
    LKPopUpButton *_formatInfoPopup;
    LKPopUpButton *_comparisonPopup;
    LKTextField *_textField;
}

- (id)tileTypeFacet;
- (void)formatInfoPopupUpdated:(id)arg1;
- (void)_showControlsForFormatInfo;
- (void)controlTextDidChange:(id)arg1;
- (id)filterDict;
- (void)setFilterDict:(id)arg1;
- (void)dealloc;
- (void)awakeFromNib;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFOrganizerFilterHUDTileModule.h>

@class LKPopUpButton;

__attribute__((visibility("hidden")))
@interface FFOrganizerFilterHUDMediaTypeTileModule : FFOrganizerFilterHUDTileModule
{
    LKPopUpButton *_isPopUpButton;
    LKPopUpButton *_mediaTypePopUpButton;
}

- (void)awakeFromNib;
- (void)mediaTypeFilterMenu:(id)arg1;
- (void)setFilterDict:(id)arg1;
- (id)filterDict;
- (id)tileTypeFacet;

@end


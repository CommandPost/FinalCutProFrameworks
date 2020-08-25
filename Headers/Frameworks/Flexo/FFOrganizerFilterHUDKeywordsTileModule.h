//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFOrganizerFilterHUDTileModule.h>

@class NSGridView, NSLayoutConstraint, NSMutableSet, NSPopUpButton, NSSet;

__attribute__((visibility("hidden")))
@interface FFOrganizerFilterHUDKeywordsTileModule : FFOrganizerFilterHUDTileModule
{
    NSSet *_keywordSet;
    NSMutableSet *_selectedKeywordSet;
    NSGridView *_keywordGrid;
    NSPopUpButton *_comparisonPopup;
    NSPopUpButton *_selectionPopup;
    NSLayoutConstraint *_gridWidthConstraint;
    NSLayoutConstraint *_gridTrailingConstraint;
    NSLayoutConstraint *_gridLeadingConstraint;
}

@property NSLayoutConstraint *gridLeadingConstraint; // @synthesize gridLeadingConstraint=_gridLeadingConstraint;
@property NSLayoutConstraint *gridTrailingConstraint; // @synthesize gridTrailingConstraint=_gridTrailingConstraint;
@property NSLayoutConstraint *gridWidthConstraint; // @synthesize gridWidthConstraint=_gridWidthConstraint;
@property NSPopUpButton *selectionPopup; // @synthesize selectionPopup=_selectionPopup;
@property NSPopUpButton *comparisonPopup; // @synthesize comparisonPopup=_comparisonPopup;
@property NSGridView *keywordGrid; // @synthesize keywordGrid=_keywordGrid;
@property(retain) NSMutableSet *selectedKeywordSet; // @synthesize selectedKeywordSet=_selectedKeywordSet;
@property(retain) NSSet *keywordSet; // @synthesize keywordSet=_keywordSet;
- (id)displayNameForKeyword:(id)arg1;
- (void)keywordButtonClicked:(id)arg1;
- (id)sortKeywords:(id)arg1;
- (id)comparisonTypesAllowed;
- (unsigned long long)currentComparisonType;
- (void)deselectAllKeywords:(id)arg1;
- (void)selectAllKeywords:(id)arg1;
- (void)_setAllToState:(unsigned long long)arg1;
- (id)tileNameString;
- (id)tileGlyphString;
- (id)buttonForKeyword:(id)arg1;
- (id)buttonsForKeywords:(id)arg1;
- (void)showGrid;
- (void)hideGrid;
- (void)setKeywords:(id)arg1 selectedKeywords:(id)arg2;
- (id)filterDict;
- (void)setFilterDict:(id)arg1;
- (void)dealloc;
- (void)awakeFromNib;

@end


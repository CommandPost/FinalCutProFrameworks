//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFOrganizerFilterHUDTileModule.h>

@class LKButtonCell, LKPopUpButton, NSMutableDictionary, NSMutableSet, NSProMatrix, NSSet;

__attribute__((visibility("hidden")))
@interface FFOrganizerFilterHUDKeywordsTileModule : FFOrganizerFilterHUDTileModule
{
    NSSet *_keywordSet;
    NSMutableSet *_selectedKeywordSet;
    NSMutableDictionary *_keywordCheckBoxDictionary;
    LKPopUpButton *_comparisonPopup;
    LKPopUpButton *_selectionPopup;
    NSProMatrix *_keywordMatrix;
    LKButtonCell *_checkBoxCell;
}

- (void)awakeFromNib;
- (void)dealloc;
- (void)setFilterDict:(id)arg1;
- (id)filterDict;
- (void)setKeywords:(id)arg1 selectedKeywords:(id)arg2;
- (id)tileTypeFacet;
- (void)_setAllToState:(unsigned long long)arg1;
- (void)selectAllKeywords:(id)arg1;
- (void)deselectAllKeywords:(id)arg1;
- (id)comparisonTypesAllowed;
- (id)sortKeywords:(id)arg1;
- (void)keywordButtonClicked:(id)arg1;
@property(retain, nonatomic) NSSet *selectedKeywordSet; // @synthesize selectedKeywordSet=_selectedKeywordSet;
@property(retain, nonatomic) NSSet *keywordSet; // @synthesize keywordSet=_keywordSet;

@end

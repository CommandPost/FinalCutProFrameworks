//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFOrganizerFilterHUDTileModule.h>

@class LKPopUpButton, LKTextField;

__attribute__((visibility("hidden")))
@interface FFOrganizerFilterHUDTextTileModule : FFOrganizerFilterHUDTileModule
{
    LKPopUpButton *_comparisonPopup;
    LKTextField *_textField;
    struct FFProcrastinatedDispatch_t _textEntryProcrstinatedDispatch;
}

@property(readonly, nonatomic) LKTextField *textField; // @synthesize textField=_textField;
- (id)tileTypeFacet;
- (void)controlTextDidChange:(id)arg1;
- (id)filterDict;
- (void)setFilterDict:(id)arg1;
- (void)dealloc;
- (void)viewWillBeRemoved;
- (void)awakeFromNib;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFDataListModeViewController.h>

@class LKTileView, NSMutableDictionary, NSSet;

__attribute__((visibility("hidden")))
@interface FFDataListRolesViewController : FFDataListModeViewController
{
    LKTileView *_tileView;
    NSSet *_itemsWithRoles;
    NSMutableDictionary *_roleSetToTileMap;
    NSSet *_rolesInCurrentSequence;
    BOOL _isLoadingData;
    BOOL _isUpdatingSelection;
}

- (void)awakeFromNib;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_updateItems;
- (void)_updateRoles;
- (void)reloadData;
- (id)dataListInfoStringForProposedString:(id)arg1;
- (BOOL)supportsSearch;
- (void)_setEnabled:(BOOL)arg1 ofRoleSet:(id)arg2 andChangeAllOtherRoles:(BOOL)arg3 toEnabled:(BOOL)arg4;
- (void)_setEnabled:(BOOL)arg1 ofRole:(id)arg2 andChangeAllOtherRoles:(BOOL)arg3 toEnabled:(BOOL)arg4;
- (void)_setMinimized:(BOOL)arg1 ofRoleSet:(id)arg2 andChangeAllOtherRoles:(BOOL)arg3 toMinimized:(BOOL)arg4;
- (void)_setMinimized:(BOOL)arg1 ofRole:(id)arg2 andChangeAllOtherRoles:(BOOL)arg3 toMinimized:(BOOL)arg4;
- (void)tileView:(id)arg1 didSelectTileIndexes:(id)arg2 byExtendingSelection:(BOOL)arg3;
- (void)_updateSelectionsForTileView:(id)arg1 byExtendingSelection:(BOOL)arg2;
- (id)_itemsInRole:(id)arg1;
- (BOOL)_roleSetShouldBeDisplayed:(id)arg1;
- (BOOL)_roleShouldBeDisplayed:(id)arg1;
@property(retain, nonatomic) NSSet *itemsWithRoles; // @synthesize itemsWithRoles=_itemsWithRoles;
- (id)_selectedRoles;
- (id)_disabledRoles;
- (id)_minimizedRoles;
- (void)_reflectDisabledRolesInTimelineContext;
- (id)_timelineModule;
@property(retain, nonatomic) NSSet *rolesInCurrentSequence; // @synthesize rolesInCurrentSequence=_rolesInCurrentSequence;

@end


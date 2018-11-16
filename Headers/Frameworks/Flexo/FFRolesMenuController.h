//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSMenuDelegate.h"

@class NSArray, NSMenu, NSSet;

@interface FFRolesMenuController : NSObject <NSMenuDelegate>
{
    NSSet *_anchoredObjects;
    NSArray *_roleMenuItems;
    NSMenu *_menu;
    id <FFRolesMenuDelegate> _delegate;
}

- (id)initWithRolesMenuDelegate:(id)arg1;
- (id)initWithRolesMenuDelegate:(id)arg1 menu:(id)arg2;
- (void)dealloc;
- (void)_setupMenu;
- (void)menuNeedsUpdate:(id)arg1;
- (int)_tagForRoleDefinition:(id)arg1;
- (void)_populateMenu;
- (void)_updateRolesState;
- (void)changeRole:(id)arg1;
- (void)editRoles:(id)arg1;
@property(retain, nonatomic) NSArray *roleMenuItems; // @synthesize roleMenuItems=_roleMenuItems;
@property(nonatomic) id <FFRolesMenuDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMenu *menu; // @synthesize menu=_menu;
@property(retain, nonatomic) NSSet *anchoredObjects; // @synthesize anchoredObjects=_anchoredObjects;

@end


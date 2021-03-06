//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Ozone/OZChanObjectRefWithPickerController.h>

@interface OZObjectPickerController : OZChanObjectRefWithPickerController
{
    BOOL _menuContainsExposeableObjects;
    BOOL _alwaysShowGroups;
    BOOL _groupsSelectable;
    unsigned int _objectFilter;
}

- (_Bool)menuContainsExposeableObjects;
- (BOOL)linkSceneNode:(struct OZObjectManipulator *)arg1;
- (void)buildMenu;
- (void)addGroupToMenu:(struct OZGroup *)arg1 inputMenu:(id)arg2;
- (BOOL)groupContainsIncludedObjects:(struct OZGroup *)arg1;
- (id)buildObjectMenu:(id)arg1 ignoreObjID:(unsigned int)arg2;
- (id)addMenuItemFromRoot:(struct OZChannelObjectRoot *)arg1 withText:(id)arg2 inputMenu:(id)arg3;
- (id)addMenuCamera:(struct OZCamera *)arg1 withText:(id)arg2 inputMenu:(id)arg3;
- (id)addMenuObject:(struct OZObjectManipulator *)arg1 withText:(id)arg2 inputMenu:(id)arg3;
- (id)addMenuObject:(struct OZObjectManipulator *)arg1 ignoreObjID:(unsigned int)arg2 inputMenu:(id)arg3;
- (BOOL)groupsSelectable;
- (void)setGroupsSelectable:(BOOL)arg1;
- (BOOL)alwaysShowGroups;
- (void)setAlwaysShowGroups:(BOOL)arg1;
- (void)excludeObjectType:(unsigned int)arg1;
- (void)includeObjectType:(unsigned int)arg1;
- (BOOL)objectTypeIncluded:(unsigned int)arg1;
- (id)initWithChan:(struct OZChannelBase *)arg1 context:(id)arg2;

@end


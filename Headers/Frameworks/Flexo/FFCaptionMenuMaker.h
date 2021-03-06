//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface FFCaptionMenuMaker : NSObject
{
}

+ (id)sharedInstance;
- (BOOL)activeCaptionRolesAreTheSameForSources:(id)arg1 filterByFormats:(id)arg2;
- (id)activeCaptionRoleForSource:(id)arg1 filterByFormats:(id)arg2;
- (id)intersectionSetOfCaptionRolesWithFormats:(id)arg1 sources:(id)arg2;
- (id)menuForButtonWithCaptionRoles:(id)arg1 target:(id)arg2 selectRole:(SEL)arg3 selectActive:(SEL)arg4;
- (id)menuForButtonWithCaptionFormats:(id)arg1 sources:(id)arg2 target:(id)arg3 selectRole:(SEL)arg4 selectActive:(SEL)arg5;
- (id)menuForButtonWithCaptionFormats:(id)arg1 source:(id)arg2 target:(id)arg3 selectRole:(SEL)arg4;
- (void)addItemsToMenu:(id)arg1 library:(id)arg2 roles:(id)arg3 selectRole:(SEL)arg4 target:(id)arg5;
- (id)nameForMenuItemWithCaptionRole:(id)arg1 library:(id)arg2;
- (BOOL)applicableCaptionsAreAvailableWithFormats:(id)arg1 sources:(id)arg2;

@end


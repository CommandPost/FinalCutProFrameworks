//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface FFColorForRole : NSObject
{
}

+ (void)clearRoleUIDColorIndexCacheForLibrary:(id)arg1;
+ (id)fallbackColorSchemeWhenNoAudioRoles;
+ (id)colorSchemeForIndex:(long long)arg1;
+ (id)colorSchemeForRolesOfObject:(id)arg1;
+ (id)colorSchemeForAudioRoles:(id)arg1 videoRoles:(id)arg2 inLibrary:(id)arg3;
+ (id)colorSchemeForCaption;
+ (id)colorSchemeForTransition;
+ (id)colorSchemeForDisabledAudioRole;
+ (id)colorSchemeForNoRoles;
+ (id)colorSchemeForMultipleAudioRoles;
+ (id)colorSchemeForRoleUID:(id)arg1 inLibrary:(id)arg2;
+ (long long)_roleColorIndexForRoleUID:(id)arg1 inLibrary:(id)arg2;
+ (id)_mainRoleForRoleWithRoleUID:(id)arg1 inLibrary:(id)arg2;
+ (void)initialize;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FFRoleDefinition : NSObject
{
}

+ (BOOL)isRoleSet:(id)arg1;
+ (BOOL)isGenericRole:(id)arg1;
+ (id)fcpDefinedRoleSets;
+ (id)fcpDefinedRoles;
+ (id)genericRoleDefinitionWithRoleSet:(id)arg1;
+ (id)roleSetWithType:(int)arg1 roleSetName:(id)arg2;
+ (id)genericRoleDefinitionWithType:(int)arg1 roleSetName:(id)arg2;
+ (id)roleDefinitionWithType:(int)arg1 roleSetName:(id)arg2 roleName:(id)arg3;
+ (int)typeOfRoleSet:(id)arg1;
+ (int)typeOfRole:(id)arg1;
+ (id)nameForRoleSet:(id)arg1;
+ (id)nameForRoleDefinition:(id)arg1;
+ (id)roleSetForRole:(id)arg1;
+ (void)releaseSharedInstance;
+ (void)initialize;

@end


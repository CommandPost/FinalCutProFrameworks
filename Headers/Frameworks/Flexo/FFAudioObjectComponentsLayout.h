//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFAudioComponentsLayout.h>

@class NSMutableSet;

__attribute__((visibility("hidden")))
@interface FFAudioObjectComponentsLayout : FFAudioComponentsLayout
{
    NSMutableSet *_orphanedLayoutItems;
    NSMutableSet *_recentOrphanedLayoutItems;
}

+ (Class)mutableLayoutItemClass;
+ (Class)layoutItemClass;
+ (id)copyClassDescription;
- (void)notifyRolesDidChangeForLibrary:(id)arg1 removedRoleUIDs:(id)arg2;
- (void)removeOrphanedLayoutItemsObject:(id)arg1;
- (void)addOrphanedLayoutItemsObject:(id)arg1;
- (void)removeRecentOrphanedLayoutItem:(id)arg1;
- (void)addRecentOrphanedLayoutItem:(id)arg1;
- (BOOL)hasLayoutItemForOrphanMatchingRole:(id)arg1;
- (id)claimLayoutItemForOrphanMatchingRole:(id)arg1;
- (id)_newLayoutItemForOrphanMatchingRole:(id)arg1;
- (void)_pruneOrphanedLayoutItemsForRole:(id)arg1;
- (void)removeOrphanedLayoutItem:(id)arg1;
- (void)addOrphanedLayoutItem:(id)arg1;
- (id)recentOrphanedLayoutItems;
- (id)orphanedLayoutItems;
- (BOOL)hasOrphanedLayoutItems;
- (BOOL)supportsOrphanedLayoutItemAdoption;
- (id)copyWithReplacementLayoutItems:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithAudioComponentsLayout:(id)arg1 useMutableLayoutItems:(BOOL)arg2;

@end


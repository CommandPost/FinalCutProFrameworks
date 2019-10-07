//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFBaseDSObject.h>

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSArray;

@interface FFAudioComponentsLayout : FFBaseDSObject <NSSecureCoding, NSCopying>
{
    unsigned int _numChannels;
    NSArray *_layoutItems;
}

+ (BOOL)supportsSecureCoding;
+ (BOOL)isRoutingMapDefault:(id)arg1 forNumChannels:(unsigned int)arg2;
+ (id)defaultRoutingMapForNumChannels:(unsigned int)arg1;
+ (BOOL)isChannelMapDefault:(id)arg1 forNumChannels:(unsigned int)arg2;
+ (id)defaultChannelMapForNumChannels:(unsigned int)arg1;
+ (id)defaultSurroundLayout;
+ (id)defaultStereoLayout;
+ (id)defaultMonoLayout;
+ (BOOL)isValidLayoutItems:(id)arg1 forNumChannels:(unsigned int)arg2;
+ (Class)mutableLayoutItemClass;
+ (Class)layoutItemClass;
+ (id)copyClassDescription;
+ (void)disableAudioComponentsOnAVLaneOfSynchronizedClip:(id)arg1;
+ (void)setupVoiceOverClip:(id)arg1 withNumberOfChannels:(int)arg2 role:(id)arg3;
+ (void)setupSynchronizedClip:(id)arg1 library:(id)arg2;
+ (void)setupSequenceForMulticamClip:(id)arg1 library:(id)arg2;
+ (void)setupSequenceForReferenceClip:(id)arg1 library:(id)arg2;
+ (void)resetAudioComponentsLayoutMapForObject:(id)arg1;
+ (void)setAudioComponentsLayout:(id)arg1 forKey:(id)arg2 forObject:(id)arg3;
+ (id)containedRolesForObject:(id)arg1 usingFilterBlock:(CDUnknownBlockType)arg2;
+ (id)containedRolesForObject:(id)arg1;
+ (id)anchoredObjectsForKey:(id)arg1 forObject:(id)arg2;
+ (CDUnknownBlockType)layoutItemRoleComparatorForObject:(id)arg1 layoutKey:(id)arg2;
+ (CDUnknownBlockType)_layoutItemRoleComparatorForObject:(id)arg1 layoutKey:(id)arg2;
+ (CDUnknownBlockType)_layoutItemRoleComparatorForObject:(id)arg1;
+ (id)referenceRoleForObject:(id)arg1 key:(id)arg2 layoutItemKey:(id)arg3 rolesForObjectBlock:(CDUnknownBlockType)arg4;
+ (id)referenceRoleForObject:(id)arg1 key:(id)arg2 layoutItemKey:(id)arg3;
+ (id)newMainRolesLayoutFromAllRolesLayout:(id)arg1 rootObject:(id)arg2;
+ (id)newRoleLayoutForClip:(id)arg1 layoutKey:(id)arg2;
+ (unsigned int)_numChannelsFlagsForRoles:(id)arg1 andObject:(id)arg2;
+ (id)_newLayoutUsingRoleKeyNumChannelsFlagsMap:(struct NSMapTable *)arg1 rootObject:(id)arg2;
+ (id)newLayoutForObject:(id)arg1;
+ (id)newClipLayoutForPrimordialClip:(id)arg1;
+ (id)availableMediaSourceChannelsForPrimordialClip:(id)arg1;
+ (id)availableMediaSourcesForPrimordialClip:(id)arg1;
+ (BOOL)isCompoundClipLayoutMapClip:(id)arg1;
+ (BOOL)isReferenceLayoutMapClip:(id)arg1;
+ (BOOL)supportsComponentsLayouts:(id)arg1;
+ (BOOL)isSupportedPrimordialClip:(id)arg1;
+ (BOOL)supportsAudioComponents:(id)arg1;
+ (void)update_preserveCurrentDefaultAudioComponentsLayout:(id)arg1 forCatalogVersion:(int)arg2;
+ (void)update_migrateLibraryToRoleComponents:(id)arg1 modalDocumentSession:(struct NSObject *)arg2;
+ (BOOL)update_demandLayoutMapForObject:(id)arg1;
+ (BOOL)update_createAudioComponentsLayoutMapForObject:(id)arg1;
+ (BOOL)update_setAudioComponentsLayoutMap:(id)arg1 forObject:(id)arg2;
@property(readonly, nonatomic) NSArray *layoutItems; // @synthesize layoutItems=_layoutItems;
@property(readonly, nonatomic) unsigned int numChannels; // @synthesize numChannels=_numChannels;
- (void)removeObjectFromLayoutItemsAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 inLayoutItemsAtIndex:(unsigned long long)arg2;
- (id)description;
- (BOOL)isEquivalentToLayout:(id)arg1;
- (BOOL)isEqualToLayout:(id)arg1;
- (unsigned int)numOutputChannels:(unsigned int)arg1;
- (unsigned int)numOutputChannels;
- (void)setLayoutItems:(id)arg1;
- (void)_setLayoutItems:(id)arg1 resetEquivalenceIDs:(BOOL)arg2;
- (id)copyWithReplacementLayoutItems:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAudioComponentsLayout:(id)arg1 useMutableLayoutItems:(BOOL)arg2;
- (id)initWithAudioComponentsLayout:(id)arg1;
- (id)initWithNumChannels:(unsigned int)arg1 layoutItems:(id)arg2;

@end


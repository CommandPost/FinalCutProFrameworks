//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FFLibrary, NSArray, NSMapTable, NSMutableSet, NSSet;

@interface FFRoleChangeOperation : NSObject
{
    FFLibrary *_library;
    unsigned int _options;
    CDUnknownBlockType _projectedRolesBlock;
    CDUnknownBlockType _operationBlock;
    CDUnknownBlockType _preOperationBlock;
    CDUnknownBlockType _postOperationBlock;
    CDUnknownBlockType _orphanBlacklistBlock;
    CDUnknownBlockType _noRoleComponentMigrationBlock;
    CDUnknownBlockType _projectedLayoutObjectsBlock;
    CDUnknownBlockType _currentRolesBlock;
    CDUnknownBlockType _currentLayoutObjectsBlock;
    NSMapTable *_userInfo;
    BOOL _forPreflight;
    NSSet *_cachedMediaIdentifiersUsedByUnloadedProjects;
    unsigned int _preflightResults;
    NSSet *_objectList;
    NSMutableSet *_orphanBlacklist;
    NSMapTable *_currentRoleInfoMap;
    NSMapTable *_projectedRoleInfoMap;
    NSMapTable *_currentRoleLeafObjectsMap;
    NSMapTable *_projectedRoleLeafObjectsMap;
    NSMapTable *_sequenceSavedStateMap;
    NSArray *_sortedSequenceList;
    NSArray *_cachedMigrationList;
}

+ (BOOL)interactivePreflightOperationWithResults:(unsigned int)arg1 library:(id)arg2 text:(int)arg3 error:(id *)arg4;
+ (BOOL)interactivePreflightOperation:(id)arg1 text:(int)arg2 error:(id *)arg3;
+ (BOOL)performOperation:(id)arg1 error:(id *)arg2 usingBlock:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) FFLibrary *library; // @synthesize library=_library;
@property(retain, nonatomic) NSSet *objects; // @synthesize objects=_objectList;
- (BOOL)_performOperation:(id *)arg1;
- (void)resetOperationCaches;
- (void)_endSequenceDeferUpdatesScopes:(BOOL)arg1;
- (void)_beginSequenceDeferUpdatesScopesWithRoleChangeContext:(id)arg1;
- (BOOL)_canStartOperation:(BOOL)arg1;
- (unsigned int)preflightOperation;
- (BOOL)performOperation:(id *)arg1;
- (void)_updateMixdownRoleGroupWithRoleChangeContext:(id)arg1;
- (void)_handleMigrationList:(id)arg1 context:(id)arg2;
- (id)_migrationListForObjects:(id)arg1;
- (id)_newMigrationListForObjects:(id)arg1;
- (BOOL)_handleUnloadedProjectsForObject:(id)arg1;
- (BOOL)_objectImpactsUnloadedProjects:(id)arg1;
- (id)_mediaIdentifiersUsedByUnloadedProjects;
- (id)_newRoleLeafObjectsMapForObject:(id)arg1 andLayoutKey:(id)arg2 useProjectedRoles:(BOOL)arg3 includeDisabledAudioComponents:(BOOL)arg4;
- (id)_newRoleLeafObjectsMapForObject:(id)arg1 useProjectedRoles:(BOOL)arg2;
- (BOOL)isMigrateComponentSourceEligible:(id)arg1;
- (BOOL)shouldBlacklistOrphan:(id)arg1;
- (void)addToOrphanBlacklist:(id)arg1;
- (id)_roleInfoForObject:(id)arg1 useProjectedRoles:(BOOL)arg2;
- (id)_layoutObjectsForObject:(id)arg1 layoutKey:(id)arg2 useProjectedRoles:(BOOL)arg3;
- (BOOL)_shouldAddObjectForRoleChange:(id)arg1;
- (id)userInfoPropertyForKey:(id)arg1;
- (void)setUserInfoProperty:(id)arg1 forKey:(id)arg2;
- (void)setCurrentLayoutObjectsBlock:(CDUnknownBlockType)arg1;
- (void)setCurrentRolesBlock:(CDUnknownBlockType)arg1;
- (void)setProjectedLayoutObjectsBlock:(CDUnknownBlockType)arg1;
- (void)setNoRoleComponentMigrationBlock:(CDUnknownBlockType)arg1;
- (void)setOrphanBlacklistBlock:(CDUnknownBlockType)arg1;
- (void)setPostOperationBlock:(CDUnknownBlockType)arg1;
- (void)setPreOperationBlock:(CDUnknownBlockType)arg1;
- (void)setOperationBlock:(CDUnknownBlockType)arg1;
- (void)setProjectedRolesBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithLibrary:(id)arg1 options:(unsigned int)arg2;
- (id)initWithLibrary:(id)arg1;

@end


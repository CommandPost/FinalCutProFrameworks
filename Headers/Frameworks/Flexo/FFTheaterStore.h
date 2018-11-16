//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FFJSONCoding.h"

@class NSMutableSet, NSString;

__attribute__((visibility("hidden")))
@interface FFTheaterStore : NSObject <FFJSONCoding>
{
    NSMutableSet *_items;
    int _writableByVersion;
    NSMutableSet *_deletedItemUIDs;
    NSMutableSet *_archivePathsToDelete;
    long long _version;
}

@property(nonatomic) int writableByVersion; // @synthesize writableByVersion=_writableByVersion;
@property(readonly, nonatomic) long long version; // @synthesize version=_version;
- (void)removeArchiveURLsToDelete:(id)arg1;
- (void)removeArchiveURLsToDeleteObject:(id)arg1;
- (void)addArchivePathsToDelete:(id)arg1;
- (void)addArchivePathsToDeleteObject:(id)arg1;
@property(copy, nonatomic) NSMutableSet *archivePathsToDelete;
- (void)removeDeletedItemUIDs:(id)arg1;
- (void)removeDeletedItemUIDsObject:(id)arg1;
- (void)addDeletedItemUIDs:(id)arg1;
- (void)addDeletedItemUIDsObject:(id)arg1;
@property(copy, nonatomic) NSMutableSet *deletedItemUIDs;
- (void)removeItems:(id)arg1;
- (void)removeItemsObject:(id)arg1;
- (void)addItems:(id)arg1;
- (void)addItemsObject:(id)arg1;
@property(copy, nonatomic) NSMutableSet *items;
- (BOOL)canWrite:(id *)arg1;
- (BOOL)canRead:(id *)arg1;
- (void)mergeWithStore:(id)arg1;
- (void)updateWithStore:(id)arg1;
- (void)dealloc;
- (void)encodeWithJSONCoder:(id)arg1;
- (id)initWithJSONCoder:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


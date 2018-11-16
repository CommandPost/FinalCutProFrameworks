//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFMDPhotoLibraryQuery.h>

@class NSArray, NSObject<OS_dispatch_queue>;

__attribute__((visibility("hidden")))
@interface FFMDPhotoLibraryObjectQuery : FFMDPhotoLibraryQuery
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSArray *_sourceGroupIDs;
}

@property(readonly, copy, nonatomic) NSArray *sourceGroupIDs; // @synthesize sourceGroupIDs=_sourceGroupIDs;
@property(readonly, copy, nonatomic) NSArray *sourceGroups;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_updateQueryResults;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithState:(id)arg1;
- (void)encodeQueryState:(id)arg1;
- (void)dealloc;
- (id)initWithMediaSource:(id)arg1 sourceGroupIDs:(id)arg2;

@end


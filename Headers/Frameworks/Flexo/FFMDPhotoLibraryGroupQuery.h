//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Flexo/FFMDPhotoLibraryQuery.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface FFMDPhotoLibraryGroupQuery : FFMDPhotoLibraryQuery
{
    NSArray *_sourceGroupIDs;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSArray *sourceGroupIDs; // @synthesize sourceGroupIDs=_sourceGroupIDs;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_updateQueryResults;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithState:(id)arg1;
- (void)encodeQueryState:(id)arg1;
- (void)dealloc;
- (id)initWithMediaSource:(id)arg1 sourceGroupIDs:(id)arg2;

@end


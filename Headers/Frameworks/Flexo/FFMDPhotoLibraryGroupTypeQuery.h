//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFMDPhotoLibraryQuery.h>

__attribute__((visibility("hidden")))
@interface FFMDPhotoLibraryGroupTypeQuery : FFMDPhotoLibraryQuery
{
    int _groupType;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) int groupType; // @synthesize groupType=_groupType;
- (void)_updateQueryResults;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithState:(id)arg1;
- (void)encodeQueryState:(id)arg1;
- (id)initWithMediaSource:(id)arg1 groupType:(int)arg2;

@end


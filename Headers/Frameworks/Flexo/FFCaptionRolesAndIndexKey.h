//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet;

__attribute__((visibility("hidden")))
@interface FFCaptionRolesAndIndexKey : NSObject
{
    NSSet *_roles;
    long long _verticalIndex;
}

@property(nonatomic) long long verticalIndex; // @synthesize verticalIndex=_verticalIndex;
@property(copy, nonatomic) NSSet *roles; // @synthesize roles=_roles;
- (unsigned long long)hash;
- (BOOL)isEqualToCaptionRolesAndIndexKey:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithCaption:(id)arg1;

@end


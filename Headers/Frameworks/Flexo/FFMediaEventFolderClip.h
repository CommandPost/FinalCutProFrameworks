//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Flexo/FFBaseDSObject.h>

#import <Flexo/FFMediaEventFolderObject-Protocol.h>

@class FFMediaEventFolder, NSDictionary, NSString;

@interface FFMediaEventFolderClip : FFBaseDSObject <FFMediaEventFolderObject>
{
    FFMediaEventFolder *_parentFolder;
}

+ (int)matchingTypeIterationOption;
+ (BOOL)supportsSecureCoding;
+ (id)copyClassDescription;
@property(readonly, nonatomic) NSDictionary *filtersDictionary;
- (void)removeFromParentFolder;
- (BOOL)isNameEqualToString:(id)arg1;
- (id)project;
@property(nonatomic) FFMediaEventFolder *parentFolder;
@property(copy, nonatomic) NSString *name;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;

@end


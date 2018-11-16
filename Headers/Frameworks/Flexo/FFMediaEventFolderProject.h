//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFBaseDSObject.h>

#import "FFMediaEventFolderObject.h"

@class FFMediaEventFolder, NSDictionary, NSString;

@interface FFMediaEventFolderProject : FFBaseDSObject <FFMediaEventFolderObject>
{
    FFMediaEventFolder *_parentFolder;
}

+ (int)matchingTypeIterationOption;
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


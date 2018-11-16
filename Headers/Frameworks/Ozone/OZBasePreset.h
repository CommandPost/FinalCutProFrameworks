//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString;

@interface OZBasePreset : NSObject
{
    NSMutableDictionary *_pDict;
    BOOL _isWritable;
    NSString *_pName;
    NSString *_pPath;
}

- (BOOL)isWritable;
- (void)setIsHidden:(BOOL)arg1;
- (BOOL)isHidden;
- (id)extendedDescription;
- (void)setDescription:(id)arg1;
- (id)description;
- (void)setPath:(id)arg1;
- (id)path;
- (void)setName:(id)arg1;
- (id)name;
- (BOOL)save;
- (long long)compare:(id)arg1;
- (BOOL)isEqualToPreset:(id)arg1;
- (void)dealloc;
- (id)initWithContentsOfFile:(id)arg1;
- (id)initWithPath:(id)arg1 name:(id)arg2;

@end


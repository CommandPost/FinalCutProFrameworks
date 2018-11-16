//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSURL;

__attribute__((visibility("hidden")))
@interface FFDirectoryItem : NSObject
{
    id _key;
}

- (id)initWithURL:(id)arg1;
@property(readonly, nonatomic) NSURL *URL;
- (BOOL)getResourceValue:(id *)arg1 forKey:(id)arg2 error:(id *)arg3;
- (id)getResourceValue:(id)arg1;
- (id)name;
- (BOOL)isFile;
- (BOOL)isDirectory;
- (BOOL)isSymbolicLink;
- (BOOL)isHidden;
- (id)modificationDate;
- (id)description;
- (void)dealloc;

@end

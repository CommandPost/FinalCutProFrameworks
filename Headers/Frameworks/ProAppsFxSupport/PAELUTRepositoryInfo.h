//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSArray, NSMutableArray, NSMutableDictionary;

@interface PAELUTRepositoryInfo : NSObject <NSCoding>
{
    int _version;
    NSMutableDictionary *_items;
    NSMutableArray *_recents;
}

+ (id)repositoryInfo;
@property(readonly, nonatomic) NSArray *recents; // @synthesize recents=_recents;
@property(readonly, nonatomic) int version; // @synthesize version=_version;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)readFromDirectory:(id)arg1 error:(id *)arg2;
- (BOOL)writeToDirectory:(id)arg1 error:(id *)arg2;
- (void)removeAllRecents;
- (void)addToRecents:(id)arg1;
- (id)itemOfMD5:(id)arg1;
- (id)keysOfItemsPassingTest:(CDUnknownBlockType)arg1;
- (void)enumerateItemsUsingBlock:(CDUnknownBlockType)arg1;
- (void)addReference:(id)arg1 inputConversionType:(int)arg2 outputConversionType:(int)arg3;
- (void)dealloc;
- (id)init;

@end


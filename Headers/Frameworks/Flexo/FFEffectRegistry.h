//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FFLibrary, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface FFEffectRegistry : NSObject
{
    NSMutableDictionary *_registry;
    FFLibrary *_owner;
}

+ (id)registryRelativeURL:(id)arg1 owner:(id)arg2;
@property(nonatomic) FFLibrary *owner; // @synthesize owner=_owner;
- (BOOL)effectIDIsRegistered:(id)arg1;
- (void)registerEffectClass:(Class)arg1 forEffectID:(id)arg2 withProperties:(id)arg3;
- (id)ownerKey;
- (id)allEntries;
- (id)allKeys;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (id)registry;
- (void)dealloc;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMapTable;

__attribute__((visibility("hidden")))
@interface FFMappedCollectionBase : NSObject
{
    NSMapTable *_mapTable;
}

- (id)copyKeySet;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)initWithCapacity:(unsigned long long)arg1;
- (void)dealloc;

@end


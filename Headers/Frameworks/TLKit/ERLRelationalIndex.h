//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMapTable, NSString;

@interface ERLRelationalIndex : NSObject
{
    NSString *_singularKey;
    NSArray *_keys;
    NSMapTable *_indexedObjects;
}

@property(readonly, nonatomic) NSMapTable *indexedObjects; // @synthesize indexedObjects=_indexedObjects;
@property(readonly, nonatomic) NSArray *keys; // @synthesize keys=_keys;
- (void)noteObjectUpdated:(id)arg1;
- (void)removeObject:(id)arg1;
- (void)addObject:(id)arg1;
- (id)_newIndexKeyForObject:(id)arg1;
- (id)_newIndexKeyForValues:(id)arg1;
- (void)setObjectValue:(id)arg1 forKey:(id)arg2;
- (id)objectForIndexValue:(id)arg1;
- (id)debugDescription;
- (void)dealloc;
- (id)initWithKeys:(id)arg1;

@end


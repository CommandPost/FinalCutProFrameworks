//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableSet;

@interface ERLCalculatedAttribute : NSObject
{
    BOOL _needsUpdate;
    void *_storage;
    unsigned long long _attributeType;
    id _observedObject;
    NSMutableSet *_compliantKeyPaths;
    NSMutableSet *_toManyKeyPaths;
}

@property(nonatomic) BOOL needsUpdate; // @synthesize needsUpdate=_needsUpdate;
@property(copy, nonatomic) NSMutableSet *toManyKeyPaths; // @synthesize toManyKeyPaths=_toManyKeyPaths;
@property(copy, nonatomic) NSMutableSet *compliantKeyPaths; // @synthesize compliantKeyPaths=_compliantKeyPaths;
@property(nonatomic) id observedObject; // @synthesize observedObject=_observedObject;
@property(readonly, nonatomic) unsigned long long attributeType; // @synthesize attributeType=_attributeType;
@property(readonly, nonatomic) void *storage; // @synthesize storage=_storage;
- (double)calculateDoubleValueUsingBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)calculateUnsignedIntegerValueUsingBlock:(CDUnknownBlockType)arg1;
- (id)calculateObjectValueUsingBlock:(CDUnknownBlockType)arg1;
- (void)_stopObservingKeyPath:(id)arg1 inToManyRelationship:(id)arg2;
- (void)_startObservingKeyPath:(id)arg1 inToManyRelationship:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)observeToManyRelationship:(id)arg1 forKeyPath:(id)arg2;
- (void)observeKeyPath:(id)arg1;
- (void)dealloc;
- (id)initWithAttributeType:(unsigned long long)arg1 forObject:(id)arg2 storagePointer:(void *)arg3;

@end


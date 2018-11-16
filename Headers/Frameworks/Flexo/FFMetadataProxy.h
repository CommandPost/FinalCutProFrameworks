//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FFAnchoredSequence, NSMutableArray, NSObject<FFMetadataActionProtocol>;

__attribute__((visibility("hidden")))
@interface FFMetadataProxy : NSObject
{
    NSObject<FFMetadataActionProtocol> *_object;
    NSMutableArray *_observedKeyPaths;
    FFAnchoredSequence *_metaDataStartSequence;
    BOOL _objectHasBeenInvalidated;
}

@property(nonatomic) BOOL objectHasBeenInvalidated; // @synthesize objectHasBeenInvalidated=_objectHasBeenInvalidated;
@property(retain, nonatomic) NSMutableArray *observedKeyPaths; // @synthesize observedKeyPaths=_observedKeyPaths;
- (BOOL)actionEndSetMetadataValueWithError:(id *)arg1;
- (void)actionBeginSetMetadataValue;
- (id)metaDataStartSequence;
- (void)rangeInvalidated:(id)arg1;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void *)arg4;
- (id)valueForKeyPath:(id)arg1;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2;
- (id)valueForKey:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (BOOL)validateValue:(id *)arg1 forKey:(id)arg2 error:(id *)arg3;
- (void)dealloc;
- (id)initWithObject:(id)arg1;

@end


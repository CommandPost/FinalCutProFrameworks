//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<FFSkimmableProtocol><FFDataModelProtocol><FFInspectableObject><FFAssetContainerProtocol>;

__attribute__((visibility("hidden")))
@interface FFEffectLibrarySkimmableCacheItem : NSObject
{
    struct NSObject *_skimmable;
    double _lastAccessTime;
}

+ (id)cacheItemWithSkimmable:(struct NSObject *)arg1;
@property(readonly, nonatomic) double lastAccessTime; // @synthesize lastAccessTime=_lastAccessTime;
@property(readonly, nonatomic) NSObject<FFSkimmableProtocol><FFDataModelProtocol><FFInspectableObject><FFAssetContainerProtocol> *skimmable; // @synthesize skimmable=_skimmable;
- (void)updateLastAccessTime;
- (void)dealloc;
- (id)initWithSkimmable:(struct NSObject *)arg1;

@end


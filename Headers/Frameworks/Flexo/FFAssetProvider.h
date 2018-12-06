//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFProvider.h>

#import "FFModelLocking.h"

@class FFAsset;

__attribute__((visibility("hidden")))
@interface FFAssetProvider : FFProvider <FFModelLocking>
{
    FFAsset *_asset;
    FFProvider *_inputProvider;
    int _quality;
}

+ (id)utis;
+ (id)extensions;
- (id)initWithMedia:(id)arg1 quality:(int)arg2;
- (id)object;
- (void)dealloc;
- (void)_setupSources;
- (id)newSourceForKey:(id)arg1;
- (id)sourceKeyForObject:(id)arg1;
- (id)sourceKeys;
- (id)displayName;
- (void)_writeLock;
- (void)_writeUnlock;
- (void)_readLock;
- (void)_readUnlock;
- (id)asset;
- (int)quality;
- (id)inputProvider;
- (void)_sourceInvalidated:(id)arg1;

@end


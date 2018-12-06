//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DSStore.h"

@class FFCatalog, NSURL;

__attribute__((visibility("hidden")))
@interface FFCatalogStore : DSStore
{
    FFCatalog *_fCatalog;
    NSURL *_URI;
}

- (id)initWithBridge:(id)arg1 url:(id)arg2 options:(id)arg3 error:(id *)arg4;
- (id)initWithCatalog:(id)arg1 url:(id)arg2 validate:(BOOL)arg3 error:(id *)arg4;
- (void)dealloc;
- (id)catalog;
- (id)URI;
- (void)setIdentifier:(id)arg1;
- (id)objectWithID:(id)arg1;
- (void)setRootObject:(id)arg1;
- (int)clientVersion;
- (void)setClientVersion:(int)arg1;
- (BOOL)bringUpToDate:(id *)arg1;

@end


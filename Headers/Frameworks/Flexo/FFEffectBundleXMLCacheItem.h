//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSXMLDocument;

__attribute__((visibility("hidden")))
@interface FFEffectBundleXMLCacheItem : NSObject
{
    NSXMLDocument *_document;
    double _lastAccessTime;
}

+ (id)cacheItemWithXMLDocument:(id)arg1;
@property(readonly, nonatomic) double lastAccessTime; // @synthesize lastAccessTime=_lastAccessTime;
@property(readonly, nonatomic) NSXMLDocument *document; // @synthesize document=_document;
- (void)updateLastAccessTime;
- (void)dealloc;
- (id)initWithXMLDocument:(id)arg1;

@end


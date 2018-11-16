//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFMedia.h>

#import "FFSkimmableProtocol.h"
#import "NSCoding.h"
#import "NSCopying.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface FFMediaRef : FFMedia <NSCoding, NSCopying, FFSkimmableProtocol>
{
    FFMedia *_media;
    NSString *_mediaIdentifier;
    BOOL _changingMedia;
    int _offlineReason;
    FFMedia *_mediaForRefInvalidation;
    NSString *_cachedLibraryID;
}

+ (id)scrapedOldRefDataForObject:(id)arg1 createIfNotFound:(BOOL)arg2;
+ (id)mediaIdentifiersForMediaRefs:(id)arg1;
+ (void)_notifyMediaAvailable:(id)arg1;
+ (void)updateMediaAvailable;
+ (id)copyClassDescription;
+ (BOOL)classIsAbstract;
@property(retain, nonatomic) NSString *cachedLibraryID; // @synthesize cachedLibraryID=_cachedLibraryID;
@property(retain, nonatomic) NSString *mediaIdentifier; // @synthesize mediaIdentifier=_mediaIdentifier;
@property(readonly, nonatomic) int offlineReason; // @synthesize offlineReason=_offlineReason;
- (id)mdTargetForKey:(id)arg1;
- (id)videoProps;
- (id)newProvider;
- (void)assetChangeChange:(id)arg1;
- (void)refInvalidationChange:(id)arg1;
- (void)sourceRangeInvalidated:(id)arg1;
- (id)_offlineCacheIdentifier;
- (id)fileURLs:(int)arg1;
- (void)addAssetsToSet:(id)arg1;
- (id)assets;
- (id)description;
- (id)debugDescriptionWithIndentLevel:(unsigned int)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isAssetRef;
- (BOOL)isClipRef;
- (BOOL)isProject;
- (void)performBlockWithMediaWhenReady:(CDUnknownBlockType)arg1;
- (void)invalidate;
@property(readonly, nonatomic) int proxyOfflineReason;
@property(readonly, nonatomic) int highQualityOfflineReason;
@property(readonly, nonatomic) BOOL mediaAvailable;
@property(readonly, nonatomic) BOOL originalAvailable;
@property(readonly, nonatomic) BOOL highQualityAvailable;
@property(readonly, nonatomic) BOOL proxyAvailable;
- (id)eventName;
- (id)event;
- (BOOL)isEqualToRef:(id)arg1;
- (id)targetLibraryItem;
- (id)media;
- (id)library;
- (BOOL)isRefMediaCached;
- (void)dealloc;
- (void)releaseFinal;
- (oneway void)release;
- (id)initWithMedia:(id)arg1 displayName:(id)arg2 mediaEvent:(id)arg3;
- (id)initWithMedia:(id)arg1 mediaEvent:(id)arg2;
- (id)init;
- (id)legacyEventDocumentID;
- (id)eventDocumentID;
- (id)mediaIndexingKey;

@end


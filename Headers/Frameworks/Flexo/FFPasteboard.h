//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMapTable, NSPasteboard;

@interface FFPasteboard : NSObject
{
    NSPasteboard *_pasteboard;
    NSMapTable *_cachedObjects;
    NSMapTable *_cachedFromURLs;
    long long _cachedPBCount;
    long long _cachedFromURLPBCount;
    BOOL _cacheEnabled;
}

+ (id)readableTypes;
@property(retain, nonatomic) NSPasteboard *pasteboard; // @synthesize pasteboard=_pasteboard;
- (CDStruct_1b6d18a9)playhead:(id)arg1 options:(id)arg2;
- (id)newEffectsWithProject:(id)arg1 forEffectType:(id)arg2 options:(id)arg3;
- (id)newBinItemsWithProject:(id)arg1 options:(id)arg2;
- (id)newMediaWithSequence:(id)arg1 fromURL:(char *)arg2 options:(id)arg3;
- (id)_newMediaWithProject:(id)arg1 andSequence:(id)arg2 fromURL:(char *)arg3 options:(id)arg4;
- (CDStruct_1b6d18a9)_playheadWithProject:(id)arg1 assetFlags:(int)arg2 options:(id)arg3;
- (id)_newObjectsWithProject:(id)arg1 assetFlags:(int)arg2 fromURL:(char *)arg3 options:(id)arg4;
- (id)_findSequenceInEventsForObject:(id)arg1;
- (id)_newObjectsWithProjectCore:(id)arg1 assetFlags:(int)arg2 fromURL:(char *)arg3 options:(id)arg4;
- (void)_setCachedFromURL:(BOOL)arg1 forKey:(id)arg2;
- (BOOL)_cachedFromURLForKey:(id)arg1;
- (id)_newCachedObjectsForKey:(id)arg1;
- (id)_copyCacheKeyForProjectID:(id)arg1 assetFlags:(int)arg2 options:(id)arg3;
- (BOOL)hasEffectsWithType:(id)arg1;
- (BOOL)hasMarkers;
- (BOOL)hasPlayhead;
- (BOOL)hasEdits:(BOOL)arg1;
- (BOOL)hasBinObjects:(BOOL)arg1 options:(id)arg2;
- (BOOL)hasMedia:(BOOL)arg1;
- (BOOL)isNative;
- (BOOL)hasSupportedPasteboardItems;
- (id)_fileTypes:(id)arg1 options:(id)arg2;
- (BOOL)_hasTextGenerator;
- (BOOL)_isTextFile:(id)arg1;
- (BOOL)writeEffects:(id)arg1;
- (BOOL)writeEffectIDs:(id)arg1 project:(id)arg2;
- (id)encodeKeyToTrackTypeKey:(id)arg1;
- (id)trackTypeToEncodeKey:(id)arg1;
- (id)newEffectStacksWithProject:(id)arg1 options:(id)arg2;
- (id)newMarkersWithProject:(id)arg1 options:(id)arg2;
- (id)newEditsWithProject:(id)arg1 mediaByReferenceOnly:(BOOL)arg2 options:(id)arg3;
- (BOOL)writeEffectStacks:(id)arg1 options:(id)arg2;
- (BOOL)writeMarkers:(id)arg1 options:(id)arg2;
- (BOOL)writeAnchoredObjects:(id)arg1 options:(id)arg2;
- (BOOL)writeRangesOfMedia:(id)arg1 options:(id)arg2;
- (BOOL)writeRangesOfMedia:(id)arg1 withPlayhead:(CDStruct_1b6d18a9)arg2 options:(id)arg3;
- (void)_getCopiedTypesFromBinObjects:(id)arg1 copiedTypes:(id)arg2;
- (id)_copiedTypes:(id)arg1;
- (unsigned long long)_copiedTypesCount:(id)arg1 category:(id)arg2 mediaType:(id)arg3;
- (void)_copiedTypesAdd:(id)arg1 category:(id)arg2 mediaType:(id)arg3;
- (BOOL)cacheEnabled;
- (void)setCacheEnabled:(BOOL)arg1;
- (void)dealloc;
- (id)initWithPasteboard:(id)arg1;
- (id)initWithName:(id)arg1;

@end


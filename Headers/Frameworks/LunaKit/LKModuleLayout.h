//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSMutableDictionary, NSString;

@interface LKModuleLayout : NSObject <NSCopying>
{
    NSString *_name;
    NSString *_displayName;
    NSString *_keyEquivalent;
    struct CGRect _bounds;
    struct CGSize _screenSize;
    unsigned int _layoutVersion;
    unsigned int _appLayoutVersion;
    NSMutableDictionary *_layoutDictionary;
    struct {
        unsigned int category:2;
        unsigned int type:3;
        unsigned int autolayout:1;
        unsigned int wasInitFromFile:1;
        unsigned int wasInitFromCache:1;
        unsigned int RESERVED:8;
    } _flags;
    float _layoutInset;
    NSString *_sourceName;
}

- (id)description;
- (void)_writeDictionary:(id)arg1 toFile:(id)arg2;
- (void)writeToFile:(id)arg1;
- (void)readStateFromDictionary:(id)arg1;
- (void)writeStateToDictionary:(id)arg1;
- (struct CGRect)bounds;
- (void)setAppLayoutVersion:(unsigned long long)arg1;
- (unsigned long long)appLayoutVersion;
- (id)keyEquivalent;
- (void)setKeyEquivalent:(id)arg1;
- (float)layoutInset;
- (void)setLayoutInset:(float)arg1;
- (BOOL)isAutolayout;
- (void)setAutolayout:(BOOL)arg1;
- (BOOL)screenArrangementIsAcceptable;
- (struct CGSize)screenSize;
- (void)updateScreenSize;
- (void)setScreenSize:(struct CGSize)arg1;
- (int)type;
- (void)setType:(int)arg1;
- (int)category;
- (void)setCategory:(int)arg1;
- (struct CGRect)_boundsOfLayoutArray:(id)arg1;
- (id)layoutArray;
- (void)setLayoutArray:(id)arg1;
- (id)_mutableDictionary;
- (id)dictionary;
- (void)setDictionary:(id)arg1;
- (BOOL)canBeDeleted;
- (BOOL)validateDisplayName:(id *)arg1 error:(id *)arg2;
- (BOOL)validateName:(id *)arg1 error:(id *)arg2;
- (void)setDisplayName:(id)arg1;
- (id)displayName;
- (id)name;
- (void)setName:(id)arg1;
- (id)sourceName;
- (void)setSourceName:(id)arg1;
- (id)cache;
- (long long)compareArrangement:(id)arg1;
- (long long)compareDisplayNames:(id)arg1;
- (long long)compareNames:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithCache:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1 deferLoading:(BOOL)arg2;
- (id)initWithContentsOfFile:(id)arg1;
- (id)initWithName:(id)arg1;
- (id)init;

@end


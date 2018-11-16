//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class LKModuleLayoutDisplayName, NSArray, NSMutableDictionary, NSUUID;

@interface LKModuleLayout : NSObject <NSCopying>
{
    LKModuleLayoutDisplayName *_displayName;
    NSUUID *_identifier;
    NSUUID *_sourceName;
    struct CGRect _bounds;
    unsigned long long _layoutVersion;
    unsigned long long _appLayoutVersion;
    NSMutableDictionary *_layoutDictionary;
    struct {
        unsigned int category:2;
        unsigned int autolayout:1;
        unsigned int wasInitFromFile:1;
        unsigned int wasInitFromCache:1;
        unsigned int wasUpdatedOnInit:1;
        unsigned int RESERVED:10;
    } _flags;
}

@property(nonatomic) unsigned long long appLayoutVersion; // @synthesize appLayoutVersion=_appLayoutVersion;
@property(copy, nonatomic) LKModuleLayoutDisplayName *displayName; // @synthesize displayName=_displayName;
@property(copy, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSUUID *sourceName; // @synthesize sourceName=_sourceName;
- (id)additionalLayoutInformationDictionary;
- (void)setAdditionalLayoutInformationDictionary:(id)arg1;
- (BOOL)wasUpdatedOnInit;
- (id)description;
- (void)_writeDictionary:(id)arg1 toFile:(id)arg2;
- (void)writeToFile:(id)arg1;
- (void)readStateFromDictionary:(id)arg1;
- (void)writeStateToDictionary:(id)arg1;
- (struct CGRect)bounds;
@property(nonatomic) BOOL autoLayout; // @dynamic autoLayout;
- (BOOL)screenArrangementIsAcceptable;
@property(nonatomic) int category; // @dynamic category;
- (struct CGRect)_boundsOfLayoutArray:(id)arg1;
@property(retain, nonatomic) NSArray *layoutArray; // @dynamic layoutArray;
- (id)_mutableDictionary;
- (id)dictionary;
- (void)setDictionary:(id)arg1;
- (BOOL)canBeDeleted;
- (id)cache;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithCache:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1 deferLoading:(BOOL)arg2 updater:(id)arg3 error:(id *)arg4;
- (id)initWithContentsOfFile:(id)arg1 updater:(id)arg2 error:(id *)arg3;
- (id)initWithContentsOfFile:(id)arg1 deferLoading:(BOOL)arg2;
- (id)initWithContentsOfFile:(id)arg1;
- (id)initWithDisplayName:(id)arg1;
- (id)init;

@end


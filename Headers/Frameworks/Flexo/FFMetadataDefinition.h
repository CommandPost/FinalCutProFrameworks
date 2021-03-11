//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Flexo/NSSecureCoding-Protocol.h>

@class NSArray, NSDictionary, NSFormatter, NSMutableSet, NSPredicate, NSSet, NSString, NSValueTransformer;

@interface FFMetadataDefinition : NSObject <NSSecureCoding>
{
    BOOL _editable;
    BOOL _hiddenFromViewsets;
    id _minValue;
    id _maxValue;
    NSString *_key;
    NSString *_initialValueKeyPath;
    NSString *_displayName;
    NSString *_displayDescription;
    NSString *_metadataType;
    NSString *_source;
    NSMutableSet *_tags;
    NSFormatter *_formatter;
    NSValueTransformer *_valueTransformer;
    NSArray *_enumConstants;
    NSArray *_aliasedEnumConstants;
    BOOL _dontImportFromFile;
    NSString *_predicate;
    int _whiteList;
    NSPredicate *_actualPredicate;
    NSDictionary *_options;
}

+ (BOOL)hasCustomMetadataWithName:(id)arg1;
+ (id)descriptionForCustomMetadataWithName:(id)arg1;
+ (BOOL)isCustomMetadataKey:(id)arg1;
+ (id)customMetadataKeyWithName:(id)arg1;
+ (void)removeCustomMetadataWithKey:(id)arg1;
+ (void)setCustomMetadataWithDefinition:(id)arg1;
+ (void)setCustomMetadataWithName:(id)arg1 description:(id)arg2;
+ (void)setCustomMetadataWithKey:(id)arg1 displayName:(id)arg2 description:(id)arg3 metadataType:(id)arg4 editable:(BOOL)arg5 source:(id)arg6;
+ (id)customMetadataDefinitionWithName:(id)arg1 description:(id)arg2;
+ (id)customMetadataDictionary;
+ (void)setCustomMetadataDictionary:(id)arg1;
+ (id)canonMetadataDefinitions;
+ (id)redMetadataDefinitions;
+ (BOOL)loadSpotlightAsMetadefinitionInDictionary:(id)arg1 key:(id)arg2 metadataType:(id)arg3 displayName:(id)arg4 predicate:(id)arg5;
+ (id)unfilteredMetadataDefinitions;
+ (id)metadataFromSanitizedMetadata:(id)arg1;
+ (id)sanitizedMetadata:(id)arg1;
+ (id)keyForSanitizedKey:(id)arg1;
+ (BOOL)isCensoredKey:(id)arg1;
+ (id)metadataSources;
+ (void)_clearMetadataSourcesCache;
+ (id)metadataDefinitionsForSource:(id)arg1;
+ (id)metadataDefinitions;
+ (void)_clearMetadataDefinitionsCache;
+ (BOOL)anyMetaDataChangesShouldTriggerSourceInval:(id)arg1 newMetaData:(id)arg2;
+ (BOOL)anyMetaDataSortKeysHaveChanged:(id)arg1 newMetaData:(id)arg2;
+ (id)definitionForKey:(id)arg1;
+ (id)_definitionsDict;
+ (void)initialize;
+ (id)_externalDefinitions;
+ (id)_localizedDefsDictFromDict:(id)arg1;
+ (id)_enumDefsFromArray:(id)arg1;
+ (id)_defsDictFromDict:(id)arg1;
+ (id)defaultViewSetPredicate;
+ (void)releaseSharedInstance;
+ (BOOL)supportsSecureCoding;
@property(nonatomic) int whiteList; // @synthesize whiteList=_whiteList;
@property(readonly, nonatomic) NSString *predicate; // @synthesize predicate=_predicate;
@property(nonatomic) BOOL dontImportFromFile; // @synthesize dontImportFromFile=_dontImportFromFile;
@property(retain, nonatomic) NSDictionary *options; // @synthesize options=_options;
@property(retain, nonatomic) NSArray *enumConstants; // @synthesize enumConstants=_enumConstants;
@property(retain, nonatomic) NSFormatter *formatter; // @synthesize formatter=_formatter;
@property(readonly, nonatomic) NSSet *tags; // @synthesize tags=_tags;
@property(retain, nonatomic) NSString *source; // @synthesize source=_source;
@property(retain, nonatomic) NSString *metadataType; // @synthesize metadataType=_metadataType;
@property(retain, nonatomic) NSString *displayDescription; // @synthesize displayDescription=_displayDescription;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) NSString *initialValueKeyPath; // @synthesize initialValueKeyPath=_initialValueKeyPath;
@property(readonly, nonatomic) NSString *key; // @synthesize key=_key;
@property(retain, nonatomic) id maxValue; // @synthesize maxValue=_maxValue;
@property(retain, nonatomic) id minValue; // @synthesize minValue=_minValue;
@property(nonatomic) BOOL hiddenFromViewsets; // @synthesize hiddenFromViewsets=_hiddenFromViewsets;
@property(nonatomic) BOOL editable; // @synthesize editable=_editable;
- (id)sanitizedKey;
- (BOOL)canDisplayInViewset;
- (void)addTag:(id)arg1;
- (void)_updateAliasedEnumConstants;
- (id)aliasedEnumConstants;
- (id)enumConstantsAtIndexes:(id)arg1;
- (id)objectInEnumConstantsAtIndex:(unsigned long long)arg1;
- (unsigned long long)countOfEnumConstants;
- (id)sourceDisplayName;
- (id)sortDescriptors;
- (id)newFormatter;
- (id)valueTransformer;
- (id)actualPredicate;
- (Class)objectClass;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithKey:(id)arg1 keyPathFormat:(id)arg2 displayName:(id)arg3 displayDescription:(id)arg4 metadataType:(id)arg5 editable:(BOOL)arg6 formatter:(id)arg7 valueTransformer:(id)arg8 options:(id)arg9 predicate:(id)arg10 whiteList:(int)arg11;
- (id)description;

@end


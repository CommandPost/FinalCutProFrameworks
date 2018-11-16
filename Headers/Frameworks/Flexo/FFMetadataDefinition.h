//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSFormatter, NSMutableSet, NSSet, NSString, NSValueTransformer;

@interface FFMetadataDefinition : NSObject
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
    BOOL _dontImportFromFile;
    NSString *_predicate;
    NSDictionary *_options;
}

+ (void)releaseSharedInstance;
+ (id)defaultViewSetPredicate;
+ (id)_definitionsDict;
+ (id)definitionForKey:(id)arg1;
+ (void)_clearMetadataDefinitionsCache;
+ (id)metadataDefinitions;
+ (id)unfilteredMetadataDefinitions;
+ (BOOL)loadSpotlightAsMetadefinitionInDictionary:(id)arg1 key:(id)arg2 metadataType:(id)arg3 displayName:(id)arg4 predicate:(id)arg5;
+ (void)setCustomMetadataDictionary:(id)arg1;
+ (id)customMetadataDictionary;
+ (id)customMetadataDefinitionWithName:(id)arg1 description:(id)arg2;
+ (void)setCustomMetadataWithName:(id)arg1 description:(id)arg2;
+ (void)removeCustomMetadataWithName:(id)arg1;
+ (id)customMetadataKeyWithName:(id)arg1;
+ (BOOL)isCustomMetadataKey:(id)arg1;
+ (id)descriptionForCustomMetadataWithName:(id)arg1;
+ (BOOL)hasCustomMetadataWithName:(id)arg1;
- (id)initWithKey:(id)arg1 keyPathFormat:(id)arg2 displayName:(id)arg3 displayDescription:(id)arg4 metadataType:(id)arg5 editable:(BOOL)arg6 formatter:(id)arg7 valueTransformer:(id)arg8 options:(id)arg9 predicate:(id)arg10;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (Class)objectClass;
- (id)valueTransformer;
- (id)newFormatter;
- (id)sortDescriptors;
- (id)sourceDisplayName;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) NSString *displayDescription; // @synthesize displayDescription=_displayDescription;
@property(retain, nonatomic) NSString *metadataType; // @synthesize metadataType=_metadataType;
- (unsigned long long)countOfEnumConstants;
- (id)objectInEnumConstantsAtIndex:(unsigned long long)arg1;
- (id)enumConstantsAtIndexes:(id)arg1;
- (void)addTag:(id)arg1;
- (BOOL)canDisplayInViewset;
@property(retain, nonatomic) NSString *predicate; // @synthesize predicate=_predicate;
@property(nonatomic) BOOL dontImportFromFile; // @synthesize dontImportFromFile=_dontImportFromFile;
@property(retain, nonatomic) NSDictionary *options; // @synthesize options=_options;
@property(retain, nonatomic) NSArray *enumConstants; // @synthesize enumConstants=_enumConstants;
@property(retain, nonatomic) NSFormatter *formatter; // @synthesize formatter=_formatter;
@property(readonly, nonatomic) NSSet *tags; // @synthesize tags=_tags;
@property(retain, nonatomic) NSString *source; // @synthesize source=_source;
@property(retain, nonatomic) NSString *initialValueKeyPath; // @synthesize initialValueKeyPath=_initialValueKeyPath;
@property(readonly, nonatomic) NSString *key; // @synthesize key=_key;
@property(retain, nonatomic) id maxValue; // @synthesize maxValue=_maxValue;
@property(retain, nonatomic) id minValue; // @synthesize minValue=_minValue;
@property(nonatomic) BOOL hiddenFromViewsets; // @synthesize hiddenFromViewsets=_hiddenFromViewsets;
@property(readonly, nonatomic) BOOL editable; // @synthesize editable=_editable;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FFAssetFileIdentifier, FFCHRootChannel, NSDictionary, NSMutableArray, NSMutableDictionary, NSString;

@interface FFProvider : NSObject
{
    FFCHRootChannel *_rootChannel;
    FFAssetFileIdentifier *_assetFileID;
    NSString *_suiteID;
    NSString *_key;
    struct FFSynchronizable _sourcesLock;
    NSMutableDictionary *_sources;
    NSMutableArray *_sourceKeys;
    long long _providerClusterRefcount;
    int _sourcesState;
    NSDictionary *_videoPropsOverrides;
}

+ (long long)providerCount;
+ (void)initialize;
+ (void)_registerProvidersInBundle:(id)arg1 atPath:(id)arg2;
+ (void)_registerBuiltInProviders;
+ (id)_registeredProviders;
+ (id)registeredProviders;
+ (void)registerProviderClass:(Class)arg1;
+ (id)_providerExtensionsDictionary;
+ (Class)providerClassForExtension:(id)arg1;
+ (id)registeredProviderExtensions;
+ (Class)providerClassForUTIType:(id)arg1 extension:(id)arg2;
+ (unsigned char)providerHasValidSourceForURL:(id)arg1;
+ (id)utis;
+ (id)extensions;
+ (id)extensionForURL:(id)arg1;
+ (id)getUTTypeForURL:(id)arg1;
+ (id)newProviderWithAssetFileID:(id)arg1;
+ (id)newProviderWithAssetFileID:(id)arg1 utiType:(id)arg2;
+ (id)newProviderWithMedia:(id)arg1;
- (void)setKey:(id)arg1;
- (id)key;
- (id)init;
- (id)initWithAssetFileID:(id)arg1;
- (id)initWithSuiteIdentifier:(id)arg1;
- (id)initWithMedia:(id)arg1;
- (id)object;
- (void)dealloc;
- (void)_incrementClusterRefcount;
- (void)_decrementClusterRefcount;
- (void)release;
- (id)retain;
- (BOOL)isPurgeable;
- (void)setVideoPropsOverride:(id)arg1;
- (id)videoPropsOverride;
- (id)url;
- (id)uttype;
- (id)suiteID;
- (id)assetFileID;
- (void)_setupSources;
- (void)_setSource:(id)arg1 forKey:(id)arg2;
- (void)_removeSourceForKey:(id)arg1;
- (id)_sourcesMakeIfNil;
- (id)sources;
- (id)sourceForKey:(id)arg1;
- (id)newSourceForKey:(id)arg1;
- (id)sourceKeyForObject:(id)arg1;
- (id)sourceKeys;
- (id)firstSource;
- (id)newFirstSource;
- (id)description;
- (id)displayName;
- (id)newEditorModule;
- (id)newInspectorModule;
- (id)newPlayerModuleWithContext:(id)arg1 effectCount:(long long)arg2;
- (id)newPlayerModuleWithContext:(id)arg1 effectCount:(long long)arg2 sublayout:(id)arg3;
- (id)newPlayerModuleWithContext:(id)arg1 effectCount:(long long)arg2 sublayoutName:(id)arg3;
- (id)newSettingsModule;
- (id)newConfirmSettingsModule;
- (id)inspectorClassName;
- (id)rootChannel;
- (BOOL)hasUnsavedChanges;
- (BOOL)saveToDocument;
- (BOOL)syncFromDocument;
- (id)firstVideoSource;

@end


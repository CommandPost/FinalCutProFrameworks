//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FxHostEnvironment.h"
#import "FxStreamProviding.h"

@interface FxHost : NSObject <FxStreamProviding, FxHostEnvironment>
{
    struct FxHostPriv *_priv;
}

+ (id)fxMetaPlugsFolderURLs;
+ (id)fxPlugsFolderURLs;
+ (id)plugInsFolderURLs;
+ (id)internalPlugInsFolderURL;
+ (id)host;
+ (id)_scanFxMetaPlugWrappersWithPlugInManager:(id)arg1;
+ (id)_createPathArrayFromURLArray:(id)arg1;
- (BOOL)supportsParameterClass:(Class)arg1;
- (int)minorVersion;
- (int)majorVersion;
- (id)hostName;
- (id)uniqueID;
- (double)globalFrameDuration;
- (unsigned int)globalTimeScale;
- (id)domainOfDefinitionForSample:(id)arg1;
- (unsigned long long)fieldOrderForSample:(id)arg1;
- (id)evaluateSample:(id)arg1 withOptions:(id)arg2;
- (id)requiredSamplesForSample:(id)arg1;
- (BOOL)isSamplePredetermined:(id)arg1;
- (double)pixelAspectForStream:(id)arg1;
- (BOOL)isStreamPremultiplied:(id)arg1;
- (BOOL)isContextTypeSupported:(int)arg1 bySample:(id)arg2;
- (double)frameDurationForStream:(id)arg1;
- (double)durationForStream:(id)arg1;
- (double)startTimeForStream:(id)arg1;
- (unsigned int)timeScaleForStream:(id)arg1;
- (id)fxPlugDescriptorWithUUID:(id)arg1;
- (id)fxPlugGroupListForFlavor:(id)arg1;
- (id)fxPlugGroupList;
- (id)_fxPlugGroupListForOptionalFlavor:(id)arg1;
- (id)_findGroupInList:(id)arg1 withIdenticalDescriptor:(id)arg2;
- (void)setAllowBuiltInEffects:(BOOL)arg1 forPlugInTypeUUID:(id)arg2;
- (BOOL)allowBuiltInEffectsForPlugInTypeUUID:(id)arg1;
- (void)setSupportedPlugInTypeUUIDs:(id)arg1;
- (id)supportedPlugInTypeUUIDs;
- (id)defaultSupportedPlugInTypeUUIDs;
- (void)scanFxPlugsIfNecessary;
- (void)setSearchableURLs:(id)arg1 forPlugInTypeUUID:(id)arg2;
- (id)defaultSearchableURLsForPlugInTypeUUID:(id)arg1;
- (id)searchableURLsForPlugInTypeUUID:(id)arg1;
- (void)invalidateFxPlugDescriptorArray;
- (void)dealloc;
- (id)init;
- (id)_createDefaultSupportBuiltInsDict;
- (id)_createDefaultSearchableURLsDict;
- (id)_fxMetaPlugWrapperForPlugInTypeUUID:(id)arg1;

@end


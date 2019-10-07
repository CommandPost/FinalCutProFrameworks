//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFMediaRef.h>

__attribute__((visibility("hidden")))
@interface FFAssetRef : FFMediaRef
{
}

+ (id)keyPathsForValuesAffectingAsset;
+ (BOOL)supportsSecureCoding;
+ (id)copyClassDescription;
- (id)subtitlesInRange:(CDStruct_e83c9415)arg1;
- (id)closedCaptionsInRange:(CDStruct_e83c9415)arg1;
- (BOOL)hasSubtitles;
- (BOOL)hasClosedCaptions;
- (void)addClipRefsToSet:(id)arg1;
- (id)clipRefs;
- (id)eventName;
- (void)_clipRefs:(id)arg1 includeAnchored:(BOOL)arg2 activeOnly:(BOOL)arg3 insideClipRefs:(BOOL)arg4 acrossEvents:(BOOL)arg5;
- (void)addAssetRefsToSet:(id)arg1;
- (id)assetRefs;
- (id)mdTargetForKey:(id)arg1;
- (void)setFlow:(CDStruct_e83c9415)arg1 mode:(long long)arg2 info:(id)arg3;
- (void)setFlowVectors:(CDStruct_e83c9415)arg1 mode:(long long)arg2;
- (id)flowMediaRep;
- (void)createFlowMediaRep;
- (BOOL)isAssetRef;
- (BOOL)isProject;
- (int)highQualityOfflineReason;
- (int)proxyOfflineReason;
- (BOOL)isPSD;
- (BOOL)mediaAvailable;
- (BOOL)originalAvailable;
- (BOOL)highQualityAvailable;
- (BOOL)proxyAvailable;
- (id)proxyMediaRep;
- (id)optimizedMediaRep;
- (id)originalMediaRep;
- (id)originalMediaURL;
- (BOOL)verifyFileCompatibility:(id)arg1 returnIsIdentical:(char *)arg2 returnIsGrowing:(char *)arg3 returnIsCompatible:(char *)arg4 returnNewMediaRange:(CDStruct_e83c9415 *)arg5 returnAssetID:(id *)arg6 returnAudioSourceDict:(id *)arg7 error:(id *)arg8;
- (id)asset;
- (id)newAssetProxyAttributesFromScrapedData:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAsset:(id)arg1 assetEvent:(id)arg2;

@end


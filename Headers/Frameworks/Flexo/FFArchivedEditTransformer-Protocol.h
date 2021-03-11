//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Flexo/NSObject-Protocol.h>

@class MapLocation, NSArray, NSString;

@protocol FFArchivedEditTransformer <NSObject>

@optional
- (NSString *)translateVisualFilterForEntity:(id)arg1 error:(id *)arg2;
- (NSString *)translateEffectIDForTitle:(id)arg1 error:(id *)arg2;
- (NSString *)translateEffectIDForTransition:(id)arg1 error:(id *)arg2;
- (NSArray *)translateTitleLabels:(id)arg1 error:(id *)arg2;
- (MapLocation *)translateMapLocation:(id)arg1 error:(id *)arg2;
- (NSString *)translateDisplayNameForEdit:(id)arg1 error:(id *)arg2;
- (NSString *)translateClipNameForEdit:(id)arg1 error:(id *)arg2;
- (BOOL)transformShotClipsForTrailer:(id)arg1 error:(id *)arg2 completion:(BOOL (^)(id, id, id *))arg3;
- (BOOL)transformTrailerInfoForTrailer:(id)arg1 error:(id *)arg2 completion:(BOOL (^)(id, id *))arg3;
- (BOOL)transformVideoEffectForTransition:(id)arg1 error:(id *)arg2 completion:(BOOL (^)(NSString *, struct, struct, struct, id *))arg3;
- (BOOL)transformEffectForChromaKeyCutaway:(id)arg1 error:(id *)arg2 completion:(BOOL (^)(id, id, id, id, id, id, id *))arg3;
- (BOOL)transformEffectForSideBySideCutaway:(id)arg1 error:(id *)arg2 completion:(BOOL (^)(int, id, id, id *))arg3;
- (BOOL)transformEffectForPipCutaway:(id)arg1 error:(id *)arg2 completion:(BOOL (^)(struct CGRect, id, id, id, id *))arg3;
- (BOOL)transformTitleForEdit:(id)arg1 error:(id *)arg2 completion:(BOOL (^)(NSArray *, NSString *, MapLocation *))arg3;
- (BOOL)transformCutawayForEdit:(id)arg1 error:(id *)arg2 completion:(BOOL (^)(long long, NSString *))arg3;
- (BOOL)transformCropForEdit:(id)arg1 error:(id *)arg2 cropCompletion:(BOOL (^)(double, double, double, double, id *))arg3 kenBurnsCompletion:(BOOL (^)(struct FFSimpleCropParameters *, double, BOOL, id *))arg4;
- (BOOL)transformAudioSettingsForEdit:(id)arg1 error:(id *)arg2 completion:(BOOL (^)(id, id, id, id *))arg3;
- (BOOL)transformLoopSequenceForEdit:(id)arg1 error:(id *)arg2 completion:(BOOL (^)(id, id *))arg3;
- (BOOL)transformFadesForAudioEdit:(id)arg1 error:(id *)arg2 completion:(BOOL (^)(struct, struct, id *))arg3;
- (BOOL)transformTimingForEdit:(id)arg1 error:(id *)arg2 completion:(BOOL (^)(NSArray *, id *))arg3;
- (BOOL)transformAnchorPlacementForEdit:(id)arg1 error:(id *)arg2 completion:(BOOL (^)(long long, struct, struct, id *))arg3;
- (BOOL)transformTrimForEdit:(id)arg1 error:(id *)arg2 completion:(BOOL (^)(struct, struct, struct, struct, id *))arg3;
- (BOOL)transformMetadataForEdit:(id)arg1 error:(id *)arg2 completion:(BOOL (^)(NSString *, id *))arg3;
- (BOOL)transformFadesForProjectWithError:(id *)arg1 completion:(BOOL (^)(struct, struct, id *))arg2;
@end


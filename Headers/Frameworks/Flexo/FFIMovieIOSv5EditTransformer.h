//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFIMovieIOSEditTransformer.h>

@class FFIMovieIOSProjectArchive, FFVideoProps;

__attribute__((visibility("hidden")))
@interface FFIMovieIOSv5EditTransformer : FFIMovieIOSEditTransformer
{
    FFIMovieIOSProjectArchive *_project;
    FFVideoProps *_videoProps;
    CDStruct_1b6d18a9 _frameDuration;
    int _cmTimeScale;
    int _uniqueAssetNumber;
}

@property(retain, nonatomic) FFIMovieIOSProjectArchive *project; // @synthesize project=_project;
- (BOOL)transformShotClipsForTrailer:(id)arg1 error:(id *)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)transformTrailerInfoForTrailer:(id)arg1 error:(id *)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)transformRotationForVideoEdit:(id)arg1 error:(id *)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)transformCropForEdit:(id)arg1 error:(id *)arg2 cropCompletion:(CDUnknownBlockType)arg3 kenBurnsCompletion:(CDUnknownBlockType)arg4;
- (BOOL)transformKenBurnsForEdit:(id)arg1 error:(id *)arg2 kenBurnsCompletion:(CDUnknownBlockType)arg3;
- (BOOL)transformCropForEdit:(id)arg1 error:(id *)arg2 cropCompletion:(CDUnknownBlockType)arg3;
- (long long)translateRotationForEdit:(id)arg1;
- (BOOL)_transformKenBurnsCropForVideoEdit:(id)arg1 error:(id *)arg2 crop:(struct FFSimpleCropParameters *)arg3;
- (BOOL)transformVideoEffectForTransition:(id)arg1 error:(id *)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)transformEffectForChromaKeyCutaway:(id)arg1 error:(id *)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)transformEffectForSideBySideCutaway:(id)arg1 error:(id *)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)transformEffectForPipCutaway:(id)arg1 error:(id *)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_translateOriginFromCutaway:(struct CGRect *)arg1 intoSequenceFrame:(struct CGRect)arg2;
- (BOOL)transformTitleForEdit:(id)arg1 error:(id *)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)transformCutawayForEdit:(id)arg1 error:(id *)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)transformAudioSettingsForEdit:(id)arg1 error:(id *)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)transformFadesForAudioEdit:(id)arg1 error:(id *)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)transformTimingForEdit:(id)arg1 error:(id *)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)transformAnchorPlacementForEdit:(id)arg1 error:(id *)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)transformLoopSequenceForEdit:(id)arg1 error:(id *)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)transformTrimForEdit:(id)arg1 error:(id *)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)transformMetadataForEdit:(id)arg1 error:(id *)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)transformFadesForProjectWithError:(id *)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)_projectHasFadeOutToBlack;
- (BOOL)_projectHasFadeInFromBlack;
- (CDStruct_1b6d18a9)_halfSecondTime;
- (CDStruct_1b6d18a9)_newCMTime:(long long)arg1;
- (id)translateVisualFilterForEntity:(id)arg1 error:(id *)arg2;
- (id)translateEffectIDForTitle:(id)arg1 error:(id *)arg2;
- (id)translateEffectIDForTransition:(id)arg1 error:(id *)arg2;
- (id)translateTitleLabels:(id)arg1 error:(id *)arg2;
- (id)translateMapLocation:(id)arg1 error:(id *)arg2;
- (id)translateDisplayNameForEdit:(id)arg1 error:(id *)arg2;
- (id)translateClipNameForEdit:(id)arg1 error:(id *)arg2;
- (id)editInfo;
- (CDStruct_1b6d18a9)frameDuration;
- (struct CGRect)imageSpaceBounds;
- (id)themeID;
- (void)dealloc;
- (id)initWithProject:(id)arg1 videoProperties:(id)arg2;

@end


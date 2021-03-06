//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Flexo/FFProjectDocument.h>

@interface FFMediaEventDocument : FFProjectDocument
{
    BOOL _prefetched;
}

+ (Class)documentModuleClass;
+ (id)defaultDocumentName;
+ (id)lastSelectedLibrary;
+ (void)setDefaultLocation:(id)arg1;
+ (id)defaultLocation;
+ (id)projectsRootName;
+ (id)defaultFileExtension;
+ (id)newTemporaryDocument:(id *)arg1;
- (BOOL)operationMoveAssetFilesToTrash:(id)arg1 mask:(unsigned int)arg2 error:(id *)arg3;
- (BOOL)operationMoveAssetFilesToTrash:(id)arg1 error:(id *)arg2;
- (id)operationMoveAssetOrAnalysisFilesToTrash:(id)arg1 error:(id *)arg2;
- (void)_recycleURLs:(id)arg1;
- (BOOL)_recycleURLsOSWrapper:(id)arg1 newURLs:(id *)arg2 error:(id *)arg3;
- (void)_undoRecycleURLs:(id)arg1;
- (BOOL)actionEnd:(id)arg1 save:(BOOL)arg2 error:(id *)arg3;
- (void)actionBegin:(id)arg1;
- (BOOL)_actionEndEditing:(BOOL)arg1 error:(id *)arg2;
- (void)_actionBeginEditing;
- (void)close;
- (void)makeWindowControllers;
- (BOOL)canPurgeRenderFiles;
- (id)mediaEventProject;
- (id)rootObject;
- (void)updateWithHandler:(id)arg1;
- (void)update_fixCanonCreationDate;
- (void)update_assetLogProcessingMode;
- (void)update_avCaptionsToPCCaptions;
- (void)update_assetIdentifierAliases;
- (void)update_buildLegacyMediaCache;
- (void)update_fixFFAnchoredAngleVideoEffectsAnchoredObject;
- (void)update_fixMixdownRoleGroupForAnchoredMediaRefs;
- (void)update_projectNotesLocation2;
- (void)update_colorProfileMetadata;
- (void)update_PreEdelXAudioEffectKeyframes;
- (void)update_fixHEACCAnchoredMediaComponentSampleRate;
- (void)update_preserveCurrentDefaultAudioComponentsLayout:(int)arg1;
- (void)update_audioComponentLayoutItemKey;
- (void)update_assetVideoPropsForWCG;
- (void)update_removeAudioMergedClipMediaComponents;
- (BOOL)update_tagAudioComponentsReferenceLayoutMapSequences;
- (void)update_mediaComponentAudioProviderSourceKey;
- (void)update_fixUpdateHistoryForJumper:(int)arg1;
- (void)update_fixOwnedMediaClipsLayoutMode:(int)arg1;
- (void)update_deprecateCompactRoleAssignmentEncoding:(int)arg1;
- (void)update_removeAudioComponentsFromProjects:(int)arg1;
- (void)update_fixUpImproperlyTaggedSyncClips:(int)arg1;
- (BOOL)update_smartCollectionsRolesPerLibrary;
- (void)update_ReplaceInvalidCharsMotionEffect;
- (void)update_MotionEffectDisplayName;
- (void)update_sourceChannelMapToAudioChannelMap;
- (void)update_audioIntrinsicChannels;
- (BOOL)update_renameMOVfilesMasqueradingAsMP4Files;
- (BOOL)update_initializeEffectResourceMap;
- (void)update_disabledRangesFormatChange;
- (BOOL)update_persistedAudioComponentsLayoutMap;
- (BOOL)update_importedRangesPref;
- (BOOL)update_anamorphicOverrideForREDAssets;
- (BOOL)update_syncAkiraAndTrunkFromVersion:(int)arg1;
- (BOOL)update_fixAudioLevelChannelIgnoreFadesFlag;
- (void)update_rebuildAssetAudioProperties;
- (BOOL)update_removeBadTranscodedFiles;
- (BOOL)update_projectNotesLocation;
- (void)update_repairEffectStackAnchoredObjectReferences;
- (BOOL)update_fixUpColorIsolationsForHSLQualifiers;
- (BOOL)update_convertToNewColorTabEffects;
- (BOOL)update_HeColorEffectToMaskedEffect;
- (BOOL)update_dvClipCreationDates;
- (void)update_SequenceAudioChannelCountSampleRate;
- (BOOL)update_dateRanges;
- (BOOL)update_simpleMotionTitles;
- (BOOL)update_panasonicAVCCAM_Thumbnails;
- (BOOL)update_redTintThumbnails;
- (BOOL)update_fixAnalysisKeywords;
- (BOOL)update_canonTC;
- (BOOL)update_disableAudioUnitEffectClumpFolderReset;
- (BOOL)update_useRelativeAudioPresetPath;
- (BOOL)update_removeDisabledAudioEnhancementEffects;
- (BOOL)update_migrateAudioDisabledChannel;
- (BOOL)update_moveVolumePanFolder;
- (BOOL)update_projectSequenceToProjectData;
- (BOOL)update_projectSequenceInfoFor360;
- (BOOL)update_projectSequenceToSequenceInfo;
- (BOOL)update_cleanupMediaComponentAudioRoutingMap;
- (BOOL)update_conformLumaBumpsFromChannelsToData;
- (BOOL)update_audioUseTimecodeZero;
- (BOOL)update_GPSMetadata;
- (BOOL)update_compoundToClipref;
- (BOOL)update_migrateAudioIntrinsics;
- (BOOL)update_isTitle;
- (BOOL)update_hasObjectReferenceAndNonIntrinsicEffects;
- (BOOL)update_hasObjectNonDefaultEffectStack;
- (BOOL)update_cropAndTrimEffect;
- (BOOL)update_fixLoudnessAnalysisEffect;
- (BOOL)update_migrateEffectBundleFormat;
- (BOOL)update_addAudioSourceDicts;
- (id)getOwnedClipsAndMedia;
- (id)copyOwnedClipAndMediaSequences;
- (id)getOwnedClipsAndNonProjectOwnedMedia;
- (id)newRootObject:(id)arg1 type:(id)arg2;
- (id)initWithURL:(id)arg1 catalog:(id)arg2 type:(id)arg3 create:(int)arg4 libraryItem:(id)arg5 error:(id *)arg6;

@end


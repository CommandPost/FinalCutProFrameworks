//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
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
- (BOOL)updateFromVersion:(int)arg1 error:(id *)arg2;
- (BOOL)update_projectNotesLocation;
- (void)update_repairEffectStackAnchoredObjectReferences;
- (BOOL)update_dvClipCreationDates;
- (BOOL)update_SequenceAudioChannelCountSampleRate;
- (BOOL)update_dateRanges;
- (BOOL)update_simpleMotionTitles;
- (BOOL)update_redTintThumbnails;
- (BOOL)update_fixAnalysisKeywords;
- (BOOL)update_canonTC;
- (BOOL)update_disableAudioUnitEffectClumpFolderReset;
- (BOOL)update_useRelativeAudioPresetPath;
- (BOOL)update_removeDisabledAudioEnhancementEffects;
- (BOOL)update_migrateAudioDisabledChannel;
- (BOOL)update_moveVolumePanFolder;
- (BOOL)update_projectSequenceToProjectData;
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
- (id)getOwnedClipsAndNonProjectOwnedMedia;
- (id)newRootObject:(id)arg1 type:(id)arg2;
- (id)initWithURL:(id)arg1 catalog:(id)arg2 type:(id)arg3 create:(int)arg4 libraryItem:(id)arg5 error:(id *)arg6;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSKeyedUnarchiverDelegate.h"

@class FFAnchoredSequence, FFMediaEventProject, NSBundle, NSMapTable, NSMutableArray, NSMutableDictionary, NSSet;

@interface FFIMovieImporter : NSObject <NSKeyedUnarchiverDelegate>
{
    NSBundle *_projectBundle;
    id _URL;
    id _iMovieProject;
    BOOL _updateWarningComplete;
    FFMediaEventProject *_mediaEventProject;
    FFAnchoredSequence *_anchoredSequence;
    int _projectType;
    NSMapTable *_urlToBinObjMap;
    NSMapTable *_dictToItem;
    NSMutableDictionary *_referencedMedia;
    NSMutableDictionary *_referencedRangeData;
    NSMutableDictionary *_effectMapTable;
    NSMutableDictionary *_titleChannelMapTable;
    NSMutableDictionary *_animaticPropertyMapTable;
    NSMutableDictionary *_sequenceResources;
    NSMutableArray *_missingMedia;
    NSSet *_titleFadeArray;
}

+ (BOOL)actionImportExternalReferencesInProject:(id)arg1 sequence:(id)arg2 defaultEvent:(id)arg3 missingMedia:(id *)arg4 error:(id *)arg5;
+ (BOOL)actionUpgradeWithURL:(id)arg1 sequence:(id)arg2 event:(id)arg3 deleteOriginal:(BOOL)arg4 missingMedia:(id *)arg5 error:(id *)arg6;
+ (BOOL)actionImportWithURL:(id)arg1 sequence:(id)arg2 event:(id)arg3 deleteOriginal:(BOOL)arg4 error:(id *)arg5;
+ (id)eventProjectForLegacyPath:(id)arg1;
+ (id)libraryForPath:(id)arg1;
+ (id)iMovieEventsDir;
+ (id)iMovieProjectDir;
- (id)newMapLocationFromDict:(id)arg1;
- (BOOL)ciVectorEquals:(id)arg1 x:(float)arg2 y:(float)arg3 z:(float)arg4;
- (BOOL)rgbColorEquals:(id)arg1 red:(float)arg2 blue:(float)arg3 green:(float)arg4;
- (id)dict:(id)arg1 objectForKey:(id)arg2 withDefault:(id)arg3;
- (struct _NSRange)dict:(id)arg1 rangeForKey:(id)arg2 withDefault:(struct _NSRange)arg3;
- (BOOL)dict:(id)arg1 boolForKey:(id)arg2 withDefault:(BOOL)arg3;
- (double)dict:(id)arg1 doubleForKey:(id)arg2 withDefault:(double)arg3;
- (float)dict:(id)arg1 floatForKey:(id)arg2 withDefault:(float)arg3;
- (int)dict:(id)arg1 intForKey:(id)arg2 withDefault:(int)arg3;
- (id)readiMovieDataForPath:(id)arg1;
- (id)iMovieDataFilePathForPath:(id)arg1;
- (BOOL)titleSupportsFade:(id)arg1;
- (id)themeIDFromiMovieThemeName:(id)arg1;
- (id)effectIDFromiMovieEffectName:(id)arg1;
- (id)effectMap;
- (id)animaticPropertyMap;
- (id)titleChannelMap;
- (void)dealloc;
- (id)initWithURL:(id)arg1 sequence:(id)arg2 event:(id)arg3;
- (id)initWithURL:(id)arg1 targetEvent:(id)arg2;
- (void)commonInit;
- (id)importMobileProjectAtURL:(id)arg1;
- (BOOL)updateVersion:(id)arg1;
- (void)setDefaults:(id)arg1;
- (void)makeObjectsInObject:(id)arg1 performSelector:(SEL)arg2 withObject:(id)arg3 withObject:(id)arg4;
- (void)array:(id)arg1 changeKeys:(id)arg2 toKeys:(id)arg3;
- (void)updateMobileProject:(id)arg1;
- (BOOL)checkMobileVersion:(id)arg1;
- (BOOL)importToEventWithDisplayName:(id)arg1 error:(id *)arg2;
- (id)newMediaForEvent:(id)arg1 atURL:(id)arg2 error:(id *)arg3;
- (id)importToSeq:(id)arg1 displayName:(id)arg2 error:(id *)arg3;
- (BOOL)importExternalReferencesWithError:(id *)arg1;
- (BOOL)processExternalReferenecesInEditInfo:(id)arg1 forType:(id)arg2 error:(id *)arg3;
- (BOOL)processTrailerInEditInfo:(id)arg1 toSeq:(id)arg2 error:(id *)arg3;
- (void)applyAdjustmentsFromEdit:(id)arg1 toItem:(id)arg2 sequence:(id)arg3 frameDuration:(CDStruct_1b6d18a9)arg4 forTrailer:(BOOL)arg5;
- (BOOL)processTitlesInEditInfo:(id)arg1 toSeq:(id)arg2 error:(id *)arg3;
- (BOOL)processForegroundAudioInEditInfo:(id)arg1 toSeq:(id)arg2 error:(id *)arg3;
- (BOOL)processSongsInEditInfo:(id)arg1 toSeq:(id)arg2 error:(id *)arg3;
- (BOOL)processVoiceOversInEditInfo:(id)arg1 toSeq:(id)arg2 error:(id *)arg3;
- (BOOL)processCutawaysInEditInfo:(id)arg1 toSeq:(id)arg2 error:(id *)arg3;
- (BOOL)processKeytype:(id)arg1 inEditInfo:(id)arg2 toSeq:(id)arg3 audio:(BOOL)arg4 error:(id *)arg5;
- (BOOL)processEditListInEditInfo:(id)arg1 toSeq:(id)arg2 error:(id *)arg3;
- (BOOL)editSpineItemToSequence:(id)arg1 edit:(id)arg2 withMovie:(id)arg3 editInfo:(id)arg4 atTime:(CDStruct_1b6d18a9 *)arg5 withFrameDuration:(CDStruct_1b6d18a9 *)arg6 withPrevTransDuraton:(int)arg7 withNextTransDuraton:(int)arg8 error:(id *)arg9;
- (BOOL)editAnchoredEditToSequence:(id)arg1 edit:(id)arg2 audio:(BOOL)arg3 generator:(BOOL)arg4 editInfo:(id)arg5 error:(id *)arg6;
- (BOOL)editTransitionToSequence:(id)arg1 edit:(id)arg2 transition:(id)arg3 editInfo:(id)arg4 withFrameDuration:(CDStruct_1b6d18a9 *)arg5 error:(id *)arg6;
- (void)setParametersOnTransition:(id)arg1 foriMovieEffectName:(id)arg2;
- (void)setParametersOnDynamicTransition:(id)arg1 foriMovieEffectName:(id)arg2 iMovieEdit:(id)arg3 sequence:(id)arg4;
- (BOOL)collectTimingAndEditToSeq:(id)arg1 edit:(id)arg2 withMovie:(id)arg3 editInfo:(id)arg4 atTime:(CDStruct_1b6d18a9 *)arg5 withFrameDuration:(CDStruct_1b6d18a9 *)arg6 withPrevEdit:(id)arg7 withNextEdit:(id)arg8 error:(id *)arg9;
- (id)newMediaForEdit:(id)arg1 targetSequence:(id)arg2 forStart:(int *)arg3 duration:(int *)arg4 withPrevTransDuraton:(int)arg5 withNextTransDuraton:(int)arg6 error:(id *)arg7;
- (id)newAnchoredObjectForMapStillEdit:(id)arg1;
- (BOOL)pathIsMapStill:(id)arg1;
- (void)addFadeInOutToObject:(id)arg1 fadeInDuration:(CDStruct_1b6d18a9)arg2 fadeOutDuration:(CDStruct_1b6d18a9)arg3;
- (id)newAnchoredObjectForExtra:(id)arg1;
- (id)newAnchoredObjectForExtraStillImage:(id)arg1;
- (void)setupAnimaticEffect:(id)arg1 forEffectName:(id)arg2;
- (id)newAnchoredObjectForMapEffect:(id)arg1;
- (id)newAnchoredObjectForEdit:(id)arg1 inSequence:(id)arg2 useCache:(BOOL)arg3;
- (id)effectIDForMapType:(int)arg1 flat:(BOOL)arg2;
- (id)lastSpineComponentFromClipSeq:(id)arg1 andTimeRange:(CDStruct_e83c9415 *)arg2;
- (void)addiOSTitle:(id)arg1 toObject:(id)arg2 editInfo:(id)arg3 sequence:(id)arg4;
- (void)updateGenerator:(id)arg1 withTitleProperties:(id)arg2 effectName:(id)arg3 generatedByTrailer:(BOOL)arg4;
- (void)conformGenerator:(id)arg1 withTitleProperties:(id)arg2;
- (void)titleFolder:(id *)arg1 subTitleFolder:(id *)arg2 clearSubtitle:(char *)arg3 buildInOut:(char *)arg4 forEffect:(id)arg5 effectName:(id)arg6;
- (void)setEffectTextField:(id)arg1 text:(id)arg2 forField:(int)arg3;
- (void)setEffectText:(id)arg1 text1:(id)arg2 text2:(id)arg3 separateFields:(BOOL)arg4;
- (void)applyParametersToTitleGenerator:(id)arg1 forEffectName:(id)arg2 buildInOut:(BOOL)arg3;
- (BOOL)processMarkersInEditInfo:(id)arg1 toSeq:(id)arg2 error:(id *)arg3;
- (void)applyKenBurnsToClip:(id)arg1 edit:(id)arg2 component:(id)arg3 sequence:(id)arg4;
- (BOOL)applySBSAsCompositeEffectToAnchorItem:(id)arg1 slideDuration:(double)arg2 seq:(id)arg3 sbsType:(int)arg4;
- (BOOL)applySBSToAnchorItem:(id)arg1 parentItem:(id)arg2 atTimeRange:(CDStruct_e83c9415)arg3 anchorParentOffset:(CDStruct_1b6d18a9)arg4 transitionDuration:(CDStruct_1b6d18a9)arg5 seq:(id)arg6 sbsType:(int)arg7;
- (void)applyKeyerToClip:(id)arg1 sequence:(id)arg2 keyerProperties:(id)arg3 placementMode:(int)arg4 originalAspectRatio:(float)arg5;
- (struct CGPoint)pointForVector:(id)arg1 clipBounds:(struct CGRect)arg2 seqBounds:(struct CGRect)arg3;
- (void)applyPIPAsCompositeEffectToClip:(id)arg1 vector:(id)arg2 cutawayProperties:(id)arg3 sequence:(id)arg4;
- (void)applyPIPToClip:(id)arg1 vector:(id)arg2 cutawayProperties:(id)arg3 sequence:(id)arg4;
- (void)applyPlacementToClip:(id)arg1 edit:(id)arg2 component:(id)arg3 sequence:(id)arg4 sbsType:(int)arg5;
- (void)applyVectorToCropEffect:(id)arg1 ciVector:(id)arg2 forFrame:(struct CGRect)arg3 boundByRect:(struct CGRect)arg4 atTime:(CDStruct_1b6d18a9)arg5 type:(int)arg6;
- (struct CGRect)cutawayRectForBounds:(struct CGRect *)arg1 withVector:(id)arg2;
- (struct CGRect)targetRectForFrameRect:(struct CGRect)arg1 boundByRect:(struct CGRect)arg2 withVector:(id)arg3;
- (id)vectorForTargetRect:(struct CGRect)arg1 displayRect:(struct CGRect)arg2 minimumZ:(float)arg3;
- (void)setPositionChannelConvertingPixelValuesToPercentages:(CDStruct_1b6d18a9)arg1 curveX:(double)arg2 curveY:(double)arg3 curveZ:(double)arg4 options:(unsigned int)arg5 posChan:(id)arg6 videoEffectStack:(id)arg7 bounds:(struct CGRect)arg8;
- (void)channelFolder:(id)arg1 setCurveInterpolation:(unsigned int)arg2;
- (void)cropAndFillWithEffectStack:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2 toRect:(struct CGRect)arg3 frame:(struct CGRect)arg4 crop0:(BOOL)arg5;
- (void)cropWithEffectStack:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2 left:(double)arg3 right:(double)arg4 top:(double)arg5 bottom:(double)arg6;
- (void)offsetPositionWithEffectStack:(id)arg1 offsetX:(double)arg2 offsetY:(double)arg3 atTime:(CDStruct_1b6d18a9)arg4;
- (void)computeFrameBoudsRectangleInImageSpaceAdjustments:(double *)arg1 right:(double *)arg2 top:(double *)arg3 bottom:(double *)arg4 forFrameBounds:(struct CGRect)arg5 squareInputBounds:(struct CGRect)arg6;
- (CDStruct_1b6d18a9)secondsToFigTimeForSequenceVideo:(float)arg1 sequence:(id)arg2;
- (void)retimeClip:(id)arg1 toRate:(double)arg2;
- (void)processVideoColor:(id)arg1 forClip:(id)arg2;
- (void)applyCreationDate:(id)arg1 toClip:(id)arg2;
- (void)processAudioProperties:(id)arg1 forClip:(id)arg2 frameDuration:(CDStruct_1b6d18a9)arg3;
- (void)applyNoiseReductionFrom:(id)arg1 toClip:(id)arg2;
- (void)applyEQFrom:(id)arg1 toClip:(id)arg2;
- (void)applyAudioDuckingFrom:(id)arg1 toClip:(id)arg2;
- (void)applyNormalizationFrom:(id)arg1 toClip:(id)arg2;
- (void)applyLevelsFrom:(id)arg1 toEffectStack:(id)arg2 andClip:(id)arg3 frameDuration:(CDStruct_1b6d18a9)arg4;
- (id)videoPropsFromEditInfo:(id)arg1;
- (void)applyEffectsFromEdit:(id)arg1 toClip:(id)arg2;
- (void)applyParametersToAudioEffect:(id)arg1 forEffectName:(id)arg2;
- (void)importAlliMovieData;
- (void)addiMovieDataAtPath:(id)arg1 toMediaItem:(id)arg2;
- (void)addDateProperties:(id)arg1 toMediaObject:(id)arg2 forMediaName:(id)arg3;
- (void)addColorProperties:(id)arg1 toMediaObject:(id)arg2 forMediaName:(id)arg3;
- (void)addAudioStyleProperties:(id)arg1 toMediaObject:(id)arg2 forMediaName:(id)arg3;
- (void)addAudioProperties:(id)arg1 toMediaObject:(id)arg2 forMediaName:(id)arg3;
- (void)addKeywordRanges:(id)arg1 toMediaItem:(id)arg2 forMediaName:(id)arg3;
- (id)keywordForiMovieKey:(id)arg1;
- (id)missingMedia;
- (void)addMissingMediaURL:(id)arg1;
- (id)mediaItemInEvent:(id)arg1 forURL:(id)arg2 error:(id *)arg3;
- (id)newImportMediaWithURL:(id)arg1 pathPtr:(id *)arg2 error:(id *)arg3;
- (id)newOfflineMediaForEdit:(id)arg1 inSequence:(id)arg2 url:(id)arg3 eventProject:(id)arg4;
- (id)newStillMediaForEdit:(id)arg1 sequence:(id)arg2;
- (id)newRepresentationalImageAtTime:(CDStruct_1b6d18a9)arg1 stream:(id)arg2;
- (id)mediaItemFromExistingEvent:(id)arg1 atPath:(id)arg2;
- (id)filePathForEdit:(id)arg1 fileExists:(char *)arg2 existingMedia:(id *)arg3;
- (id)filePathForEdit:(id)arg1 fileExists:(char *)arg2;
- (id)resolveStillPath:(id)arg1;
- (id)resolveSongPath:(id)arg1;
- (id)resolveAudioPath:(id)arg1;
- (id)resolveMoviePath:(id)arg1;
- (id)resolveRelativePath:(id)arg1;
- (id)copyMediaForEditing:(id)arg1;
- (void)addMediaPath:(id)arg1 item:(id)arg2;
- (id)eventProjectForPath:(id)arg1 defaultProjectName:(id)arg2;
- (id)unarchiver:(id)arg1 didDecodeObject:(id)arg2;
- (Class)unarchiver:(id)arg1 cannotDecodeObjectOfClassName:(id)arg2 originalClasses:(id)arg3;

@end


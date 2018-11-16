//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFMedia.h>

#import "FFAnchoredParentProtocol.h"
#import "FFCopyPasteProtocol.h"
#import "FFDataModelProtocol.h"
#import "FFEffectContainerProtocol.h"
#import "FFInspectableObject.h"
#import "FFInspectorChannelDataSource.h"
#import "FFInspectorTabDataSource.h"
#import "FFSkimmableItemProtocol.h"
#import "FFSkimmableProtocol.h"
#import "NSCoding.h"

@class FFAnchoredGeneratorComponent, FFAnchoredObject, FFProject, FFRenderFormat, FFSequenceInfo, NSMutableArray, NSMutableSet, NSSet, NSString;

@interface FFAnchoredSequence : FFMedia <NSCoding, FFDataModelProtocol, FFCopyPasteProtocol, FFSkimmableProtocol, FFInspectableObject, FFInspectorTabDataSource, FFInspectorChannelDataSource, FFSkimmableItemProtocol, FFAnchoredParentProtocol, FFEffectContainerProtocol>
{
    int _audioChannelLayoutID;
    FFRenderFormat *_renderFormat;
    FFAnchoredObject *_primaryObject;
    NSString *_sequenceType;
    unsigned int _editingCount;
    unsigned int _actionCount;
    BOOL _editing;
    BOOL _deferUpdates;
    CDStruct_1b6d18a9 _editStartDuration;
    NSMutableArray *_deferedUpdateRegions;
    NSSet *_soloedClips;
    NSSet *_previousSoloedClips;
    struct FigTimePair _videoInOutPair;
    NSMutableSet *_anchoredObjects;
    NSMutableSet *_addedObjectsForAction;
    NSMutableSet *_removedObjectsForAction;
    NSMutableSet *_modifiedObjectsForAction;
    NSString *_mediaIdentifier;
    FFSequenceInfo *_sequenceInfo;
    BOOL _sequenceSettingsFromFirstComponent;
    FFAnchoredGeneratorComponent *_bgComponent;
    FFAnchoredGeneratorComponent *_bgComponentBlack;
    FFAnchoredObject *_objectForKenBurns;
    BOOL _previousEditShouldNotCauseUpdateOnPlay;
    BOOL _editWontChangeGrid;
    NSSet *_preActionAssets;
    BOOL _doNotResetMediaReferences;
}

+ (id)copyClassDescription;
+ (id)newClipWithMedia:(id)arg1;
+ (id)newSequenceWithVariant:(id)arg1;
+ (id)keyPathsForValuesAffectingDisplayName;
+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (int)temporalResolutionMode;
+ (void)setDefaultTransitionOverlapType:(int)arg1;
- (id)sortByStartTime:(id)arg1 inContainer:(id)arg2;
- (id)type;
- (id)contentType;
- (id)initWithDisplayName:(id)arg1 sequenceType:(id)arg2 shouldCreateInfo:(BOOL)arg3 mediaIdentifier:(id)arg4;
- (id)initWithDisplayName:(id)arg1 sequenceType:(id)arg2 shouldCreateInfo:(BOOL)arg3;
- (id)initWithDisplayName:(id)arg1 sequenceType:(id)arg2;
- (id)initWithDisplayName:(id)arg1;
- (id)initClipWithMedia:(id)arg1;
- (BOOL)isCameraClip;
- (id)radAsset;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)awakeAfterUsingCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (CDStruct_e83c9415)mediaRange;
- (CDStruct_e83c9415)clippedRange;
- (CDStruct_e83c9415)audioClippedRange;
- (CDStruct_e83c9415)combinedAudioVideoClippedRange;
- (CDStruct_1b6d18a9)mediaTracksEnd;
- (void)setVideoProps:(id)arg1;
- (id)videoProps;
- (id)videoFormat;
- (void)setTimecodeDisplayDropFrame:(long long)arg1;
- (long long)timecodeDisplayDropFrame;
- (CDStruct_1b6d18a9)timecodeFrameDuration;
@property(retain, nonatomic) FFRenderFormat *renderFormat; // @synthesize renderFormat=_renderFormat;
- (id)renderFormatName;
- (void)setRenderFormatName:(id)arg1;
- (double)audioSampleRate;
@property(nonatomic) long long audioChannelLayoutID;
@property(nonatomic) long long audioChannelCount;
- (long long)actualAudioChannelCountForFFAudioChannelsConfigManager;
@property(retain, nonatomic) FFAnchoredObject *primaryObject; // @synthesize primaryObject=_primaryObject;
- (BOOL)isSequenceType:(id)arg1;
- (CDStruct_1b6d18a9)start;
- (CDStruct_1b6d18a9)end;
- (void)setAudioInOutPair:(struct FigTimePair)arg1;
- (void)setVideoInOutPair:(struct FigTimePair)arg1;
- (CDStruct_e83c9415)mediaRangeConstrainedByInOutForType:(int)arg1;
- (id)displayName;
- (void)setDisplayName:(id)arg1;
- (id)displayFormat;
- (void)setKenBurnsObject:(id)arg1;
@property(retain, nonatomic) FFAnchoredObject *objectForKenBurns; // @synthesize objectForKenBurns=_objectForKenBurns;
- (id)shareFingerPrint;
- (void)waitForAllEffectsToBackgroundLoad;
- (void)_updateBackgroundEffectLoadOnObject:(id)arg1 forceStreamAndSampleChange:(BOOL)arg2;
- (void)notifyEffectsDidLoadInBackground:(id)arg1;
- (void)passEffectNotificationUpChain:(id)arg1 userInfo:(id)arg2 informParents:(BOOL)arg3;
@property(readonly, nonatomic) NSString *mediaIdentifier; // @synthesize mediaIdentifier=_mediaIdentifier;
- (void)resetMediaIdentifier;
- (id)sequence;
- (id)anchoredObjects;
- (void)_setDeferUpdates:(BOOL)arg1;
- (BOOL)_deferUpdates;
- (id)_deferedUpdateRegions;
- (BOOL)isEditing;
- (void)_setEditing:(BOOL)arg1;
- (void)_addInvalidSpineObjectsForObject:(id)arg1 toSet:(id)arg2;
- (void)addAnchoredObjectForParentObserving:(id)arg1 includingObject:(BOOL)arg2;
- (void)removeAnchoredObjectFromParentObserving:(id)arg1 includingObject:(BOOL)arg2;
- (id)container;
- (BOOL)canContainObject:(id)arg1;
- (void)_beginObservingEdits;
- (void)setModifiedObjectsForActionDueToChannelChange:(id)arg1 notification:(id)arg2;
- (void)updateModifiedObjectsForSourceChange:(id)arg1;
- (void)_endObservingEdits;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (BOOL)anyAddedRemovedModifiedObjectsChanged;
- (id)changeDictionary;
- (void)beginEditing;
- (void)endEditing;
- (void)_actionBeginEditing;
- (void)_clearActionRelatedModifications;
- (BOOL)_actionEndEditing:(BOOL)arg1 markSequenceModified:(BOOL)arg2 error:(id *)arg3;
- (BOOL)_actionEndEditing:(BOOL)arg1 error:(id *)arg2;
- (void)actionBeginEditing;
- (BOOL)actionEndEditing:(BOOL)arg1 error:(id *)arg2;
- (void)_constrainBRollAudio;
- (BOOL)actionEnd:(id)arg1 save:(BOOL)arg2 error:(id *)arg3;
- (CDStruct_1b6d18a9)sampleDuration;
- (struct NSObject *)skimMedia;
- (CDStruct_1b6d18a9)timeOffset;
- (id)itemIcon;
- (void)iconReady:(id)arg1;
- (id)rangesOfMediaFromArray:(id)arg1;
- (id)inspectorClassName;
- (id)inspectorTabClassNames;
- (id)inspectorTabIdentifiers;
- (id)labelForInspectorTabIdentifier:(id)arg1;
- (id)inspectableChannelsForIdentifier:(id)arg1;
- (BOOL)canReorderChannel:(id)arg1;
- (BOOL)reorderChannel:(id)arg1 relativeToChannel:(id)arg2 above:(BOOL)arg3;
- (BOOL)containsChannel:(id)arg1;
- (BOOL)canRemoveChannel:(id)arg1;
- (void)removeChannel:(id)arg1;
@property(retain, nonatomic) NSSet *soloedClips;
- (BOOL)canCopyWithSelection:(id)arg1;
- (BOOL)canCutWithSelection:(id)arg1;
- (BOOL)canPasteWithSelection:(id)arg1;
- (BOOL)canPasteInsert;
- (BOOL)canPasteAnchored;
- (BOOL)copyWithSelection:(id)arg1;
- (BOOL)cutWithSelection:(id)arg1 error:(id *)arg2;
- (BOOL)pasteWithSelection:(id)arg1 atTime:(CDStruct_1b6d18a9 *)arg2 error:(id *)arg3;
- (id)parentItem;
- (CDStruct_e83c9415)localEffectiveRange;
- (CDStruct_e83c9415)containerEffectiveRangeForChild:(id)arg1 container:(id)arg2;
- (BOOL)canClippedItemRangeOnChildCausesRipple:(id)arg1;
- (void)_processDeferredUpdates:(BOOL)arg1;
- (void)_processDeferredUpdates;
- (void)invalidateSourceRange:(CDStruct_e83c9415)arg1 forType:(id)arg2;
- (void)invalidateSampleRange:(CDStruct_e83c9415)arg1 forType:(id)arg2;
- (void)invalidateStreamRange:(CDStruct_e83c9415)arg1 forType:(id)arg2;
- (void)forcePlayerContextChangeForSequence;
- (id)_backgroundComponent;
- (id)_backgroundComponentBlack;
- (CDStruct_1b6d18a9)globalStart;
- (CDStruct_1b6d18a9)childToParentOffsetForChild:(id)arg1;
- (CDStruct_1b6d18a9)localToContainerOffset:(id)arg1;
- (void)informParentContainedItemsChanged:(BOOL)arg1;
- (void)informParentIsCompoundClipChanged;
- (void)informParentEffectsChanged;
- (void)informParentMDWillChange;
- (void)informParentMDDidChange;
- (long long)getFirstSetAnchoredLaneValueInParentsAndSelf:(id)arg1;
- (BOOL)hasAudio;
- (BOOL)hasVideo;
- (BOOL)hasDefinedVideoRate;
- (BOOL)isStill;
- (BOOL)isPSD;
- (BOOL)isTransition;
- (BOOL)isMarker;
- (BOOL)isGenerator;
- (BOOL)isTitle;
- (BOOL)isPlaceholder;
- (BOOL)isGap;
- (BOOL)isAdjustment;
- (BOOL)isCompoundClip;
- (BOOL)isAngle;
- (BOOL)isMultiAngle;
- (BOOL)isSpine;
- (BOOL)isAudioOnlyCollection;
- (BOOL)isStack;
- (BOOL)isCollection;
- (BOOL)isComponent;
- (BOOL)supportsDropFrame;
- (id)anchoredItems;
- (BOOL)objectInContainedItems:(id)arg1;
- (id)activeVariant;
- (void)setActiveVariant:(id)arg1;
- (id)assets;
- (id)assetRefs;
- (id)clipRefs;
- (id)activeAssetRefs;
- (id)activeMediaRefs;
- (id)fileURLs:(int)arg1;
- (id)effects;
- (CDStruct_1b6d18a9)secondsToFigTimeForSequenceVideo:(float)arg1;
- (CDStruct_1b6d18a9)secondsToFigTimeForSequenceAudio:(float)arg1;
- (CDStruct_1b6d18a9)defaultTransitionDurationForAudio;
- (CDStruct_1b6d18a9)defaultTransitionDurationForVideo;
- (CDStruct_1b6d18a9)minimumTransitionDurationForAudio;
- (CDStruct_1b6d18a9)minimumTransitionDurationForVideo;
- (CDStruct_1b6d18a9)defaultGeneratorDurationForVideo;
- (CDStruct_1b6d18a9)defaultStillDuration;
- (id)defaultVideoTransitionType;
- (id)defaultAudioTransitionType;
- (id)defaultTransitionTypes;
- (int)defaultTransitionOverlapType;
- (void)getRowColumnValueForAngleCount:(int)arg1 rows:(int *)arg2 columns:(int *)arg3;
- (id)mdMappedKeyPathForKey:(id)arg1;
- (BOOL)validateMetadataSelectionStart:(id *)arg1 error:(id *)arg2;
- (void)setMetadataSelectionStart:(id)arg1;
- (id)metadataSelectionStart;
- (BOOL)validateMetadataSelectionEnd:(id *)arg1 error:(id *)arg2;
- (void)setMetadataSelectionEnd:(id)arg1;
- (id)metadataSelectionEnd;
- (BOOL)validateMetadataSelectionDuration:(id *)arg1 error:(id *)arg2;
- (void)setMetadataSelectionDuration:(id)arg1;
- (id)metadataSelectionDuration;
- (id)previousItem:(id)arg1;
- (id)nextItem:(id)arg1;
- (BOOL)onSpine:(id)arg1 rootItem:(id)arg2;
- (BOOL)offSpine:(id)arg1 rootItem:(id)arg2;
- (BOOL)timePreservingModeOn;
- (id)audioChannelLayoutName;
- (id)newProvider;
- (id)newProviderWithEffectCount:(long long)arg1 showObjects:(id)arg2 roles:(id)arg3 angleOffset:(long long)arg4 angleCount:(long long)arg5;
- (id)newProviderWithEffectCount:(long long)arg1 showObjects:(id)arg2;
- (id)newProviderWithEffectCount:(long long)arg1;
- (CDStruct_60067b7e)audioMD5:(int)arg1;
- (id)fullPath;
@property(nonatomic) BOOL doNotResetMediaReferences; // @synthesize doNotResetMediaReferences=_doNotResetMediaReferences;
@property(nonatomic) BOOL editWontChangeGrid; // @synthesize editWontChangeGrid=_editWontChangeGrid;
@property(nonatomic) BOOL previousEditShouldNotCauseUpdateOnPlay; // @synthesize previousEditShouldNotCauseUpdateOnPlay=_previousEditShouldNotCauseUpdateOnPlay;
@property(nonatomic) BOOL sequenceSettingsFromFirstComponent; // @synthesize sequenceSettingsFromFirstComponent=_sequenceSettingsFromFirstComponent;
@property(readonly, retain, nonatomic) FFSequenceInfo *sequenceInfo; // @synthesize sequenceInfo=_sequenceInfo;
@property(retain, nonatomic) NSSet *previousSoloedClips; // @synthesize previousSoloedClips=_previousSoloedClips;
@property(readonly, nonatomic) NSString *sequenceType; // @synthesize sequenceType=_sequenceType;

// Remaining properties
@property(readonly, nonatomic) FFProject *project; // @dynamic project;

@end


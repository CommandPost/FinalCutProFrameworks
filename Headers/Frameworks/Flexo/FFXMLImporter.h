//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFXMLBase.h>

@class FFLibrary, NSDictionary, NSMapTable, NSMutableArray, NSMutableSet, NSURL, NSXMLDocument;

__attribute__((visibility("hidden")))
@interface FFXMLImporter : FFXMLBase
{
    NSXMLDocument *_xmlDoc;
    NSURL *_baseURL;
    unsigned int _version;
    FFLibrary *_library;
    NSMapTable *_resByResID;
    NSMutableArray *_errors;
    NSMutableArray *_warnings;
    NSMutableSet *_warnedParamElements;
    NSMapTable *_audioOnlyMap;
    unsigned long long _audioOnlyCheck;
    NSMapTable *_textStyleMap;
    BOOL _isiMovieUpgrade;
    NSMutableArray *_importOptionsStack;
    NSMutableArray *_importContextStack;
    NSMapTable *_newMediaEventMap;
    NSMapTable *_xmlUIDMap;
    NSMapTable *_resourceUIDMap;
    NSMapTable *_projectRefMap;
    NSMapTable *_importedKeywordsMap;
    NSDictionary *_customMetadataRepresentationDict;
    BOOL _libraryIsNew;
}

- (void)dealloc;
- (id)initWithURL:(id)arg1 taskDelegate:(id)arg2 error:(id *)arg3;
- (id)prepareDocument:(id)arg1 error:(id *)arg2;
- (id)import:(id)arg1 error:(id *)arg2;
- (void)validateCopyAssetsLocation;
- (id)importPreV1_4Project:(id)arg1 error:(id *)arg2;
- (id)importProjects:(id)arg1 error:(id *)arg2;
- (id)insertNewEventProject:(id)arg1 error:(id *)arg2;
- (BOOL)importResources:(id)arg1 error:(id *)arg2;
- (BOOL)importSequenceXMLElement:(id)arg1 intoSequenceProject:(id)arg2 error:(id *)arg3;
- (BOOL)importEventXMLElement:(id)arg1 intoEventProject:(id)arg2 error:(id *)arg3;
- (id)createSequenceProject:(id)arg1 name:(id)arg2 error:(id *)arg3;
- (id)eventProjectForXMLUID:(id)arg1;
- (id)createEventProject:(id)arg1 forXMLUID:(id)arg2 error:(id *)arg3;
- (void)_closeAndDeleteDocumentFiles:(id)arg1;
- (id)smartCollectionFilter:(id)arg1;
- (id)newMediaEventSmartCollection:(id)arg1 withName:(id)arg2;
- (void)addMediaEventObject:(id)arg1 toFolder:(id)arg2;
- (BOOL)isSupportedMediaEventObject:(id)arg1;
- (id)newEventStillClipOwnedClipsItem:(id)arg1;
- (BOOL)isEventStillClip:(id)arg1;
- (BOOL)addSequenceProject:(id)arg1 error:(id *)arg2;
- (id)newAuditionOwnedClipsItem:(id)arg1;
- (id)newRefOwnedClipsItem:(id)arg1;
- (id)newClipOwnedClipsItem:(id)arg1;
- (id)newMulticamOwnedClipsItem:(id)arg1;
- (id)copyAssetRef:(id)arg1 error:(id *)arg2;
- (id)copyClipRef:(id)arg1 type:(id)arg2 error:(id *)arg3;
- (id)resolveEvent:(id)arg1 create:(BOOL)arg2 error:(id *)arg3;
- (id)newAssetRefFromResource:(id)arg1 eventProject:(id)arg2 error:(id *)arg3;
- (void)addSequenceKeywords:(id)arg1 forSequence:(id)arg2;
- (void)addMetadata:(id)arg1 toObject:(id)arg2;
- (id)metadataValueForElement:(id)arg1 andKey:(id)arg2;
- (id)getMetadataValueWithCustomRepresentationForKey:(id)arg1 FromElement:(id)arg2;
- (BOOL)allowEditing:(id)arg1;
- (id)newOfflineAssetRef:(id)arg1 eventProject:(id)arg2 error:(id *)arg3;
- (int)importAssetManageFileTypeWithEventProject:(id)arg1;
- (void)setupEffectBundle:(id)arg1 withEffectNode:(id)arg2 toObject:(id)arg3;
- (void)setupAudioUnitEffect:(id)arg1 withEffectNode:(id)arg2 toObject:(id)arg3;
- (void)addEdits:(id)arg1 toObject:(id)arg2 parent:(id)arg3;
- (void)_addEdits:(id)arg1 toObject:(id)arg2;
- (void)addTimeMapNode:(id)arg1 toObject:(id)arg2;
- (void)addMarkerNode:(id)arg1 toObject:(id)arg2;
- (void)addRatingNode:(id)arg1 toObject:(id)arg2;
- (void)addAnalysisMarkerNode:(id)arg1 toObject:(id)arg2;
- (void)addKeywordNode:(id)arg1 toObject:(id)arg2;
- (void)_addKeywords:(id)arg1 withRange:(CDStruct_e83c9415)arg2 note:(id)arg3 eventProject:(id)arg4 toObject:(id)arg5;
- (void)addNoteNode:(id)arg1 toObject:(id)arg2;
- (void)addMuteNode:(id)arg1 toObject:(id)arg2;
- (void)addMaskedFilterNode:(id)arg1 toObject:(id)arg2;
- (void)addMaskedFilterNode:(id)arg1 video:(id)arg2 audio:(id)arg3 toObject:(id)arg4;
- (void)addEffectParameters:(id)arg1 forEffect:(id)arg2 toObject:(id)arg3;
- (void)addEffectMask:(id)arg1 forEffect:(id)arg2 toObject:(id)arg3;
- (void)addFilterNode:(id)arg1 toObject:(id)arg2;
- (void)addFilterNode:(id)arg1 video:(id)arg2 audio:(id)arg3 toObject:(id)arg4;
- (void)addTitleNode:(id)arg1 toObject:(id)arg2;
- (void)registerTextStylesInNode:(id)arg1;
- (void)registerTextStyle:(id)arg1;
- (id)newTextStyleForElement:(id)arg1;
- (void)addTransitionNodes:(id)arg1 toSpine:(id)arg2;
- (void)addTransitionEffectParams:(id)arg1 videoFilterNode:(id)arg2 audioFilterNode:(id)arg3;
- (void)addAuditionNode:(id)arg1 toObject:(id)arg2;
- (void)addSpineNode:(id)arg1 toObject:(id)arg2;
- (void)addClipNode:(id)arg1 toObject:(id)arg2;
- (void)addRefClipNode:(id)arg1 toObject:(id)arg2;
- (void)addMulticamClipNode:(id)arg1 toObject:(id)arg2;
- (void)addAudioNode:(id)arg1 toObject:(id)arg2;
- (void)addVideoNode:(id)arg1 toObject:(id)arg2;
- (id)addAVNode:(id)arg1 toObject:(id)arg2 type:(id)arg3;
- (void)addGapNode:(id)arg1 toObject:(id)arg2;
- (id)addEffectNode:(id)arg1 toObject:(id)arg2;
- (void)addContainedNode:(id)arg1 media:(id)arg2 toObject:(id)arg3;
- (void)addAnchoredNode:(id)arg1 media:(id)arg2 toObject:(id)arg3;
- (void)addMulticamAngleNode:(id)arg1 toObject:(id)arg2;
- (id)newMulticamAngleNode:(id)arg1;
- (id)newMulticamClip:(id)arg1 inParent:(id)arg2 error:(id *)arg3;
- (id)newMulticamMedia:(id)arg1 name:(id)arg2 identifier:(id)arg3 eventProject:(id)arg4 error:(id *)arg5;
- (id)newSequenceMedia:(id)arg1 name:(id)arg2 identifier:(id)arg3 eventProject:(id)arg4 error:(id *)arg5;
- (id)newAuditionFromNode:(id)arg1 inParent:(id)arg2;
- (id)newEffectComponentFromNode:(id)arg1;
- (id)newMediaComponentFromNode:(id)arg1 sourceKey:(id)arg2 sourceType:(id)arg3;
- (void)updateDisplayName:(id)arg1 node:(id)arg2;
- (void)setVideoReservedData:(id)arg1 toObject:(id)arg2;
- (void)setAVOverrideState:(id)arg1 toObject:(id)arg2;
- (void)addAngleData:(id)arg1 toObject:(id)arg2;
- (void)addClipAudioLayout:(id)arg1 toObject:(id)arg2;
- (void)_addAudioSourceNodes:(id)arg1 toObject:(id)arg2 angleID:(id)arg3;
- (void)addRetiming:(id)arg1 toObject:(id)arg2;
- (void)addIntrinsicChannels:(id)arg1 toObject:(id)arg2;
- (void)addAudioIntrinsicChannels:(id)arg1 effectStack:(id)arg2 toObject:(id)arg3;
- (void)addVideoIntrinsicChannels:(id)arg1 effectStack:(id)arg2 toObject:(id)arg3;
- (void)addAudioPanner:(id)arg1 effectStack:(id)arg2 toObject:(id)arg3;
- (void)addMatchEQ:(id)arg1 effectStack:(id)arg2 toObject:(id)arg3;
- (void)addEQ:(id)arg1 effectStack:(id)arg2 toObject:(id)arg3;
- (void)addHumReduction:(id)arg1 effectStack:(id)arg2 toObject:(id)arg3;
- (void)addNoiseReduction:(id)arg1 effectStack:(id)arg2 toObject:(id)arg3;
- (void)addLoudness:(id)arg1 effectStack:(id)arg2 toObject:(id)arg3;
- (void)addRollingShutterAdjustment:(id)arg1 effectStack:(id)arg2 toObject:(id)arg3;
- (void)addStabilizationAdjustment:(id)arg1 effectStack:(id)arg2 toObject:(id)arg3;
- (void)addBlendAdjustment:(id)arg1 effectStack:(id)arg2 toObject:(id)arg3;
- (void)addCropInfo:(id)arg1 effectStack:(id)arg2 toObject:(id)arg3;
- (void)addAdjustment:(id)arg1 type:(CDUnknownFunctionPointerType)arg2 effectStack:(id)arg3 toObject:(id)arg4;
- (void)addAttributes:(id)arg1 map:(id)arg2 toObject:(id)arg3;
- (void)finishedLoadingParametersForEffect:(id)arg1;
- (void)prepareEffectForParamElements:(id)arg1 effect:(id)arg2;
- (void)addParamElementsFor:(id)arg1 toChannelFolder:(id)arg2 toObject:(id)arg3;
- (void)addParamElements:(id)arg1 toChannelFolder:(id)arg2 toObject:(id)arg3;
- (void)addParamElementsFor:(id)arg1 toChannelFolder:(id)arg2 toObject:(id)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (void)addParamElements:(id)arg1 toChannelFolder:(id)arg2 toObject:(id)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (void)addParam:(id)arg1 channel:(id)arg2 toObject:(id)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (void)addParam:(id)arg1 channel:(id)arg2 toObject:(id)arg3;
- (void)addParameterNode:(id)arg1 channel:(id)arg2 toObject:(id)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (void)addFadeOut:(id)arg1 channel:(id)arg2 toObject:(id)arg3;
- (void)addFadeIn:(id)arg1 channel:(id)arg2 toObject:(id)arg3;
- (void)addColorInfo:(id)arg1 effectStack:(id)arg2 toObject:(id)arg3;
- (void)setASCCDLInfo:(id)arg1 toEffect:(id)arg2;
- (void)addRoles:(id)arg1 toObject:(id)arg2;
- (void)addAttributes:(id)arg1 toObject:(id)arg2;
- (void)addAudioRouting:(id)arg1 toObject:(id)arg2;
- (void)addFormat:(id)arg1 toObject:(id)arg2;
- (id)copyVideoProps:(id)arg1;
- (CDStruct_1b6d18a9)attributeAsDuration:(id)arg1 name:(id)arg2 defaultValue:(CDStruct_1b6d18a9)arg3;
- (id)audioFilterElementName;
- (id)videoFilterElementName;
- (BOOL)allowAdjustmentsForObject:(id)arg1;
- (id)newEffectWithResourceID:(id)arg1;
- (id)effectIDForResourceID:(id)arg1;
- (id)newParameterNode:(id)arg1;
- (void)setChannel:(id)arg1 stringValue:(id)arg2;
- (void)setChannel:(id)arg1 stringValue:(id)arg2 interpolation:(id)arg3 atTime:(CDStruct_1b6d18a9)arg4 isRadians:(BOOL)arg5 smooth:(BOOL)arg6;
- (BOOL)importPostProcess:(id *)arg1;
- (BOOL)processImportedKeywordsMap:(id *)arg1;
- (BOOL)processNewMediaEventMap:(id *)arg1;
- (void)addNewMedia:(id)arg1 forEvent:(id)arg2;
- (void)makeDefaultClipsForNewMedia:(id)arg1 inEvent:(id)arg2;
- (id)resourceElementForAttribute:(id)arg1 allowedElementTypes:(id)arg2;
- (id)resourceElementForAttribute:(id)arg1 allowedElementType:(id)arg2;
- (id)reservedDataForElement:(id)arg1;
- (id)mappedUIDForResourceID:(id)arg1;
- (void)setMappedUID:(id)arg1 forResourceID:(id)arg2;
- (id)mappedUIDForXMLUID:(id)arg1;
- (void)setMappedUID:(id)arg1 forXMLUID:(id)arg2;
- (id)importContextSequence;
- (id)importContextEvent;
- (id)importContextProject;
- (void)popImportContext;
- (void)pushImportContextWithSequence:(id)arg1;
- (void)pushImportContextWithProject:(id)arg1 event:(id)arg2 sequence:(id)arg3;
- (id)currentImportOptions;
- (void)popImportOptions;
- (void)pushImportOptions:(id)arg1;
- (void)initImportOptions;
- (void)warnUnsupportedParamKeyframeInterpolation:(id)arg1;
- (BOOL)importCancelled;
@property(readonly, nonatomic) BOOL suppressWarnings;
- (id)warnings;
- (void)log:(id)arg1 warningOnly:(BOOL)arg2;
- (void)log:(id)arg1 warningOnly:(BOOL)arg2 minVersion:(unsigned int)arg3;
- (id)error:(id)arg1 node:(id)arg2 elementName:(id)arg3;
- (id)error:(id)arg1 node:(id)arg2 attr:(id)arg3;
- (id)error:(id)arg1 detail:(id)arg2;
- (id)error:(id)arg1 code:(int)arg2;
- (id)_errorDict:(id)arg1 detail:(id)arg2;

@end


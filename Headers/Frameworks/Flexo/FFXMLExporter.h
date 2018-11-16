//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FFProject, NSMapTable, NSURL, NSXMLDocument;

__attribute__((visibility("hidden")))
@interface FFXMLExporter : NSObject
{
    NSXMLDocument *_xmlDoc;
    NSMapTable *_resByModelID;
    NSMapTable *_resByLocalID;
    FFProject *_project;
    id *_alternateRoleLabels;
    NSURL *_destURL;
    id _taskDelegate;
    NSMapTable *_textStyleMap;
    unsigned int _textStyleCount;
}

- (void)dealloc;
- (id)init;
- (BOOL)writeDocument:(id)arg1 stream:(id)arg2 project:(id)arg3 error:(id *)arg4;
- (id)newEventProjectNode:(id)arg1;
- (id)newSequenceProjectNode:(id)arg1;
- (void)addConsumerUIAudioFeaturesAsEffects:(id)arg1 element:(id)arg2;
- (void)addChildrenForMediaEventFolder:(id)arg1 element:(id)arg2;
- (void)addMediaEventFolderObject:(id)arg1 element:(id)arg2;
- (id)newMediaEventSmartCollectionElement:(id)arg1;
- (id)newSmartCollectionRoleFilterElement:(id)arg1;
- (id)newSmartCollectionTimeFilterElement:(id)arg1;
- (id)newSmartCollectionPropertyFilterElement:(id)arg1;
- (id)newSmartCollectionPeopleFilterElement:(id)arg1;
- (id)newShotTypeElement:(id)arg1;
- (id)newSmartCollectionKeywordsFilterElement:(id)arg1;
- (id)newSmartCollectionStabilizationFilterElement:(id)arg1;
- (id)newSmartCollectionClipFilterElement:(id)arg1;
- (id)newSmartCollectionMediaFilterElement:(id)arg1;
- (id)newSmartCollectionRatingsFilterElement:(id)arg1;
- (id)newSmartCollectionTextFilterElement:(id)arg1;
- (void)populateEffectNode:(id)arg1 forEffectBundle:(id)arg2;
- (void)populateEffectNode:(id)arg1 forAudioUnitEffect:(id)arg2;
- (void)addEventStillClip:(id)arg1 element:(id)arg2;
- (void)addEffects:(id)arg1 element:(id)arg2;
- (void)addEffect:(id)arg1 element:(id)arg2;
- (void)addRetimingInfo:(id)arg1 element:(id)arg2;
- (void)addObjects:(id)arg1 element:(id)arg2;
- (void)addClip:(id)arg1 element:(id)arg2;
- (void)addMultiAngleSources:(id)arg1 element:(id)arg2;
- (void)addMarkers:(id)arg1 element:(id)arg2;
- (void)addIntrinsicChannels:(id)arg1 element:(id)arg2;
- (void)addCropInfo:(id)arg1 element:(id)arg2;
- (void)addAudioLayoutItems:(id)arg1 key:(id)arg2 element:(id)arg3;
- (void)addAudioMute:(id)arg1 element:(id)arg2;
- (void)addAudioPanner:(id)arg1 element:(id)arg2;
- (void)addMatchEQ:(id)arg1 element:(id)arg2;
- (void)addEQ:(id)arg1 element:(id)arg2;
- (void)addHumReduction:(id)arg1 element:(id)arg2;
- (void)addNoiseReduction:(id)arg1 element:(id)arg2;
- (void)addLoudness:(id)arg1 element:(id)arg2;
- (void)addRollingShutterAdjustment:(id)arg1 element:(id)arg2;
- (void)addStabilizationAdjustment:(id)arg1 element:(id)arg2;
- (void)addBlendAdjustment:(id)arg1 element:(id)arg2;
- (id)addAdjustment:(id)arg1 name:(id)arg2 type:(CDUnknownFunctionPointerType)arg3 element:(id)arg4;
- (void)addColorInfo:(id)arg1 element:(id)arg2;
- (void)addColorASCCDLInfoForMaskEffect:(id)arg1 element:(id)arg2;
- (void)addFormat:(id)arg1 element:(id)arg2;
- (void)addNotes:(id)arg1 element:(id)arg2;
- (BOOL)addConsumerExportChannelsForEffect:(id)arg1 toElement:(id)arg2;
- (void)_adjustParameterNode:(id)arg1 sourceParamKey:(id)arg2 forEffect:(id)arg3;
- (void)moveChildrenFromElement:(id)arg1 toElement:(id)arg2 insertionIndex:(unsigned long long)arg3;
- (void)addEffectChannelsForEffect:(id)arg1 element:(id)arg2;
- (void)addEffectChannels:(id)arg1 rootChannel:(id)arg2 element:(id)arg3 addIfDefault:(BOOL)arg4;
- (BOOL)addEffectChannelsForFolder:(id)arg1 element:(id)arg2 addIfDefault:(BOOL)arg3 usingFilterBlock:(CDUnknownBlockType)arg4;
- (BOOL)addEffectChannelsForFolder:(id)arg1 element:(id)arg2 addIfDefault:(BOOL)arg3 usingFilterBlock:(CDUnknownBlockType)arg4 usingParamKeyBlock:(CDUnknownBlockType)arg5;
- (BOOL)addChannel:(id)arg1 name:(id)arg2 paramKey:(id)arg3 element:(id)arg4;
- (BOOL)addChannel:(id)arg1 name:(id)arg2 paramKey:(id)arg3 attribute:(BOOL)arg4 addIfDefault:(BOOL)arg5 element:(id)arg6;
- (BOOL)addAttributes:(id)arg1 addIfDefault:(BOOL)arg2 element:(id)arg3;
- (BOOL)addParameterNode:(id)arg1 element:(id)arg2;
- (BOOL)addParameterNode:(id)arg1 attribute:(BOOL)arg2 addIfDefault:(BOOL)arg3 element:(id)arg4;
- (id)newParameterNode:(id)arg1;
- (void)addOrientationElementForMediaComponent:(id)arg1 element:(id)arg2;
- (id)registerMediaElementForMediaComponent:(id)arg1;
- (id)newTitleNode:(id)arg1;
- (id)newGapNode:(id)arg1;
- (id)newGeneratorNode:(id)arg1;
- (id)newTranslatedCompositeNode:(id)arg1;
- (id)newTransitionNode:(id)arg1;
- (id)newVideoNode:(id)arg1 media:(id)arg2 src:(id)arg3;
- (id)newAudioNode:(id)arg1 media:(id)arg2 src:(id)arg3;
- (id)newRefNode:(id)arg1 media:(id)arg2;
- (id)newAngleNode:(id)arg1 media:(id)arg2;
- (id)newMulticamNode:(id)arg1;
- (id)copySortedAnglesArray:(id)arg1;
- (id)newClipNode:(id)arg1 media:(id)arg2 src:(id)arg3 kind:(id)arg4;
- (id)newCompositeNode:(id)arg1 isSequence:(BOOL)arg2;
- (id)newAuditionNode:(id)arg1;
- (id)newSpineNode:(id)arg1;
- (void)addSequenceKeywords:(id)arg1 element:(id)arg2;
- (id)copyChannelStringValue:(id)arg1 withKeyframe:(void *)arg2 isRadians:(BOOL)arg3 isDefault:(char *)arg4;
- (id)registerVideoProps:(id)arg1;
- (id)registerMediaElement:(id)arg1;
- (BOOL)addBookmarkForURL:(id)arg1 toElement:(id)arg2;
- (void)addMetadataToElement:(id)arg1 forObject:(id)arg2;
- (id)sanitizedMetadataType:(id)arg1;
- (BOOL)isCensoredKey:(id)arg1;
- (BOOL)addMetadataValue:(id)arg1 forKey:(id)arg2 fromObject:(id)arg3 withDef:(id)arg4 toElement:(id)arg5;
- (void)addTextStyleDefElements;
- (id)registerTextStyle:(id)arg1 forTitleElement:(id)arg2;
- (id)registerEffect:(id)arg1;
- (id)registerProjectRef:(id)arg1;
- (id)registerResource:(id)arg1 name:(id)arg2 modelID:(id)arg3;
- (void)setProgressValue:(double)arg1;
- (void)setTaskDelegate:(id)arg1;
- (id)taskDelegate;
- (void)setDestURL:(id)arg1;
- (BOOL)isEvent;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface Flexo : NSObject
{
}

+ (void)_loadFeatureFlagsFromUserDefaults;
+ (void)shutdown;
+ (void)applicationWillTerminate:(id)arg1;
+ (BOOL)isUnitTesting;
+ (void)setSupportsBatchExport:(BOOL)arg1;
+ (BOOL)supportsBatchExport;
+ (void)setWebAssetsEnabled:(BOOL)arg1;
+ (BOOL)webAssetsEnabled;
+ (void)setRemoveProjectPreviewTitles:(BOOL)arg1;
+ (BOOL)removeProjectPreviewTitles;
+ (void)setMessageTracerEnabled:(BOOL)arg1;
+ (BOOL)messageTracerEnabled;
+ (void)setShowIfEventProjectUnloaded:(BOOL)arg1;
+ (BOOL)showIfEventProjectUnloaded;
+ (void)setPlaybackDuringEditOperations:(BOOL)arg1;
+ (BOOL)playbackDuringEditOperations;
+ (void)setRenderSingleStreamsWithDrop:(BOOL)arg1;
+ (BOOL)renderSingleStreamsWithDrop;
+ (void)setHideConsumerMaps:(BOOL)arg1;
+ (BOOL)hideConsumerMaps;
+ (void)setConsumerPlaysFull4K:(BOOL)arg1;
+ (BOOL)consumerPlaysFull4K;
+ (void)setConsumerPlaysFullHD:(BOOL)arg1;
+ (BOOL)consumerPlaysFullHD;
+ (void)setConsumerWarnWhen4KAddedToTimeline:(BOOL)arg1;
+ (BOOL)consumerWarnWhen4KAddedToTimeline;
+ (void)setAllowConsumerMobileFramerates:(BOOL)arg1;
+ (BOOL)allowConsumerMobileFramerates;
+ (void)setAllowConsumer4k:(BOOL)arg1;
+ (BOOL)allowConsumer4k;
+ (void)setLegacyExceptionReporting:(BOOL)arg1;
+ (BOOL)legacyExceptionReporting;
+ (void)setCanCloseAllLibraries:(BOOL)arg1;
+ (BOOL)canCloseAllLibraries;
+ (void)setTimelineTitleDropZonesEnabled:(BOOL)arg1;
+ (BOOL)timelineTitleDropZonesEnabled;
+ (void)setCrossLibraryEditAsFileRef:(BOOL)arg1;
+ (BOOL)crossLibraryEditAsFileRef;
+ (void)setResetPlayToStartOnEndFrame:(BOOL)arg1;
+ (BOOL)resetPlayToStartOnEndFrame;
+ (void)setHasEditingGuides:(BOOL)arg1;
+ (BOOL)hasEditingGuides;
+ (void)setHasAdjustmentTools:(BOOL)arg1;
+ (BOOL)hasAdjustmentTools;
+ (void)setShowThumbnailsWithEffects:(BOOL)arg1;
+ (BOOL)showThumbnailsWithEffects;
+ (void)setAllowsEventAdjustments:(BOOL)arg1;
+ (BOOL)allowsEventAdjustments;
+ (void)setUsesDynamicTitleThumbnails:(BOOL)arg1;
+ (BOOL)usesDynamicTitleThumbnails;
+ (void)setHasConsumerEffects:(BOOL)arg1;
+ (BOOL)hasConsumerEffects;
+ (void)setIsConsumerFxPlugs:(BOOL)arg1;
+ (BOOL)isConsumerFxPlugs;
+ (void)setLoadsFCPProjects:(BOOL)arg1;
+ (BOOL)loadsFCPProjects;
+ (void)setIsEditingApp:(BOOL)arg1;
+ (BOOL)isEditingApp;
+ (void)setSupportExternalContent:(BOOL)arg1;
+ (BOOL)supportExternalContent;
+ (void)setSupportsRoleAssignment:(BOOL)arg1;
+ (BOOL)supportsRoleAssignment;
+ (void)setSupportsAudioComponents:(BOOL)arg1;
+ (BOOL)supportsAudioComponents;
+ (void)setSupportsAutomaticDucking:(BOOL)arg1;
+ (BOOL)supportsAutomaticDucking;
+ (void)setStereoOnly:(BOOL)arg1;
+ (BOOL)isStereoOnly;
+ (void)setSupportsProjectFades:(BOOL)arg1;
+ (BOOL)supportsProjectFades;
+ (void)setAutomaticCrossfades:(BOOL)arg1;
+ (BOOL)hasAutomaticCrossfades;
+ (void)setIsConsumerVoiceOver:(BOOL)arg1;
+ (BOOL)isConsumerVoiceOver;
+ (void)setIsConsumerAudioEnhancements:(BOOL)arg1;
+ (BOOL)isConsumerAudioEnhancements;
+ (void)setAllowsAsyncEffectLoad:(BOOL)arg1;
+ (BOOL)allowsAsyncEffectLoad;
+ (void)setEffectsNormalQuality:(BOOL)arg1;
+ (BOOL)effectsNormalQuality;
+ (void)setGeneratesEventThumbnails:(BOOL)arg1;
+ (BOOL)generatesEventThumbnails;
+ (void)setIsConsumerCrop:(BOOL)arg1;
+ (BOOL)isConsumerCrop;
+ (void)setHasSportsTeams:(BOOL)arg1;
+ (BOOL)hasSportsTeams;
+ (void)setSupportExternalFxPlugs:(BOOL)arg1;
+ (BOOL)supportExternalFxPlugs;
+ (void)setShowHiddenEvents:(BOOL)arg1;
+ (BOOL)showHiddenEvents;
+ (void)setHiddenEventsForProjects:(BOOL)arg1;
+ (BOOL)hiddenEventsForProjects;
+ (void)setIsConsumerUI:(BOOL)arg1;
+ (BOOL)isConsumerUI;
+ (void)setIsConsumerEvents:(BOOL)arg1;
+ (BOOL)isConsumerEvents;
+ (void)setAnimatesFullScreenPlayer:(BOOL)arg1;
+ (BOOL)animatesFullScreenPlayer;
+ (void)setShowFullScreenTransportControls:(BOOL)arg1;
+ (BOOL)showFullScreenTransportControls;
+ (void)setShowWindowedTransportControls:(BOOL)arg1;
+ (BOOL)showWindowedTransportControls;
+ (void)setHasAudioUnits:(BOOL)arg1;
+ (BOOL)hasAudioUnits;
+ (void)setShowItemTitles:(BOOL)arg1;
+ (BOOL)showItemTitles;
+ (void)setHasProCameraSupport:(BOOL)arg1;
+ (BOOL)hasProCameraSupport;
+ (void)setAllowsAudioOnlyAboveSpine:(BOOL)arg1;
+ (BOOL)allowsAudioOnlyAboveSpine;
+ (void)setAllowsVideoBelowSpine:(BOOL)arg1;
+ (BOOL)allowsVideoBelowSpine;
+ (void)setHasBackgroundMusicLane:(BOOL)arg1;
+ (BOOL)hasBackgroundMusicLane;
+ (void)setHasAutomaticEditing:(BOOL)arg1;
+ (BOOL)hasAutomaticEditing;
+ (void)setHasSampleAccurateAudioEditing:(BOOL)arg1;
+ (BOOL)hasSampleAccurateAudioEditing;
+ (void)setIsConsumerColorCorrection:(BOOL)arg1;
+ (BOOL)isConsumerColorCorrection;
+ (void)setIsConsumerMediaBrowser:(BOOL)arg1;
+ (BOOL)isConsumerMediaBrowser;
+ (void)setIsConsumerTimeline:(BOOL)arg1;
+ (BOOL)isConsumerTimeline;
+ (void)finishInit;
+ (void)initialize;

@end


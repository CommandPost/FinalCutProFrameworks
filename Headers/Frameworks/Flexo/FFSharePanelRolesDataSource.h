//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FFBrickTreeNode, FFSharePanelRolesPresetsDelegate, FFShareSourceDestinationMapping, NSArray, NSDictionary, NSMapTable, NSSet;

__attribute__((visibility("hidden")))
@interface FFSharePanelRolesDataSource : NSObject
{
    BOOL _isObservingDestination;
    BOOL _suppressReload;
    BOOL _haveRolesHomogenousCachedValue;
    BOOL _rolesHomogenousCachedValue;
    int _timingModeForCaptionSideCarFiles;
    FFBrickTreeNode *_content;
    NSArray *_destinations;
    NSArray *_sources;
    NSMapTable *_numberOfCaptionSidecarFiles;
    NSDictionary *_captionFormatsEnabledForExport;
    NSArray *_activeCaptionRolesSuitableForEmbed;
    NSArray *_activeCaptionRolesSuitableForBurnIn;
    NSSet *_applicableEmbedCaptionFormats;
    NSSet *_applicableBurnInCaptionFormats;
    NSDictionary *_captionFormatsIncludingFormattingForExport;
    FFSharePanelRolesPresetsDelegate *_presetsDelegate;
    long long _batchTransactionCount;
    FFShareSourceDestinationMapping *_sourceDestinationMapping;
}

@property(retain, nonatomic) FFShareSourceDestinationMapping *sourceDestinationMapping; // @synthesize sourceDestinationMapping=_sourceDestinationMapping;
@property(nonatomic) BOOL rolesHomogenousCachedValue; // @synthesize rolesHomogenousCachedValue=_rolesHomogenousCachedValue;
@property(nonatomic) BOOL haveRolesHomogenousCachedValue; // @synthesize haveRolesHomogenousCachedValue=_haveRolesHomogenousCachedValue;
@property(nonatomic) long long batchTransactionCount; // @synthesize batchTransactionCount=_batchTransactionCount;
@property(nonatomic) BOOL suppressReload; // @synthesize suppressReload=_suppressReload;
@property(nonatomic) BOOL isObservingDestination; // @synthesize isObservingDestination=_isObservingDestination;
@property(retain, nonatomic) FFSharePanelRolesPresetsDelegate *presetsDelegate; // @synthesize presetsDelegate=_presetsDelegate;
@property(copy, nonatomic) NSDictionary *captionFormatsIncludingFormattingForExport; // @synthesize captionFormatsIncludingFormattingForExport=_captionFormatsIncludingFormattingForExport;
@property(nonatomic) int timingModeForCaptionSideCarFiles; // @synthesize timingModeForCaptionSideCarFiles=_timingModeForCaptionSideCarFiles;
@property(copy, nonatomic) NSSet *applicableBurnInCaptionFormats; // @synthesize applicableBurnInCaptionFormats=_applicableBurnInCaptionFormats;
@property(copy, nonatomic) NSSet *applicableEmbedCaptionFormats; // @synthesize applicableEmbedCaptionFormats=_applicableEmbedCaptionFormats;
@property(copy, nonatomic) NSArray *activeCaptionRolesSuitableForBurnIn; // @synthesize activeCaptionRolesSuitableForBurnIn=_activeCaptionRolesSuitableForBurnIn;
@property(copy, nonatomic) NSArray *activeCaptionRolesSuitableForEmbed; // @synthesize activeCaptionRolesSuitableForEmbed=_activeCaptionRolesSuitableForEmbed;
@property(copy, nonatomic) NSDictionary *captionFormatsEnabledForExport; // @synthesize captionFormatsEnabledForExport=_captionFormatsEnabledForExport;
@property(copy, nonatomic) NSMapTable *numberOfCaptionSidecarFiles; // @synthesize numberOfCaptionSidecarFiles=_numberOfCaptionSidecarFiles;
@property(copy, nonatomic) NSArray *sources; // @synthesize sources=_sources;
@property(copy, nonatomic) NSArray *destinations; // @synthesize destinations=_destinations;
@property(retain, nonatomic) FFBrickTreeNode *content; // @synthesize content=_content;
- (id)archetypicalRolePreset;
- (double)swatchHeightForRole:(id)arg1;
- (BOOL)areAudioVideoRolesHomogeneous;
- (id)homogeneityDeterminer;
- (void)executeAndReloadWithBlock:(CDUnknownBlockType)arg1;
- (void)moveBrick:(id)arg1 toPosition:(unsigned long long)arg2;
- (void)setFormattingEnabled:(BOOL)arg1 forCaptionType:(long long)arg2;
- (void)setExportEnabled:(BOOL)arg1 forCaptionType:(long long)arg2;
- (unsigned long long)countCaptionSidecarFilesWithSource:(id)arg1;
- (unsigned long long)countCaptionSidecarFiles;
- (id)captionFormatsInUse;
- (id)colorForCKRole:(id)arg1;
- (id)ffroleForCKRole:(id)arg1;
- (BOOL)splitToMonoIsAvailable;
- (BOOL)mayReorderBricksAt:(id)arg1;
- (id)formattingDictionaryForCaptionMainRolesEnabledForExportForSource:(id)arg1;
- (void)enumerateSourceDestinationPairsUsingBlock:(CDUnknownBlockType)arg1;
- (void)exportCaptionSidecarFilesForDestination:(id)arg1 source:(id)arg2 target:(id)arg3;
- (id)sourceForDestination:(id)arg1;
- (void)exportCaptionSidecarFilesForDestination:(id)arg1 target:(id)arg2;
- (id)captionMainRolesEnabledForExportForSource:(id)arg1;
- (id)captionsMainRolesUsedInSequence:(id)arg1;
- (BOOL)isFormattingEnabledForCaptionFormat:(id)arg1;
- (BOOL)isExportEnabledForCaptionFormat:(id)arg1;
- (void)reloadData;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setRolesAsButton:(id)arg1;
- (void)stopObservingDestinations;
- (void)startObservingDestinations;
- (void)batchDidChange:(id)arg1;
- (void)batchWillChange:(id)arg1;
- (void)dealloc;
- (id)newSourceDestinationMapping;
- (id)initWithDestinations:(id)arg1 sources:(id)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FFShareInfoItemProtocol.h"

@class CKSetting, CKSource, NSArray, NSImage, NSNumber, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface FFShareInfoItem : NSObject <FFShareInfoItemProtocol>
{
    unsigned long long numberOfCaptionSidecarFiles;
    CKSource *_source;
    CKSetting *_setting;
    NSSet *_disabledRoles;
}

+ (id)dataSourceWithSourceSettingPair:(id)arg1;
+ (id)keyPathsForValuesAffectingNumberOfOutputFiles;
+ (id)keyPathsForValuesAffectingHasMultipleOutputFiles;
+ (id)keyPathsForValuesAffectingOutputFileSizeBytes;
+ (id)keyPathsForValuesAffectingOutputFileFormatTooltip;
+ (id)keyPathsForValuesAffectingOutputFileFormat;
+ (id)keyPathsForValuesAffectingSupportsPrivate;
+ (id)keyPathsForValuesAffectingPrivacyTooltip;
+ (id)keyPathsForValuesAffectingPrivacy;
+ (id)keyPathsForValuesAffectingClipDurationTooltip;
+ (id)keyPathsForValuesAffectingClipDuration;
+ (id)keyPathsForValuesAffectingAudioSampleRateTooltip;
+ (id)keyPathsForValuesAffectingAudioSampleRate;
+ (id)keyPathsForValuesAffectingAudioChannelLayoutTooltip;
+ (id)keyPathsForValuesAffectingAudioChannelLayout;
+ (id)keyPathsForValuesAffectingVideoFrameRateTooltip;
+ (id)keyPathsForValuesAffectingVideoFrameRate;
+ (id)keyPathsForValuesAffectingVideoDimensionsTooltip;
+ (id)keyPathsForValuesAffectingVideoDimensions;
+ (id)keyPathsForValuesAffectingCompatibility;
+ (id)propertiesDependentOnStompSettingProperties;
@property(copy, nonatomic) NSSet *disabledRoles; // @synthesize disabledRoles=_disabledRoles;
@property(readonly, nonatomic) CKSetting *setting; // @synthesize setting=_setting;
@property(readonly, nonatomic) CKSource *source; // @synthesize source=_source;
@property(nonatomic) unsigned long long numberOfCaptionSidecarFiles; // @synthesize numberOfCaptionSidecarFiles;
- (id)allStompSettings;
- (id)nameSizePairs;
@property(readonly, nonatomic) BOOL supportsPrivate;
@property(readonly, nonatomic) NSNumber *outputFileSizeBytes;
@property(readonly, nonatomic) NSString *outputFileFormat;
@property(readonly, nonatomic) NSString *outputFileFormatTooltip;
- (id)fileFormatNameWithFileExtension:(id)arg1;
@property(readonly, nonatomic) unsigned long long numberOfOutputFiles;
@property(readonly, nonatomic) BOOL hasMultipleOutputFiles;
@property(readonly, nonatomic) NSString *privacyTooltip;
@property(readonly, nonatomic) NSString *privacy;
@property(readonly, nonatomic) NSString *clipDurationTooltip;
@property(readonly, nonatomic) NSString *clipDuration;
@property(readonly, nonatomic) NSString *audioSampleRateTooltip;
@property(readonly, nonatomic) NSString *audioSampleRate;
@property(readonly, nonatomic) NSString *audioChannelLayoutTooltip;
@property(readonly, nonatomic) NSString *audioChannelLayout;
@property(readonly, nonatomic) NSString *videoFrameRateTooltip;
@property(readonly, nonatomic) NSString *videoFrameRate;
@property(readonly, nonatomic) NSString *videoDimensionsTooltip;
@property(readonly, nonatomic) NSString *videoDimensions;
@property(readonly, nonatomic) NSArray *compatibility;
@property(readonly, nonatomic) NSImage *videoDimensionsHighlightedIcon;
@property(readonly, nonatomic) NSImage *videoDimensionsIcon;
@property(readonly, nonatomic) NSImage *outputFileFormatIcon;
@property(readonly, nonatomic) NSImage *clipDurationIconHighlighted;
@property(readonly, nonatomic) NSImage *clipDurationIcon;
- (void)stopObservingStompSettings:(id)arg1;
- (void)startObservingStompSettings:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initWithSourceSettingPair:(id)arg1;
- (id)init;

@end


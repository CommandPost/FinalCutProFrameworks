//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, NSImage, NSNumber, NSString;

@protocol FFShareInfoItemProtocol
@property(readonly, nonatomic) NSNumber *outputFileSizeBytes;
@property(readonly, nonatomic) NSString *outputFileFormatTooltip;
@property(readonly, nonatomic) NSString *outputFileFormat;
@property(readonly, nonatomic) NSImage *outputFileFormatIcon;
@property(readonly, nonatomic) NSString *privacyTooltip;
@property(readonly, nonatomic) NSString *privacy;
@property(readonly, nonatomic) BOOL supportsPrivate;
@property(readonly, nonatomic) NSString *audioSampleRateTooltip;
@property(readonly, nonatomic) NSString *audioSampleRate;
@property(readonly, nonatomic) NSString *audioChannelLayoutTooltip;
@property(readonly, nonatomic) NSString *audioChannelLayout;
@property(readonly, nonatomic) NSString *videoFrameRateTooltip;
@property(readonly, nonatomic) NSString *videoFrameRate;
@property(readonly, nonatomic) NSArray *compatibility;
@property(readonly, nonatomic) NSImage *videoDimensionsHighlightedIcon;
@property(readonly, nonatomic) NSImage *videoDimensionsIcon;
@property(readonly, nonatomic) NSString *videoDimensionsTooltip;
@property(readonly, nonatomic) NSString *videoDimensions;
@property(readonly, nonatomic) NSImage *clipDurationIconHighlighted;
@property(readonly, nonatomic) NSImage *clipDurationIcon;
@property(readonly, nonatomic) NSString *clipDurationTooltip;
@property(readonly, nonatomic) NSString *clipDuration;
@property(readonly, nonatomic) BOOL hasMultipleOutputFiles;
@property(nonatomic) unsigned long long numberOfCaptionSidecarFiles;
@property(readonly, nonatomic) unsigned long long numberOfOutputFiles;
@property(nonatomic) BOOL isExportingAudio;
- (NSArray *)allStompSettings;
- (NSArray *)nameSizePairs;
@end


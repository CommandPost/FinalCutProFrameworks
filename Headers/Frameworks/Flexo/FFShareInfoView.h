//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class CKSetting, NSImageView, NSTextField, NSTrackingArea;

__attribute__((visibility("hidden")))
@interface FFShareInfoView : NSView
{
    BOOL _needsLayout;
    CKSetting *_setting;
    NSView *_videoInfoImageView;
    NSTextField *_videoDimensionsTextField;
    NSImageView *_videoInfoSeparatorImageView;
    NSTextField *_videoFrameRateTextField;
    NSView *_audioInfoImageView;
    NSTextField *_audioChannelLayoutTextField;
    NSImageView *_audioInfoSeparatorImageView;
    NSTextField *_audioSampleRateTextField;
    NSView *_clipDurationImageView;
    NSTextField *_clipDurationTextField;
    NSView *_privacyImageView;
    NSTextField *_privacyTextField;
    NSImageView *_mainSeparatorImageView;
    NSView *_outputFileFormatImageView;
    NSTextField *_outputFileFormatTextField;
    NSView *_compatibilityImageView;
    NSView *_outputFileSizeImageView;
    NSTextField *_outputFileSizeTextField;
    NSTrackingArea *_compatibilityTrackingArea;
}

@property(nonatomic) NSTextField *outputFileSizeTextField; // @synthesize outputFileSizeTextField=_outputFileSizeTextField;
@property(nonatomic) NSView *outputFileSizeImageView; // @synthesize outputFileSizeImageView=_outputFileSizeImageView;
@property(nonatomic) NSView *compatibilityImageView; // @synthesize compatibilityImageView=_compatibilityImageView;
@property(nonatomic) NSTextField *outputFileFormatTextField; // @synthesize outputFileFormatTextField=_outputFileFormatTextField;
@property(nonatomic) NSView *outputFileFormatImageView; // @synthesize outputFileFormatImageView=_outputFileFormatImageView;
@property(nonatomic) NSImageView *mainSeparatorImageView; // @synthesize mainSeparatorImageView=_mainSeparatorImageView;
@property(nonatomic) NSTextField *privacyTextField; // @synthesize privacyTextField=_privacyTextField;
@property(nonatomic) NSView *privacyImageView; // @synthesize privacyImageView=_privacyImageView;
@property(nonatomic) NSTextField *clipDurationTextField; // @synthesize clipDurationTextField=_clipDurationTextField;
@property(nonatomic) NSView *clipDurationImageView; // @synthesize clipDurationImageView=_clipDurationImageView;
@property(nonatomic) NSTextField *audioSampleRateTextField; // @synthesize audioSampleRateTextField=_audioSampleRateTextField;
@property(nonatomic) NSImageView *audioInfoSeparatorImageView; // @synthesize audioInfoSeparatorImageView=_audioInfoSeparatorImageView;
@property(nonatomic) NSTextField *audioChannelLayoutTextField; // @synthesize audioChannelLayoutTextField=_audioChannelLayoutTextField;
@property(nonatomic) NSView *audioInfoImageView; // @synthesize audioInfoImageView=_audioInfoImageView;
@property(nonatomic) NSTextField *videoFrameRateTextField; // @synthesize videoFrameRateTextField=_videoFrameRateTextField;
@property(nonatomic) NSImageView *videoInfoSeparatorImageView; // @synthesize videoInfoSeparatorImageView=_videoInfoSeparatorImageView;
@property(nonatomic) NSTextField *videoDimensionsTextField; // @synthesize videoDimensionsTextField=_videoDimensionsTextField;
@property(nonatomic) NSView *videoInfoImageView; // @synthesize videoInfoImageView=_videoInfoImageView;
@property(retain, nonatomic) CKSetting *setting; // @synthesize setting=_setting;
@property(nonatomic) BOOL needsLayout; // @synthesize needsLayout=_needsLayout;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (BOOL)isOpaque;
- (void)viewWillDraw;
- (void)dealloc;

@end


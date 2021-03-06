//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Flexo/_FFInspectorHeaderSubController.h>

@class FFMediaQualityViewController, LKTextField, NSString;

__attribute__((visibility("hidden")))
@interface _FFInspectorMediaFormatsController : _FFInspectorHeaderSubController
{
    struct CGSize _pixelFrameSize;
    CDStruct_1b6d18a9 _sampleDuration;
    int _fieldOrder;
    NSString *_colorSpaceDisplayName;
    NSString *_audioType;
    double _audioSampleRateInHz;
    LKTextField *_videoFormatField;
    LKTextField *_audioFormatField;
    NSString *_qualityDisplayName;
    FFMediaQualityViewController *_qualityViewController;
}

@property(retain) FFMediaQualityViewController *qualityViewController; // @synthesize qualityViewController=_qualityViewController;
@property(retain, nonatomic) NSString *qualityDisplayName; // @synthesize qualityDisplayName=_qualityDisplayName;
- (id)constraintsForEqualSizeFromView:(id)arg1 toView:(id)arg2 withLeadingOffset:(double)arg3 andTrailingOffset:(double)arg4;
- (id)horizontalStackView;
- (id)resizingBufferView;
- (void)setupAudioFormatField;
- (void)setupQualityField;
- (void)setupVideoFormatField;
- (id)audioFormatFieldConstraints;
- (id)qualityFieldConstraints;
- (id)videoFormatFieldConstraints;
- (id)view;
- (void)autoFillMultipleItems;
- (void)autoFillNoItems;
- (void)_zeroProperties;
- (void)setAudioSampleRateInHz:(double)arg1;
- (void)setAudioType:(id)arg1;
- (void)hideAudioProperties;
- (void)showAudioProperties;
- (void)_updateAudioFormatTextFieldWithState:(int)arg1;
- (void)setPixelFrameSize:(struct CGSize)arg1 sampleDuration:(CDStruct_1b6d18a9)arg2 fieldOrder:(int)arg3 colorSpaceDisplayName:(id)arg4;
- (void)clearVideoProperties;
- (void)_updateVideoFormatTextFieldWithState:(int)arg1;
- (void)dealloc;
- (id)init;

@end


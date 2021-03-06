//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProInspector/OZViewController.h>

@class FFEffectStack, FFMediaRefThumbnailContainer, LKButton, LKTextField, NSImageView, NSView;

__attribute__((visibility("hidden")))
@interface FFMediaRefChannelController : OZViewController
{
    FFMediaRefThumbnailContainer *_thumbnailContainer;
    NSImageView *_thumbnailView;
    LKTextField *_mediaNameLabel;
    LKTextField *_promptLabel;
    LKButton *_clearButton;
    NSView *_pickingHighlightView;
    FFEffectStack *_effectStack;
    CDStruct_bdcb2b0d _cachedMD5;
}

- (id)attributedStringForMediaName:(id)arg1;
- (void)_effectsChanged:(id)arg1;
- (void)mouseExitedThumbnailContainer:(id)arg1;
- (void)mouseEnteredThumbnailContainer:(id)arg1;
- (void)pick:(id)arg1;
- (void)clearSelection:(id)arg1;
- (void)paste:(id)arg1;
- (void)setFromPasteboard:(id)arg1;
- (void)setChannelAnchoredObject:(id)arg1;
- (BOOL)requiresVideo;
- (BOOL)requiresAudio;
- (void)setHasFocusUI:(id)arg1;
- (void)disable;
- (void)enable;
- (void)update;
- (CDStruct_bdcb2b0d)_getThumbMD5ForTime:(CDStruct_1b6d18a9)arg1 stream:(id)arg2 sourceObject:(id)arg3 contentsScale:(double)arg4;
- (void)activeToolChanged:(id)arg1;
- (void)updatePlaceholderThumbnail;
- (void)dealloc;
- (id)initWithChan:(struct OZChannelBase *)arg1 context:(id)arg2;

@end


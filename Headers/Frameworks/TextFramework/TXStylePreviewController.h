//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OZViewController.h"

@class TXLibraryPresetsButton;

@interface TXStylePreviewController : OZViewController
{
    TXLibraryPresetsButton *_pPresets;
    struct TXTextStyle *_style;
    struct PCHash128 _hash;
}

- (id).cxx_construct;
- (void)loadPreset:(struct OZPasteList *)arg1 sender:(id)arg2;
- (void)loadPasteboard:(id)arg1 intoSceneNode:(struct OZSceneNode *)arg2;
- (void)resetChannel:(id)arg1;
- (void)_resetStyle:(struct TXTextStyle *)arg1;
- (void)disable;
- (void)enable;
- (void)saveAll;
- (void)saveStyle;
- (void)saveFormat;
- (void)resizeColumnsLabelWidth:(float)arg1 paramWidth:(float)arg2;
- (void)update;
- (void)renderPreviewImage;
- (id)init;
- (id)initWithChan:(struct OZChannelBase *)arg1 context:(id)arg2 summary:(BOOL)arg3;
- (id)initWithChan:(struct OZChannelBase *)arg1 context:(id)arg2;

@end


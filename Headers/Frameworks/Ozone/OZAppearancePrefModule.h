//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSProPreferencesModule.h"

@class NSButton, NSColorWell, NSPopUpButton, NSSlider, NSTextField;

@interface OZAppearancePrefModule : NSProPreferencesModule
{
    NSPopUpButton *_pTimelineThumbnail;
    NSSlider *_pFullViewOpacitySlider;
    NSTextField *_pFullViewOpacityTF;
    NSPopUpButton *_pPreviewBackgroundPopUp;
    NSColorWell *_pPreviewBackgroundColor;
    NSButton *_pShowToolInfoButton;
    NSButton *_pShowColorButton;
    NSButton *_pShowCoordinatesButton;
    NSButton *_pShowFrameRateButton;
    NSPopUpButton *_pDisplayColorAsPopUp;
}

- (void)updateCanvas;
- (void)setDisplayColorMode:(id)arg1;
- (void)setShowFrameRateButton:(id)arg1;
- (void)setShowCoordinatesFlag:(id)arg1;
- (void)setShowColorFlag:(id)arg1;
- (void)setShowToolInfoFlag:(id)arg1;
- (void)setFullViewOpacity:(id)arg1;
- (void)setTimelineThumbnailMode:(id)arg1;
- (void)setPreviewBackgroundColor:(id)arg1;
- (void)setPreviewBackgroundMode:(id)arg1;
- (BOOL)isResizable;
- (void)initializeFromDefaults;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

#import "NSWindowDelegate.h"

@class NSButton, NSPopUpButton, NSString;

@interface OZShareQualityController : NSWindowController <NSWindowDelegate>
{
    NSPopUpButton *_qualityPopUp;
    NSButton *_highQualityResamplingButton;
    NSPopUpButton *_textQualityPopUp;
    NSButton *_shapeAntialiasingButton;
    NSButton *_intersectionAntialiasingButton;
    struct OZDocument *_pDocument;
    struct OZExportSettings *_exportSettings;
    int _quality;
}

- (void)cancelEdit:(id)arg1;
- (void)okEdit:(id)arg1;
- (void)storeExportSettings:(BOOL)arg1;
- (void)setFloatingPointMovies:(id)arg1;
- (void)setIntersectionAntialiasing:(id)arg1;
- (void)setShapeAntialiasing:(id)arg1;
- (void)setTextQuality:(id)arg1;
- (void)setHighQualityResampling:(id)arg1;
- (void)setCustomQuality:(id)arg1;
- (void)setQuality:(id)arg1;
- (void)_updateCustomQuality;
- (void)_updateUI:(struct OZExportSettings *)arg1;
- (void)initUIFromExportSettings;
- (BOOL)openDialog:(struct OZDocument *)arg1;
- (void)windowWillClose:(id)arg1;
- (void)windowDidLoad;
- (void)dealloc;
- (id)initWithSettings:(struct OZExportSettings *)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


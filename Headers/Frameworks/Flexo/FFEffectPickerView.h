//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

#import "FFSkimmingModuleDelegate.h"

@class CALayer, FFAnchoredCollection, FFAnchoredObject, FFAnchoredSequence, FFEffect, FFEffectPickerRestartPlayerInfo, FFSkimmingModule, FFThumbnailRequest, NSArray, NSDictionary, NSImage, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface FFEffectPickerView : NSView <FFSkimmingModuleDelegate>
{
    BOOL _isVideo;
    int _cellUnderMouse;
    int _cellForCurrentEffect;
    NSArray *_effectIDs;
    NSArray *_selectedItems;
    NSDictionary *_textAttributes;
    NSMutableArray *_cellLayers;
    FFAnchoredObject *_thumbnailAO;
    FFAnchoredSequence *_thumbnailSequence;
    FFAnchoredCollection *_skimmingAO;
    FFAnchoredSequence *_skimmingSequence;
    FFThumbnailRequest *_thumbnailRequest;
    struct CGImage *_backgroundThumb;
    int _backgroundThumbNumber;
    FFEffect *_backgroundEffect;
    NSImage *_bezelNormal;
    NSImage *_bezelSelected;
    NSImage *_bezelRollover;
    NSImage *_selectionRect;
    FFSkimmingModule *_skimmingModule;
    CALayer *_skimmingLayer;
    struct CGRect _videoThumbnailFrame;
    CDStruct_1b6d18a9 _startTimeForSkimmingLayer;
    double _timePerHorizontalPixel;
    int _flippedEffectCell;
    FFAnchoredCollection *_projectFilterCollection;
    FFEffectPickerRestartPlayerInfo *_currentRestartPlayerInfo;
    BOOL _projectFilterMode;
}

@property(nonatomic) BOOL projectFilterMode; // @synthesize projectFilterMode=_projectFilterMode;
@property(retain, nonatomic) FFAnchoredCollection *projectFilterCollection; // @synthesize projectFilterCollection=_projectFilterCollection;
- (void)_removeEffectPickerEffect:(id)arg1;
- (id)_effectPickerEffectID:(id)arg1;
- (void)syntheticUIElement:(id)arg1 performAction:(id)arg2;
- (id)syntheticUIElementActions:(id)arg1;
- (id)syntheticUIElement:(id)arg1 attributeValue:(id)arg2;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (void)accessibilitySetValue:(id)arg1 forAttribute:(id)arg2;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)_cellUIElementAtIndex:(int)arg1;
- (id)accessibilityAttributeNames;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (BOOL)accessibilityIsIgnored;
- (void)cleanup;
- (void)stepBackward:(id)arg1;
- (void)stepForward:(id)arg1;
- (void)down:(id)arg1;
- (void)up:(id)arg1;
- (void)playPause:(id)arg1;
- (BOOL)resignFirstResponder;
- (BOOL)acceptsFirstResponder;
- (BOOL)needsPanelToBecomeKey;
- (BOOL)canBecomeKeyView;
- (BOOL)skimmingModule:(id)arg1 isSkimmingInViewerWithSkimmable:(struct NSObject *)arg2;
- (void)skimmingModuleStopSkimmingInViewer:(id)arg1;
- (BOOL)skimmingModule:(id)arg1 startSkimmingInViewerWithSkimmable:(struct NSObject *)arg2 context:(id)arg3 effectCount:(long long)arg4;
- (id)skimmingDelegate;
- (struct CGRect)skimmingModule:(id)arg1 videoThumbnailFrameForLayer:(id)arg2 atTime:(CDStruct_1b6d18a9)arg3;
- (BOOL)skimmingModuleShowVideoThumbnail:(id)arg1;
- (long long)skimmingModule:(id)arg1 effectCountForSkimmable:(struct NSObject *)arg2;
- (BOOL)skimmingModuleCanStartSkimming:(id)arg1;
- (CDStruct_1b6d18a9)skimmingModule:(id)arg1 startTimeForSkimmingLayer:(id)arg2;
- (double)skimmingModule:(id)arg1 timePerHorizontalPixelForSkimmingLayer:(id)arg2;
- (id)skimmingModule:(id)arg1 skimmingLayerForSkimmable:(struct NSObject *)arg2;
- (struct NSObject *)skimmingModule:(id)arg1 skimmableObjectAtPoint:(struct CGPoint)arg2;
- (void)setSelectedItems:(id)arg1;
- (void)generateThumbnails;
- (void)thumbImageReady:(struct CGImage *)arg1;
- (void)generateOneEffectThumbnail;
- (BOOL)selectedItemsHaveEffectID:(id)arg1;
- (BOOL)selectedItemsHaveNoEffect;
- (void)keyDown:(id)arg1;
- (void)_setCellUnderMouse:(int)arg1;
- (void)mouseDown:(id)arg1;
- (void)_applyEffectUsingCellIndex:(int)arg1;
- (void)_applyProjectFilterEffectID:(id)arg1 forCollection:(id)arg2;
- (void)_addImageToSequenceIfNoItemsAndSetProjectFilterFlag:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)_dispatchPlayerRestart;
- (void)mouseMoved:(id)arg1;
- (void)_auditionEffectUsingCellIndex:(int)arg1;
- (void)drawCell:(int)arg1 current:(BOOL)arg2;
- (void)mouseEntered:(id)arg1;
- (BOOL)isFlipped;
- (struct CGRect)rectFromCell:(int)arg1;
- (id)effectIDFromCell:(int)arg1;
- (int)cellForEffectID:(id)arg1;
- (int)cellFromPoint:(struct CGPoint)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 isVideo:(BOOL)arg2;
- (void)viewDidChangeBackingProperties;
- (int)thumbnailColumns;
- (int)thumbnailRows;
- (int)thumbnailCount;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


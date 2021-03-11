//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

#import <Flexo/FFSkimmingModuleDelegate-Protocol.h>

@class FFAnchoredCollection, FFAnchoredObject, FFAnchoredSequence, FFEffect, FFEffectLibraryItemView, FFEffectStack, FFMediaEventDocument, FFSkimmingModule, NSEvent, NSMutableArray, NSMutableDictionary, NSObject, NSString;
@protocol FFSkimmableProtocol><FFDataModelProtocol><FFAssetContainerProtocol;

__attribute__((visibility("hidden")))
@interface FFEffectLibraryCollectionView : NSView <FFSkimmingModuleDelegate>
{
    id _module;
    FFEffectLibraryItemView *_selectedView;
    id _skimmingDelegate;
    NSString *_effectViewToolTip;
    struct CGSize _layoutContentSize;
    NSMutableArray *_effectViewList;
    NSMutableArray *_subviewsToBe;
    FFSkimmingModule *_effectPreviewModule;
    FFAnchoredCollection *_effectPreviewSelectedClip;
    FFAnchoredObject *_effectPreviewObject;
    FFAnchoredSequence *_effectPreviewSequence;
    NSObject<FFSkimmableProtocol><FFDataModelProtocol><FFAssetContainerProtocol> *_effectPreviewSkimmable;
    FFEffectLibraryItemView *_effectPreviewView;
    FFEffect *_effectPreviewEffect;
    FFEffectStack *_effectPreviewEffectStack;
    FFMediaEventDocument *_effectPreviewDocument;
    FFAnchoredObject *_effectPreviewObservedObject;
    NSMutableDictionary *_skimmableCache;
    BOOL _isDragging;
    FFEffectLibraryItemView *_hitView;
    double _hitViewInitialTime;
    NSEvent *_selectedViewMouseDownEvent;
    long long _numRows;
    long long _numCols;
    BOOL _observing;
    BOOL _observingPrefs;
}

@property(retain, nonatomic) NSString *effectViewToolTip; // @synthesize effectViewToolTip=_effectViewToolTip;
@property(retain, nonatomic) id skimmingDelegate; // @synthesize skimmingDelegate=_skimmingDelegate;
@property(readonly) FFEffectLibraryItemView *selectedView; // @synthesize selectedView=_selectedView;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (BOOL)accessibilityIsIgnored;
- (void)accessibilitySetValue:(id)arg1 forAttribute:(id)arg2;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (void)unfavorite:(id)arg1;
- (void)favorite:(id)arg1;
- (void)playSelected:(id)arg1;
- (void)nextEdit:(id)arg1;
- (void)previousEdit:(id)arg1;
- (void)down:(id)arg1;
- (void)up:(id)arg1;
- (void)_moveSkimmingToEffectAtIndex:(int)arg1;
- (void)playPause:(id)arg1;
- (id)targetModules;
- (void)_updatePlayerSettingsForPlayback;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (struct CGPoint)_convertCollectionViewPointToSkimmingLayerPoint:(struct CGPoint)arg1 forEffectItemView:(id)arg2;
- (id)_effectItemViewForPoint:(struct CGPoint)arg1;
- (long long)activeSkimmableModuleType;
- (void)_effectPreviewObservedObjectChanged:(id)arg1;
- (void)_cleanupEffectPreview;
- (void)setupEffectPreviewSelectedClip;
- (struct CGRect)skimmingModule:(id)arg1 videoThumbnailFrameForLayer:(id)arg2 atTime:(CDStruct_1b6d18a9)arg3;
- (BOOL)skimmingModuleShowVideoThumbnail:(id)arg1;
- (BOOL)skimmingModule:(id)arg1 isSkimmingInViewerWithSkimmable:(id)arg2;
- (void)skimmingModuleStopSkimmingInViewer:(id)arg1;
- (BOOL)skimmingModule:(id)arg1 startSkimmingInViewerWithSkimmable:(id)arg2 context:(id)arg3 effectCount:(long long)arg4;
- (BOOL)skimmingModuleCanStartSkimming:(id)arg1;
- (double)skimmingModule:(id)arg1 timePerHorizontalPixelForSkimmingLayer:(id)arg2;
- (CDStruct_1b6d18a9)skimmingModule:(id)arg1 startTimeForSkimmingLayer:(id)arg2;
- (id)skimmingModule:(id)arg1 skimmableObjectAtPoint:(struct CGPoint)arg2;
- (id)skimmingModule:(id)arg1 skimmingLayerForSkimmable:(id)arg2;
- (void)_setEffectPreviewView:(id)arg1;
- (void)_cancelBackgroundLoadForPreview;
- (id)_skimmableForEffectItem:(id)arg1;
- (id)_viewerSkimmingDelegate;
- (void)doubleClickWithEffectID:(id)arg1;
- (void)writeSelectionToPasteboard:(id)arg1;
- (void)_firstResponderChanged:(id)arg1;
- (BOOL)isActive;
- (BOOL)acceptsFirstResponder;
- (void)copy:(id)arg1;
- (void)_loadVisibleIcons;
- (void)viewDidLiveScroll:(id)arg1;
- (void)resizeWithOldSuperviewSize:(struct CGSize)arg1;
- (void)setSelectedView:(id)arg1;
- (BOOL)isFlipped;
- (void)consumerReloadData:(id)arg1 sequence:(id)arg2;
- (id)sortArray:(id)arg1 withDictionary:(id)arg2;
- (void)reloadData:(id)arg1;
- (void)_makeTopOfListIfEffectIDFound:(id)arg1 isAudioAndVideo:(BOOL)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)reloadData;
- (struct CGSize)intrinsicContentSize;
- (void)_viewsContentSizeDidChange:(struct CGSize)arg1;
- (void)layoutSubviews:(BOOL)arg1;
- (long long)numberOfColumns;
- (long long)numberOfRows;
- (void)getNumberOfRows:(long long *)arg1 columns:(long long *)arg2;
- (void)awakeFromNib;
- (void)dealloc;
- (void)viewDidChangeBackingProperties;
- (BOOL)layer:(id)arg1 shouldInheritContentsScale:(double)arg2 fromWindow:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


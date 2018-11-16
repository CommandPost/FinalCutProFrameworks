//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LKViewModule.h"

#import "FFSkimmingModuleDelegate.h"

@class CALayer, CAScrollLayer, FFAnchoredObject, FFAnchoredStack, FFAuditionerCoverFlowView, FFContext, FFSkimmingModule, LKButton, LKImageView, LKTextField, NSMatrix, NSMenu, NSMutableArray;

@interface FFAnchoredStackAuditioner : LKViewModule <FFSkimmingModuleDelegate>
{
    LKTextField *_auditioningCountField;
    LKTextField *_currentActiveNameRangeField;
    LKButton *_auditionButton;
    LKButton *_newVariantButton;
    LKImageView *_leftFade;
    LKImageView *_rightFade;
    NSMenu *_contextualMenu;
    FFAuditionerCoverFlowView *_coverFlowView;
    NSMatrix *_paginationMatrix;
    CDStruct_1b6d18a9 _playerOrigTime;
    CDStruct_1b6d18a9 _playerOrigTimeIn;
    CDStruct_1b6d18a9 _playerOrigTimeOut;
    BOOL _playerOrigLoop;
    BOOL _auditionEnabled;
    BOOL _audition;
    BOOL _layersCreated;
    BOOL _scrolling;
    BOOL _closing;
    FFAnchoredStack *_anchoredStack;
    FFContext *_playerContext;
    NSMutableArray *_observedVariants;
    NSMutableArray *_variantFilmstrips;
    NSMutableArray *_filmstripRelfections;
    struct FFProcrastinatedDispatch_t _procrastinatedReload;
    id _skimDelegate;
    CAScrollLayer *_bodyLayer;
    CALayer *_starLayer;
    CALayer *_shadowLayer;
    struct CATransform3D _sublayerTransform;
    FFSkimmingModule *_skimmingModule;
    struct CGSize _filmstripSize;
    int _selectedVariantIndex;
    int _oldSelectedIndex;
    struct __CFDictionary *_layerDictionary;
    FFAnchoredObject *_originalPick;
}

+ (struct CGColor *)color:(int)arg1;
@property(retain, nonatomic) FFAnchoredObject *originalPick; // @synthesize originalPick=_originalPick;
@property(retain, nonatomic) id <FFAuditionerSkimDelegate> skimDelegate; // @synthesize skimDelegate=_skimDelegate;
@property(retain, nonatomic) FFAnchoredStack *anchoredStack; // @synthesize anchoredStack=_anchoredStack;
@property(retain, nonatomic) FFContext *playerContext; // @synthesize playerContext=_playerContext;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)rebuildStackItems;
- (void)rebuildActiveVariant;
- (BOOL)skimmingModule:(id)arg1 isSkimmingInViewerWithSkimmable:(struct NSObject *)arg2;
- (void)skimmingModuleStopSkimmingInViewer:(id)arg1;
- (BOOL)skimmingModule:(id)arg1 startSkimmingInViewerWithSkimmable:(struct NSObject *)arg2 context:(id)arg3 effectCount:(long long)arg4;
- (struct CGRect)skimmingModule:(id)arg1 videoThumbnailFrameForLayer:(id)arg2 atTime:(CDStruct_1b6d18a9)arg3;
- (BOOL)skimmingModuleShowVideoThumbnail:(id)arg1;
- (long long)skimmingModule:(id)arg1 effectCountForSkimmable:(struct NSObject *)arg2;
- (BOOL)skimmingModuleCanStartSkimming:(id)arg1;
- (CDStruct_1b6d18a9)skimmingModule:(id)arg1 startTimeForSkimmingLayer:(id)arg2;
- (double)skimmingModule:(id)arg1 timePerHorizontalPixelForSkimmingLayer:(id)arg2;
- (id)skimmingModule:(id)arg1 skimmingLayerForSkimmable:(struct NSObject *)arg2;
- (struct NSObject *)skimmingModule:(id)arg1 skimmableObjectAtPoint:(struct CGPoint)arg2;
- (void)handleMouseMoved:(id)arg1;
- (void)handleMouseDown:(id)arg1;
- (id)variantItemAtPoint:(struct CGPoint)arg1;
- (void)updateSelection;
- (void)notScrollingAnymore;
- (void)fixUpOpacityForNewSelection;
- (void)moveSelection:(int)arg1;
- (void)moveSelectionToIndex:(unsigned long long)arg1;
- (BOOL)layer:(id)arg1 shouldInheritContentsScale:(double)arg2 fromWindow:(id)arg3;
- (void)createLayersForCoverFlow;
- (float)positionOfSelectedInBodyLayer;
- (void)stackItemsChanged;
- (id)filmstripForVariantAtIndex:(unsigned long long)arg1;
- (void)cleanUpOldFilmstrips;
- (id)layerForVariant:(id)arg1;
- (unsigned long long)indexOfObservedVariant:(id)arg1;
- (id)observedVariantAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfItemsInCoverFlow;
- (BOOL)canBeginPlaying;
- (BOOL)canSkimWithAudio;
- (BOOL)canBeginSkimming;
- (void)displayMedia:(struct NSObject *)arg1 context:(id)arg2 effectCount:(long long)arg3 unloadingBlock:(CDUnknownBlockType)arg4;
- (void)displayMedia:(struct NSObject *)arg1 context:(id)arg2 effectCount:(long long)arg3;
- (void)stopSkimmingForOwner:(id)arg1;
- (BOOL)startSkimmingWithSkimmable:(struct NSObject *)arg1 context:(id)arg2 effectCount:(long long)arg3 owner:(id)arg4;
- (BOOL)dropEffectsOnAllVariants:(id)arg1 effects:(id)arg2;
- (BOOL)dropEffects:(id)arg1 effectIDs:(id)arg2 duplicateActiveVariant:(BOOL)arg3;
- (void)displayClipInPlayer:(id)arg1;
- (void)resetPlayer;
- (void)playFromStart;
- (CDStruct_e83c9415)playerLoopRange;
- (void)updatePlayerInOut;
- (void)initiateAuditionWithActiveComponent;
- (void)updateAuditioningClipNumberField;
- (void)makeStackDelegatesActiveSelection;
- (void)setAuditioningEnabled:(BOOL)arg1;
- (void)updatePaginationSelection;
- (void)stopPlaying:(id)arg1;
- (void)playPause:(id)arg1;
- (void)pasteEffectsAsVariant:(id)arg1;
- (void)newVariantFromActiveNoEffects:(id)arg1;
- (void)newVariantFromCurrentInSelection:(id)arg1;
- (void)newVersionOfSelected:(id)arg1;
- (void)playAllVariants:(id)arg1;
- (void)deleteBackward:(id)arg1;
- (void)delete:(id)arg1;
- (void)stepForward:(id)arg1;
- (void)stepBackward:(id)arg1;
- (void)selectNextVariantInSelection:(id)arg1;
- (void)finalizePickOfSelectedVariant:(id)arg1;
- (void)selectPreviousVariantInSelection:(id)arg1;
- (void)loopAroundComponent:(id)arg1;
- (void)toggleVariantsPicker:(id)arg1;
- (void)closeAudition:(id)arg1;
- (void)cancelAudition:(id)arg1;
- (void)cancelOperation:(id)arg1;
- (void)togglePlayback:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (id)localModuleActions;
- (void)moduleDidUnhide;
- (void)moduleViewWillBeRemoved:(id)arg1;
- (void)cleanup;
- (void)moduleViewWasInstalled:(id)arg1;
- (void)viewDidLoad;
- (id)identifier;
- (void)dealloc;
- (id)init;
- (void)updateSelectedClipDurationField;
- (id)runtimeString;
- (id)runtimeTimecode;
- (void)_stopListeningToAuditionEdit:(id)arg1;
- (void)_startListeningToAuditionEdit:(id)arg1;
- (void)_stopListeningToVariant:(id)arg1;
- (void)_startListeningToVariant:(id)arg1;
- (void)rangeInvalidated:(id)arg1;
- (void)_updateFilmstripForPick:(id)arg1;

@end


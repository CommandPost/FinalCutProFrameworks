//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import <Flexo/FFSkimmingModuleDelegate-Protocol.h>

@class CALayer, FFAudioComponentsConfigViewModule, FFAudioComponentsConfigWaveformManager, NSObject, NSString, NSView;
@protocol FFAudioComponentsConfigTileDelegate, FFSkimmableProtocol><FFDataModelProtocol><FFAssetContainerProtocol;

__attribute__((visibility("hidden")))
@interface FFAudioComponentsConfigWaveform : NSViewController <FFSkimmingModuleDelegate>
{
    FFAudioComponentsConfigWaveformManager *m_waveformManager;
    id <FFAudioComponentsConfigTileDelegate> m_delegate;
    FFAudioComponentsConfigViewModule *m_viewModule;
    NSObject<FFSkimmableProtocol><FFDataModelProtocol><FFAssetContainerProtocol> *m_playbackSkimmable;
    CDStruct_e83c9415 m_playbackSkimmableRange;
    CDStruct_e83c9415 m_waveformSkimmableRange;
    NSView *m_rootView;
    CALayer *m_skimmingLayer;
    CALayer *m_skimmingLensLayer;
    BOOL _playbackSkimInContext;
}

@property(readonly, nonatomic) BOOL playbackSkimInContext; // @synthesize playbackSkimInContext=_playbackSkimInContext;
@property(readonly, nonatomic) id <FFAudioComponentsConfigTileDelegate> delegate; // @synthesize delegate=m_delegate;
@property(readonly, nonatomic) FFAudioComponentsConfigWaveformManager *waveformManager; // @synthesize waveformManager=m_waveformManager;
@property(readonly, nonatomic) CDStruct_e83c9415 playbackSkimmableRange; // @synthesize playbackSkimmableRange=m_playbackSkimmableRange;
@property(readonly, nonatomic) NSObject<FFSkimmableProtocol><FFDataModelProtocol><FFAssetContainerProtocol> *playbackSkimmable; // @synthesize playbackSkimmable=m_playbackSkimmable;
- (id)skimmingModule:(id)arg1 newContextForSkimmable:(id)arg2;
- (BOOL)skimmingModule:(id)arg1 isSkimmingInViewerWithSkimmable:(id)arg2;
- (void)skimmingModuleStopSkimmingInViewer:(id)arg1;
- (BOOL)skimmingModule:(id)arg1 startSkimmingInViewerReplacingSkimmable:(id)arg2 withSkimmable:(id)arg3 context:(id)arg4 effectCount:(long long)arg5;
- (BOOL)skimmingModule:(id)arg1 startSkimmingInViewerWithSkimmable:(id)arg2 context:(id)arg3 effectCount:(long long)arg4;
- (BOOL)skimmingModuleCanStartSkimming:(id)arg1;
- (double)skimmingModule:(id)arg1 timePerHorizontalPixelForSkimmingLayer:(id)arg2;
- (CDStruct_1b6d18a9)skimmingModule:(id)arg1 startTimeForSkimmingLayer:(id)arg2;
- (id)skimmingModule:(id)arg1 skimmableObjectAtPoint:(struct CGPoint)arg2;
- (id)skimmingModule:(id)arg1 skimmingLensLayerForSkimmingLayer:(id)arg2;
- (id)skimmingModule:(id)arg1 skimmingLayerForSkimmable:(id)arg2;
- (void)mouseDown:(id)arg1;
- (void)updateWaveformSkimming:(id)arg1;
- (void)shutdownSkimming;
- (void)notifyPendingRebuildWaveform;
- (BOOL)needsRebuildWaveform;
- (void)updateUI;
- (void)selectWaveform:(unsigned int)arg1;
- (BOOL)waveformSelected;
- (void)toggleEnable:(id)arg1;
- (double)skimmingLayerTimePerHorizontalPixel;
- (id)skimmingLensLayer;
- (id)skimmingLayer;
- (void)setupWaveform;
- (void)loadView;
- (void)dealloc;
- (id)initWithWaveformManager:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


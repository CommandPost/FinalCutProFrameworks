//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFResponderLayer.h>

#import "FFSkimmingModuleDelegate.h"

@class CALayer, CATextLayer, FFAudioChannelsConfigViewModule, FFFilmstripLayer, FFThemeFacetLayer, NSArray, NSButton;

__attribute__((visibility("hidden")))
@interface FFAudioChannelsConfigFilmstripLayer : FFResponderLayer <FFSkimmingModuleDelegate>
{
    FFAudioChannelsConfigViewModule *m_editorModule;
    CALayer *m_filmstripBackgroundLayer;
    CALayer *m_leftDimLayer;
    CALayer *m_rightDimLayer;
    CALayer *m_leftDimEdgeLayer;
    CALayer *m_rightDimEdgeLayer;
    CATextLayer *m_textLayer;
    FFFilmstripLayer *m_filmstripLayer;
    CALayer *m_skimmingLayer;
    FFThemeFacetLayer *m_filmstripBackgroundImageLayer;
    CDStruct_e83c9415 m_filmstripTimeRange;
    NSButton *m_enableButton;
    CALayer *m_waveformLayer;
    int m_displayMode;
    NSArray *m_associatedObjects;
    long long m_enableState;
}

- (id)init;
- (void)dealloc;
- (void)setEditorModule:(id)arg1;
- (void)setMediaSource:(id)arg1;
- (void)updatePlayEnable;
- (void)setDisplayMode:(int)arg1;
- (void)setEnableButton:(id)arg1;
- (struct CGRect)textLayerFrame;
- (struct CGRect)filmstripAreaFrame;
- (CDStruct_e83c9415)filmstripClippedRange;
- (struct CGRect)clippedRangeAreaFrame;
- (id)anchoredObject;
- (void)layoutSublayers;
- (BOOL)mouseEntered:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (BOOL)mouseDown:(id)arg1;
- (id)skimmingModule:(id)arg1 skimmingLayerForSkimmable:(struct NSObject *)arg2;
- (struct NSObject *)skimmingModule:(id)arg1 skimmableObjectAtPoint:(struct CGPoint)arg2;
- (CDStruct_1b6d18a9)skimmingModule:(id)arg1 startTimeForSkimmingLayer:(id)arg2;
- (double)skimmingModule:(id)arg1 timePerHorizontalPixelForSkimmingLayer:(id)arg2;
- (BOOL)skimmingModuleCanStartSkimming:(id)arg1;
- (BOOL)skimmingModule:(id)arg1 startSkimmingInViewerWithSkimmable:(struct NSObject *)arg2 context:(id)arg3 effectCount:(long long)arg4;
- (void)skimmingModuleStopSkimmingInViewer:(id)arg1;
- (BOOL)skimmingModule:(id)arg1 isSkimmingInViewerWithSkimmable:(struct NSObject *)arg2;
@property(readonly, nonatomic) long long enableState; // @synthesize enableState=m_enableState;
@property(retain, nonatomic) NSArray *associatedObjects; // @synthesize associatedObjects=m_associatedObjects;
@property(nonatomic) CDStruct_e83c9415 filmstripTimeRange; // @synthesize filmstripTimeRange=m_filmstripTimeRange;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TLKit/TLKTimelineLane.h>

#import "CALayerDelegate.h"
#import "CATiledLayerDelegate.h"

@class CATiledLayer, LKTimecodeFormatter, NSArray, NSMutableArray, NSString, TLKRulerLayer;

@interface TLKRulerLane : TLKTimelineLane <CATiledLayerDelegate, CALayerDelegate>
{
    TLKRulerLayer *_rulerLayer;
    CATiledLayer *_rulerMarkerLayer;
    NSArray *_rulerMarkerLines;
    NSMutableArray *_renderInfoLayers;
    BOOL _hiddenState;
    BOOL _timeLabelUpdated;
    CDStruct_1b6d18a9 _timePerMarker;
    CDStruct_1b6d18a9 _frameDuration;
    int _numberSubTicks;
    double _timecodeLength;
    LKTimecodeFormatter *_timecodeFormatter;
}

+ (void)initialize;
- (BOOL)layer:(id)arg1 shouldInheritContentsScale:(double)arg2 fromWindow:(id)arg3;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (void)hideMarkings;
- (void)showMarkings;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (void)reloadVisibleLayers;
- (void)updateRenderInfo;
- (void)_updateRulerMarkerLines;
- (BOOL)_updateNonLinearMarkerLines:(CDStruct_e83c9415)arg1;
- (BOOL)_updateLinearMarkerLines:(CDStruct_e83c9415)arg1;
- (void)updateRulerMarkerInfo;
- (void)_updateRulerMarkerInfo;
- (void)setScrolling:(BOOL)arg1;
- (void)_createRulerLayerIfNeeded;
- (id)rulerMarkerLayer;
- (double)width;
- (id)partIdentifier;
- (id)rulerLayer;
- (void)dealloc;
- (id)init;
- (void)_updateTimecodeFormatter;
- (void)setTimecodeFormatter:(id)arg1;
- (id)timecodeFormatter;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


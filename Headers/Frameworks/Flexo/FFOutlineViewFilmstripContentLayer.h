//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFOutlineViewCellContentLayer.h>

@class CALayer, CATextLayer, FFProjectOrganizerFilmstrip, FFSequenceProject;

__attribute__((visibility("hidden")))
@interface FFOutlineViewFilmstripContentLayer : FFOutlineViewCellContentLayer
{
    CATextLayer *_durationTextLayer;
    CATextLayer *_dateTextLayer;
    CALayer *_offlineStatusButtonLayer;
    CALayer *_sharedStatusButtonLayer;
    CALayer *_sharedModifiedStatusButtonLayer;
    FFProjectOrganizerFilmstrip *_filmstripLayer;
    double _textColumnWidth;
    FFSequenceProject *_sequenceProject;
}

+ (double)filmstripHeight;
- (id)init;
- (void)dealloc;
- (BOOL)isContentsAnimationDisabledForLayer:(id)arg1;
- (void)setupTextLayer:(id)arg1;
- (void)setupDetailsTextLayer:(id)arg1;
@property(readonly, nonatomic) CATextLayer *durationTextLayer;
@property(readonly, nonatomic) CATextLayer *dateTextLayer;
- (void)_updateTextLayers;
- (id)_stripLeadingZerosFromTimeString:(id)arg1;
- (id)_stringForFigTime:(CDStruct_1b6d18a9)arg1 frameDuration:(CDStruct_1b6d18a9)arg2 timecodeDisplayDropFrame:(BOOL)arg3;
- (id)_frameDurationToFPS:(CDStruct_1b6d18a9)arg1 interlaced:(BOOL)arg2;
- (void)updateDurationText;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(retain, nonatomic) FFSequenceProject *sequenceProject;
- (void)_showProjectMediaInspector:(id)arg1;
- (void)createOfflineStatusButtonLayerWithModule:(id)arg1;
@property(readonly, nonatomic) CALayer *offlineStatusButtonLayer;
- (void)_showProjectShareInspector:(id)arg1;
- (void)createShareStatusButtonLayerWithModule:(id)arg1;
@property(readonly, nonatomic) CALayer *sharedStatusButtonLayer;
- (void)createShareModifiedStatusButtonLayerWithModule:(id)arg1;
@property(readonly, nonatomic) CALayer *sharedModifiedStatusButtonLayer;
- (double)minFilmstripViewWidth;
@property(readonly, nonatomic) FFProjectOrganizerFilmstrip *filmstripLayer; // @synthesize filmstripLayer=_filmstripLayer;
- (id)outlineViewLayer;
@property(nonatomic) double textColumnWidth;
- (void)performLayoutSublayers;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TLKTimelineLayer.h"

#import "TLKPartInfo.h"

@class CATextLayer, FFAnchoredCollection, NSString, PENeueTimelineItemFilmstripLayer;

__attribute__((visibility("hidden")))
@interface PENeueTimelineItemLayer : TLKTimelineLayer <TLKPartInfo>
{
    BOOL _roundedBottomAudioComponent;
    PENeueTimelineItemFilmstripLayer *_audioFilmstrip;
    CATextLayer *_titleLayer;
    CATextLayer *_debugLayer;
    double _audioFilmstripHeight;
}

@property double audioFilmstripHeight; // @synthesize audioFilmstripHeight=_audioFilmstripHeight;
@property(retain, nonatomic) CATextLayer *debugLayer; // @synthesize debugLayer=_debugLayer;
@property(retain, nonatomic) CATextLayer *titleLayer; // @synthesize titleLayer=_titleLayer;
@property BOOL roundedBottomAudioComponent; // @synthesize roundedBottomAudioComponent=_roundedBottomAudioComponent;
- (id)subpartAtPoint:(struct CGPoint)arg1;
- (id)partIdentifier;
- (void)updateDebugLayer;
- (struct CGRect)titleLayerFrame;
- (void)updateTitleLayer;
- (void)updateLayerBackgroundColor;
- (void)updateZPosition;
- (void)updateSelectionMask;
- (void)updateAudioFilmstrips;
- (void)invalidate;
@property(readonly, copy) NSString *description;
- (void)layoutSublayers;
@property(readonly) PENeueTimelineItemFilmstripLayer *audioFilmstrip; // @synthesize audioFilmstrip=_audioFilmstrip;
- (void)setVisibleRect:(struct CGRect)arg1;
- (void)setBounds:(struct CGRect)arg1;
@property(readonly) FFAnchoredCollection *anchoredCollection;
- (void)setRepresentedObject:(id)arg1;
- (void)setSelectionMask:(unsigned long long)arg1;
- (id)initWithTimelineView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CALayer, NSMutableArray, NSObject<FFSkimmableProtocol><FFDataModelProtocol><FFInspectableObject>;

__attribute__((visibility("hidden")))
@interface FFFilmstrip : NSObject
{
    NSMutableArray *_filmstripCells;
    CALayer *_layer;
    CDStruct_e83c9415 _range;
    struct NSObject *_skimmable;
    CDStruct_1b6d18a9 _sampleDuration;
    CDStruct_1b6d18a9 _cellDuration;
    CDStruct_e83c9415 _timeRange;
    struct CGSize _thumbSize;
    double _audioHeight;
    CDStruct_e83c9415 _clippedRange;
    double _clippedWidth;
    double _thumbCount;
    double _contentsScale;
    BOOL _forceRegenerateLastCell;
    unsigned int _audioHasVideo:1;
    unsigned int _forEditing:1;
    unsigned int _needsUpdate:1;
    unsigned int _timeRangeEqualsRange:1;
}

+ (struct CGSize)thumbFrameSizeForSkimmable:(struct NSObject *)arg1 thumbHeight:(double)arg2 audioHeight:(double)arg3 maxThumbWidth:(double)arg4;
+ (struct CGSize)thumbFrameSizeForSkimmable:(struct NSObject *)arg1 thumbHeight:(double)arg2 audioHeight:(double)arg3;
+ (id)filmstripWithSkimmable:(struct NSObject *)arg1 andRange:(CDStruct_e83c9415)arg2 timeRange:(CDStruct_e83c9415)arg3 thumbHeight:(double)arg4 audioHeight:(double)arg5 forEditing:(BOOL)arg6 clippedRange:(CDStruct_e83c9415)arg7 clippedWidth:(double)arg8 thumbCount:(double)arg9 maxThumbWidth:(double)arg10 cellDuration:(CDStruct_1b6d18a9)arg11 squareThumbs:(BOOL)arg12;
+ (id)filmstripWithSkimmable:(struct NSObject *)arg1 andRange:(CDStruct_e83c9415)arg2 thumbHeight:(double)arg3 audioHeight:(double)arg4 forEditing:(BOOL)arg5 clippedRange:(CDStruct_e83c9415)arg6 clippedWidth:(double)arg7 thumbCount:(double)arg8 maxThumbWidth:(double)arg9 cellDuration:(CDStruct_1b6d18a9)arg10 squareThumbs:(BOOL)arg11;
@property(readonly, nonatomic) double audioHeight; // @synthesize audioHeight=_audioHeight;
@property(readonly, nonatomic) struct CGSize thumbSize; // @synthesize thumbSize=_thumbSize;
@property(readonly, nonatomic) NSObject<FFSkimmableProtocol><FFDataModelProtocol><FFInspectableObject> *skimmable; // @synthesize skimmable=_skimmable;
@property(readonly, nonatomic) CDStruct_e83c9415 range; // @synthesize range=_range;
@property(readonly, nonatomic) NSMutableArray *filmstripCells; // @synthesize filmstripCells=_filmstripCells;
- (long long)effectCount;
- (void)update;
- (void)setForceRegenerateLastCell:(BOOL)arg1;
@property(nonatomic) CDStruct_e83c9415 clippedRange; // @synthesize clippedRange=_clippedRange;
@property(nonatomic) double clippedWidth;
@property(nonatomic) CDStruct_e83c9415 timeRange;
- (double)xCoordAtTime:(CDStruct_1b6d18a9)arg1 inSpaceOfLayer:(id)arg2;
- (struct CGRect)thumbFrameAtTime:(CDStruct_1b6d18a9)arg1 inSpaceOfLayer:(id)arg2;
- (struct CGRect)cellFrameAtTime:(CDStruct_1b6d18a9)arg1 inSpaceOfLayer:(id)arg2;
- (id)cellAtTime:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)mediaPlaybackTimeForPoint:(struct CGPoint)arg1 inSpaceOfLayer:(id)arg2;
- (CDStruct_1b6d18a9)mediaTimeForPoint:(struct CGPoint)arg1 inSpaceOfLayer:(id)arg2 constrainToCellBounds:(BOOL)arg3;
- (CDStruct_1b6d18a9)mediaTimeForPoint:(struct CGPoint)arg1 inSpaceOfLayer:(id)arg2;
@property(readonly, nonatomic) CALayer *layer;
- (void)_addThumbnailLayers;
- (void)populateThumbnails;
@property(readonly, nonatomic) struct CGSize overallSize;
@property(nonatomic) double contentsScale;
- (void)setThumbCount:(double)arg1;
@property(readonly, nonatomic) double thumbCount;
- (void)replaceCell:(id)arg1 withCell:(id)arg2;
- (id)description;
- (void)dealloc;
- (void)releaseLayer;
- (void)updateIfNeeded;
- (id)initWithSkimmable:(struct NSObject *)arg1 andRange:(CDStruct_e83c9415)arg2 timeRange:(CDStruct_e83c9415)arg3 thumbHeight:(double)arg4 audioHeight:(double)arg5 forEditing:(BOOL)arg6 clippedRange:(CDStruct_e83c9415)arg7 clippedWidth:(double)arg8 thumbCount:(double)arg9 maxThumbWidth:(double)arg10 cellDuration:(CDStruct_1b6d18a9)arg11 squareThumbs:(BOOL)arg12;

@end


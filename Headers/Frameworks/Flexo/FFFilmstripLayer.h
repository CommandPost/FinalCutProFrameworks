//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CALayer.h"

@class FFAnchoredObject, NSMapTable, NSMutableArray;

__attribute__((visibility("hidden")))
@interface FFFilmstripLayer : CALayer
{
    FFAnchoredObject *_anchoredObject;
    CDStruct_e83c9415 _clippedRange;
    CDStruct_e83c9415 _unclippedRange;
    double _timePerHorizontalPixel;
    int _filmstripMode;
    NSMutableArray *_cellArray;
    NSMapTable *_creases;
    CDStruct_1b6d18a9 _timePerCell;
    struct CGRect _visibleBounds;
    unsigned long long _totalCellCount;
    double _totalWidth;
    unsigned int _inited:1;
    unsigned int _forceNoUpdate:1;
    unsigned int _forceUpdate:1;
}

- (id)init;
- (id)initWithLayer:(id)arg1;
- (void)dealloc;
@property(retain, nonatomic) FFAnchoredObject *anchoredObject;
@property(nonatomic) CDStruct_e83c9415 clippedRange;
@property(nonatomic) double timePerHorizontalPixel;
@property(nonatomic) int filmstripMode;
@property(nonatomic) struct CGRect visibleBounds;
@property(nonatomic) BOOL forceNoUpdate;
@property(nonatomic) BOOL forceUpdate;
- (id)_createFilmstripCellWithframe:(struct CGRect)arg1 andTimeRange:(CDStruct_e83c9415)arg2 originalUnClippedRange:(CDStruct_e83c9415)arg3 startIndex:(unsigned long long *)arg4;
- (void)_recomputeCells;
- (void)layoutSublayers;
- (double)_frameAspectRatio;
- (double)_cellWidth;
- (void)_invalidateCells;

@end


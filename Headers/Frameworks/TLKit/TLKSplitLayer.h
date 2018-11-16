//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TLKit/TLKTimelineLayer.h>

@class CALayer, NSArray, NSMutableArray;

@interface TLKSplitLayer : TLKTimelineLayer
{
    CALayer *_dividersLayer;
    NSMutableArray *_dividerLayers;
    NSMutableArray *_contentLayers;
}

- (id)init;
- (void)dealloc;
- (void)layoutSublayers;
- (void)resizeSublayersWithOldSize:(struct CGSize)arg1;
@property(readonly, getter=isVertical) BOOL vertical;
@property(retain, nonatomic) CALayer *dividersLayer; // @synthesize dividersLayer=_dividersLayer;
- (void)addContentLayer:(id)arg1;
- (void)removeContentLayer:(id)arg1;
- (id)dividerAtIndex:(unsigned long long)arg1;
- (double)positionOfDivider:(id)arg1;
- (void)setPosition:(double)arg1 ofDivider:(id)arg2;
- (id)_dividerLayers;
- (void)_resizeContentLayers:(id)arg1 toFitInRect:(struct CGRect)arg2;
@property(readonly) NSArray *contentLayers; // @synthesize contentLayers=_contentLayers;

@end

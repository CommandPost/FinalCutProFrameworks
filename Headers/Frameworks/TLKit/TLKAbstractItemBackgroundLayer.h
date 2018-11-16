//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CALayer.h"

@class TLKTimelineView;

@interface TLKAbstractItemBackgroundLayer : CALayer
{
    int _itemType;
    int _avContainmentType;
    double _textSize;
    struct {
        unsigned int sourceSplitEdit:1;
        unsigned int splitEdit:1;
        unsigned int spineItem:1;
        unsigned int RESERVED:27;
    } _tlkAbstractItemBackgroudflags;
}

+ (double)transitionCornerRadius;
+ (double)cornerRadiusForWidth:(double)arg1;
+ (Class)backgroundLayerClass;
+ (void)setBackgroundLayerClass:(Class)arg1;
+ (struct CGRect)frameForItem:(struct CGRect)arg1 withType:(int)arg2 andContainmentType:(int)arg3;
- (id)actionForKey:(id)arg1;
- (BOOL)allowedOperationForEdge:(id)arg1;
- (struct CGRect)rectForPart:(id)arg1;
- (void)setAllowedOperation:(BOOL)arg1 forEdge:(id)arg2;
- (void)setPart:(id)arg1 hidden:(BOOL)arg2;
- (void)setShadowsInset:(BOOL)arg1;
- (void)updateAppearanceType:(int)arg1 withMask:(int)arg2;
- (void)setItemType:(int)arg1 andContainmentMask:(int)arg2;
- (void)replaceSublayer:(id)arg1 with:(id)arg2;
- (void)insertSublayer:(id)arg1 above:(id)arg2;
- (void)insertSublayer:(id)arg1 below:(id)arg2;
- (void)addSublayer:(id)arg1;
- (void)insertSublayer:(id)arg1 atIndex:(unsigned int)arg2;
@property __weak TLKTimelineView *delegate; // @dynamic delegate;
@property double textSize;
- (void)setContentsScale:(double)arg1;
- (void)audioWaveFormProportionChanged;
- (void)invalidate;
@property BOOL spineItem;
@property BOOL roundedBottomAudioComponent;
@property BOOL audioComponent;
@property BOOL sourceSplitEdit;
@property BOOL splitEdit;
- (int)containmentTypeMask;
- (int)itemType;
- (id)timelineView;
- (id)init;

@end


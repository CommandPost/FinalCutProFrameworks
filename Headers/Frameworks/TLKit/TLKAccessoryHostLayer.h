//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CALayer.h"

@class NSColor, NSString, TLKAccessoryLayer, TLKAccessoryTitleLayer, TLKItemLayer, TLKTimelineView;

@interface TLKAccessoryHostLayer : CALayer
{
    CALayer *_glossMaskLayer;
    CALayer *_glossLayer;
    TLKAccessoryLayer *_upperAccessoryLayer;
    TLKAccessoryLayer *_lowerAccessoryLayer;
    TLKTimelineView *_timelineView;
    BOOL _isSplitComponent;
    NSString *_title;
    NSColor *_tintColor;
    double _backgroundBorderWidth;
    double _titleHeight;
    TLKItemLayer *_itemLayer;
    TLKAccessoryTitleLayer *_titleLayer;
    CALayer *_rootLayer;
    CALayer *_backgroundLayer;
}

@property(retain) CALayer *backgroundLayer; // @synthesize backgroundLayer=_backgroundLayer;
@property(retain) CALayer *rootLayer; // @synthesize rootLayer=_rootLayer;
@property BOOL isSplitComponent; // @synthesize isSplitComponent=_isSplitComponent;
@property TLKAccessoryTitleLayer *titleLayer; // @synthesize titleLayer=_titleLayer;
@property TLKItemLayer *itemLayer; // @synthesize itemLayer=_itemLayer;
@property double titleHeight; // @synthesize titleHeight=_titleHeight;
@property double backgroundBorderWidth; // @synthesize backgroundBorderWidth=_backgroundBorderWidth;
@property(retain, nonatomic) NSColor *tintColor; // @synthesize tintColor=_tintColor;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property TLKTimelineView *timelineView; // @synthesize timelineView=_timelineView;
- (void)syntheticUIElement:(id)arg1 performAction:(id)arg2;
- (id)syntheticUIElementActions:(id)arg1;
- (id)syntheticUIElement:(id)arg1 attributeValue:(id)arg2;
- (id)accessibilityFocusedUIElement;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (BOOL)accessibilityIsIgnored;
- (void)accessibilityPerformAction:(id)arg1;
- (id)accessibilityActionDescription:(id)arg1;
- (id)accessibilityActionNames;
- (void)accessibilitySetValue:(id)arg1 forAttribute:(id)arg2;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (id)_closeButtonElement;
- (void)replaceSublayer:(id)arg1 with:(id)arg2;
- (void)insertSublayer:(id)arg1 above:(id)arg2;
- (void)insertSublayer:(id)arg1 below:(id)arg2;
- (void)addSublayer:(id)arg1;
- (void)insertSublayer:(id)arg1 atIndex:(unsigned int)arg2;
- (void)setDelegate:(id)arg1;
- (void)layoutSublayers;
- (void)setBackgroundBorderWidthTo:(double)arg1;
- (void)updateAppearance;
@property(readonly) double lowerHeight;
@property(readonly) double upperHeight;
- (double)_heightOfLowerAccessoryLayer;
- (double)_heightOfUpperAccessoryLayer;
- (void)setAccessoryLayerNeedsHeightChanged;
- (id)lowerAccessoryLayer;
- (id)upperAccessoryLayer;
- (void)setUpperAccessoryLayer:(id)arg1 lowerAccessoryLayer:(id)arg2;
- (void)setNeedsLayout;
@property(readonly) id <TLKTimelineItem> representedObject;
- (id)hitTest:(struct CGPoint)arg1;
- (id)init;

@end


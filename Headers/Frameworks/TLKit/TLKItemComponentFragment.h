//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TLKit/ERLRelationalObject.h>

#import <TLKit/NSCopying-Protocol.h>
#import <TLKit/TLKAccessibilityProtocol-Protocol.h>

@class TLKAccessoryHostLayer, TLKItemComponentInfo, TLKItemLaneFragment, TLKLayoutContext, TLKTimelineLayer;

@interface TLKItemComponentFragment : ERLRelationalObject <TLKAccessibilityProtocol, NSCopying>
{
    TLKItemComponentInfo *_itemComponentInfo;
    TLKLayoutContext *_layoutContext;
    TLKItemLaneFragment *_itemLaneFragment;
    TLKTimelineLayer *_layer;
    TLKAccessoryHostLayer *_accessoryLayer;
    struct CGRect _frame;
    struct CGRect _layoutFrame;
    struct CGRect _layerFrame;
    BOOL _purgeable;
    struct _TLKRange _timeRangeInSeconds;
    struct _TLKRange _locationRange;
    BOOL _frameNeedsUpdate;
    BOOL _locationRangeNeedsUpdate;
    TLKItemComponentInfo *_deletedFromItemComponentInfo;
    struct CGRect _legacyFrame;
}

+ (void)setTimelineView:(id)arg1;
@property(nonatomic, getter=isPurgeable) BOOL purgeable; // @synthesize purgeable=_purgeable;
@property(nonatomic) struct CGRect legacyFrame; // @synthesize legacyFrame=_legacyFrame;
@property(nonatomic) BOOL locationRangeNeedsUpdate; // @synthesize locationRangeNeedsUpdate=_locationRangeNeedsUpdate;
@property(nonatomic) struct CGRect layerFrame; // @synthesize layerFrame=_layerFrame;
@property(nonatomic) BOOL frameNeedsUpdate; // @synthesize frameNeedsUpdate=_frameNeedsUpdate;
@property(nonatomic) struct CGRect layoutFrame; // @synthesize layoutFrame=_layoutFrame;
@property(retain, nonatomic) TLKAccessoryHostLayer *accessoryLayer; // @synthesize accessoryLayer=_accessoryLayer;
@property(readonly, nonatomic) TLKItemComponentInfo *deletedFromItemComponentInfo; // @synthesize deletedFromItemComponentInfo=_deletedFromItemComponentInfo;
- (id)debugDescription;
- (id)description;
- (BOOL)isTrailingEdgeFragment;
- (BOOL)isLeadingEdgeFragment;
@property(readonly, nonatomic) struct CGRect boundingBox;
- (struct CGRect)lowerAccessoryFrame;
- (struct CGRect)upperAccessoryFrame;
@property(retain) TLKTimelineLayer *layer;
@property(nonatomic) TLKItemLaneFragment *itemLaneFragment;
@property(nonatomic) TLKLayoutContext *layoutContext;
- (void)clearItemComponentInfo;
@property(nonatomic) TLKItemComponentInfo *itemComponentInfo;
@property(nonatomic) struct _TLKRange locationRange;
@property(readonly, nonatomic) struct _TLKRange timeRangeInSeconds;
@property(readonly, nonatomic) struct CGRect calculatedLayerFrame;
@property(nonatomic) struct CGRect frame;
- (void)_positionLayoutContextWithFrameIfNeeded:(struct CGRect)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;
- (id)accessibilityActionNames;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityIsSelected;
- (id)accessibilityEnabled;
- (BOOL)accessibilityIsIgnored;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (id)accessibilityDescription;
- (id)accessibilityDescriptionForItem:(id)arg1;
- (id)accessibilityDescriptionForItemType:(int)arg1;
- (id)accessibilityDelimiterString;
- (id)accessibilityRole;
- (id)accessibilityParent;
- (id)accessibilityHelp;
- (id)accessibilityLocalizedString:(id)arg1;
- (struct CGSize)accessibilitySize;
- (struct CGPoint)accessibilityPosition;
- (struct CGRect)accessibilityRect;
- (BOOL)accessibilityIsVisible;
- (id)timelineView;

@end


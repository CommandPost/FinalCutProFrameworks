//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TLKit/TLKProKitInterimLayer.h>

#import "TLKAccessibilityProtocol.h"
#import "TLKPartInfo.h"

@class CAShapeLayer, NSString, TLKMarkerPosterPinLayer, TLKTimelineLayer, TLKTimelineView;

@interface TLKMarkerLayer : TLKProKitInterimLayer <TLKPartInfo, TLKAccessibilityProtocol>
{
    id <TLKTimelineMarkerItem> _representedObject;
    int _markerType;
    TLKMarkerPosterPinLayer *_markerPosterPinLayer;
    CAShapeLayer *_posterConnectionLayer;
    double _chapterPinOffset;
    unsigned int _mouseOverLayer:1;
    unsigned int _selected:1;
    TLKTimelineLayer *_timelineLayer;
}

@property(nonatomic) TLKTimelineLayer *timelineLayer; // @synthesize timelineLayer=_timelineLayer;
- (void)accessibilityPerformAction:(id)arg1;
- (id)accessibilityActionDescription:(id)arg1;
- (id)accessibilityActionNames;
- (id)accessibilityFocusedUIElement;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (void)accessibilitySetValue:(id)arg1 forAttribute:(id)arg2;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (id)accessibilityHelp;
- (struct CGRect)accessibilityRect;
- (id)accessibilityEnabled;
- (id)timelineView;
- (BOOL)accessibilityIsIgnored;
- (id)accessibilityParent;
- (id)accessibilityDescription;
- (id)accessibilityRole;
- (id)accessibilityDescriptionForMarkerType:(int)arg1;
- (id)accessibilityDelimiterString;
- (id)accessibilityLocalizedString:(id)arg1;
- (void)layoutSublayers;
- (id)contextMenu;
- (void)_updatePosterPin;
@property(nonatomic) BOOL selected;
@property(nonatomic) BOOL mouseOverLayer;
- (id)partIdentifier;
- (id)subpartAtPoint:(struct CGPoint)arg1;
- (void)updateAppearance;
- (int)markerType;
@property(nonatomic) double chapterPinOffset;
@property(nonatomic) id <TLKTimelineMarkerItem> representedObject;
- (void)invalidate;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property __weak TLKTimelineView *delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


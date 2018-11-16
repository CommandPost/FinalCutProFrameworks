//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TLKit/TLKTimelineLayer.h>

#import "TLKAccessibilityProtocol.h"
#import "TLKPartInfo.h"

@class CALayer, NSArray, NSString, TLKContainerHandleLayer, TLKImageLayer, TLKLayoutContext, TLKTextLayer, TLKTiledContainerBackgroundLayer;

@interface TLKContainerLayer : TLKTimelineLayer <TLKAccessibilityProtocol, TLKPartInfo>
{
    TLKContainerHandleLayer *_handleLayer;
    TLKTiledContainerBackgroundLayer *_backgroundLayer;
    TLKLayoutContext *_layoutContext;
    TLKTextLayer *_textLayer;
    TLKImageLayer *_dragHandlelayer;
    NSArray *_badgeArray;
    unsigned int _hasDragHeader:1;
    unsigned int _titlePresent:1;
    unsigned int _hideTextBadges:1;
    CALayer *_selectionLayer;
}

@property(retain) CALayer *selectionLayer; // @synthesize selectionLayer=_selectionLayer;
- (id)textLayer;
- (id)subpartAtPoint:(struct CGPoint)arg1;
- (id)layoutRegionAtPoint:(struct CGPoint)arg1;
- (struct CGRect)rectForPart:(id)arg1;
- (id)partIdentifier;
- (id)hitTest:(struct CGPoint)arg1;
- (void)_layoutTitleSublayer;
- (void)_layoutDragHandleSublayer;
- (void)_layoutHandleSublayer;
- (void)layoutSublayers;
- (void)_layoutSelection;
- (void)_layoutBadgesAndTextInVisibleBounds:(struct CGRect)arg1;
- (BOOL)showContainerLayoutInfo;
@property BOOL hideTextBadges;
@property BOOL hasTitleLayer;
@property BOOL hasDragHeader;
@property BOOL hasHandleLayer;
- (id)handleLayer;
- (void)updateAppearance:(unsigned long long)arg1;
- (void)updateAppearance;
- (void)_updateSelectionAppearance;
- (void)invalidate;
@property TLKLayoutContext *layoutContext;
- (void)dealloc;
- (id)init;
- (void)syntheticUIElement:(id)arg1 performAction:(id)arg2;
- (id)syntheticUIElement:(id)arg1 actionDescription:(id)arg2;
- (id)syntheticUIElementActions:(id)arg1;
- (id)syntheticUIElement:(id)arg1 attributeValue:(id)arg2;
- (id)syntheticUIElementAttributeNames:(id)arg1;
- (id)syntheticUIElementHelp:(id)arg1;
- (id)syntheticUIElementValueDescription:(id)arg1;
- (id)syntheticUIElementValue:(id)arg1;
- (id)syntheticUIElementTitle:(id)arg1;
- (id)syntheticUIElementSize:(id)arg1;
- (id)syntheticUIElementPosition:(id)arg1;
- (struct CGRect)syntheticUIElementRect:(id)arg1;
- (id)syntheticUIElementDescription:(id)arg1;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityParent;
- (id)accessibilityChildren;
- (BOOL)accessibilityIsIgnored;
- (id)accessibilityDescription;
- (id)accessibilityRole;
- (struct CGRect)accessibilityRectForPart:(id)arg1;
- (id)accessibilityAttributeNames;
- (id)partAtPoint:(struct CGPoint)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


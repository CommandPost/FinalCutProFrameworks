//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CALayer.h"

#import "TLKPartInfo.h"

@class TLKEdgeSelectionLayer, TLKThemeBackedLayer, TLKTimelineView;

@interface TLKPrecisionEditorTrimBar : CALayer <TLKPartInfo>
{
    TLKTimelineView *_timelineView;
    CALayer *_leftBar;
    CALayer *_rightBar;
    TLKEdgeSelectionLayer *_outgoingSelectionLayer;
    TLKEdgeSelectionLayer *_incomingSelectionLayer;
    TLKThemeBackedLayer *_editHandleLayer;
    TLKThemeBackedLayer *_transitionHandleLayer;
    TLKThemeBackedLayer *_bowTieLayer;
    id <TLKTimelineItem> _leftItem;
    id <TLKTimelineItem> _rightItem;
    struct {
        unsigned int split:1;
        unsigned int RESERVED:31;
    } _tbFlags;
}

@property(nonatomic) id <TLKTimelineItem> rightItem; // @synthesize rightItem=_rightItem;
@property(nonatomic) id <TLKTimelineItem> leftItem; // @synthesize leftItem=_leftItem;
@property(nonatomic) TLKTimelineView *timelineView; // @synthesize timelineView=_timelineView;
- (void)setDelegate:(id)arg1;
- (void)reloadVisibleLayers;
- (id)partIdentifier;
- (id)subpartAtPoint:(struct CGPoint)arg1;
- (struct CGRect)rectForPart:(id)arg1;
- (void)layoutSublayers;
- (id)actionForKey:(id)arg1;
- (void)dealloc;
- (id)init;

@end


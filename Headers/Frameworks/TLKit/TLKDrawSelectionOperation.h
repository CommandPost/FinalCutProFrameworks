//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class CALayer, NSSet, TLKLayoutDatabase, TLKTimelineView;

@interface TLKDrawSelectionOperation : NSOperation
{
    TLKTimelineView *_timelineView;
    TLKLayoutDatabase *_database;
    unsigned long long _drawSelectionEventType;
    CALayer *_mainDrawLayer;
    CALayer *_offscreenIndicatorLayer;
    NSSet *_selectedItemComponents;
    NSSet *_deselectedItemComponents;
    unsigned long long _selectionMask;
    struct CGRect _visibleRect;
}

@property(nonatomic) unsigned long long selectionMask; // @synthesize selectionMask=_selectionMask;
@property(copy, nonatomic) NSSet *deselectedItemComponents; // @synthesize deselectedItemComponents=_deselectedItemComponents;
@property(copy, nonatomic) NSSet *selectedItemComponents; // @synthesize selectedItemComponents=_selectedItemComponents;
@property(readonly, nonatomic) struct CGRect visibleRect; // @synthesize visibleRect=_visibleRect;
@property(readonly, nonatomic) CALayer *offscreenIndicatorLayer; // @synthesize offscreenIndicatorLayer=_offscreenIndicatorLayer;
@property(readonly, nonatomic) CALayer *mainDrawLayer; // @synthesize mainDrawLayer=_mainDrawLayer;
@property(readonly, nonatomic) unsigned long long drawSelectionEventType; // @synthesize drawSelectionEventType=_drawSelectionEventType;
@property(readonly, nonatomic) TLKLayoutDatabase *database; // @synthesize database=_database;
@property(readonly, nonatomic) TLKTimelineView *timelineView; // @synthesize timelineView=_timelineView;
- (void)drawRangeSelection;
- (void)drawEdgeSelection;
- (void)drawItemSelection;
- (void)main;
- (void)dealloc;
- (id)initWithSelectionManager:(id)arg1 database:(id)arg2 mainDrawLayer:(id)arg3 offscreenIndicatorLayer:(id)arg4 visibleRect:(struct CGRect)arg5 timelineView:(id)arg6 eventType:(unsigned long long)arg7;
- (void)_initSelectedItemsInSelectionManager:(id)arg1;

@end


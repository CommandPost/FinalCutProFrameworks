//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TLKit/TLKImageLayer.h>

#import "TLKPartInfo.h"

@class NSString, TLKTimelineLayer, TLKTimelineView;

@interface TLKMarkerPosterPinLayer : TLKImageLayer <TLKPartInfo>
{
    id <TLKTimelineMarkerItem> _representedObject;
    unsigned int _mouseOverLayer:1;
    TLKTimelineLayer *_timelineLayer;
}

@property(nonatomic) TLKTimelineLayer *timelineLayer; // @synthesize timelineLayer=_timelineLayer;
- (id)contextMenu;
@property(nonatomic) BOOL mouseOverLayer;
- (id)partIdentifier;
- (id)subpartAtPoint:(struct CGPoint)arg1;
- (void)updateAppearance;
@property(nonatomic) id <TLKTimelineMarkerItem> representedObject;
- (void)invalidate;
- (id)init;
- (id)timelineView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property __weak TLKTimelineView *delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


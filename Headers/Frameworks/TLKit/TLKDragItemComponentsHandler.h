//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TLKit/TLKTimelineHandler.h>

@class TLKDragContext;

@interface TLKDragItemComponentsHandler : TLKTimelineHandler
{
    TLKDragContext *_dragContext;
}

@property(retain, nonatomic) TLKDragContext *dragContext; // @synthesize dragContext=_dragContext;
- (BOOL)stopTracking:(id)arg1;
- (void)cancelTracking:(id)arg1;
- (BOOL)_stopTracking;
- (BOOL)continueTracking:(id)arg1;
- (BOOL)startTracking:(id)arg1;
- (void)_updateDraggedObjectsIfNeeded:(id)arg1;
- (void)_removeItemComponentLayersFromDragPositionForObjects:(id)arg1;
- (void)_moveItemComponentLayersToDragPositionForObjects:(id)arg1;
- (void)dealloc;

@end


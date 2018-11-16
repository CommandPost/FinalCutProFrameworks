//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class TLKDragContext;

@interface TLKOffsetDraggedLayersOperation : NSOperation
{
    TLKDragContext *_dragContext;
}

@property(retain) TLKDragContext *dragContext; // @synthesize dragContext=_dragContext;
- (struct CGRect)willUseFrame:(struct CGRect)arg1 forItemComponentFragment:(id)arg2;
- (BOOL)horizontalTrackingShowsFuturePositions;
@property(readonly) struct CGPoint currentPointInView;
- (void)main;
- (void)dealloc;
- (id)initWithDragContext:(id)arg1;
- (id)init;

@end


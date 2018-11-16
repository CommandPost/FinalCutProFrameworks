//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class TLKDragContext, TLKTimelineView;

@interface TLKSelectObjectsOperation : NSOperation
{
    TLKTimelineView *_timelineView;
    unsigned long long _modifierFlags;
    TLKDragContext *_dragContext;
}

@property(retain, nonatomic) TLKDragContext *dragContext; // @synthesize dragContext=_dragContext;
@property(readonly, nonatomic) unsigned long long modifierFlags; // @synthesize modifierFlags=_modifierFlags;
@property(readonly, nonatomic) TLKTimelineView *timelineView; // @synthesize timelineView=_timelineView;
- (void)dealloc;
- (id)initWithTimelineView:(id)arg1 modifierFlags:(unsigned long long)arg2;

@end


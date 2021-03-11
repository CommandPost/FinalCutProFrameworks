//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TLKit/NSObject-Protocol.h>

@class TLKTimelineView;
@protocol TLKVisibleRectObserving;

@protocol TLKVisibleRectNotifying <NSObject>
- (void)notifyWithVisibleRect:(struct CGRect)arg1 forTimelineView:(TLKTimelineView *)arg2;
- (void)removeVisibleRectObserver:(id <TLKVisibleRectObserving>)arg1;
- (void)addVisibleRectObserver:(id <TLKVisibleRectObserving>)arg1;
@end


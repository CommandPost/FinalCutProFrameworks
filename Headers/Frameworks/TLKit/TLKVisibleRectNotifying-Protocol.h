//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TLKTimelineView;

@protocol TLKVisibleRectNotifying <NSObject>
- (void)notifyWithVisibleRect:(struct CGRect)arg1 forTimelineView:(TLKTimelineView *)arg2;
- (void)removeVisibleRectObserver:(id <TLKVisibleRectObserving>)arg1;
- (void)addVisibleRectObserver:(id <TLKVisibleRectObserving>)arg1;
@end


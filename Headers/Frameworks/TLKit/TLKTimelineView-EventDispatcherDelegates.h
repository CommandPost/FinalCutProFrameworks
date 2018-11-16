//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TLKit/TLKTimelineView.h>

@interface TLKTimelineView (EventDispatcherDelegates)
- (void)eventDispatcher:(id)arg1 willSetCurrentHandler:(id)arg2;
- (void)eventDispatcher:(id)arg1 didSetCurrentHandler:(id)arg2;
- (void)handlerWillStartTracking:(id)arg1;
- (void)handlerWillContinueTracking:(id)arg1;
- (void)handlerWillCancelTracking:(id)arg1;
- (void)handlerWillStopTracking:(id)arg1;
- (void)handlerDidStartTracking:(id)arg1;
- (void)handlerDidContinueTracking:(id)arg1;
- (void)handlerDidCancelTracking:(id)arg1;
- (void)handlerDidStopTracking:(id)arg1;
- (void)timelineHandler:(id)arg1 willPerformDraggingEntered:(id)arg2;
- (void)timelineHandler:(id)arg1 willPerformDraggingEnded:(id)arg2;
- (void)timelineHandler:(id)arg1 willPerformDraggingExited:(id)arg2;
- (void)timelineHandler:(id)arg1 willPerformDraggingUpdated:(id)arg2;
- (void)handlerDidUpdateSkimming:(id)arg1;
@end


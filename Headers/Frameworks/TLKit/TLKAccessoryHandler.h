//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TLKit/TLKTimelineHandler.h>

@interface TLKAccessoryHandler : TLKTimelineHandler
{
}

- (BOOL)_isTimelineLayer:(id)arg1;
- (void)_updateLayer:(id)arg1 withSublayers:(id)arg2;
- (BOOL)startTracking:(id)arg1;
- (BOOL)continueTracking:(id)arg1;
- (void)cancelTracking:(id)arg1;
- (BOOL)stopTracking:(id)arg1;
- (BOOL)enterRollover:(id)arg1;
- (void)updateRollover:(id)arg1;
- (void)exitRollover:(id)arg1;
- (id)cursorAtPoint:(struct CGPoint)arg1 dispatcher:(id)arg2;
- (void)flagsChanged:(id)arg1;
- (BOOL)autoscrollHorizontallyOnly;

@end

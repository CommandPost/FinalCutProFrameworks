//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TLKit/TLKTimelineHandler.h>

@interface TLKPlayheadHandler : TLKTimelineHandler
{
    CDStruct_1b6d18a9 _initialTime;
    unsigned int _useHandCursor:1;
}

- (id)cursorAtPoint:(struct CGPoint)arg1 dispatcher:(id)arg2;
- (BOOL)stopTracking:(id)arg1;
- (void)cancelTracking:(id)arg1;
- (BOOL)continueTracking:(id)arg1;
- (CDStruct_1b6d18a9)_currentTime:(id)arg1;
- (BOOL)startTracking:(id)arg1;
- (int)autoscrollDirection;
- (void)applyConfiguration:(id)arg1;

@end


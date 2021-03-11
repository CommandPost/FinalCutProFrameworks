//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TLKit/TLKTimelineHandler.h>

@class TLKButtonLayer;

@interface TLKButtonHandler : TLKTimelineHandler
{
    TLKButtonLayer *_rolledOverButton;
}

- (id)stringForToolTipAtPoint:(struct CGPoint)arg1 dispatcher:(id)arg2;
- (void)cancelTracking:(id)arg1;
- (BOOL)stopTracking:(id)arg1;
- (BOOL)startTracking:(id)arg1;
- (void)exitRollover:(id)arg1;
- (BOOL)enterRollover:(id)arg1;
- (void)_updateRollover:(id)arg1;
- (void)_clearOldRollover;
- (void)dealloc;

@end


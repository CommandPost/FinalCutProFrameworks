//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface DrawingWatcher : NSObject
{
    BOOL _isTiming;
}

+ (id)sharedDrawingWatcher;
- (double)timeSpentDrawing;
- (void)_notifyDrawingIsAllDone:(id)arg1;
- (void)_notifyOfFirstDrawing:(id)arg1;
- (void)_startWatching;
- (void)startWatching;

@end


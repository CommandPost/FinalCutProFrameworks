//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TLKEventDispatcher;

@interface TLKToolTipManager : NSObject
{
    TLKEventDispatcher *_eventDispatcher;
}

- (id)view:(id)arg1 stringForToolTip:(long long)arg2 point:(struct CGPoint)arg3 userData:(void *)arg4;
- (void)updateToolTips;
@property TLKEventDispatcher *eventDispatcher;
- (void)_updateTrackingAreas;
- (void)dealloc;

@end


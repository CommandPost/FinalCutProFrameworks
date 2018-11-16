//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSColor, NSDate, NSTimer, OZLabelText;

@interface OZLabelTextPulsator : NSObject
{
    OZLabelText *_pLabelText;
    NSTimer *_pPulseTimer;
    NSDate *_pPulseStartTime;
    NSColor *_pOriginalTextColor;
    double _duration;
}

- (void)stop;
- (void)pulseTimerCB:(id)arg1;
- (void)dealloc;
- (id)initWithLabelText:(id)arg1;

@end


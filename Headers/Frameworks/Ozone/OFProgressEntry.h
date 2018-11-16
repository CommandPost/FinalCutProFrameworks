//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class LKProgressIndicator, LKTextField, NSString;

@interface OFProgressEntry : NSObject
{
    struct JobID *_jobID;
    int _state;
    unsigned int _totalFrames;
    unsigned int _completedFrames;
    double _timeRemaining;
    NSString *_footageName;
    LKTextField *_row1Text;
    LKTextField *_row2Text;
    LKTextField *_row3Text;
    LKProgressIndicator *_progressIndicator;
    BOOL _pressedState;
}

- (id)initWithJob:(const struct Job *)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setFromJob:(const struct Job *)arg1;
- (struct JobID *)jobID;
- (int)state;
- (void)setState:(int)arg1;
- (unsigned int)totalFrames;
- (void)setTotalFrames:(unsigned int)arg1;
- (unsigned int)completedFrames;
- (void)setCompletedFrames:(unsigned int)arg1;
- (double)timeRemaining;
- (id)footageName;
- (id)row1Text;
- (id)row2Text;
- (id)row3Text;
- (id)progressIndicator;
- (BOOL)pressedState;
- (void)setPressedState:(BOOL)arg1;

@end


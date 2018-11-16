//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

@class NSButton, NSProgressIndicator, NSTextField;

@interface OZImageSequenceProgressController : NSWindowController
{
    NSTextField *_frameTextField;
    NSTextField *_timeElapsedTextField;
    NSProgressIndicator *_progressIndicator;
    NSTextField *_timeRemainingTextField;
    NSButton *_stopButton;
    unsigned int _currentFrame;
    unsigned int _totalFrames;
    double _elapsedTime;
    struct _NSModalSession *_modalSession;
}

- (void)stop:(id)arg1;
- (id)createReferenceMovieForURL:(struct PCURL *)arg1;
- (BOOL)updateProgressForCompletedFrame:(unsigned int)arg1 duration:(double)arg2;
- (void)windowDidLoad;
- (id)windowNibName;

@end


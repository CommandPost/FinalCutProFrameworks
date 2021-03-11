//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSWindowController.h>

@class NSButton, NSObject, NSProgressIndicator, NSTextField;
@protocol OS_dispatch_queue;

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
    int _defaultFPS;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_barrierQueue;
    BOOL cancelled;
}

@property(getter=isCancelled) BOOL cancelled; // @synthesize cancelled;
- (id)imageSequenceMovieWriter;
- (void)stop:(id)arg1;
- (void)assetWithImageSequenceURL:(struct PCURL *)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateProgressForCompletedFrame:(unsigned int)arg1 duration:(double)arg2;
- (void)windowDidLoad;
- (id)windowNibName;
- (void)dealloc;
- (id)init;

@end


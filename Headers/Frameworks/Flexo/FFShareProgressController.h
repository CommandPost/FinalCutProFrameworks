//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class NSPanel, NSProgressIndicator, NSTextField, NSWindow;
@protocol FFShareProgressDelegate;

__attribute__((visibility("hidden")))
@interface FFShareProgressController : NSViewController
{
    NSPanel *_progressSheet;
    NSTextField *_progressLabel;
    NSProgressIndicator *_progressIndicator;
    BOOL _progressStarted;
    NSWindow *_window;
    id <FFShareProgressDelegate> _delegate;
}

@property(nonatomic) id <FFShareProgressDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSWindow *window; // @synthesize window=_window;
- (void)cancel:(id)arg1;
- (void)endProgress;
- (void)beginProgressWitStatus:(id)arg1;
- (id)initWithWindow:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

@class CKTranscodingOperation, NSPanel, NSProgressIndicator, NSTextField, OZShareManager;

@interface OZShareProgressController : NSViewController
{
    NSPanel *_progressSheet;
    NSTextField *_progressLabel;
    NSProgressIndicator *_progressIndicator;
    NSTextField *_progressTimeRemaining;
    double _startTimeSeconds;
    double _lastTimeRemainingUpdate;
    OZShareManager *_manager;
    CKTranscodingOperation *_transcodingOperation;
    BOOL _isIndeterminate;
}

- (id)initWithManager:(id)arg1 transcodingOperation:(id)arg2 isIndeterminate:(BOOL)arg3;
- (void)dealloc;
- (void)cancelExport:(id)arg1;
- (void)_monitorExportProgress;
- (void)_updateProgressBar:(id)arg1;
- (void)_closeProgressSheet;

@end


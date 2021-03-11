//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class FFSequenceSettingsExporter, NSMutableArray, NSPanel, NSProgressIndicator, NSTextField;

__attribute__((visibility("hidden")))
@interface FFQTMovieExportController : NSViewController
{
    NSPanel *_progressSheet;
    NSTextField *_progressLabel;
    NSProgressIndicator *_progressIndicator;
    NSTextField *_progressTimeRemaining;
    double _startTimeSeconds;
    double _lastTimeRemainingUpdate;
    NSMutableArray *_pendingExporters;
    FFSequenceSettingsExporter *_currentExporter;
}

- (void)_updateProgressBar:(id)arg1;
- (void)_monitorExportProgress;
- (void)_startNextExporter;
- (void)cancelExport:(id)arg1;
- (void)_closeProgressSheet;
- (void)windowDidDeminiaturize:(id)arg1;
- (void)windowWillMiniaturize:(id)arg1;
- (void)dealloc;
- (id)initWithExporter:(id)arg1;
- (id)initWithExporters:(id)arg1;

@end


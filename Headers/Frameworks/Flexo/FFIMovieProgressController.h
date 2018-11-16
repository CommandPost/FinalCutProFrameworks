//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

@class NSPanel, NSProgressIndicator, NSTextField;

@interface FFIMovieProgressController : NSViewController
{
    NSPanel *_progressSheet;
    NSTextField *_progressLabel;
    NSProgressIndicator *_progressIndicator;
    BOOL _importStarted;
    int _importType;
}

@property int importType; // @synthesize importType=_importType;
- (void)endImport;
- (void)beginImportForName:(id)arg1;
- (void)cancelImport:(id)arg1;
- (void)dealloc;
- (id)initWithProgressType:(int)arg1;

@end


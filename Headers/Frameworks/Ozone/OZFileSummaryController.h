//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProInspector/OZViewController.h>

@class NSTextField;

@interface OZFileSummaryController : OZViewController
{
    NSTextField *_fileNameTextField;
    NSTextField *_formatTextField;
    NSTextField *_compressorTextField;
    NSTextField *_durationTextField;
    NSTextField *_fileSizeTextField;
    NSTextField *_createdTextField;
    NSTextField *_modifiedTextField;
    NSTextField *_filePathTextField;
}

- (struct OZDocument *)document;
- (void)setChannelValue:(id)arg1;
- (void)resizeColumnsLabelWidth:(float)arg1 paramWidth:(float)arg2;
- (void)disable;
- (void)enable;
- (void)update;
- (id)dateAsString:(id)arg1;
- (id)fileSizeAsString:(double)arg1;
- (id)dataRateAsString:(double)arg1;
- (id)secondsToHHMMSS:(double)arg1;
- (id)xibName;
- (id)initWithChan:(struct OZChannelBase *)arg1 context:(id)arg2;

@end


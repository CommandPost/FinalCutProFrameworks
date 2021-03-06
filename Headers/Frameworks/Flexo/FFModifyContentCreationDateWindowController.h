//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSWindowController.h>

@class DatePickerWithEscapeFixed, FFAnchoredSequence, NSArray, NSButton, NSDate, NSDatePicker, NSTextField, NSWindow;

__attribute__((visibility("hidden")))
@interface FFModifyContentCreationDateWindowController : NSWindowController
{
    NSArray *_clips;
    FFAnchoredSequence *_clip;
    NSDate *_oldDate;
    NSDate *_changeToDate;
    NSWindow *_sheet;
    NSButton *_okButton;
    NSButton *_modifyFilesCheckbox;
    BOOL _savedModifyFilesState;
    NSDatePicker *_oldDatePicker;
    NSDatePicker *_oldTimePicker;
    DatePickerWithEscapeFixed *_newDatePicker;
    DatePickerWithEscapeFixed *_newTimePicker;
    NSTextField *_adjustmentHeader;
    NSTextField *_adjustmentAmount;
}

@property(retain) NSDate *changeToDate; // @synthesize changeToDate=_changeToDate;
@property(retain) NSDate *oldDate; // @synthesize oldDate=_oldDate;
- (void)awakeFromNib;
- (void)dealloc;
- (void)cancel:(id)arg1;
- (void)OK:(id)arg1;
- (void)showModifyContentCreationDateSheetForClips:(id)arg1 modalForWindow:(id)arg2;
- (void)updateStatus:(id)arg1;
- (void)didEndSheet:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (BOOL)setCreationDate:(id)arg1 inMovieFile:(id)arg2;
- (id)init;

@end


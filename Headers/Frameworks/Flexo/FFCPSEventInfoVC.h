//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFCPSViewController.h>

@class FFCPSClapperboardView, FFEventRecord, LKTextField, NSImageView;

__attribute__((visibility("hidden")))
@interface FFCPSEventInfoVC : FFCPSViewController
{
    LKTextField *_eventTitleLabel;
    LKTextField *_eventDateRangesLabel;
    LKTextField *_eventNumClipsLabel;
    LKTextField *_eventClipTotalDurationLabel;
    LKTextField *_eventNumStillsLabel;
    LKTextField *_eventNumAudioFilesLabel;
    LKTextField *_eventNumProjectsLabel;
    LKTextField *_eventEventSizeLabel;
    LKTextField *_eventLastModifiedLabel;
    NSImageView *_eventInfoIcon;
    NSImageView *_eventProjectIcon;
    FFCPSClapperboardView *_eventPosterView;
    FFEventRecord *_currentEventRecord;
    LKTextField *_eventDebugLabel;
}

@property(retain, nonatomic) LKTextField *eventDebugLabel; // @synthesize eventDebugLabel=_eventDebugLabel;
@property(retain, nonatomic) FFEventRecord *currentEventRecord; // @synthesize currentEventRecord=_currentEventRecord;
@property(retain, nonatomic) FFCPSClapperboardView *eventPosterView; // @synthesize eventPosterView=_eventPosterView;
@property(retain, nonatomic) NSImageView *eventProjectIcon; // @synthesize eventProjectIcon=_eventProjectIcon;
@property(retain, nonatomic) NSImageView *eventInfoIcon; // @synthesize eventInfoIcon=_eventInfoIcon;
@property(retain, nonatomic) LKTextField *eventLastModifiedLabel; // @synthesize eventLastModifiedLabel=_eventLastModifiedLabel;
@property(retain, nonatomic) LKTextField *eventEventSizeLabel; // @synthesize eventEventSizeLabel=_eventEventSizeLabel;
@property(retain, nonatomic) LKTextField *eventNumProjectsLabel; // @synthesize eventNumProjectsLabel=_eventNumProjectsLabel;
@property(retain, nonatomic) LKTextField *eventNumAudioFilesLabel; // @synthesize eventNumAudioFilesLabel=_eventNumAudioFilesLabel;
@property(retain, nonatomic) LKTextField *eventNumStillsLabel; // @synthesize eventNumStillsLabel=_eventNumStillsLabel;
@property(retain, nonatomic) LKTextField *eventClipTotalDurationLabel; // @synthesize eventClipTotalDurationLabel=_eventClipTotalDurationLabel;
@property(retain, nonatomic) LKTextField *eventNumClipsLabel; // @synthesize eventNumClipsLabel=_eventNumClipsLabel;
@property(retain, nonatomic) LKTextField *eventDateRangesLabel; // @synthesize eventDateRangesLabel=_eventDateRangesLabel;
@property(retain, nonatomic) LKTextField *eventTitleLabel; // @synthesize eventTitleLabel=_eventTitleLabel;
- (void)setPosterViewForEvent:(id)arg1;
- (void)setDisplayToEvent:(id)arg1;
- (void)clearDisplay;
- (void)syncToDataItemList;
- (void)notificationHandler:(id)arg1;
- (void)removeNotifications;
- (void)installNotifications;
- (id)eventRecord;
- (void)awakeFromNib;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithNib;

@end

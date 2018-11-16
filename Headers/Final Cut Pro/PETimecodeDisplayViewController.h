//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "FFNumericEntryDelegate.h"

@class FFContext, LKButton, LKTextField, NSImageView;

@interface PETimecodeDisplayViewController : NSViewController <FFNumericEntryDelegate>
{
    CDStruct_1b6d18a9 _frameDuration;
    CDStruct_1b6d18a9 _timecodeFrameDuration;
    long long _timecodeDisplayDropFrame;
    unsigned long long _audioSampleRate;
    struct NSObject *_skimmable;
    int _numericDirection;
    int _numericEntryType;
    BOOL _numericEntryInProgress;
    BOOL _observersRegistered;
    int _displayMode;
    struct PCProcrastinatedDispatch_t _procrastinatedContext;
    struct PCProcrastinatedDispatch_t _procrastinatedClickContext;
    BOOL _useExternalControlMode;
    BOOL _canDoNumericEntry;
    LKTextField *_timecodeTextField;
    LKButton *_numericEntryTypeButton;
    NSImageView *_numericEntryDirectionImage;
    NSImageView *_playheadScrubberModeLabel;
    LKButton *_numericEntryGoGoGoButton;
    FFContext *_context;
}

@property(retain, nonatomic) FFContext *context; // @synthesize context=_context;
@property(nonatomic) LKButton *numericEntryGoGoGoButton; // @synthesize numericEntryGoGoGoButton=_numericEntryGoGoGoButton;
@property(nonatomic) NSImageView *playheadScrubberModeLabel; // @synthesize playheadScrubberModeLabel=_playheadScrubberModeLabel;
@property(nonatomic) NSImageView *numericEntryDirectionImage; // @synthesize numericEntryDirectionImage=_numericEntryDirectionImage;
@property(nonatomic) LKButton *numericEntryTypeButton; // @synthesize numericEntryTypeButton=_numericEntryTypeButton;
@property(nonatomic) LKTextField *timecodeTextField; // @synthesize timecodeTextField=_timecodeTextField;
@property(nonatomic) BOOL canDoNumericEntry; // @synthesize canDoNumericEntry=_canDoNumericEntry;
@property(nonatomic) BOOL useExternalControlMode; // @synthesize useExternalControlMode=_useExternalControlMode;
- (void)_libraryClosed:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)updatePlayheadLabel;
- (void)timeRateChangedForContext:(id)arg1;
- (void)setNumericEntryShowsSubframes:(BOOL)arg1;
- (void)setNumericEntryDirection:(int)arg1;
- (void)updateNumericEntryDirection;
- (void)setNumericEntryType:(int)arg1;
- (void)updateNumericEntryType;
- (void)setNumericEntryValue:(id)arg1;
- (void)numericEntryDidEnd;
- (void)delayDisableNumericEntry;
- (void)disableNumericEntry;
@property(readonly) BOOL numericEntryOngoing;
- (void)numericEntryWillBegin;
- (void)toggleNumericEntryType:(id)arg1;
- (void)numericEntryGoGoGoButtonDown:(id)arg1;
- (void)endTimecodeTextFieldEditing:(id)arg1;
- (void)updateTimecodeValuesFromAnchoredObject:(id)arg1;
- (void)updateTimecodeValuesFromSkimmable:(struct NSObject *)arg1;
- (void)updateViewPlayheadTimeFromContext;
- (void)updateTimeToViewedClipsContext;
- (void)updateToTimelineContext;
- (void)updateViewPlayheadTime:(CDStruct_1b6d18a9)arg1;
- (void)updatePlayheadTime:(id)arg1;
- (void)displayAreaGainedFocus:(id)arg1;
@property(nonatomic) int displayMode;
- (void)awakeFromNib;
- (void)viewDidLoad;
- (void)dealloc;
- (void)_unregisterSkimmableObservers;
- (void)_registerSkimmableObservers;
- (void)_unregisterObservers;
- (void)_registerObservers;

@end


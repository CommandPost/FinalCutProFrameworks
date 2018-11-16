//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSImageView, NSLayoutConstraint, NSProgressIndicator, NSTextView;

__attribute__((visibility("hidden")))
@interface FFAudioAnalysisConfigWarningStateController : NSObject
{
    NSImageView *_badgeView;
    NSProgressIndicator *_analysisSpinner;
    NSTextView *_statusTextView;
    NSLayoutConstraint *_statusTextWidthConstraint;
    NSLayoutConstraint *_statusTextHeightConstraint;
    BOOL _hideText;
    BOOL _isForSummaryWarning;
}

@property(nonatomic) BOOL isForSummaryWarning; // @synthesize isForSummaryWarning=_isForSummaryWarning;
- (void)setHideText:(BOOL)arg1;
- (void)setWarningState:(int)arg1;
- (void)dealloc;
- (id)initWithTextView:(id)arg1 badgeView:(id)arg2;

@end

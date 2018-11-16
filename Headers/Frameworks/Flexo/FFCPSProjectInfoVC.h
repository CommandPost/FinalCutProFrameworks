//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFCPSViewController.h>

#import "NSWindowDelegate.h"

@class FFCPSClapperboardView, FFCPSShadowView, FFSequenceRecord, LKButton, LKPopOverWindow, LKTextField, NSButton, NSImageView, NSProThemeImageView;

__attribute__((visibility("hidden")))
@interface FFCPSProjectInfoVC : FFCPSViewController <NSWindowDelegate>
{
    LKTextField *_projectTitleLabel;
    LKTextField *_projectFrameInfoLabel;
    LKTextField *_projectDurationLabel;
    LKTextField *_projectEventNameLabel;
    LKTextField *_projectThemeLabel;
    LKTextField *_projectAutoContentLabel;
    LKTextField *_projectShareLabel;
    LKTextField *_projectLastModifiedLabel;
    NSImageView *_projectProjectIcon;
    NSImageView *_projectClockIcon;
    NSButton *_projectShareIcon;
    LKButton *_projectEditButton;
    LKPopOverWindow *_sharePopoverWindow;
    NSProThemeImageView *_fileInfoFormatLeftBadge;
    NSProThemeImageView *_fileInfoFormatRightBadge;
    LKTextField *_fileInfoTextFormat1;
    LKTextField *_fileInfoTextFormat2;
    FFCPSClapperboardView *_projectPosterView;
    FFCPSShadowView *_shadowView;
    FFSequenceRecord *_currentSequenceRecord;
    LKTextField *_projectDebugLabel;
}

@property(retain, nonatomic) LKTextField *projectDebugLabel; // @synthesize projectDebugLabel=_projectDebugLabel;
@property(retain, nonatomic) FFSequenceRecord *currentSequenceRecord; // @synthesize currentSequenceRecord=_currentSequenceRecord;
@property(retain, nonatomic) FFCPSShadowView *shadowView; // @synthesize shadowView=_shadowView;
@property(retain, nonatomic) FFCPSClapperboardView *projectPosterView; // @synthesize projectPosterView=_projectPosterView;
@property(retain, nonatomic) LKTextField *fileInfoTextFormat2; // @synthesize fileInfoTextFormat2=_fileInfoTextFormat2;
@property(retain, nonatomic) LKTextField *fileInfoTextFormat1; // @synthesize fileInfoTextFormat1=_fileInfoTextFormat1;
@property(retain, nonatomic) NSProThemeImageView *fileInfoFormatRightBadge; // @synthesize fileInfoFormatRightBadge=_fileInfoFormatRightBadge;
@property(retain, nonatomic) NSProThemeImageView *fileInfoFormatLeftBadge; // @synthesize fileInfoFormatLeftBadge=_fileInfoFormatLeftBadge;
@property(retain, nonatomic) LKButton *projectEditButton; // @synthesize projectEditButton=_projectEditButton;
@property(retain, nonatomic) NSButton *projectShareIcon; // @synthesize projectShareIcon=_projectShareIcon;
@property(retain, nonatomic) NSImageView *projectClockIcon; // @synthesize projectClockIcon=_projectClockIcon;
@property(retain, nonatomic) NSImageView *projectProjectIcon; // @synthesize projectProjectIcon=_projectProjectIcon;
@property(retain, nonatomic) LKTextField *projectLastModifiedLabel; // @synthesize projectLastModifiedLabel=_projectLastModifiedLabel;
@property(retain, nonatomic) LKTextField *projectShareLabel; // @synthesize projectShareLabel=_projectShareLabel;
@property(retain, nonatomic) LKTextField *projectAutoContentLabel; // @synthesize projectAutoContentLabel=_projectAutoContentLabel;
@property(retain, nonatomic) LKTextField *projectThemeLabel; // @synthesize projectThemeLabel=_projectThemeLabel;
@property(retain, nonatomic) LKTextField *projectEventNameLabel; // @synthesize projectEventNameLabel=_projectEventNameLabel;
@property(retain, nonatomic) LKTextField *projectDurationLabel; // @synthesize projectDurationLabel=_projectDurationLabel;
@property(retain, nonatomic) LKTextField *projectFrameInfoLabel; // @synthesize projectFrameInfoLabel=_projectFrameInfoLabel;
@property(retain, nonatomic) LKTextField *projectTitleLabel; // @synthesize projectTitleLabel=_projectTitleLabel;
- (void)setPosterViewForEvent:(id)arg1;
- (void)determineFormatInfoLeft:(id *)arg1 andRight:(id *)arg2 withSequenceInfo:(id)arg3;
- (id)framesPerSecondToString:(double)arg1;
- (void)setFormatInfoBadgesWithSequenceInfo:(id)arg1;
- (void)setDisplayToSequence:(id)arg1;
- (void)clearDisplay;
- (void)syncToDataItemList;
- (void)propertyChanged:(id)arg1;
- (void)sharePopoverWindowDidResignKey:(id)arg1;
- (void)shareNotification:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeNotifications;
- (void)installNotifications;
- (void)viewControllerDidUnhide;
- (void)viewControllerWillHide;
- (void)popOverWindowDidCancel:(id)arg1;
- (void)showShareHistoryPopover:(id)arg1;
- (void)projectEditAction:(id)arg1;
- (id)eventRecord;
- (id)sequenceRecord;
- (void)awakeFromNib;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithNib;

@end

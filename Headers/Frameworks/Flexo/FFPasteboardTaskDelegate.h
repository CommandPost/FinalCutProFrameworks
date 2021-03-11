//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Flexo/FFXMLTaskDelegate-Protocol.h>

@class FFXMLTranslationOptions, NSDate, NSString;

__attribute__((visibility("hidden")))
@interface FFPasteboardTaskDelegate : NSObject <FFXMLTaskDelegate>
{
    BOOL _userCancelled;
    double _progressValue;
    int _messageType;
    NSDate *_startTime;
}

+ (id)pasteboardTaskDelegate;
- (int)confirmMerge:(id)arg1 with:(id)arg2;
- (void)hideProgressWindow;
- (void)showProgressWindow;
- (void)performCancel;
- (BOOL)userCancelled;
- (void)setProgressMessage:(int)arg1 messageInfo:(id)arg2;
- (void)setProgressValue:(double)arg1;
- (void)idle;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy) FFXMLTranslationOptions *options;
@property(readonly) Class superclass;

@end


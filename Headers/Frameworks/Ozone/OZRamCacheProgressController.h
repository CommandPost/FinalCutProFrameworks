//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

#import "NSWindowDelegate.h"

@class LKButton, LKProgressIndicator, LKTextField, NSString, OZRamCachePreview, OZRenderProgressManager;

@interface OZRamCacheProgressController : NSWindowController <NSWindowDelegate>
{
    OZRamCachePreview *_framePreview;
    LKProgressIndicator *_progressIndicator;
    LKTextField *_projectNameTF;
    LKTextField *_lastFrameTF;
    LKTextField *_timeElapsedTF;
    LKTextField *_timeRemainingTF;
    LKButton *_closeWhenDoneButton;
    LKButton *_cancelButton;
    OZRenderProgressManager *_exportManager;
    NSString *_finishedMsg;
    CDStruct_1b6d18a9 _startTime;
    CDStruct_1b6d18a9 _endTime;
    CDStruct_1b6d18a9 _frameDuration;
}

+ (id)sharedInstance;
- (id)init;
- (void)dealloc;
- (void)windowDidLoad;
- (void)windowWillClose:(id)arg1;
- (BOOL)openDialog:(id)arg1 withTitle:(id)arg2 windowTitle:(id)arg3 withDoneMsg:(id)arg4 startTime:(const CDStruct_1b6d18a9 *)arg5 endTime:(const CDStruct_1b6d18a9 *)arg6 frameDuration:(const CDStruct_1b6d18a9 *)arg7 background:(id)arg8;
- (void)closeDialog;
- (void)updateVideoInfo:(const CDStruct_1b6d18a9 *)arg1 frameRenderTime:(unsigned int)arg2 timeElapsed:(double)arg3;
- (void)updatePreview:(struct PCBitmap *)arg1;
- (void)updateAudioInfo:(double)arg1 lastSample:(double)arg2 timeElapsed:(double)arg3;
- (void)updateRenderDone;
- (void)updateRenderFailed:(const CDStruct_1b6d18a9 *)arg1;
- (void)closeProgressWhenDone:(id)arg1;
- (void)abortRender:(id)arg1;

@end


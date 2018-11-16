//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSWindowDelegate.h"

@class LKButton, LKPanel, NSMatrix, NSString;

@interface OZRecordingOptionsPanel : NSObject <NSWindowDelegate>
{
    LKButton *_record;
    LKButton *_recordOk;
    LKButton *_recordCancel;
    NSMatrix *_recordingOptions;
    LKPanel *_panel;
}

- (void)recordCancel:(id)arg1;
- (void)recordOk:(id)arg1;
- (void)openDialog;
- (void)windowWillClose:(id)arg1;
- (void)awakeFromNib;
- (void)dealloc;
- (id)init;
- (void)save;
- (void)load;
- (void)setRecordKeyFrames:(BOOL)arg1;
- (BOOL)getRecordKeyFrames;
- (void)setRecordingOptions:(int)arg1;
- (int)getRecordingOptions;
- (struct OZScene *)scene;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


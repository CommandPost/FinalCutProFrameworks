//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSWindowController.h>

@class NSString;
@protocol NSSaveRolePresetAsPanelDelegate;

__attribute__((visibility("hidden")))
@interface FFSaveRolePresetAsPanel : NSWindowController
{
    CDUnknownBlockType _completionHandler;
    NSString *_name;
    id <NSSaveRolePresetAsPanelDelegate> _delegate;
}

@property(nonatomic) id <NSSaveRolePresetAsPanelDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void)cancel:(id)arg1;
- (void)didPresentErrorWithRecovery:(BOOL)arg1 contextInfo:(void *)arg2;
- (void)ok:(id)arg1;
- (void)sheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)closeWithCode:(long long)arg1;
- (void)beginSheetModalForWindow:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (long long)runModal;
- (void)dealloc;
- (id)init;

@end


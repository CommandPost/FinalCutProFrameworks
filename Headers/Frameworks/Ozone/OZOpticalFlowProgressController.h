//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

#import "NSTableViewDataSource.h"

@class LKButton, NSMutableArray, OZOpticalFlowTableView;

@interface OZOpticalFlowProgressController : NSWindowController <NSTableViewDataSource>
{
    OZOpticalFlowTableView *_progressList;
    LKButton *_autocloseButton;
    NSMutableArray *_progress;
}

- (id)init;
- (void)dealloc;
- (void)toggleVisibility;
- (BOOL)isVisible;
- (id)windowFrameAutosaveName;
- (void)toggleAutoClose:(id)arg1;
- (void)tickleProgress;
- (void)tickleProgressMainThread:(id)arg1;
- (id)entryAtIndex:(unsigned int)arg1;
- (id)entryByJobID:(const struct JobID *)arg1;
- (int)numberOfRowsInTableView:(id)arg1;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(int)arg3;
- (BOOL)tableView:(id)arg1 writeRowsWithIndexes:(id)arg2 toPasteboard:(id)arg3;
- (unsigned long long)tableView:(id)arg1 validateDrop:(id)arg2 proposedRow:(int)arg3 proposedDropOperation:(unsigned long long)arg4;
- (BOOL)tableView:(id)arg1 acceptDrop:(id)arg2 row:(int)arg3 dropOperation:(unsigned long long)arg4;

@end

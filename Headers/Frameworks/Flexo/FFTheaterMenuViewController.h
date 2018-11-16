//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "NSTableViewDataSource.h"
#import "NSTableViewDelegate.h"

@class FFTheaterItem, FFTheaterMenuRolloverTableView, NSString;

__attribute__((visibility("hidden")))
@interface FFTheaterMenuViewController : NSViewController <NSTableViewDelegate, NSTableViewDataSource>
{
    id <FFTheaterMenuDelegate> _delegate;
    FFTheaterItem *_item;
    FFTheaterMenuRolloverTableView *_tableView;
}

@property FFTheaterMenuRolloverTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) FFTheaterItem *item; // @synthesize item=_item;
@property(nonatomic) id <FFTheaterMenuDelegate> delegate; // @synthesize delegate=_delegate;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (BOOL)_shouldEnableRowIndex:(long long)arg1;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (struct CGRect)boundsThatFit;
- (void)chooseOption:(id)arg1;
- (void)tableView:(id)arg1 didHandlePressActionForRow:(long long)arg2;
- (void)_handlePressActionForRow:(long long)arg1;
- (void)awakeFromNib;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


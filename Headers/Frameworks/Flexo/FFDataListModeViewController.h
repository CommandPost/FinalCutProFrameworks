//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "FFDataListModeViewController.h"

@class FFDataListModule, NSString;

__attribute__((visibility("hidden")))
@interface FFDataListModeViewController : NSViewController <FFDataListModeViewController>
{
    FFDataListModule *_dataListModule;
}

@property(nonatomic) FFDataListModule *dataListModule; // @synthesize dataListModule=_dataListModule;
- (BOOL)supportsSearch;
- (void)displayDataListPlayheadAtIndex:(long long)arg1 andPosition:(int)arg2 animate:(BOOL)arg3;
- (id)selectedIndexes;
- (void)syncToDisplayedItemsType:(long long)arg1;
- (void)syncToSelectedIndexes:(id)arg1;
- (id)searchTooltip;
- (id)dataListInfoStringForProposedString:(id)arg1;
- (id)dataListImageForItem:(id)arg1;
- (id)dataListRootItem;
- (id)dataListArrangedItems;
- (id)dataListItems;
- (void)reloadData;
- (void)awakeFromNib;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LKTextFieldCell.h"

@class FFOrganizerClusterCountHelperCell, NSObject<FFOrganizerItem><FFOrganizerMasterItem>;

__attribute__((visibility("hidden")))
@interface FFOrganzierOutlineViewClusterCell : LKTextFieldCell
{
    NSObject<FFOrganizerItem><FFOrganizerMasterItem> *_cluster;
    FFOrganizerClusterCountHelperCell *_itemsHelperCell;
}

@property(retain) NSObject<FFOrganizerItem><FFOrganizerMasterItem> *cluster; // @synthesize cluster=_cluster;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

@end


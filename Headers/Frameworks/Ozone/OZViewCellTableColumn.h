//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LKTableColumn.h"

@class NSMutableArray;

@interface OZViewCellTableColumn : LKTableColumn
{
    NSMutableArray *cells;
    NSMutableArray *rowHeights;
    NSMutableArray *rowOrigins;
}

+ (id)newViewCell;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)cells;
- (id)dataCellForRow:(long long)arg1;
- (void)removeRows:(int)arg1;
- (void)appendRows:(int)arg1;
- (void)noteNumberOfTableRowsChanged:(id)arg1;
- (void)willRemoveFromTableView:(id)arg1;

@end


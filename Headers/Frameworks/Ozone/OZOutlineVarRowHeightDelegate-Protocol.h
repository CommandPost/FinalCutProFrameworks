//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Ozone/NSObject-Protocol.h>

@class NSOutlineView;

@protocol OZOutlineVarRowHeightDelegate <NSObject>

@optional
- (void)outlineView:(NSOutlineView *)arg1 changedHeightOfItem:(id)arg2 to:(double)arg3;
- (void)outlineView:(NSOutlineView *)arg1 changingHeightOfItem:(id)arg2 to:(double)arg3;
- (double)outlineView:(NSOutlineView *)arg1 checkChangeToHeightOfItem:(id)arg2 to:(double)arg3;
- (BOOL)outlineView:(NSOutlineView *)arg1 canChangeHeightOfItem:(id)arg2;
- (double)outlineView:(NSOutlineView *)arg1 heightForItem:(id)arg2;
@end

